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
typedef struct undefined3 { char _p[3]; undefined3(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined3;
typedef struct undefined5 { char _p[5]; undefined5(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined5;
typedef struct undefined6 { char _p[6]; undefined6(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined6;
typedef struct undefined7 { char _p[7]; undefined7(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined7;
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
extern "C" unsigned long __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
extern __declspec(dllimport) int _Init(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int _Xlength_error(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern int _atexit(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int always_noconv(...);
extern int append(...);
extern __declspec(dllimport) int ceil(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int fgetc(...);
extern __declspec(dllimport) int fopen(...);
extern int getSingleton(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10200aa0(...);
extern int thunk_FUN_10203dc0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_1036efe0(...);
extern int thunk_FUN_10370f20(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105b7bd0(...);
extern int thunk_FUN_105ca4f0(...);
extern int thunk_FUN_105cb470(...);
extern int thunk_FUN_105cc420(...);
extern int thunk_FUN_105ccc10(...);
extern int thunk_FUN_105f3290(...);
extern int thunk_FUN_105f34e0(...);
extern int thunk_FUN_105f36d0(...);
extern int thunk_FUN_105f38c0(...);
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
extern int thunk_FUN_106845c0(...);
extern int thunk_FUN_1068dd40(...);
extern int thunk_FUN_106905e0(...);
extern int thunk_FUN_10694b70(...);
extern int thunk_FUN_10694f70(...);
extern int thunk_FUN_10699d60(...);
extern int thunk_FUN_1069a360(...);
extern int thunk_FUN_106a48e0(...);
extern int thunk_FUN_106a5620(...);
extern int thunk_FUN_106a9340(...);
extern int thunk_FUN_106a94b0(...);
extern int thunk_FUN_106aa5c0(...);
extern int thunk_FUN_106aaa10(...);
extern int thunk_FUN_106ab040(...);
extern int thunk_FUN_106ab5b0(...);
extern int thunk_FUN_106abdc0(...);
extern int thunk_FUN_106aec80(...);
extern int thunk_FUN_106b1900(...);
extern int thunk_FUN_106d83f0(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_1074ed30(...);
extern int thunk_FUN_1076bff0(...);
extern int thunk_FUN_10783320(...);
extern int thunk_FUN_109e1620(...);
extern int thunk_FUN_10bcef80(...);
extern int thunk_FUN_10dd1260(...);
extern int thunk_FUN_10dd3190(...);
extern int thunk_FUN_10dd31f0(...);
extern int thunk_FUN_10eac8d0(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb4cc0(...);
extern int thunk_FUN_10eb4d80(...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10ec7200(...);
extern int thunk_FUN_11068c30(...);
extern int thunk_FUN_110a9ef0(...);
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
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1125b030(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113d1a60(...);
extern int thunk_FUN_113d1ae0(...);
extern int thunk_FUN_113d1d90(...);
extern int thunk_FUN_11457630(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148aaa4(...);
extern int thunk_FUN_1148ab00(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_11880fb0;
extern int DAT_1188e1fc;
extern int DAT_12126b84;
extern int DAT_121a2114;
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
extern int DAT_121a2238;
extern int DAT_121a223c;
extern int DAT_121a2240;
extern int DAT_121a2244;
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
extern int _tls_index;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp;
extern int ghidra_vftable_RUpnpAISetLineInLevelAIOOp;
extern int ghidra_vftable_RUpnpAVTSetPlayModeAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDCreateObjectAIOOp;
extern int ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp;
extern int ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp;
extern int ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp;
extern int ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp;
extern int ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp;
extern int ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp;
extern int ghidra_vftable_RUpnpRCSetOutputFixedAIOOp;
extern int ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp;
extern int ghidra_vftable_SCAddProductAddAnotherProductPage;
extern int ghidra_vftable_SCAddProductConnectionLastResortPage;
extern int ghidra_vftable_SCAddProductContinueConfigurationPage;
extern int ghidra_vftable_SCAddProductDeactivatedErrorPage;
extern int ghidra_vftable_SCAddProductDefaultIntroPage;
extern int ghidra_vftable_SCAddProductFatalVerificationErrorPage;
extern int ghidra_vftable_SCAddProductFinishConfigurationPage;
extern int ghidra_vftable_SCAddProductLegacyOnlyPage;
extern int ghidra_vftable_SCAddProductNotificationIntroPage;
extern int ghidra_vftable_SCAddProductOutroFailurePage;
extern int ghidra_vftable_SCAddProductOutroPage;
extern int ghidra_vftable_SCAddProductSelectionIntroPage;
extern int ghidra_vftable_SCAddProductTempWireInstructionsPage;
extern int ghidra_vftable_SCAddProductVanishedProductErrorPage;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAsyncBrowseItem;
extern int ghidra_vftable_SCAudioCompressionSelectAction;
extern int ghidra_vftable_SCChangeEmailWizard;
extern int ghidra_vftable_SCChickenExitAction;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeIfChainInterface;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCConditionalVectorBuilderTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCFactoryResetAction;
extern int ghidra_vftable_SCForgetHouseholdAction;
extern int ghidra_vftable_SCHideOfflineDeviceSupport;
extern int ghidra_vftable_SCHouseholdEventSink;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardAction;
extern int ghidra_vftable_SCLaunchSoundLabAction;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardAction;
extern int ghidra_vftable_SCMenuSelectSettingActionBase;
extern int ghidra_vftable_SCMusicServiceCatalogManager_EventSink;
extern int ghidra_vftable_SCMusicServiceCatalogRequest;
extern int ghidra_vftable_SCMusicServiceCatalog_EventSink;
extern int ghidra_vftable_SCMusicServiceFilterLearnMoreActionDescriptor;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNewWizPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateType;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpPerformQueue;
extern int ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus;
extern int ghidra_vftable_SCResetDismissedServicesAction;
extern int ghidra_vftable_SCSearchHistoryToggleAction;
extern int ghidra_vftable_SCShareBrowseItem;
extern int ghidra_vftable_SCStaleSessionToggleAction;
extern int ghidra_vftable_SCSubmitDiagsWizard;
extern int ghidra_vftable_SCSubmitDiagsWizardDonePage;
extern int ghidra_vftable_SCSubmitDiagsWizardErrorPage;
extern int ghidra_vftable_SCSubmitDiagsWizardIntroPage;
extern int ghidra_vftable_SCSubmitDiagsWizardSubmittingPage;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage;
extern int ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage;
extern int ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage;
extern int ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage;
extern int ghidra_vftable_SCSwgenDowngradeProductIntroPage;
extern int ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage;
extern int ghidra_vftable_SCSwgenDowngradeProductOptionsPage;
extern int ghidra_vftable_SCSwgenDowngradeProductOutroPage;
extern int ghidra_vftable_SCSwgenDowngradeProductSearchingPage;
extern int ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage;
extern int ghidra_vftable_SCSwgenDowngradeProductSelectionPage;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCToggleBooleanSettingActionBase;
extern int ghidra_vftable_SCUrlGetRequest;
extern int ghidra_vftable_SCUrlRequest;
extern int ghidra_vftable_SCVerifyUrlPostRequest;
extern int ghidra_vftable_SCWifiConfigAskNetworkModifiedPage;
extern int ghidra_vftable_SCWifiConfigAskUnplugEthernetPage;
extern int ghidra_vftable_SCWifiConfigInformWiredConnectionPage;
extern int ghidra_vftable_SCWifiConfigPlayerOutOfDatePage;
extern int ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage;
extern int ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage;
extern int ghidra_vftable_SCWifiConfigStartOpenApPage;
extern int ghidra_vftable_SCWifiConfigSuccessPage;
extern int ghidra_vftable_SCWifiConfigWrongHHIDPage;
extern int ghidra_vftable_SCWizard;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_exception;
extern int in_EAX;
extern int uStack_48c;
extern int uStack_8;
extern undefined1 LAB_105e95d3[];
extern undefined1 LAB_105e9c43[];
extern undefined1 LAB_1068c09d[];
extern undefined1 LAB_1068c0d1[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_115aba9e[];
extern undefined1 LAB_115af8a0[];
extern undefined1 LAB_115afdb0[];
extern undefined1 LAB_115b0050[];
extern undefined1 LAB_115b9c50[];
extern undefined1 LAB_115d2530[];
extern undefined1 LAB_115e0ff0[];
extern undefined1 LAB_11728460[];
extern undefined1 LAB_11807000[];
extern int *PTR_vftable_12119af0;
extern int *stack0x00000000;
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std { template<class... A> static int _Xbad_function_call(A...); template<class... A> static int _Xlength_error(A...); struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int _Init(A...); }; struct codecvt_base { char _pad; codecvt_base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int always_noconv(A...); };}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int append(A...); template<class... A> static int int_addref(A...); template<class... A> static int int_allocRep(A...); template<class... A> static int int_release(A...); int op_ctor(...); int op_eq(...); int op_lt(...); };
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
typedef void *E9;
typedef void *WARNING;
typedef void *_File;
typedef void *_func_4879;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Clearing { char _pad; Clearing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CreateObject { char _pad; CreateObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Destructor { char _pad; Destructor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Entering { char _pad; Entering(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct HTControl { char _pad; HTControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RenderingControl { char _pad; RenderingControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetAutoplayVolume { char _pad; SetAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetIRRepeaterState { char _pad; SetIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetLEDFeedbackState { char _pad; SetLEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetPlayMode { char _pad; SetPlayMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetRoomCalibrationStatus { char _pad; SetRoomCalibrationStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetUseAutoplayVolume { char _pad; SetUseAutoplayVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ThreadLocalStoragePointer { char _pad; ThreadLocalStoragePointer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct std_codecvt_base { char _pad; std_codecvt_base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
template<class...> struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
template<class...> struct std_basic_streambuf { char _pad; std_basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bb4b0(undefined4 *param_2); template<class... A> int FUN_105bb4b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105c37f0(undefined4 param_2); template<class... A> int FUN_105c37f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ce9b0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_105ce9b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105cebc0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_105cebc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105cec60(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_105cec60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ced00(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_105ced00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ceda0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_105ceda0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105ceee0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_105ceee0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105cfb50(undefined1 param_2); template<class... A> int FUN_105cfb50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105d49e0(int *param_2,int param_3); template<class... A> int FUN_105d49e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105d6c90(uint param_2); template<class... A> int FUN_105d6c90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105d6cd0(uint param_2); template<class... A> int FUN_105d6cd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105e77b0(undefined4 param_2,int param_3); template<class... A> int FUN_105e77b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105e92c0(int *param_2); template<class... A> int FUN_105e92c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105e9580(int *param_2); template<class... A> int FUN_105e9580(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105e9bf0(int *param_2); template<class... A> int FUN_105e9bf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_105ef920(undefined4 param_2); template<class... A> int FUN_105ef920(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f2c90(undefined4 param_2); template<class... A> int FUN_105f2c90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f2cb0(undefined4 param_2); template<class... A> int FUN_105f2cb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f2cd0(undefined4 param_2); template<class... A> int FUN_105f2cd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f31a0(undefined4 param_2); template<class... A> int FUN_105f31a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f31c0(undefined4 param_2); template<class... A> int FUN_105f31c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f31e0(undefined4 param_2); template<class... A> int FUN_105f31e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f50f0(undefined4 param_2); template<class... A> int FUN_105f50f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f5130(undefined4 param_2); template<class... A> int FUN_105f5130(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f5170(undefined4 param_2); template<class... A> int FUN_105f5170(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105f51b0(undefined4 param_2); template<class... A> int FUN_105f51b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5830(undefined4 param_2); template<class... A> int FUN_105f5830(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5890(int param_2); template<class... A> int FUN_105f5890(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5c30(undefined4 param_2); template<class... A> int FUN_105f5c30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5c90(int param_2); template<class... A> int FUN_105f5c90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f5ff0(undefined4 param_2); template<class... A> int FUN_105f5ff0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f6420(undefined4 param_2); template<class... A> int FUN_105f6420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f91d0(undefined4 *param_2); template<class... A> int FUN_105f91d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9210(undefined4 *param_2); template<class... A> int FUN_105f9210(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9340(undefined4 *param_2); template<class... A> int FUN_105f9340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f94a0(undefined4 *param_2); template<class... A> int FUN_105f94a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9600(undefined4 *param_2); template<class... A> int FUN_105f9600(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9760(undefined4 *param_2); template<class... A> int FUN_105f9760(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9890(undefined4 *param_2); template<class... A> int FUN_105f9890(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9a40(undefined4 *param_2); template<class... A> int FUN_105f9a40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9d60(undefined4 *param_2); template<class... A> int FUN_105f9d60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105f9d90(undefined4 *param_2); template<class... A> int FUN_105f9d90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_105f9dc0(undefined1 *param_2); template<class... A> int FUN_105f9dc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105faa60(undefined4 param_2); template<class... A> int FUN_105faa60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fabb0(undefined4 param_2); template<class... A> int FUN_105fabb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fb540(undefined4 param_2); template<class... A> int FUN_105fb540(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fbc90(undefined4 param_2); template<class... A> int FUN_105fbc90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fc560(undefined4 param_2); template<class... A> int FUN_105fc560(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fc6b0(undefined4 param_2); template<class... A> int FUN_105fc6b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fc9b0(undefined4 param_2); template<class... A> int FUN_105fc9b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fcb00(undefined4 param_2); template<class... A> int FUN_105fcb00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105fe9e0(undefined4 param_2); template<class... A> int FUN_105fe9e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603ca0(int param_2); template<class... A> int FUN_10603ca0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603cd0(int param_2); template<class... A> int FUN_10603cd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603d00(int param_2); template<class... A> int FUN_10603d00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603d30(int param_2); template<class... A> int FUN_10603d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603d60(int param_2); template<class... A> int FUN_10603d60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10603d90(uint param_2); template<class... A> int FUN_10603d90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603e40(uint param_2); template<class... A> int FUN_10603e40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603e90(uint param_2); template<class... A> int FUN_10603e90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603ed0(uint param_2); template<class... A> int FUN_10603ed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603f10(uint param_2); template<class... A> int FUN_10603f10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10603f50(uint param_2); template<class... A> int FUN_10603f50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10610e70(undefined4 param_2); template<class... A> int FUN_10610e70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10619710(undefined4 param_2,char param_3); template<class... A> int FUN_10619710(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10619780(undefined4 param_2,char param_3); template<class... A> int FUN_10619780(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106197f0(undefined4 param_2,char param_3); template<class... A> int FUN_106197f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c270(undefined4 param_2); template<class... A> int FUN_1061c270(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c2b0(undefined4 param_2); template<class... A> int FUN_1061c2b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c2f0(undefined4 param_2); template<class... A> int FUN_1061c2f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1061c330(undefined4 param_2); template<class... A> int FUN_1061c330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061e3d0(undefined4 param_2); template<class... A> int FUN_1061e3d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061e7f0(undefined4 param_2); template<class... A> int FUN_1061e7f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061e850(undefined4 param_2); template<class... A> int FUN_1061e850(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061e9b0(undefined4 param_2); template<class... A> int FUN_1061e9b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061eb00(undefined4 param_2); template<class... A> int FUN_1061eb00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1061ec50(undefined4 param_2); template<class... A> int FUN_1061ec50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10624400(undefined4 param_2); template<class... A> int FUN_10624400(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10627010(undefined4 *param_2); template<class... A> int FUN_10627010(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106270d0(undefined4 *param_2); template<class... A> int FUN_106270d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10627bf0(undefined4 param_2); template<class... A> int FUN_10627bf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10628120(undefined4 param_2); template<class... A> int FUN_10628120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106286e0(undefined4 param_2); template<class... A> int FUN_106286e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10628830(undefined4 param_2); template<class... A> int FUN_10628830(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10628f70(undefined4 param_2); template<class... A> int FUN_10628f70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106292d0(undefined4 param_2); template<class... A> int FUN_106292d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629630(undefined4 param_2); template<class... A> int FUN_10629630(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629780(undefined4 param_2); template<class... A> int FUN_10629780(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629ae0(undefined4 param_2); template<class... A> int FUN_10629ae0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629c30(undefined4 param_2); template<class... A> int FUN_10629c30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10629f90(undefined4 param_2); template<class... A> int FUN_10629f90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1062de90(int *param_2); template<class... A> int FUN_1062de90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1063a6d0(undefined4 param_2); template<class... A> int FUN_1063a6d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106497d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_106497d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10649850(undefined4 param_2); template<class... A> int FUN_10649850(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064d9f0(undefined4 *param_2); template<class... A> int FUN_1064d9f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064dc60(undefined4 param_2); template<class... A> int FUN_1064dc60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064ebc0(undefined4 param_2); template<class... A> int FUN_1064ebc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064ed10(undefined4 param_2); template<class... A> int FUN_1064ed10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064ee60(undefined4 param_2); template<class... A> int FUN_1064ee60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064efb0(undefined4 param_2); template<class... A> int FUN_1064efb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064f340(undefined4 param_2); template<class... A> int FUN_1064f340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1064f490(undefined4 param_2); template<class... A> int FUN_1064f490(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10650030(undefined4 param_2); template<class... A> int FUN_10650030(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10650540(undefined4 param_2); template<class... A> int FUN_10650540(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106506c0(undefined4 param_2); template<class... A> int FUN_106506c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10650810(undefined4 param_2); template<class... A> int FUN_10650810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106513d0(undefined4 param_2); template<class... A> int FUN_106513d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10651560(undefined4 param_2); template<class... A> int FUN_10651560(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106518c0(undefined4 param_2); template<class... A> int FUN_106518c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10653f20(SCStr *param_2); template<class... A> int FUN_10653f20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106541b0(undefined4 *param_2); template<class... A> int FUN_106541b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10656b00(undefined4 *param_2); template<class... A> int FUN_10656b00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1065a500(uint param_2); template<class... A> int FUN_1065a500(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1065a5b0(uint param_2); template<class... A> int FUN_1065a5b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1065acf0(int param_2); template<class... A> int FUN_1065acf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067f340(undefined4 *param_2); template<class... A> int FUN_1067f340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067fb10(int param_2); template<class... A> int FUN_1067fb10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1067fb30(int *param_2); template<class... A> int FUN_1067fb30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10681440(char *param_2,undefined4 *param_3); template<class... A> int FUN_10681440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10681470(char *param_2,undefined4 *param_3); template<class... A> int FUN_10681470(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106814a0(char *param_2,undefined4 *param_3); template<class... A> int FUN_106814a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106814d0(char *param_2,undefined4 *param_3); template<class... A> int FUN_106814d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10681500(char *param_2,undefined4 *param_3); template<class... A> int FUN_10681500(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10681530(char *param_2,undefined4 *param_3); template<class... A> int FUN_10681530(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10681560(char *param_2,undefined4 *param_3); template<class... A> int FUN_10681560(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10681590(char *param_2,undefined4 *param_3); template<class... A> int FUN_10681590(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106817c0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_106817c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10681810(undefined4 *param_2); template<class... A> int FUN_10681810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10683550(SCStr *param_2); template<class... A> int FUN_10683550(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10684c50(undefined4 param_2); template<class... A> int FUN_10684c50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10685070(uint param_2); template<class... A> int FUN_10685070(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10688020(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10688020(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106885e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_106885e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __thiscall FUN_1068c040(char *param_2); template<class... A> int FUN_1068c040(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_1068c740(int *param_2); template<class... A> int FUN_1068c740(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106913e0(undefined4 *param_2); template<class... A> int FUN_106913e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10691440(undefined4 *param_2); template<class... A> int FUN_10691440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10691770(undefined4 *param_2); template<class... A> int FUN_10691770(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106938b0(int param_2); template<class... A> int FUN_106938b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_106938e0(uint param_2); template<class... A> int FUN_106938e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10693930(uint param_2); template<class... A> int FUN_10693930(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10693970(uint param_2); template<class... A> int FUN_10693970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10694150(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10694150(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106943e0(int param_2); template<class... A> int FUN_106943e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694400(int param_2); template<class... A> int FUN_10694400(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694420(int param_2); template<class... A> int FUN_10694420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10694440(int *param_2); template<class... A> int FUN_10694440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10695060(byte *param_2); template<class... A> int FUN_10695060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106999a0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_106999a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10699ae0(undefined4 *param_2); template<class... A> int FUN_10699ae0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall FUN_1069afe0(undefined8 *param_2); template<class... A> int FUN_1069afe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b3c0(undefined4 param_2); template<class... A> int FUN_1069b3c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b400(undefined4 param_2); template<class... A> int FUN_1069b400(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b440(undefined4 param_2); template<class... A> int FUN_1069b440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069b480(undefined4 param_2); template<class... A> int FUN_1069b480(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069c850(undefined4 *param_2); template<class... A> int FUN_1069c850(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069c970(undefined4 *param_2); template<class... A> int FUN_1069c970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1069ca90(undefined4 *param_2); template<class... A> int FUN_1069ca90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069d050(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069d050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069d080(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069d080(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1069dc80(uint param_2,int param_3,int *param_4); template<class... A> int FUN_1069dc80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069ddc0(undefined4 *param_2); template<class... A> int FUN_1069ddc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069dfc0(int param_2); template<class... A> int FUN_1069dfc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069dfe0(int param_2); template<class... A> int FUN_1069dfe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e090(undefined4 *param_2); template<class... A> int FUN_1069e090(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069e0d0(undefined4 *param_2); template<class... A> int FUN_1069e0d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1069e3c0(undefined4 param_2); template<class... A> int FUN_1069e3c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069ed20(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069ed20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1069ed50(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069ed50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106a2ff0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_106a2ff0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106a3070(undefined4 *param_2); template<class... A> int FUN_106a3070(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_106a3ef0(undefined4 *param_2,uint param_3,uint param_4); template<class... A> int FUN_106a3ef0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a3f60(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_106a3f60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a4760(int *param_2); template<class... A> int FUN_106a4760(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a4ec0(uint param_2); template<class... A> int FUN_106a4ec0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a5010(int param_2,uint param_3); template<class... A> int FUN_106a5010(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a5190(std_codecvt_base *param_2); template<class... A> int FUN_106a5190(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_106a6ba0(char param_2,uint param_3); template<class... A> int FUN_106a6ba0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a7ed0(undefined4 *param_2); template<class... A> int FUN_106a7ed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_106a7ef0(undefined1 *param_2,uint param_3,uint param_4); template<class... A> int FUN_106a7ef0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8b20(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_106a8b20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a8bc0(int *param_2); template<class... A> int FUN_106a8bc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106a9070(undefined4 *param_2); template<class... A> int FUN_106a9070(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106a91c0(SCStr *param_2,undefined4 *param_3); template<class... A> int FUN_106a91c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106a92c0(undefined4 *param_2); template<class... A> int FUN_106a92c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106aa350(undefined4 param_2); template<class... A> int FUN_106aa350(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106aa4d0(undefined4 param_2); template<class... A> int FUN_106aa4d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106af1f0(SCStr *param_2); template<class... A> int FUN_106af1f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106af290(undefined4 param_2); template<class... A> int FUN_106af290(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106af370(undefined4 param_2); template<class... A> int FUN_106af370(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106afc80(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int FUN_106afc80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b03f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_106b03f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0470(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_106b0470(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b04f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_106b04f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0990(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_106b0990(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0e30(undefined4 *param_2); template<class... A> int FUN_106b0e30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b0f80(undefined4 *param_2); template<class... A> int FUN_106b0f80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106b10d0(undefined4 *param_2); template<class... A> int FUN_106b10d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106b22b0(SCStr *param_2); template<class... A> int FUN_106b22b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106b22e0(SCStr *param_2); template<class... A> int FUN_106b22e0(A...); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105baee0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105baee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc120(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc190(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc280(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105bc280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 FUN_105bc8f0(float param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 FUN_105bc8f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bce10(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bce10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bce60(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bce60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105bceb0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bceb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105bcf00(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bcf00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_105beff0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_105beff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105bfcf0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105bfcf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105bfde0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105bfde0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105c0ba0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105c0ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105c0f60(SCStr *param_1,char *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105c0f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105c2240(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105c2240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105c3780(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105c3780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105c3eb0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105c3eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105caf70(int param_1,int param_2,int param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105caf70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_105cb660(SCStr *param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_105cb660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105cc740(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105cc740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105cd310(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105cd310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105cda80(int param_1,int param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105cda80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdbe0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdbe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdc70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdca0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdcd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdcd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdd00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdd00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdd30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdd30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cddf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cddf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cde20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cde20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdf10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdf10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdf40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cdf40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105ce440(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105ce440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cfc80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cfc80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cfce0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cfce0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cffd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105cffd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105d0f40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105d0f40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105d24b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105d24b0(...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_105d2500(undefined4 *param_1);
/* WARNING: Removing unreachable block_105d2540 (ram,0x101ba14a) */ void __fastcall FUN_105d2540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d2fe0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d2fe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3010(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3040(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3070(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d30a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d30a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d30d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d30d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3100(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3130(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3160(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3190(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d31c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d31c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d31f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d31f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3c70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3ef0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d3ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d4190(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d4190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105d8630(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105d8630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105d87a0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105d87a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105d8810(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105d8810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d8ee0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105d8ee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined ** FUN_105df850(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined ** FUN_105df850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e70e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e70e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7100(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e7100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7120(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e7120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7140(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e7140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7160(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e7160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e7180(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e7180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e71a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e71a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105e71c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105e71c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105ea0f0(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105ea0f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ea160(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ea160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ea7b0(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ea7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_105ea850(SCStr *param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_105ea850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_105ea890(SCStr *param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_105ea890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105ebd30(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105ebd30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105ec110(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105ec110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ec180(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105ec180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ec7d0(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105ec7d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eec80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eec80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eed20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eed20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eeed0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105eeed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2a70(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2aa0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2ad0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f2ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4be0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4c00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4d60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4d80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f4d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5020(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5030(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5040(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5050(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105f5050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5ba0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5bf0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5c10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5fa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f5fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f6390(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f6390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f63e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f63e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f6400(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105f6400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff000(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff010(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff020(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff030(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff040(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff050(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff060(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff070(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff080(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff090(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff0f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff100(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff110(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff120(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff130(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff140(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff150(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff160(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff170(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff180(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff190(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff1a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff1a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff500(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff530(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff560(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff590(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff5c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff5c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff5f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff5f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff6b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff6b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff770(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ff770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106004c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106004c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106004f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106004f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600510(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600540(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600560(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600590(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106005b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106005b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106005e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106005e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106006f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600720(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600770(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600790(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106007c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106007c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106007e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106007e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600810(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600960(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600980(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106009b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106009b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106009d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106009d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600b60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600cc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600d80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600dd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600ec0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10600ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106012e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106012e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10601310(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10601310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10605180(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10605180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106196f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106196f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f1f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f2f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f670(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f690(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f6c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f6e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f7e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1061f7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10623df0(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10623df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10623e70(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10623e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_106243c0(uint *param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_106243c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c180(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c190(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c200(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c210(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c220(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c230(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c240(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c250(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c260(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c270(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c280(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c290(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c2f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c300(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c310(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c340(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c4b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c4b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c4e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c4e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c510(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c540(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c570(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c5d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c5d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c690(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c6c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c6f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c720(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062c720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062ce80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062ce80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062ceb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062ceb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062ced0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062ced0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cf70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cfa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cfa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cfc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cfc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cff0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062cff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d0c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d0c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d0e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d0e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d110(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d1d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d1d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d1f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d220(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d2e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d2e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d300(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d350(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d380(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d450(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d510(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d530(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d560(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d580(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d5b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d5b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d5d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d5d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d670(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d6a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d6a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d6c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d6f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d760(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d790(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d7b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d7e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d880(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d8a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d8a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d8d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d8d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d9a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d9a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d9c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d9f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062d9f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062da10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062da10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062da40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1062da40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106431d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106431d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10643780(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10643780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648180(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106481a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106481a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10648d90(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10648d90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d6e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d730(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1064d730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10654210(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10654210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654640(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654670(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654690(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106546f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654700(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654720(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654730(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654750(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654760(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654770(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654780(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654790(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106547f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654810(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654820(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654840(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654860(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654870(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654a40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654a40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654a70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654ad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654bc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654bf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654cb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654cb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654ce0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654ce0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654dd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654e00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654e00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654e30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10654e30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655280(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106552b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106552b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106552d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106552d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655300(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106553c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106553c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106553e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106553e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655410(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655430(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655460(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106554b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106554b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106554d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106554d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655500(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655520(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655550(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655570(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106555f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655610(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655610(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655640(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655690(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655760(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655780(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106557b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106557b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106557d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106557d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655820(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655870(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106558f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655960(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655990(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106559b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106559b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106559e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106559e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655b40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655c60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655dd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655ec0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655fa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655fc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655fc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655ff0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10655ff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656010(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656040(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656060(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656090(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106560b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106560b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106560e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106560e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656100(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656130(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656ba0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10656ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065a470(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065a470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065a4a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1065a4a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1065af80(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1065af80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1065b000(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1065b000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1065e690(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1065e690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1065e6e0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1065e6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681890(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10681890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106818b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682600(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682630(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10682630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10682660(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10682660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683380(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10683380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106846b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106846b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10684fd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10684fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685000(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685140(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685160(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10685900(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10685900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685d40(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685dc0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685e40(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10685e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685f80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10685f80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10686260(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10686260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106862b0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106862b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10686300(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10686300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10686360(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10686360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10686430(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10686430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10687d10(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10687d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10687e50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10687e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688ad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688c90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10688c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d7d0(int param_1,int param_2,int param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1068d7d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1068ddc0(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1068ddc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10690b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10690b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10691560(undefined1 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10691560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106928b0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106928b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106931c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106931c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10693b80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10693b80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10693ba0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10693ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10694d80(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10694d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694e10(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694e10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694e80(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694e80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694f00(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694f00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694fe0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10694fe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106952d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106952d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106953c0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106953c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10695410(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10695410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106954b0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106954b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106970f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106970f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10697150(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10697150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a540(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069a540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069c710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069d830(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069d830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069d850(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1069d850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069e240(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069e240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1069e2d0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1069e2d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1069e350(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1069e350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069e8e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1069e8e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069e9d0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069e9d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1069ea20(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069ea20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1069ea70(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1069ea70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a12c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a12c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a30b0(undefined1 *param_1,FILE *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a30b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3710(int param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106a3710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106a3740(int param_1,uint param_2,uint param_3,char param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106a3740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a3fa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a3fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a43e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a43e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106a4590(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_106a4590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106a48c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a48c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a4e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a4e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a4ea0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106a4ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106a64e0(undefined4 *param_1,uint param_2,uint param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a64e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a6a80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a6a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a6b10(void *param_1,size_t param_2,char *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a6b10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a6bf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106a6bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9740(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9760(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9920(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106a9920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aa140(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aa140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ab980(SCStr *param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ab980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ab9c0(SCStr *param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ab9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ac430(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ac430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_106ac460(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_106ac460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_106ac490(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_106ac490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ac690(SCStr *param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_106ac690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ac770(SCStr *param_1,SCStr *param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106ac770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ae9b0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ae9b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106ae9d0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ae9d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aea20(undefined4 param_1,SCStr *param_2,SCStr *param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aea20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aea50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aea50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106aec60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106af010(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106af010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106af050(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106af050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106af680(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106af680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_106af720(undefined4 *param_1,undefined4 *param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_106af720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106afcc0(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106afcc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0de0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0f30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b0f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2310(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106b2310(...);
// Reference entry 105baee0; body size 14 bytes.
#line 1 "ENTRY_105baee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105baee0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x4ec4ec4) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
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
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
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
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
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
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
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
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 105bc8f0; body size 28 bytes.
#line 1 "ENTRY_105bc8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 FUN_105bc8f0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)(ceil((double)param_1));
  return (float10)((float10)(float)dVar1);
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


// Reference entry 105beff0; body size 81 bytes.
#line 1 "ENTRY_105beff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_105beff0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6258));
  if (iVar1 == 0) {
    return (float10)((float10)0);
  }
  return (float10)((float10)((float)((double)*(int *)(param_1 + 0x6254) +
                          (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x6254) >> 0x1f)]) /
                  (float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)])));
}


// Reference entry 105bfcf0; body size 45 bytes.
#line 1 "ENTRY_105bfcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105bfcf0(undefined4 param_1)

{
  char cVar1;
  
  switch(param_1) {
  case 0x16:
  case 0x17:
  case 0x1d:
  case 0x23:
  case 0x37:
    break;
  default:
    cVar1 = (char)(thunk_FUN_11457630(param_1));
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105bfde0; body size 16 bytes.
#line 1 "ENTRY_105bfde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105bfde0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_105b7bd0(param_1,param_2);
  return;
}


// Reference entry 105c0ba0; body size 20 bytes.
#line 1 "ENTRY_105c0ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105c0ba0(undefined4 param_1)

{
  thunk_FUN_1125b030(param_1,0);
  return;
}


// Reference entry 105c0f60; body size 338 bytes.
#line 1 "ENTRY_105c0f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105c0f60(SCStr *param_1,char *param_2)

{
 try {
  char cVar1;
  uint uVar2;
  FILE *_File;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  SCStr *pSVar6;
  undefined4 uVar7;
  char acStack_498 [4];
  void *pvStack_494;
  undefined1 *puStack_490;
  undefined4 uStack_48c;
  undefined1 auStack_488 [112];
  undefined1 auStack_418 [1024];
  undefined1 auStack_18 [16];
  uint uStack_8;

  uVar2 = (uint)(DAT_12126b84 ^ (uint)auStack_488);

  *(undefined4*)param_1 = (undefined4)((SCStr *)(0));

  uVar7 = (undefined4)(1);
  pSVar6 = (SCStr *)(param_1);
  uStack_8 = (uint)(uVar2);
  _File = (FILE *)(fopen(param_2,"rb"));
  if ((FILE *)(_File) != (FILE *)0x0) {
    thunk_FUN_113d1ae0(auStack_488,2,uVar2);
    sVar3 = (size_t)(fread(auStack_418,1,0x400,_File));
    while (sVar3 != 0) {
      thunk_FUN_113d1d90(auStack_488,auStack_418,sVar3);
      sVar3 = (size_t)(fread(auStack_418,1,0x400,_File));
    }
    thunk_FUN_113d1a60(auStack_488,auStack_18);
    fclose(_File);
    acStack_498[0] = (char)('\0');
    acStack_498[1] = (char)('\0');
    iVar5 = (int)(0);
    acStack_498[2] = (char)(0);
    do {
      thunk_FUN_1145c720(acStack_498,3,&DAT_1188e1fc,auStack_18[iVar5]);
      pcVar4 = (char *)(acStack_498);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      ((SCStr *)(param_1))->append(acStack_498,(int)pcVar4 - (int)(acStack_498 + 1));
      iVar5 = (int)(iVar5 + 1);
    } while (iVar5 < 0x10);
  }

  thunk_FUN_1148ac28(pSVar6,uVar7);
  return;

 } catch (...) { }
}


// Reference entry 105c2240; body size 24 bytes.
#line 1 "ENTRY_105c2240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105c2240(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 105c3780; body size 89 bytes.
#line 1 "ENTRY_105c3780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105c3780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardAction);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105c37f0; body size 70 bytes.
#line 1 "ENTRY_105c37f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105c37f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizardAction);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105c3eb0; body size 39 bytes.
#line 1 "ENTRY_105c3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105c3eb0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCChangeEmailWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCChangeEmailWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCChangeEmailWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCChangeEmailWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCChangeEmailWizard);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&piStack_14));
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if ((int *)(piVar1) == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }

  if ((int *)(piStack_14) != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }

  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0xcc))(param_1[0x14]);
  }
  thunk_FUN_10dd3190();
  if (param_1[0x2a] != 0) {
    thunk_FUN_1059d940(param_1[0x2a]);
    param_1[0x2a] = (int)(0);
    *(undefined1*)((int)param_1 + 0xad) = (undefined1)(0);
  }
  thunk_FUN_10dd31f0();
  thunk_FUN_112af4e0("Wizard",5,"Clearing sub-wizard mode.");
  if ((undefined4 *)(undefined4 *)(param_1[0x26]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
    param_1[0x26] = (int)(0);
  }

  if ((int *)(piVar4) != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x32]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x31] = (int)(0);
    param_1[0x32] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x30]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x2f] = (int)(0);
    param_1[0x30] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x2e]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x2d] = (int)(0);
    param_1[0x2e] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x28]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x27] = (int)(0);
    param_1[0x28] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x1b] = (int)(0);
    param_1[0x1c] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10dd1260();
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCHouseholdEventSink);
  piVar1 = (int *)((int *)param_1[0x15]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x14] = (int)(0);
    param_1[0x15] = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();

  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
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


// Reference entry 105cb660; body size 101 bytes.
#line 1 "ENTRY_105cb660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_105cb660(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  SCStr *pSVar2;
  SCStr *this_;
  
  if ((SCStr *)((param_2)) != (SCStr *)(param_1)) {
    pSVar2 = (SCStr *)(param_2 + -4);
    do {
      this_ = (SCStr *)(param_3 + -8);
      if (pSVar2 + -4 != this_) {
        ((SCStr *)(this_))->int_release();
        *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(pSVar2 + -4)));
        ((SCStr *)(this_))->int_addref();
      }
      param_3 = (SCStr *)(param_3 + -4);
      if ((SCStr *)(pSVar2) != (SCStr *)(param_3)) {
        ((SCStr *)(param_3))->int_release();
        *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)pSVar2));
        ((SCStr *)(param_3))->int_addref();
      }
      pSVar1 = (SCStr *)(pSVar2 + -4);
      pSVar2 = (SCStr *)(pSVar2 + -8);
      param_3 = (SCStr *)(this_);
    } while ((SCStr *)(pSVar1) != (SCStr *)(param_1));
    return (SCStr *)(this_);
  }
  return (SCStr *)(param_3);
}


// Reference entry 105cc740; body size 94 bytes.
#line 1 "ENTRY_105cc740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105cc740(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5)

{
  if ((SCStr *)(param_1) != (SCStr *)(param_3)) {
    ((SCStr *)(param_3))->int_release();
    *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)param_1));
    ((SCStr *)(param_3))->int_addref();
  }
  param_3 = (SCStr *)(param_3 + 4);
  if (param_1 + 4 != param_3) {
    ((SCStr *)(param_3))->int_release();
    *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)(param_1 + 4)));
    ((SCStr *)(param_3))->int_addref();
  }
  thunk_FUN_105cc420(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 105cd310; body size 40 bytes.
#line 1 "ENTRY_105cd310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105cd310(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
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
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdc10; body size 28 bytes.
#line 1 "ENTRY_105cdc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdc10(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdc40; body size 28 bytes.
#line 1 "ENTRY_105cdc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdc40(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdc70; body size 28 bytes.
#line 1 "ENTRY_105cdc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdc70(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdca0; body size 28 bytes.
#line 1 "ENTRY_105cdca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdca0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdcd0; body size 28 bytes.
#line 1 "ENTRY_105cdcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdcd0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdd00; body size 28 bytes.
#line 1 "ENTRY_105cdd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdd00(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdd30; body size 28 bytes.
#line 1 "ENTRY_105cdd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdd30(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cddf0; body size 28 bytes.
#line 1 "ENTRY_105cddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cddf0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105cde20; body size 54 bytes.
#line 1 "ENTRY_105cde20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cde20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdf10; body size 27 bytes.
#line 1 "ENTRY_105cdf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdf10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 105cdf40; body size 27 bytes.
#line 1 "ENTRY_105cdf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cdf40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 105ce440; body size 21 bytes.
#line 1 "ENTRY_105ce440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105ce440(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  return (undefined4 *)(param_1);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  return (undefined4 *)(param_1);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  return (undefined4 *)(param_1);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  return (undefined4 *)(param_1);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  return (undefined4 *)(param_1);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105cfb50; body size 42 bytes.
#line 1 "ENTRY_105cfb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105cfb50(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *(undefined1*)(param_1 + 2) = (undefined1)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChickenExitAction);
  return (undefined4 *)(param_1);
}


// Reference entry 105cfc80; body size 69 bytes.
#line 1 "ENTRY_105cfc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cfc80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFactoryResetAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCFactoryResetAction);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105cfce0; body size 69 bytes.
#line 1 "ENTRY_105cfce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cfce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCForgetHouseholdAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCForgetHouseholdAction);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105cffd0; body size 33 bytes.
#line 1 "ENTRY_105cffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105cffd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSupport);
  return (undefined4 *)(param_1);
}


// Reference entry 105d0f40; body size 33 bytes.
#line 1 "ENTRY_105d0f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105d0f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCResetDismissedServicesAction);
  return (undefined4 *)(param_1);
}


// Reference entry 105d24b0; body size 21 bytes.
#line 1 "ENTRY_105d24b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105d24b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105d2500; body size 11 bytes.
#line 1 "ENTRY_105d2500"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d2500(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)(int *)(param_1[1]) != (int *)0x0) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 105d2540; body size 11 bytes.
#line 1 "ENTRY_105d2540"

/* WARNING: Removing unreachable block_105d2540 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d2540(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)(int *)(param_1[1]) != (int *)0x0) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 105d2fe0; body size 28 bytes.
#line 1 "ENTRY_105d2fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d2fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetAudioInputAttributesAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d3010; body size 28 bytes.
#line 1 "ENTRY_105d3010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAISetLineInLevelAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d3040; body size 28 bytes.
#line 1 "ENTRY_105d3040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetPlayModeAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d3070; body size 28 bytes.
#line 1 "ENTRY_105d3070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneAttributesAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d30a0; body size 28 bytes.
#line 1 "ENTRY_105d30a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d30a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayRoomUUIDAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d30d0; body size 28 bytes.
#line 1 "ENTRY_105d30d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d30d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayVolumeAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d3100; body size 28 bytes.
#line 1 "ENTRY_105d3100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetUseAutoplayVolumeAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d3130; body size 28 bytes.
#line 1 "ENTRY_105d3130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetIRRepeaterStateAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d3160; body size 28 bytes.
#line 1 "ENTRY_105d3160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCSetLEDFeedbackStateAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d3190; body size 28 bytes.
#line 1 "ENTRY_105d3190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetOutputFixedAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d31c0; body size 28 bytes.
#line 1 "ENTRY_105d31c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d31c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCSetRoomCalibrationStatusAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 105d31f0; body size 11 bytes.
#line 1 "ENTRY_105d31f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d31f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAudioCompressionSelectAction);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMenuSelectSettingActionBase);
  piVar1 = (int *)((int *)param_1[0xe]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xd] = (undefined4)(0);
    param_1[0xe] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xb]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[10] = (undefined4)(0);
    param_1[0xb] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[3]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 105d3c70; body size 18 bytes.
#line 1 "ENTRY_105d3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3c70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlSetRoomCalibrationStatus);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObj);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 105d3ef0; body size 18 bytes.
#line 1 "ENTRY_105d3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d3ef0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchHistoryToggleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSearchHistoryToggleAction);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleBooleanSettingActionBase);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCToggleBooleanSettingActionBase);
  piVar1 = (int *)((int *)param_1[0xb]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[10] = (undefined4)(0);
    param_1[0xb] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 105d4190; body size 18 bytes.
#line 1 "ENTRY_105d4190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d4190(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStaleSessionToggleAction);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCStaleSessionToggleAction);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleBooleanSettingActionBase);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCToggleBooleanSettingActionBase);
  piVar1 = (int *)((int *)param_1[0xb]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[10] = (undefined4)(0);
    param_1[0xb] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 105d49e0; body size 18 bytes.
#line 1 "ENTRY_105d49e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105d49e0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 105d6c90; body size 49 bytes.
#line 1 "ENTRY_105d6c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105d6c90(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 105d6cd0; body size 63 bytes.
#line 1 "ENTRY_105d6cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105d6cd0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x14);
  if (0xccccccc - (uVar1 >> 1) < uVar1) {
    return (uint)(0xccccccc);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 105d8630; body size 22 bytes.
#line 1 "ENTRY_105d8630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105d8630(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1124ff50(param_1));
  *(undefined1*)(iVar1 + 0x30) = (undefined1)(1);
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
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
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
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 105d8ee0; body size 25 bytes.
#line 1 "ENTRY_105d8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105d8ee0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_105ca4f0(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 105df850; body size 87 bytes.
#line 1 "ENTRY_105df850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined ** FUN_105df850(void)

{
  if (*(int *)(*(int *)((int)((void *)__readfsdword(0x18)) + _tls_index * 4) + 0x104) < DAT_121a2114) {
    thunk_FUN_1148ab00(&DAT_121a2114);
    if (DAT_121a2114 == -1) {
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      _atexit((_func_4879 *)LAB_11807000);
      thunk_FUN_1148aaa4(&DAT_121a2114);
    }
  }
  return (undefined **)(&PTR_vftable_12119af0);
}


// Reference entry 105e70e0; body size 24 bytes.
#line 1 "ENTRY_105e70e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e70e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e7100; body size 24 bytes.
#line 1 "ENTRY_105e7100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e7120; body size 24 bytes.
#line 1 "ENTRY_105e7120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e7140; body size 24 bytes.
#line 1 "ENTRY_105e7140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e7160; body size 24 bytes.
#line 1 "ENTRY_105e7160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e7180; body size 24 bytes.
#line 1 "ENTRY_105e7180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e7180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e71a0; body size 24 bytes.
#line 1 "ENTRY_105e71a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e71a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 105e71c0; body size 24 bytes.
#line 1 "ENTRY_105e71c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105e71c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
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


// Reference entry 105e92c0; body size 106 bytes.
#line 1 "ENTRY_105e92c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105e92c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 2));
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (undefined4 *)(param_1);
      }
    }
    else {
      param_1[0xb] = (undefined4)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105e9580; body size 172 bytes.
#line 1 "ENTRY_105e9580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105e9580(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 2));
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_105e95d3;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
    }
    else {
      param_1[0xb] = (undefined4)(piVar1);
    }
    param_2[9] = (int)(0);
  }
LAB_105e95d3:
  param_1[0x15] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[0x13]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2) + 10) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 0xc));
      param_1[0x15] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[0x13]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2) + 10);
        param_2[0x13] = (int)(0);
        return (undefined4 *)(param_1);
      }
    }
    else {
      param_1[0x15] = (undefined4)(piVar1);
      param_2[0x13] = (int)(0);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105e9bf0; body size 172 bytes.
#line 1 "ENTRY_105e9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105e9bf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 2));
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_105e9c43;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
    }
    else {
      param_1[0xb] = (undefined4)(piVar1);
    }
    param_2[9] = (int)(0);
  }
LAB_105e9c43:
  param_1[0x15] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[0x13]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2) + 10) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 0xc));
      param_1[0x15] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[0x13]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2) + 10);
        param_2[0x13] = (int)(0);
        return (undefined4 *)(param_1);
      }
    }
    else {
      param_1[0x15] = (undefined4)(piVar1);
      param_2[0x13] = (int)(0);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105ea0f0; body size 43 bytes.
#line 1 "ENTRY_105ea0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105ea0f0(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint extraout_EAX;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
    return (uint)((uint)(cVar1 == '\0'));
  }
                    
                    
                    
  std::_Xbad_function_call();
  return (uint)(extraout_EAX);
}


// Reference entry 105ea160; body size 84 bytes.
#line 1 "ENTRY_105ea160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105ea160(int param_1,undefined4 *param_2)

{
 try {
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) == (int *)(0x0)) {
                    
    std::_Xbad_function_call();
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
  if (cVar1 == '\0') {
    if (*(int **)(param_1 + 0x4c) == (int *)(0x0)) {
                    
      std::_Xbad_function_call();
    }
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 8))(&stack0x00000000));
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);

 } catch (...) { }
}


// Reference entry 105ea7b0; body size 86 bytes.
#line 1 "ENTRY_105ea7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ea7b0(int param_1,undefined4 *param_2)

{
 try {
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) == (int *)(0x0)) {
                    
    std::_Xbad_function_call();
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
  if (cVar1 != '\0') {
    if (*(int **)(param_1 + 0x4c) == (int *)(0x0)) {
                    
      std::_Xbad_function_call();
    }
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 8))(&stack0x00000000));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 105ea850; body size 49 bytes.
#line 1 "ENTRY_105ea850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_105ea850(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  if ((SCStr *)(param_1) == (SCStr *)(param_2)) {
    return (SCStr *)(param_1);
  }
  do {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq(param_3));
    if (bVar1) {
      return (SCStr *)(param_1);
    }
    param_1 = (SCStr *)(param_1 + 4);
  } while ((SCStr *)(param_1) != (SCStr *)(param_2));
  return (SCStr *)(param_1);
}


// Reference entry 105ea890; body size 49 bytes.
#line 1 "ENTRY_105ea890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_105ea890(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  if ((SCStr *)(param_1) == (SCStr *)(param_2)) {
    return (SCStr *)(param_1);
  }
  do {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq(param_3));
    if (bVar1) {
      return (SCStr *)(param_1);
    }
    param_1 = (SCStr *)(param_1 + 4);
  } while ((SCStr *)(param_1) != (SCStr *)(param_2));
  return (SCStr *)(param_1);
}


// Reference entry 105ebd30; body size 57 bytes.
#line 1 "ENTRY_105ebd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105ebd30(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4)

{
  bool bVar1;
  
  if ((SCStr *)(param_2) == (SCStr *)(param_3)) {
    *param_1 = (undefined4)(param_2);
    return;
  }
  do {
    bVar1 = (bool)(((SCStr *)(param_2))->op_eq(param_4));
    if (bVar1) break;
    param_2 = (SCStr *)(param_2 + 4);
  } while ((SCStr *)(param_2) != (SCStr *)(param_3));
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 105ec110; body size 43 bytes.
#line 1 "ENTRY_105ec110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105ec110(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint extraout_EAX;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
    return (uint)((uint)(cVar1 == '\0'));
  }
                    
                    
                    
  std::_Xbad_function_call();
  return (uint)(extraout_EAX);
}


// Reference entry 105ec180; body size 84 bytes.
#line 1 "ENTRY_105ec180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105ec180(int param_1,undefined4 *param_2)

{
 try {
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) == (int *)(0x0)) {
                    
    std::_Xbad_function_call();
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
  if (cVar1 == '\0') {
    if (*(int **)(param_1 + 0x4c) == (int *)(0x0)) {
                    
      std::_Xbad_function_call();
    }
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 8))(&stack0x00000000));
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);

 } catch (...) { }
}


// Reference entry 105ec7d0; body size 86 bytes.
#line 1 "ENTRY_105ec7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105ec7d0(int param_1,undefined4 *param_2)

{
 try {
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) == (int *)(0x0)) {
                    
    std::_Xbad_function_call();
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
  if (cVar1 != '\0') {
    if (*(int **)(param_1 + 0x4c) == (int *)(0x0)) {
                    
      std::_Xbad_function_call();
    }
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x4c) + 8))(&stack0x00000000));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 105eec80; body size 34 bytes.
#line 1 "ENTRY_105eec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105eec80(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 0x30));
    *(undefined4*)(param_1 + 0x54) = (undefined4)(0);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 0x30));
    *(undefined4*)(param_1 + 0x54) = (undefined4)(0);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 105ef920; body size 40 bytes.
#line 1 "ENTRY_105ef920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_105ef920(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2));
    return (bool)(cVar1 == '\0');
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105f2a70; body size 34 bytes.
#line 1 "ENTRY_105f2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f2a70(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105f2aa0; body size 34 bytes.
#line 1 "ENTRY_105f2aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f2aa0(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105f2ad0; body size 34 bytes.
#line 1 "ENTRY_105f2ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f2ad0(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
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
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 105f2cb0; body size 23 bytes.
#line 1 "ENTRY_105f2cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f2cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f5df0(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 105f2cd0; body size 23 bytes.
#line 1 "ENTRY_105f2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f2cd0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f60e0(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 105f31a0; body size 23 bytes.
#line 1 "ENTRY_105f31a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f31a0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f5a00(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 105f31c0; body size 23 bytes.
#line 1 "ENTRY_105f31c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f31c0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f5df0(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 105f31e0; body size 23 bytes.
#line 1 "ENTRY_105f31e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105f31e0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_105f60e0(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
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


// Reference entry 105f5020; body size 9 bytes.
#line 1 "ENTRY_105f5020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105f5020(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x30));

  if ((int *)(piVar1) != (int *)0x0) {
    *(undefined4*)(param_2 + 0x2c) = (undefined4)(0);
    *(undefined4*)(param_2 + 0x30) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_2 + 0x28));

  if ((int *)(piVar1) != (int *)0x0) {
    *(undefined4*)(param_2 + 0x24) = (undefined4)(0);
    *(undefined4*)(param_2 + 0x28) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();

  return;

 } catch (...) { }
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
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f4a20(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x34);
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
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f5a00(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
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
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f5df0(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
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
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f60e0(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_105f38c0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 105f5830; body size 65 bytes.
#line 1 "ENTRY_105f5830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5830(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105f5890; body size 105 bytes.
#line 1 "ENTRY_105f5890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5890(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  param_1[2] = (undefined4)(uVar3);
  param_1[3] = (undefined4)(uVar2);
  param_1[4] = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  param_1[5] = (undefined4)(uVar1);
  param_1[6] = (undefined4)(uVar3);
  param_1[7] = (undefined4)(uVar2);
  return (undefined4 *)(param_1);
}


// Reference entry 105f5ba0; body size 63 bytes.
#line 1 "ENTRY_105f5ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105f5bf0; body size 11 bytes.
#line 1 "ENTRY_105f5bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5bf0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeIfChainInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 105f5c10; body size 11 bytes.
#line 1 "ENTRY_105f5c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5c10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 105f5c30; body size 65 bytes.
#line 1 "ENTRY_105f5c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105f5c90; body size 105 bytes.
#line 1 "ENTRY_105f5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5c90(int param_2)
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
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  param_1[2] = (undefined4)(uVar3);
  param_1[3] = (undefined4)(uVar2);
  param_1[4] = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  param_1[5] = (undefined4)(uVar1);
  param_1[6] = (undefined4)(uVar3);
  param_1[7] = (undefined4)(uVar2);
  return (undefined4 *)(param_1);
}


// Reference entry 105f5fa0; body size 63 bytes.
#line 1 "ENTRY_105f5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f5fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105f5ff0; body size 65 bytes.
#line 1 "ENTRY_105f5ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f5ff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105f6390; body size 63 bytes.
#line 1 "ENTRY_105f6390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f6390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105f63e0; body size 11 bytes.
#line 1 "ENTRY_105f63e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f63e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 105f6400; body size 11 bytes.
#line 1 "ENTRY_105f6400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105f6400(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 105f6420; body size 57 bytes.
#line 1 "ENTRY_105f6420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f6420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 105f9d60; body size 38 bytes.
#line 1 "ENTRY_105f9d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f9d60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105f9d90; body size 38 bytes.
#line 1 "ENTRY_105f9d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105f9d90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
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
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(uVar3);
  *(undefined4*)(param_1 + 8) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(uVar3);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(uVar2);
  return (undefined1 *)(param_1);
}


// Reference entry 105faa60; body size 57 bytes.
#line 1 "ENTRY_105faa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105faa60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 105fabb0; body size 64 bytes.
#line 1 "ENTRY_105fabb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fabb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105fb540; body size 57 bytes.
#line 1 "ENTRY_105fb540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fb540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
  return (undefined4 *)(param_1);
}


// Reference entry 105fbc90; body size 57 bytes.
#line 1 "ENTRY_105fbc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fbc90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
  return (undefined4 *)(param_1);
}


// Reference entry 105fc560; body size 57 bytes.
#line 1 "ENTRY_105fc560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fc560(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
  return (undefined4 *)(param_1);
}


// Reference entry 105fc6b0; body size 57 bytes.
#line 1 "ENTRY_105fc6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fc6b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
  return (undefined4 *)(param_1);
}


// Reference entry 105fc9b0; body size 57 bytes.
#line 1 "ENTRY_105fc9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fc9b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
  return (undefined4 *)(param_1);
}


// Reference entry 105fcb00; body size 57 bytes.
#line 1 "ENTRY_105fcb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fcb00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
  return (undefined4 *)(param_1);
}


// Reference entry 105fe9e0; body size 57 bytes.
#line 1 "ENTRY_105fe9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105fe9e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
  return (undefined4 *)(param_1);
}


// Reference entry 105ff000; body size 11 bytes.
#line 1 "ENTRY_105ff000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff000(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff010; body size 11 bytes.
#line 1 "ENTRY_105ff010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff010(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff020; body size 11 bytes.
#line 1 "ENTRY_105ff020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff020(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff030; body size 11 bytes.
#line 1 "ENTRY_105ff030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff030(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff040; body size 11 bytes.
#line 1 "ENTRY_105ff040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff040(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff050; body size 11 bytes.
#line 1 "ENTRY_105ff050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff050(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff060; body size 11 bytes.
#line 1 "ENTRY_105ff060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff060(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff070; body size 11 bytes.
#line 1 "ENTRY_105ff070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff070(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff080; body size 11 bytes.
#line 1 "ENTRY_105ff080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff080(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff090; body size 11 bytes.
#line 1 "ENTRY_105ff090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff090(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff0a0; body size 11 bytes.
#line 1 "ENTRY_105ff0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff0b0; body size 11 bytes.
#line 1 "ENTRY_105ff0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff0c0; body size 11 bytes.
#line 1 "ENTRY_105ff0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff0d0; body size 11 bytes.
#line 1 "ENTRY_105ff0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff0e0; body size 11 bytes.
#line 1 "ENTRY_105ff0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff0f0; body size 11 bytes.
#line 1 "ENTRY_105ff0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff0f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff100; body size 11 bytes.
#line 1 "ENTRY_105ff100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff100(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff110; body size 11 bytes.
#line 1 "ENTRY_105ff110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff110(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff120; body size 11 bytes.
#line 1 "ENTRY_105ff120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff120(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff130; body size 11 bytes.
#line 1 "ENTRY_105ff130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff130(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff140; body size 11 bytes.
#line 1 "ENTRY_105ff140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff140(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff150; body size 11 bytes.
#line 1 "ENTRY_105ff150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff150(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff160; body size 11 bytes.
#line 1 "ENTRY_105ff160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff160(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff170; body size 11 bytes.
#line 1 "ENTRY_105ff170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff170(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff180; body size 11 bytes.
#line 1 "ENTRY_105ff180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff180(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff190; body size 11 bytes.
#line 1 "ENTRY_105ff190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff190(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff1a0; body size 11 bytes.
#line 1 "ENTRY_105ff1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff1a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 105ff500; body size 38 bytes.
#line 1 "ENTRY_105ff500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff530; body size 38 bytes.
#line 1 "ENTRY_105ff530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff560; body size 38 bytes.
#line 1 "ENTRY_105ff560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff590; body size 38 bytes.
#line 1 "ENTRY_105ff590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff5c0; body size 38 bytes.
#line 1 "ENTRY_105ff5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff5c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff5f0; body size 38 bytes.
#line 1 "ENTRY_105ff5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff5f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff620; body size 38 bytes.
#line 1 "ENTRY_105ff620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff650; body size 38 bytes.
#line 1 "ENTRY_105ff650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff680; body size 38 bytes.
#line 1 "ENTRY_105ff680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff6b0; body size 38 bytes.
#line 1 "ENTRY_105ff6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff6b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff710; body size 38 bytes.
#line 1 "ENTRY_105ff710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff740; body size 38 bytes.
#line 1 "ENTRY_105ff740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 105ff770; body size 38 bytes.
#line 1 "ENTRY_105ff770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ff770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106004c0; body size 38 bytes.
#line 1 "ENTRY_106004c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106004c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106004f0; body size 21 bytes.
#line 1 "ENTRY_106004f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106004f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a212c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600510; body size 38 bytes.
#line 1 "ENTRY_10600510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600540; body size 21 bytes.
#line 1 "ENTRY_10600540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600540(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a216c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600560; body size 38 bytes.
#line 1 "ENTRY_10600560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600590; body size 21 bytes.
#line 1 "ENTRY_10600590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600590(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2168 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106005b0; body size 38 bytes.
#line 1 "ENTRY_106005b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106005b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106005e0; body size 21 bytes.
#line 1 "ENTRY_106005e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106005e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a215c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600600; body size 38 bytes.
#line 1 "ENTRY_10600600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600600(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2148 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600650; body size 38 bytes.
#line 1 "ENTRY_10600650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600650(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2180 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106006a0; body size 38 bytes.
#line 1 "ENTRY_106006a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106006a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106006d0; body size 21 bytes.
#line 1 "ENTRY_106006d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106006d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2170 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106006f0; body size 38 bytes.
#line 1 "ENTRY_106006f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106006f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600720; body size 21 bytes.
#line 1 "ENTRY_10600720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600720(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a218c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600740; body size 38 bytes.
#line 1 "ENTRY_10600740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600770; body size 21 bytes.
#line 1 "ENTRY_10600770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600770(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2158 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600790; body size 38 bytes.
#line 1 "ENTRY_10600790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106007c0; body size 21 bytes.
#line 1 "ENTRY_106007c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106007c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2190 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106007e0; body size 38 bytes.
#line 1 "ENTRY_106007e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106007e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a217c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600910; body size 21 bytes.
#line 1 "ENTRY_10600910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600910(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2128 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600930; body size 38 bytes.
#line 1 "ENTRY_10600930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600960; body size 21 bytes.
#line 1 "ENTRY_10600960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600960(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2188 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600980; body size 38 bytes.
#line 1 "ENTRY_10600980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106009b0; body size 21 bytes.
#line 1 "ENTRY_106009b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106009b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2184 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106009d0; body size 38 bytes.
#line 1 "ENTRY_106009d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106009d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a214c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600a20; body size 38 bytes.
#line 1 "ENTRY_10600a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600a20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600a50; body size 21 bytes.
#line 1 "ENTRY_10600a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600a50(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2164 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600a70; body size 38 bytes.
#line 1 "ENTRY_10600a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600aa0; body size 21 bytes.
#line 1 "ENTRY_10600aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600aa0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2174 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600b60; body size 21 bytes.
#line 1 "ENTRY_10600b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600b60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2140 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600c20; body size 21 bytes.
#line 1 "ENTRY_10600c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600c20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a213c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600c40; body size 38 bytes.
#line 1 "ENTRY_10600c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600c40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2130 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600c90; body size 38 bytes.
#line 1 "ENTRY_10600c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600c90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2134 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600d80; body size 21 bytes.
#line 1 "ENTRY_10600d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600d80(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2138 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600da0; body size 38 bytes.
#line 1 "ENTRY_10600da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600da0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2178 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600df0; body size 38 bytes.
#line 1 "ENTRY_10600df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600df0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2144 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600e40; body size 38 bytes.
#line 1 "ENTRY_10600e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600e70; body size 21 bytes.
#line 1 "ENTRY_10600e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600e70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2154 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10600e90; body size 38 bytes.
#line 1 "ENTRY_10600e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10600ec0; body size 21 bytes.
#line 1 "ENTRY_10600ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10600ec0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2160 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106012e0; body size 38 bytes.
#line 1 "ENTRY_106012e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106012e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2150 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10603ca0; body size 32 bytes.
#line 1 "ENTRY_10603ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10603ca0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10604d60(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(param_2 * 0x34 + iVar1);
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
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(param_2 * 0x20 + iVar1);
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
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(param_2 * 0x20 + iVar1);
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
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(param_2 * 0x20 + iVar1);
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
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 0xc);
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
        param_1[1] = (uint)((uint)pvVar1);
        param_1[2] = (uint)((uint)((int)pvVar1 + param_2));
        return;
      }
      *param_1 = (uint)(0);
      param_1[1] = (uint)(0);
      param_1[2] = (uint)(0);
      return;
    }
    if (param_2 < param_2 + 0x23) {
      pvVar1 = (void *)(operator_new(param_2 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void**)(uVar2 - 4) = (void *)(pvVar1);
        *param_1 = (uint)(uVar2);
        param_1[1] = (uint)(uVar2);
        param_1[2] = (uint)(uVar2 + param_2);
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
    return (uint)(0x4ec4ec4);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10603e90; body size 49 bytes.
#line 1 "ENTRY_10603e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603e90(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10603ed0; body size 49 bytes.
#line 1 "ENTRY_10603ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603ed0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10603f10; body size 49 bytes.
#line 1 "ENTRY_10603f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603f10(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10603f50; body size 62 bytes.
#line 1 "ENTRY_10603f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10603f50(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0xc);
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x15555555);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10605180; body size 18 bytes.
#line 1 "ENTRY_10605180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10605180(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eac8d0());
  return (bool)(iVar1 != 1);
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
  return (undefined4)(param_2);
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
  
  if ((int)((param_1 + 0x18)) == *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f34e0(*(int *)(param_1 + 0x18),param_2);
  }
  else {
    thunk_FUN_105f5a00(param_2);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (param_3 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4*)(iVar1 + -0x1c) = (undefined4)(5);
      return;
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4*)(iVar1 + -0x1c) = (undefined4)(1);
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
  
  if ((int)((param_1 + 0x18)) == *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f36d0(*(int *)(param_1 + 0x18),param_2);
  }
  else {
    thunk_FUN_105f5df0(param_2);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (param_3 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4*)(iVar1 + -0x1c) = (undefined4)(5);
      return;
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4*)(iVar1 + -0x1c) = (undefined4)(1);
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
  
  if ((int)((param_1 + 0x18)) == *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f38c0(*(int *)(param_1 + 0x18),param_2);
  }
  else {
    thunk_FUN_105f60e0(param_2);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (param_3 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4*)(iVar1 + -0x1c) = (undefined4)(5);
      return;
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4*)(iVar1 + -0x1c) = (undefined4)(1);
    }
  }
  return;
}


// Reference entry 1061c270; body size 42 bytes.
#line 1 "ENTRY_1061c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1061c270(undefined4 param_2)
{
  int param_1 = (int )this;
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f4a20(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x34);
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
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f5a00(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
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
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f5df0(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
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
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_105f60e0(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_105f38c0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 1061e3d0; body size 57 bytes.
#line 1 "ENTRY_1061e3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061e3d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1061e7f0; body size 67 bytes.
#line 1 "ENTRY_1061e7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061e7f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizard);
  param_1[0x3a] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 1061e850; body size 67 bytes.
#line 1 "ENTRY_1061e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061e850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardDonePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardDonePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardDonePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardDonePage);
  param_1[0x38] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1061e9b0; body size 57 bytes.
#line 1 "ENTRY_1061e9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061e9b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1061eb00; body size 64 bytes.
#line 1 "ENTRY_1061eb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061eb00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardIntroPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1061ec50; body size 84 bytes.
#line 1 "ENTRY_1061ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1061ec50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubmitDiagsWizardSubmittingPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3a) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1061f1f0; body size 38 bytes.
#line 1 "ENTRY_1061f1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f1f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1061f2d0; body size 11 bytes.
#line 1 "ENTRY_1061f2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f2d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1061f2e0; body size 11 bytes.
#line 1 "ENTRY_1061f2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f2e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1061f2f0; body size 11 bytes.
#line 1 "ENTRY_1061f2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f2f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1061f670; body size 21 bytes.
#line 1 "ENTRY_1061f670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f670(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2244 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1061f690; body size 38 bytes.
#line 1 "ENTRY_1061f690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f690(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2240 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1061f6e0; body size 38 bytes.
#line 1 "ENTRY_1061f6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f6e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2238 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1061f7e0; body size 21 bytes.
#line 1 "ENTRY_1061f7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1061f7e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a223c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
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
  
  if ((int *)((param_2)) == (int *)(param_1)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(param_2[-2]);
    piVar4 = (int *)(param_2 + -2);
    piVar3 = (int *)(param_3 + -2);
    if (iVar2 != *piVar3) {
      piVar1 = (int *)((int *)param_3[-1]);
      if ((int *)(piVar1) != (int *)0x0) {
        *piVar3 = (int)(0);
        param_3[-1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*piVar4);
      }
      *piVar3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[-1]);
      param_3[-1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = (int *)(piVar3);
    param_2 = (int *)(piVar4);
  } while ((int *)(piVar4) != (int *)(param_1));
  return (int *)(piVar3);
}


// Reference entry 10623e70; body size 92 bytes.
#line 1 "ENTRY_10623e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10623e70(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((int *)(param_1) == (int *)(param_2)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(*param_1);
    if (iVar2 != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if ((int *)(piVar1) != (int *)0x0) {
        *param_3 = (int)(0);
        param_3[1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*param_1);
      }
      *param_3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_1[1]);
      param_3[1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 106243c0; body size 33 bytes.
#line 1 "ENTRY_106243c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * FUN_106243c0(uint *param_1,uint *param_2)

{
  if (((int)param_2[1] <= (int)param_1[1]) &&
     (((int)param_2[1] < (int)param_1[1] || (*param_2 < *param_1)))) {
    return (uint *)(param_2);
  }
  return (uint *)(param_1);
}


// Reference entry 10624400; body size 57 bytes.
#line 1 "ENTRY_10624400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10624400(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 10627bf0; body size 84 bytes.
#line 1 "ENTRY_10627bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10627bf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductCheckRunningLegacySWPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10628120; body size 57 bytes.
#line 1 "ENTRY_10628120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10628120(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductConnectingProductPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106286e0; body size 57 bytes.
#line 1 "ENTRY_106286e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106286e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradeIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10628830; body size 84 bytes.
#line 1 "ENTRY_10628830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10628830(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductFirmwareDowngradingPage);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3b) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10628f70; body size 57 bytes.
#line 1 "ENTRY_10628f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10628f70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106292d0; body size 57 bytes.
#line 1 "ENTRY_106292d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106292d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductJoinProductFailurePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10629630; body size 57 bytes.
#line 1 "ENTRY_10629630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629630(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOptionsPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOptionsPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOptionsPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOptionsPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10629780; body size 57 bytes.
#line 1 "ENTRY_10629780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductOutroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10629ae0; body size 57 bytes.
#line 1 "ENTRY_10629ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10629c30; body size 57 bytes.
#line 1 "ENTRY_10629c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSearchingRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10629f90; body size 84 bytes.
#line 1 "ENTRY_10629f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10629f90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSelectionPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSelectionPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSelectionPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSwgenDowngradeProductSelectionPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3b) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1062c180; body size 11 bytes.
#line 1 "ENTRY_1062c180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c180(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c190; body size 11 bytes.
#line 1 "ENTRY_1062c190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c190(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c1a0; body size 11 bytes.
#line 1 "ENTRY_1062c1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c1a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c1b0; body size 11 bytes.
#line 1 "ENTRY_1062c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c1b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c1c0; body size 11 bytes.
#line 1 "ENTRY_1062c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c1c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c1d0; body size 11 bytes.
#line 1 "ENTRY_1062c1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c1d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c1e0; body size 11 bytes.
#line 1 "ENTRY_1062c1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c1e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c1f0; body size 11 bytes.
#line 1 "ENTRY_1062c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c1f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c200; body size 11 bytes.
#line 1 "ENTRY_1062c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c200(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c210; body size 11 bytes.
#line 1 "ENTRY_1062c210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c210(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c220; body size 11 bytes.
#line 1 "ENTRY_1062c220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c220(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c230; body size 11 bytes.
#line 1 "ENTRY_1062c230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c230(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c240; body size 11 bytes.
#line 1 "ENTRY_1062c240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c240(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c250; body size 11 bytes.
#line 1 "ENTRY_1062c250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c250(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c260; body size 11 bytes.
#line 1 "ENTRY_1062c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c260(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c270; body size 11 bytes.
#line 1 "ENTRY_1062c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c270(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c280; body size 11 bytes.
#line 1 "ENTRY_1062c280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c280(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c290; body size 11 bytes.
#line 1 "ENTRY_1062c290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c290(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c2a0; body size 11 bytes.
#line 1 "ENTRY_1062c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c2a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c2b0; body size 11 bytes.
#line 1 "ENTRY_1062c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c2b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c2c0; body size 11 bytes.
#line 1 "ENTRY_1062c2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c2c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c2d0; body size 11 bytes.
#line 1 "ENTRY_1062c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c2d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c2e0; body size 11 bytes.
#line 1 "ENTRY_1062c2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c2e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c2f0; body size 11 bytes.
#line 1 "ENTRY_1062c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c2f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c300; body size 11 bytes.
#line 1 "ENTRY_1062c300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c300(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c310; body size 11 bytes.
#line 1 "ENTRY_1062c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c310(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c320; body size 11 bytes.
#line 1 "ENTRY_1062c320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c320(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c330; body size 11 bytes.
#line 1 "ENTRY_1062c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c330(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c340; body size 11 bytes.
#line 1 "ENTRY_1062c340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c340(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062c480; body size 38 bytes.
#line 1 "ENTRY_1062c480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c4b0; body size 38 bytes.
#line 1 "ENTRY_1062c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c4b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c4e0; body size 38 bytes.
#line 1 "ENTRY_1062c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c510; body size 38 bytes.
#line 1 "ENTRY_1062c510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c540; body size 38 bytes.
#line 1 "ENTRY_1062c540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c570; body size 38 bytes.
#line 1 "ENTRY_1062c570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c5d0; body size 38 bytes.
#line 1 "ENTRY_1062c5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c5d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c600; body size 38 bytes.
#line 1 "ENTRY_1062c600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c630; body size 38 bytes.
#line 1 "ENTRY_1062c630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c660; body size 38 bytes.
#line 1 "ENTRY_1062c660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c690; body size 38 bytes.
#line 1 "ENTRY_1062c690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c6c0; body size 38 bytes.
#line 1 "ENTRY_1062c6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c6f0; body size 38 bytes.
#line 1 "ENTRY_1062c6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062c720; body size 38 bytes.
#line 1 "ENTRY_1062c720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062c720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062ce80; body size 38 bytes.
#line 1 "ENTRY_1062ce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062ce80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062ceb0; body size 21 bytes.
#line 1 "ENTRY_1062ceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062ceb0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062ced0; body size 38 bytes.
#line 1 "ENTRY_1062ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062ced0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062cf00; body size 21 bytes.
#line 1 "ENTRY_1062cf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cf00(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062cf20; body size 38 bytes.
#line 1 "ENTRY_1062cf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cf20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062cf50; body size 21 bytes.
#line 1 "ENTRY_1062cf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cf50(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062cf70; body size 38 bytes.
#line 1 "ENTRY_1062cf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cf70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062cfa0; body size 21 bytes.
#line 1 "ENTRY_1062cfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cfa0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062cfc0; body size 38 bytes.
#line 1 "ENTRY_1062cfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cfc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062cff0; body size 21 bytes.
#line 1 "ENTRY_1062cff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062cff0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d0c0; body size 21 bytes.
#line 1 "ENTRY_1062d0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d0c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d0e0; body size 38 bytes.
#line 1 "ENTRY_1062d0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d0e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d110; body size 21 bytes.
#line 1 "ENTRY_1062d110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d110(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d1d0; body size 21 bytes.
#line 1 "ENTRY_1062d1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d1d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d1f0; body size 38 bytes.
#line 1 "ENTRY_1062d1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d1f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 1062d220; body size 21 bytes.
#line 1 "ENTRY_1062d220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d220(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22dc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d2e0; body size 21 bytes.
#line 1 "ENTRY_1062d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d2e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d300; body size 38 bytes.
#line 1 "ENTRY_1062d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d330; body size 21 bytes.
#line 1 "ENTRY_1062d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d330(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d350; body size 38 bytes.
#line 1 "ENTRY_1062d350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d350(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 1062d380; body size 21 bytes.
#line 1 "ENTRY_1062d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d380(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22f8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d450; body size 21 bytes.
#line 1 "ENTRY_1062d450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d450(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22fc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d510; body size 21 bytes.
#line 1 "ENTRY_1062d510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d510(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2300 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d530; body size 38 bytes.
#line 1 "ENTRY_1062d530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d560; body size 21 bytes.
#line 1 "ENTRY_1062d560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d560(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22f4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d580; body size 38 bytes.
#line 1 "ENTRY_1062d580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d5b0; body size 21 bytes.
#line 1 "ENTRY_1062d5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d5b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d5d0; body size 38 bytes.
#line 1 "ENTRY_1062d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d5d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2298 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d620; body size 38 bytes.
#line 1 "ENTRY_1062d620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d650; body size 21 bytes.
#line 1 "ENTRY_1062d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d650(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d670; body size 38 bytes.
#line 1 "ENTRY_1062d670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d670(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 1062d6a0; body size 21 bytes.
#line 1 "ENTRY_1062d6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d6a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d6c0; body size 38 bytes.
#line 1 "ENTRY_1062d6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d6f0; body size 21 bytes.
#line 1 "ENTRY_1062d6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d6f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d710; body size 38 bytes.
#line 1 "ENTRY_1062d710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d710(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 1062d740; body size 21 bytes.
#line 1 "ENTRY_1062d740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d740(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2294 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d760; body size 38 bytes.
#line 1 "ENTRY_1062d760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d760(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2304 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d7b0; body size 38 bytes.
#line 1 "ENTRY_1062d7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d7b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d7e0; body size 21 bytes.
#line 1 "ENTRY_1062d7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d7e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d800; body size 38 bytes.
#line 1 "ENTRY_1062d800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d800(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 1062d830; body size 21 bytes.
#line 1 "ENTRY_1062d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d830(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a229c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d850; body size 38 bytes.
#line 1 "ENTRY_1062d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d850(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 1062d880; body size 21 bytes.
#line 1 "ENTRY_1062d880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d880(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22a0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d8a0; body size 38 bytes.
#line 1 "ENTRY_1062d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d8d0; body size 21 bytes.
#line 1 "ENTRY_1062d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d8d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d9a0; body size 21 bytes.
#line 1 "ENTRY_1062d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d9a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22a4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062d9c0; body size 38 bytes.
#line 1 "ENTRY_1062d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d9c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062d9f0; body size 21 bytes.
#line 1 "ENTRY_1062d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062d9f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1062da10; body size 38 bytes.
#line 1 "ENTRY_1062da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062da10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1062da40; body size 21 bytes.
#line 1 "ENTRY_1062da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1062da40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a22d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
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


// Reference entry 1063a6d0; body size 22 bytes.
#line 1 "ENTRY_1063a6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1063a6d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2);
  (**(code **)*param_1)(param_2);
  thunk_FUN_10ec7200(uVar1);
  return (undefined4)(param_2);
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
  return (undefined4)(param_1);
}


// Reference entry 10648180; body size 25 bytes.
#line 1 "ENTRY_10648180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10648180(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106481a0; body size 25 bytes.
#line 1 "ENTRY_106481a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106481a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10649850; body size 57 bytes.
#line 1 "ENTRY_10649850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10649850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1064d6e0; body size 52 bytes.
#line 1 "ENTRY_1064d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d6e0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1064d730; body size 52 bytes.
#line 1 "ENTRY_1064d730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1064d730(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 1064dc60; body size 57 bytes.
#line 1 "ENTRY_1064dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064dc60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductAddAnotherProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductAddAnotherProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductAddAnotherProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductAddAnotherProductPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1064ebc0; body size 57 bytes.
#line 1 "ENTRY_1064ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064ebc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductConnectionLastResortPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductConnectionLastResortPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductConnectionLastResortPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductConnectionLastResortPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1064ed10; body size 57 bytes.
#line 1 "ENTRY_1064ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064ed10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductContinueConfigurationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductContinueConfigurationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductContinueConfigurationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductContinueConfigurationPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1064ee60; body size 57 bytes.
#line 1 "ENTRY_1064ee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064ee60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductDeactivatedErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductDeactivatedErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductDeactivatedErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductDeactivatedErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1064efb0; body size 93 bytes.
#line 1 "ENTRY_1064efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064efb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductDefaultIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductDefaultIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductDefaultIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductDefaultIntroPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x3a) = (undefined2)(0);
  *(undefined1*)(param_1 + 0x3c) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1064f340; body size 57 bytes.
#line 1 "ENTRY_1064f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064f340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductFatalVerificationErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductFatalVerificationErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductFatalVerificationErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductFatalVerificationErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1064f490; body size 64 bytes.
#line 1 "ENTRY_1064f490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1064f490(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductFinishConfigurationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductFinishConfigurationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductFinishConfigurationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductFinishConfigurationPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10650030; body size 64 bytes.
#line 1 "ENTRY_10650030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10650030(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductLegacyOnlyPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductLegacyOnlyPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductLegacyOnlyPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductLegacyOnlyPage);
  *(undefined1*)((int)param_1 + 0xe1) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10650540; body size 93 bytes.
#line 1 "ENTRY_10650540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10650540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductNotificationIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductNotificationIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductNotificationIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductNotificationIntroPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x3a) = (undefined2)(0);
  *(undefined1*)(param_1 + 0x3c) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106506c0; body size 57 bytes.
#line 1 "ENTRY_106506c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106506c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroFailurePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroFailurePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroFailurePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroFailurePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10650810; body size 86 bytes.
#line 1 "ENTRY_10650810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10650810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductOutroPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x3a) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106513d0; body size 114 bytes.
#line 1 "ENTRY_106513d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106513d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductSelectionIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductSelectionIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductSelectionIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductSelectionIntroPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3e) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10651560; body size 57 bytes.
#line 1 "ENTRY_10651560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10651560(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductTempWireInstructionsPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductTempWireInstructionsPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductTempWireInstructionsPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductTempWireInstructionsPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106518c0; body size 57 bytes.
#line 1 "ENTRY_106518c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106518c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductVanishedProductErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddProductVanishedProductErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddProductVanishedProductErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddProductVanishedProductErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10653f20; body size 24 bytes.
#line 1 "ENTRY_10653f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10653f20(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  return (SCStr *)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 10654210; body size 122 bytes.
#line 1 "ENTRY_10654210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10654210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpPerformQueue);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpPerformQueue);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  *(undefined2*)(param_1 + 0xc) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x32) = (undefined1)(0);
  param_1[0xd] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10654620; body size 11 bytes.
#line 1 "ENTRY_10654620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654620(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654630; body size 11 bytes.
#line 1 "ENTRY_10654630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654630(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654640; body size 11 bytes.
#line 1 "ENTRY_10654640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654640(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654650; body size 11 bytes.
#line 1 "ENTRY_10654650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654650(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654660; body size 11 bytes.
#line 1 "ENTRY_10654660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654660(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654670; body size 11 bytes.
#line 1 "ENTRY_10654670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654670(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654680; body size 11 bytes.
#line 1 "ENTRY_10654680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654680(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654690; body size 11 bytes.
#line 1 "ENTRY_10654690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654690(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106546a0; body size 11 bytes.
#line 1 "ENTRY_106546a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106546b0; body size 11 bytes.
#line 1 "ENTRY_106546b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106546c0; body size 11 bytes.
#line 1 "ENTRY_106546c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106546d0; body size 11 bytes.
#line 1 "ENTRY_106546d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106546e0; body size 11 bytes.
#line 1 "ENTRY_106546e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106546f0; body size 11 bytes.
#line 1 "ENTRY_106546f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106546f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654700; body size 11 bytes.
#line 1 "ENTRY_10654700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654700(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654710; body size 11 bytes.
#line 1 "ENTRY_10654710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654710(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654720; body size 11 bytes.
#line 1 "ENTRY_10654720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654720(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654730; body size 11 bytes.
#line 1 "ENTRY_10654730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654730(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654740; body size 11 bytes.
#line 1 "ENTRY_10654740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654740(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654750; body size 11 bytes.
#line 1 "ENTRY_10654750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654750(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654760; body size 11 bytes.
#line 1 "ENTRY_10654760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654760(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654770; body size 11 bytes.
#line 1 "ENTRY_10654770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654770(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654780; body size 11 bytes.
#line 1 "ENTRY_10654780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654780(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654790; body size 11 bytes.
#line 1 "ENTRY_10654790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654790(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106547a0; body size 11 bytes.
#line 1 "ENTRY_106547a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106547b0; body size 11 bytes.
#line 1 "ENTRY_106547b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106547c0; body size 11 bytes.
#line 1 "ENTRY_106547c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106547d0; body size 11 bytes.
#line 1 "ENTRY_106547d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106547e0; body size 11 bytes.
#line 1 "ENTRY_106547e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106547f0; body size 11 bytes.
#line 1 "ENTRY_106547f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106547f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654800; body size 11 bytes.
#line 1 "ENTRY_10654800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654800(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654810; body size 11 bytes.
#line 1 "ENTRY_10654810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654810(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654820; body size 11 bytes.
#line 1 "ENTRY_10654820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654820(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654830; body size 11 bytes.
#line 1 "ENTRY_10654830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654830(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654840; body size 11 bytes.
#line 1 "ENTRY_10654840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654840(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654850; body size 11 bytes.
#line 1 "ENTRY_10654850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654850(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654860; body size 11 bytes.
#line 1 "ENTRY_10654860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654860(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654870; body size 11 bytes.
#line 1 "ENTRY_10654870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654870(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10654a40; body size 38 bytes.
#line 1 "ENTRY_10654a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654a70; body size 38 bytes.
#line 1 "ENTRY_10654a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654aa0; body size 38 bytes.
#line 1 "ENTRY_10654aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654ad0; body size 38 bytes.
#line 1 "ENTRY_10654ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654b00; body size 38 bytes.
#line 1 "ENTRY_10654b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654b30; body size 38 bytes.
#line 1 "ENTRY_10654b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654b60; body size 38 bytes.
#line 1 "ENTRY_10654b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654b90; body size 38 bytes.
#line 1 "ENTRY_10654b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654bc0; body size 38 bytes.
#line 1 "ENTRY_10654bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654bf0; body size 38 bytes.
#line 1 "ENTRY_10654bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654bf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654c20; body size 38 bytes.
#line 1 "ENTRY_10654c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654c20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654c50; body size 38 bytes.
#line 1 "ENTRY_10654c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654c80; body size 38 bytes.
#line 1 "ENTRY_10654c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654cb0; body size 38 bytes.
#line 1 "ENTRY_10654cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654ce0; body size 38 bytes.
#line 1 "ENTRY_10654ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654d10; body size 38 bytes.
#line 1 "ENTRY_10654d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654d10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654d40; body size 38 bytes.
#line 1 "ENTRY_10654d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654d40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654d70; body size 38 bytes.
#line 1 "ENTRY_10654d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654da0; body size 38 bytes.
#line 1 "ENTRY_10654da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654dd0; body size 38 bytes.
#line 1 "ENTRY_10654dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654e00; body size 38 bytes.
#line 1 "ENTRY_10654e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10654e30; body size 38 bytes.
#line 1 "ENTRY_10654e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10654e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655280; body size 38 bytes.
#line 1 "ENTRY_10655280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106552b0; body size 21 bytes.
#line 1 "ENTRY_106552b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106552b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2388 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106552d0; body size 38 bytes.
#line 1 "ENTRY_106552d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106552d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10655300; body size 21 bytes.
#line 1 "ENTRY_10655300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655300(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106553c0; body size 21 bytes.
#line 1 "ENTRY_106553c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106553c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2390 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106553e0; body size 38 bytes.
#line 1 "ENTRY_106553e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106553e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655410; body size 21 bytes.
#line 1 "ENTRY_10655410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655410(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2394 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655430; body size 38 bytes.
#line 1 "ENTRY_10655430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655460; body size 21 bytes.
#line 1 "ENTRY_10655460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655460(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2378 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655480; body size 38 bytes.
#line 1 "ENTRY_10655480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106554b0; body size 21 bytes.
#line 1 "ENTRY_106554b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106554b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106554d0; body size 38 bytes.
#line 1 "ENTRY_106554d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106554d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655500; body size 21 bytes.
#line 1 "ENTRY_10655500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655500(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2398 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655520; body size 38 bytes.
#line 1 "ENTRY_10655520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655550; body size 21 bytes.
#line 1 "ENTRY_10655550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655550(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2374 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655570; body size 38 bytes.
#line 1 "ENTRY_10655570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106555a0; body size 21 bytes.
#line 1 "ENTRY_106555a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106555a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106555c0; body size 38 bytes.
#line 1 "ENTRY_106555c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106555c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 106555f0; body size 21 bytes.
#line 1 "ENTRY_106555f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106555f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23fc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655610; body size 38 bytes.
#line 1 "ENTRY_10655610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655610(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10655640; body size 21 bytes.
#line 1 "ENTRY_10655640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655640(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655660; body size 38 bytes.
#line 1 "ENTRY_10655660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655660(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10655690; body size 21 bytes.
#line 1 "ENTRY_10655690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655690(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23f8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655760; body size 21 bytes.
#line 1 "ENTRY_10655760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655760(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a236c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655780; body size 38 bytes.
#line 1 "ENTRY_10655780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106557b0; body size 21 bytes.
#line 1 "ENTRY_106557b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106557b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a237c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106557d0; body size 38 bytes.
#line 1 "ENTRY_106557d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106557d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10655800; body size 21 bytes.
#line 1 "ENTRY_10655800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655800(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23f4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655820; body size 38 bytes.
#line 1 "ENTRY_10655820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655820(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10655850; body size 21 bytes.
#line 1 "ENTRY_10655850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655850(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655870; body size 38 bytes.
#line 1 "ENTRY_10655870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106558a0; body size 21 bytes.
#line 1 "ENTRY_106558a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106558a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106558c0; body size 38 bytes.
#line 1 "ENTRY_106558c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106558c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106558f0; body size 21 bytes.
#line 1 "ENTRY_106558f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106558f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a239c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655910; body size 38 bytes.
#line 1 "ENTRY_10655910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655940; body size 21 bytes.
#line 1 "ENTRY_10655940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655940(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2384 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655960; body size 38 bytes.
#line 1 "ENTRY_10655960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655990; body size 21 bytes.
#line 1 "ENTRY_10655990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655990(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106559b0; body size 38 bytes.
#line 1 "ENTRY_106559b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106559b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106559e0; body size 21 bytes.
#line 1 "ENTRY_106559e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106559e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655a00; body size 38 bytes.
#line 1 "ENTRY_10655a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655a00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10655a30; body size 21 bytes.
#line 1 "ENTRY_10655a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655a30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655a50; body size 38 bytes.
#line 1 "ENTRY_10655a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655a50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655a80; body size 21 bytes.
#line 1 "ENTRY_10655a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655a80(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655b40; body size 21 bytes.
#line 1 "ENTRY_10655b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655b40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a238c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655c10; body size 21 bytes.
#line 1 "ENTRY_10655c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655c10(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2368 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655c30; body size 38 bytes.
#line 1 "ENTRY_10655c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655c30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10655c60; body size 21 bytes.
#line 1 "ENTRY_10655c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655c60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655d30; body size 21 bytes.
#line 1 "ENTRY_10655d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655d30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23dc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655d50; body size 38 bytes.
#line 1 "ENTRY_10655d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655d80; body size 21 bytes.
#line 1 "ENTRY_10655d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655d80(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2380 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655da0; body size 38 bytes.
#line 1 "ENTRY_10655da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655dd0; body size 21 bytes.
#line 1 "ENTRY_10655dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655dd0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655df0; body size 38 bytes.
#line 1 "ENTRY_10655df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655e20; body size 21 bytes.
#line 1 "ENTRY_10655e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655e20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655e40; body size 38 bytes.
#line 1 "ENTRY_10655e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655e70; body size 21 bytes.
#line 1 "ENTRY_10655e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655e70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655e90; body size 38 bytes.
#line 1 "ENTRY_10655e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10655ec0; body size 21 bytes.
#line 1 "ENTRY_10655ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655ec0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655fa0; body size 21 bytes.
#line 1 "ENTRY_10655fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655fa0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2370 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10655fc0; body size 38 bytes.
#line 1 "ENTRY_10655fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655fc0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10655ff0; body size 21 bytes.
#line 1 "ENTRY_10655ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10655ff0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10656010; body size 38 bytes.
#line 1 "ENTRY_10656010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10656040; body size 21 bytes.
#line 1 "ENTRY_10656040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656040(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10656060; body size 38 bytes.
#line 1 "ENTRY_10656060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656060(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
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


// Reference entry 10656090; body size 21 bytes.
#line 1 "ENTRY_10656090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656090(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106560b0; body size 38 bytes.
#line 1 "ENTRY_106560b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106560b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106560e0; body size 21 bytes.
#line 1 "ENTRY_106560e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106560e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23a4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10656100; body size 38 bytes.
#line 1 "ENTRY_10656100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10656130; body size 21 bytes.
#line 1 "ENTRY_10656130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656130(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a23a0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10656b00; body size 31 bytes.
#line 1 "ENTRY_10656b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10656b00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10648010(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10656ba0; body size 25 bytes.
#line 1 "ENTRY_10656ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10656ba0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 1065a470; body size 31 bytes.
#line 1 "ENTRY_1065a470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1065a470(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1065a4a0; body size 31 bytes.
#line 1 "ENTRY_1065a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1065a4a0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1065a500; body size 131 bytes.
#line 1 "ENTRY_1065a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1065a500(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x71c71c8) {
    param_2 = (uint)(param_2 * 0x24);
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        pvVar1 = (void *)(operator_new(param_2));
        *param_1 = (uint)((uint)pvVar1);
        param_1[1] = (uint)((uint)pvVar1);
        param_1[2] = (uint)((uint)((int)pvVar1 + param_2));
        return;
      }
      *param_1 = (uint)(0);
      param_1[1] = (uint)(0);
      param_1[2] = (uint)(0);
      return;
    }
    if (param_2 < param_2 + 0x23) {
      pvVar1 = (void *)(operator_new(param_2 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void**)(uVar2 - 4) = (void *)(pvVar1);
        *param_1 = (uint)(uVar2);
        param_1[1] = (uint)(uVar2);
        param_1[2] = (uint)(uVar2 + param_2);
        return;
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1065a5b0; body size 182 bytes.
#line 1 "ENTRY_1065a5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1065a5b0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_1036efe0();
  }
  iVar2 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar2 >> 3);
  if (0x1fffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = (uint)(0x1fffffff);
  }
  else {
    uVar3 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar3 < param_2) {
      uVar3 = (uint)(param_2);
    }
  }
  if (iVar2 != 0) {
    thunk_FUN_10352a90(iVar2,param_1[1],param_1);
    iVar2 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar2 & 0xfffffff8);
    iVar1 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar1 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar1) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar1,uVar4);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  iVar2 = (int)(thunk_FUN_10370f20(uVar3));
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 1065acf0; body size 26 bytes.
#line 1 "ENTRY_1065acf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1065acf0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1065af80; body size 90 bytes.
#line 1 "ENTRY_1065af80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1065af80(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1065b000; body size 90 bytes.
#line 1 "ENTRY_1065b000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1065b000(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1065e690; body size 57 bytes.
#line 1 "ENTRY_1065e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1065e690(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1065e6e0; body size 57 bytes.
#line 1 "ENTRY_1065e6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1065e6e0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1067f340; body size 31 bytes.
#line 1 "ENTRY_1067f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067f340(undefined4 *param_2)
{
  int param_1 = (int )this;
  if ((undefined4 *)((param_1 + 0x110)) != (undefined4 *)(param_2)) {
    thunk_FUN_10648010(*param_2,param_2[1],param_2);
  }
  return;
}


// Reference entry 1067fb10; body size 26 bytes.
#line 1 "ENTRY_1067fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067fb10(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1067fb30; body size 76 bytes.
#line 1 "ENTRY_1067fb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1067fb30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return;
      }
    }
    else {
      *(int**)(param_1 + 0x24) = (int *)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  return;
}


// Reference entry 10681440; body size 33 bytes.
#line 1 "ENTRY_10681440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10681440(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10681470; body size 33 bytes.
#line 1 "ENTRY_10681470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10681470(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 106814a0; body size 33 bytes.
#line 1 "ENTRY_106814a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106814a0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 106814d0; body size 33 bytes.
#line 1 "ENTRY_106814d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106814d0(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10681500; body size 33 bytes.
#line 1 "ENTRY_10681500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10681500(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10681530; body size 33 bytes.
#line 1 "ENTRY_10681530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10681530(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10681560; body size 33 bytes.
#line 1 "ENTRY_10681560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10681560(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 10681590; body size 33 bytes.
#line 1 "ENTRY_10681590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10681590(char *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->int_allocRep(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (SCStr *)(param_1);
}


// Reference entry 106817c0; body size 38 bytes.
#line 1 "ENTRY_106817c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106817c0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10681810; body size 40 bytes.
#line 1 "ENTRY_10681810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10681810(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10681890; body size 25 bytes.
#line 1 "ENTRY_10681890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10681890(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106818b0; body size 25 bytes.
#line 1 "ENTRY_106818b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106818b0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10682600; body size 37 bytes.
#line 1 "ENTRY_10682600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682600(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10682630; body size 37 bytes.
#line 1 "ENTRY_10682630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10682630(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10682660; body size 92 bytes.
#line 1 "ENTRY_10682660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10682660(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((int *)(param_1) == (int *)(param_2)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(*param_1);
    if (iVar2 != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if ((int *)(piVar1) != (int *)0x0) {
        *param_3 = (int)(0);
        param_3[1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*param_1);
      }
      *param_3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_1[1]);
      param_3[1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 10683380; body size 52 bytes.
#line 1 "ENTRY_10683380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10683380(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10683550; body size 33 bytes.
#line 1 "ENTRY_10683550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10683550(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 106846b0; body size 11 bytes.
#line 1 "ENTRY_106846b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106846b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVerifyUrlPostRequest);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlRequest);

  ((SCStr *)((SCStr *)(param_1 + 0x12)))->int_release();
  param_1[0x12] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[0x11]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x10] = (undefined4)(0);
    param_1[0x11] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xf]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xe] = (undefined4)(0);
    param_1[0xf] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10120220();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10684c50; body size 29 bytes.
#line 1 "ENTRY_10684c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10684c50(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(param_2,&stack0x00000008);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10684fd0; body size 31 bytes.
#line 1 "ENTRY_10684fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10684fd0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10685000; body size 31 bytes.
#line 1 "ENTRY_10685000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10685000(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10685070; body size 49 bytes.
#line 1 "ENTRY_10685070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10685070(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10685140; body size 14 bytes.
#line 1 "ENTRY_10685140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10685140(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10685160; body size 14 bytes.
#line 1 "ENTRY_10685160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10685160(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10685900; body size 30 bytes.
#line 1 "ENTRY_10685900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10685900(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)(*(char *)(*(int *)(param_1 + 8) + 0xd));
  iVar2 = (int)(*(int *)(param_1 + 8));
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = (int)(*(int *)(iVar3 + 8));
    cVar1 = (char)(*(char *)(iVar2 + 0xd));
    param_1 = (int)(iVar3);
  }
  return (int)(param_1);
}


// Reference entry 10685d40; body size 97 bytes.
#line 1 "ENTRY_10685d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10685d40(uint param_1)

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
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10685dc0; body size 90 bytes.
#line 1 "ENTRY_10685dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10685dc0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10685e40; body size 87 bytes.
#line 1 "ENTRY_10685e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10685e40(uint param_1)

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
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10685f80; body size 13 bytes.
#line 1 "ENTRY_10685f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10685f80(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)(0x0)) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    return;
  }
  return;
}


// Reference entry 10686260; body size 63 bytes.
#line 1 "ENTRY_10686260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10686260(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x1c);
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


// Reference entry 106862b0; body size 57 bytes.
#line 1 "ENTRY_106862b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106862b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10686300; body size 66 bytes.
#line 1 "ENTRY_10686300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10686300(int param_1,int param_2)

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


// Reference entry 10686360; body size 60 bytes.
#line 1 "ENTRY_10686360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10686360(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x18);
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


// Reference entry 10686430; body size 13 bytes.
#line 1 "ENTRY_10686430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10686430(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)(0x0)) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))();
    return;
  }
  return;
}


// Reference entry 10687d10; body size 40 bytes.
#line 1 "ENTRY_10687d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10687d10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10687e50; body size 27 bytes.
#line 1 "ENTRY_10687e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10687e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10688020; body size 154 bytes.
#line 1 "ENTRY_10688020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10688020(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  iVar1 = (int)(*(int *)(*(int *)(param_2 + 4) + 4));
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  pcVar5 = (char *)("CreateObject");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("CreateObject",uVar3));
  thunk_FUN_111c0760(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x36f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106885e0; body size 87 bytes.
#line 1 "ENTRY_106885e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106885e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10200aa0(param_2,param_3,param_4,param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10688ad0; body size 28 bytes.
#line 1 "ENTRY_10688ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDCreateObjectAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)(undefined4 *)(param_1[0x2a5e]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10688c90; body size 56 bytes.
#line 1 "ENTRY_10688c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10688c90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCShareBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  thunk_FUN_110a9ef0();
  thunk_FUN_10203dc0();
  return;
}


// Reference entry 1068c040; body size 241 bytes.
#line 1 "ENTRY_1068c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __thiscall Recovered_Bulk::FUN_1068c040(char *param_2)
{
  void *param_1 = (void *)this;
  char cVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  void *pvStack_4;
  
  pcVar5 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar5);
    pcVar5 = (char *)(pcVar5 + 1);
  } while (cVar1 != '\0');
  pvVar2 = (void *)(*(void **)((int)param_1 + 0x7f8));
  pcVar5 = (char *)(pcVar5 + (1 - (int)(param_2 + 1)));
  if (((void *)(pvVar2) == (void *)0x0) && (pcVar5 < (char *)0x1ff)) {
    pvVar4 = (void *)((void *)((int)param_1 + 0x7f8));
    pvVar2 = (void *)(param_1);
    goto LAB_1068c0d1;
  }
  pvStack_4 = (void *)(param_1);
  if (*(char **)((int)param_1 + 0x7fc) < pcVar5) {
    free(pvVar2);
    *(undefined4*)((int)param_1 + 0x7f8) = (undefined4)(0);
LAB_1068c09d:
    *(char**)((int)param_1 + 0x7fc) = (char *)(pcVar5);
    pvVar2 = (void *)((void *)thunk_FUN_1148b586(-(uint)((int)((unsigned long long)(pcVar5) * 4 >> 0x20) != 0) |
                                        (uint)((unsigned long long)(pcVar5) * 4)));
    *(void**)((int)param_1 + 0x7f8) = (void *)(pvVar2);
  }
  else if ((void *)(pvVar2) == (void *)0x0) goto LAB_1068c09d;
  pvVar4 = (void *)((void *)((int)pvVar2 + *(int *)((int)param_1 + 0x7fc) * 4));
LAB_1068c0d1:
  pvStack_4 = (void *)(pvVar2);
  iVar3 = (int)(thunk_FUN_11068c30(&param_2,param_2 + (int)pcVar5,&pvStack_4,pvVar4,1));
  pvVar2 = (void *)(param_1);
  if (*(void **)((int)param_1 + 0x7f8) != (void *)0x0) {
    pvVar2 = (void *)(*(void **)((int)param_1 + 0x7f8));
  }
  if ((iVar3 == 0) && (pvVar2 < pvStack_4)) {
    *(int*)((int)param_1 + 0x800) = (int)(((int)pvStack_4 - (int)pvVar2 >> 2) + -1);
    return (void *)(pvVar2);
  }
  *(undefined4*)((int)param_1 + 0x800) = (undefined4)(0);
  return (void *)(pvVar2);
}


// Reference entry 1068c740; body size 34 bytes.
#line 1 "ENTRY_1068c740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall Recovered_Bulk::FUN_1068c740(int *param_2)
{
  uint *param_1 = (uint *)this;
  int iVar1;
  
  *param_1 = (uint)(0);
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  *param_1 = (uint)(-(uint)(iVar1 != 0) & iVar1 + 8U);
  return (uint *)(param_1);
}


// Reference entry 1068d7d0; body size 148 bytes.
#line 1 "ENTRY_1068d7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1068d7d0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8);
    thunk_FUN_1068dd40(param_1,iVar1 + param_1,param_1 + iVar2 * 0x10,param_4);
    thunk_FUN_1068dd40(param_2 + iVar2 * -8,param_2,iVar1 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_1068dd40(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_1068dd40(param_1 + iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_1068dd40(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 1068ddc0; body size 93 bytes.
#line 1 "ENTRY_1068ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1068ddc0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)((param_2)) == (int *)(param_1)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(param_2[-2]);
    piVar4 = (int *)(param_2 + -2);
    piVar3 = (int *)(param_3 + -2);
    if (iVar2 != *piVar3) {
      piVar1 = (int *)((int *)param_3[-1]);
      if ((int *)(piVar1) != (int *)0x0) {
        *piVar3 = (int)(0);
        param_3[-1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*piVar4);
      }
      *piVar3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[-1]);
      param_3[-1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = (int *)(piVar3);
    param_2 = (int *)(piVar4);
  } while ((int *)(piVar4) != (int *)(param_1));
  return (int *)(piVar3);
}


// Reference entry 10690b70; body size 30 bytes.
#line 1 "ENTRY_10690b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10690b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 106913e0; body size 49 bytes.
#line 1 "ENTRY_106913e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106913e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 10691440; body size 49 bytes.
#line 1 "ENTRY_10691440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10691440(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 10691560; body size 39 bytes.
#line 1 "ENTRY_10691560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10691560(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10691770; body size 49 bytes.
#line 1 "ENTRY_10691770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10691770(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 106928b0; body size 131 bytes.
#line 1 "ENTRY_106928b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106928b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piStack_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    piStack_4 = (int *)(param_1);
    if (*(uint *)(iVar1 + 8) < *(uint *)(iVar1 + 0x1c) >> 3) {
      thunk_FUN_10694b70(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      return;
    }
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
    *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_1148a50e(puVar2,0x10);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4*)(iVar1 + 4) = (undefined4)(*(undefined4 *)(iVar1 + 4));
    *(int*)(*(int *)(iVar1 + 4) + 4) = (int)(*(int *)(iVar1 + 4));
    *(undefined4*)(iVar1 + 8) = (undefined4)(0);
    piStack_4 = (int *)(*(int **)(iVar1 + 4));
    thunk_FUN_106905e0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 106931c0; body size 17 bytes.
#line 1 "ENTRY_106931c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106931c0(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x24) + 8))();
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 106938b0; body size 30 bytes.
#line 1 "ENTRY_106938b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106938b0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10694f70(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 106938e0; body size 63 bytes.
#line 1 "ENTRY_106938e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_106938e0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x28);
  if (0x6666666 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x6666666);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10693930; body size 49 bytes.
#line 1 "ENTRY_10693930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10693930(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10693970; body size 49 bytes.
#line 1 "ENTRY_10693970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10693970(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10693b80; body size 20 bytes.
#line 1 "ENTRY_10693b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10693b80(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10693ba0; body size 66 bytes.
#line 1 "ENTRY_10693ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10693ba0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10694150; body size 92 bytes.
#line 1 "ENTRY_10694150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10694150(uint param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 4));
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + 1);
  *param_4 = (int)(param_3);
  param_4[1] = (int)((int)puVar2);
  *puVar2 = (undefined4)(param_4);
  *(int**)(param_3 + 4) = (int *)(param_4);
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_2) * 8));
  if ((int)(*piVar1) == *(int *)(param_1 + 4)) {
    *piVar1 = (int)((int)param_4);
    piVar1[1] = (int)((int)param_4);
    return (int *)(param_4);
  }
  if ((int *)(*piVar1) == (int *)(param_3)) {
    *piVar1 = (int)((int)param_4);
    return (int *)(param_4);
  }
  if ((undefined4 *)(undefined4 *)(piVar1[1]) == (undefined4 *)(puVar2)) {
    piVar1[1] = (int)((int)param_4);
  }
  return (int *)(param_4);
}


// Reference entry 106943e0; body size 26 bytes.
#line 1 "ENTRY_106943e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106943e0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10694400; body size 26 bytes.
#line 1 "ENTRY_10694400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694400(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10694420; body size 26 bytes.
#line 1 "ENTRY_10694420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694420(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10694440; body size 76 bytes.
#line 1 "ENTRY_10694440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10694440(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return;
      }
    }
    else {
      *(int**)(param_1 + 0x24) = (int *)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  return;
}


// Reference entry 10694d80; body size 43 bytes.
#line 1 "ENTRY_10694d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10694d80(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(*(int **)(param_2 + 4));
  *piVar1 = (int)(param_3);
  piVar2 = (int *)(*(int **)(param_3 + 4));
  *piVar2 = (int)(param_1);
  piVar3 = (int *)(*(int **)(param_1 + 4));
  *piVar3 = (int)(param_2);
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
  return;
}


// Reference entry 10694e10; body size 87 bytes.
#line 1 "ENTRY_10694e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10694e10(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x10000000) {
    param_1 = (uint)(param_1 * 0x10);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10694e80; body size 90 bytes.
#line 1 "ENTRY_10694e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10694e80(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10694f00; body size 87 bytes.
#line 1 "ENTRY_10694f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10694f00(uint param_1)

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
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10694fe0; body size 87 bytes.
#line 1 "ENTRY_10694fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10694fe0(uint param_1)

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
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10695060; body size 68 bytes.
#line 1 "ENTRY_10695060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10695060(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x18) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
          * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 106952d0; body size 123 bytes.
#line 1 "ENTRY_106952d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106952d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    iStack_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      thunk_FUN_10694b70(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
      return;
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_1148a50e(puVar1,0x10);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int*)(*(int *)(param_1 + 4) + 4) = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_106905e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 106953c0; body size 54 bytes.
#line 1 "ENTRY_106953c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106953c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x10);
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


// Reference entry 10695410; body size 57 bytes.
#line 1 "ENTRY_10695410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10695410(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x10);
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


// Reference entry 106954b0; body size 61 bytes.
#line 1 "ENTRY_106954b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106954b0(int param_1,int param_2)

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


// Reference entry 106970f0; body size 65 bytes.
#line 1 "ENTRY_106970f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106970f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLaunchSoundLabAction);
  *(undefined1*)(param_1 + 4) = (undefined1)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10697150; body size 33 bytes.
#line 1 "ENTRY_10697150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10697150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceFilterLearnMoreActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 106999a0; body size 38 bytes.
#line 1 "ENTRY_106999a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106999a0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10699ae0; body size 40 bytes.
#line 1 "ENTRY_10699ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10699ae0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1069a540; body size 30 bytes.
#line 1 "ENTRY_1069a540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069a540(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 1069afe0; body size 23 bytes.
#line 1 "ENTRY_1069afe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::FUN_1069afe0(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 1069b3c0; body size 42 bytes.
#line 1 "ENTRY_1069b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b3c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 1069b400; body size 42 bytes.
#line 1 "ENTRY_1069b400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b400(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 1069b440; body size 42 bytes.
#line 1 "ENTRY_1069b440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCatalog_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 1069b480; body size 42 bytes.
#line 1 "ENTRY_1069b480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069b480(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCatalogManager_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 1069c710; body size 11 bytes.
#line 1 "ENTRY_1069c710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069c710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCatalogRequest);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlGetRequest);
  thunk_FUN_106845c0();
  return;
}


// Reference entry 1069c850; body size 226 bytes.
#line 1 "ENTRY_1069c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069c850(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    if (param_1[2] != 0) {
      if ((uint)param_1[2] < (uint)param_1[7] >> 3) {
        thunk_FUN_10694b70(*(undefined4 *)param_1[1],(undefined4 *)param_1[1]);
      }
      else {
        puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
        *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
        puVar1 = (undefined4 *)((undefined4 *)*puVar1);
        while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)((undefined4 *)*puVar1);
          thunk_FUN_1148a50e(puVar1,0x10);
          puVar1 = (undefined4 *)(puVar2);
        }
        *(undefined4*)param_1[1] = (undefined4)((undefined4)(param_1[1]));
        *(undefined4*)(param_1[1] + 4) = (undefined4)(param_1[1]);
        param_1[2] = (undefined4)(0);
        param_2 = (undefined4 *)((undefined4 *)param_1[1]);
        thunk_FUN_106905e0(param_1[3],param_1[4],&param_2);
      }
    }
    *param_1 = (undefined4)(*puVar4);
    uVar3 = (undefined4)(param_1[1]);
    param_1[1] = (undefined4)(puVar4[1]);
    puVar4[1] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[2]);
    param_1[2] = (undefined4)(puVar4[2]);
    puVar4[2] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[3]);
    param_1[3] = (undefined4)(puVar4[3]);
    puVar4[3] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[4]);
    param_1[4] = (undefined4)(puVar4[4]);
    puVar4[4] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[5]);
    param_1[5] = (undefined4)(puVar4[5]);
    puVar4[5] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[6]);
    param_1[6] = (undefined4)(puVar4[6]);
    puVar4[6] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[7]);
    param_1[7] = (undefined4)(puVar4[7]);
    puVar4[7] = (undefined4)(uVar3);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1069c970; body size 226 bytes.
#line 1 "ENTRY_1069c970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069c970(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    if (param_1[2] != 0) {
      if ((uint)param_1[2] < (uint)param_1[7] >> 3) {
        thunk_FUN_10694b70(*(undefined4 *)param_1[1],(undefined4 *)param_1[1]);
      }
      else {
        puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
        *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
        puVar1 = (undefined4 *)((undefined4 *)*puVar1);
        while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)((undefined4 *)*puVar1);
          thunk_FUN_1148a50e(puVar1,0x10);
          puVar1 = (undefined4 *)(puVar2);
        }
        *(undefined4*)param_1[1] = (undefined4)((undefined4)(param_1[1]));
        *(undefined4*)(param_1[1] + 4) = (undefined4)(param_1[1]);
        param_1[2] = (undefined4)(0);
        param_2 = (undefined4 *)((undefined4 *)param_1[1]);
        thunk_FUN_106905e0(param_1[3],param_1[4],&param_2);
      }
    }
    *param_1 = (undefined4)(*puVar4);
    uVar3 = (undefined4)(param_1[1]);
    param_1[1] = (undefined4)(puVar4[1]);
    puVar4[1] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[2]);
    param_1[2] = (undefined4)(puVar4[2]);
    puVar4[2] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[3]);
    param_1[3] = (undefined4)(puVar4[3]);
    puVar4[3] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[4]);
    param_1[4] = (undefined4)(puVar4[4]);
    puVar4[4] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[5]);
    param_1[5] = (undefined4)(puVar4[5]);
    puVar4[5] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[6]);
    param_1[6] = (undefined4)(puVar4[6]);
    puVar4[6] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[7]);
    param_1[7] = (undefined4)(puVar4[7]);
    puVar4[7] = (undefined4)(uVar3);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1069ca90; body size 226 bytes.
#line 1 "ENTRY_1069ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1069ca90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    if (param_1[2] != 0) {
      if ((uint)param_1[2] < (uint)param_1[7] >> 3) {
        thunk_FUN_10694b70(*(undefined4 *)param_1[1],(undefined4 *)param_1[1]);
      }
      else {
        puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
        *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
        puVar1 = (undefined4 *)((undefined4 *)*puVar1);
        while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)((undefined4 *)*puVar1);
          thunk_FUN_1148a50e(puVar1,0x10);
          puVar1 = (undefined4 *)(puVar2);
        }
        *(undefined4*)param_1[1] = (undefined4)((undefined4)(param_1[1]));
        *(undefined4*)(param_1[1] + 4) = (undefined4)(param_1[1]);
        param_1[2] = (undefined4)(0);
        param_2 = (undefined4 *)((undefined4 *)param_1[1]);
        thunk_FUN_106905e0(param_1[3],param_1[4],&param_2);
      }
    }
    *param_1 = (undefined4)(*puVar4);
    uVar3 = (undefined4)(param_1[1]);
    param_1[1] = (undefined4)(puVar4[1]);
    puVar4[1] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[2]);
    param_1[2] = (undefined4)(puVar4[2]);
    puVar4[2] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[3]);
    param_1[3] = (undefined4)(puVar4[3]);
    puVar4[3] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[4]);
    param_1[4] = (undefined4)(puVar4[4]);
    puVar4[4] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[5]);
    param_1[5] = (undefined4)(puVar4[5]);
    puVar4[5] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[6]);
    param_1[6] = (undefined4)(puVar4[6]);
    puVar4[6] = (undefined4)(uVar3);
    uVar3 = (undefined4)(param_1[7]);
    param_1[7] = (undefined4)(puVar4[7]);
    puVar4[7] = (undefined4)(uVar3);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1069d050; body size 29 bytes.
#line 1 "ENTRY_1069d050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069d050(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 1069d080; body size 29 bytes.
#line 1 "ENTRY_1069d080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069d080(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 1069d830; body size 20 bytes.
#line 1 "ENTRY_1069d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069d830(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 1069d850; body size 67 bytes.
#line 1 "ENTRY_1069d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1069d850(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) +
                 (double)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 1069dc80; body size 92 bytes.
#line 1 "ENTRY_1069dc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1069dc80(uint param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 4));
  *(int*)(param_1 + 0x10) = (int)(*(int *)(param_1 + 0x10) + 1);
  *param_4 = (int)(param_3);
  param_4[1] = (int)((int)puVar2);
  *puVar2 = (undefined4)(param_4);
  *(int**)(param_3 + 4) = (int *)(param_4);
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + (*(uint *)(param_1 + 0x20) & param_2) * 8));
  if ((int)(*piVar1) == *(int *)(param_1 + 0xc)) {
    *piVar1 = (int)((int)param_4);
    piVar1[1] = (int)((int)param_4);
    return (int *)(param_4);
  }
  if ((int *)(*piVar1) == (int *)(param_3)) {
    *piVar1 = (int)((int)param_4);
    return (int *)(param_4);
  }
  if ((undefined4 *)(undefined4 *)(piVar1[1]) == (undefined4 *)(puVar2)) {
    piVar1[1] = (int)((int)param_4);
  }
  return (int *)(param_4);
}


// Reference entry 1069ddc0; body size 216 bytes.
#line 1 "ENTRY_1069ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069ddc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puStack_4;
  
  if (param_1[2] != 0) {
    puStack_4 = (undefined4 *)(param_1);
    if ((uint)param_1[2] < (uint)param_1[7] >> 3) {
      thunk_FUN_10694b70(*(undefined4 *)param_1[1],(undefined4 *)param_1[1]);
    }
    else {
      puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
      *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
      puVar1 = (undefined4 *)((undefined4 *)*puVar1);
      while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar1);
        thunk_FUN_1148a50e(puVar1,0x10);
        puVar1 = (undefined4 *)(puVar2);
      }
      *(undefined4*)param_1[1] = (undefined4)((undefined4)(param_1[1]));
      *(undefined4*)(param_1[1] + 4) = (undefined4)(param_1[1]);
      param_1[2] = (undefined4)(0);
      puStack_4 = (undefined4 *)((undefined4 *)param_1[1]);
      thunk_FUN_106905e0(param_1[3],param_1[4],&puStack_4);
    }
  }
  *param_1 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar3);
  uVar3 = (undefined4)(param_1[2]);
  param_1[2] = (undefined4)(param_2[2]);
  param_2[2] = (undefined4)(uVar3);
  uVar3 = (undefined4)(param_1[3]);
  param_1[3] = (undefined4)(param_2[3]);
  param_2[3] = (undefined4)(uVar3);
  uVar3 = (undefined4)(param_1[4]);
  param_1[4] = (undefined4)(param_2[4]);
  param_2[4] = (undefined4)(uVar3);
  uVar3 = (undefined4)(param_1[5]);
  param_1[5] = (undefined4)(param_2[5]);
  param_2[5] = (undefined4)(uVar3);
  uVar3 = (undefined4)(param_1[6]);
  param_1[6] = (undefined4)(param_2[6]);
  param_2[6] = (undefined4)(uVar3);
  uVar3 = (undefined4)(param_1[7]);
  param_1[7] = (undefined4)(param_2[7]);
  param_2[7] = (undefined4)(uVar3);
  return;
}


// Reference entry 1069dfc0; body size 26 bytes.
#line 1 "ENTRY_1069dfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069dfc0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1069dfe0; body size 26 bytes.
#line 1 "ENTRY_1069dfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069dfe0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1069e090; body size 45 bytes.
#line 1 "ENTRY_1069e090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e090(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[2]);
  param_1[2] = (undefined4)(param_2[2]);
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1069e0d0; body size 33 bytes.
#line 1 "ENTRY_1069e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069e0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 1069e240; body size 43 bytes.
#line 1 "ENTRY_1069e240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069e240(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(*(int **)(param_2 + 4));
  *piVar1 = (int)(param_3);
  piVar2 = (int *)(*(int **)(param_3 + 4));
  *piVar2 = (int)(param_1);
  piVar3 = (int *)(*(int **)(param_1 + 4));
  *piVar3 = (int)(param_2);
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
  return;
}


// Reference entry 1069e2d0; body size 90 bytes.
#line 1 "ENTRY_1069e2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1069e2d0(uint param_1)

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
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1069e350; body size 87 bytes.
#line 1 "ENTRY_1069e350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1069e350(uint param_1)

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
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1069e3c0; body size 19 bytes.
#line 1 "ENTRY_1069e3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1069e3c0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_101a3180(param_2));
  return (uint)(uVar1 & *(uint *)(param_1 + 0x20));
}


// Reference entry 1069e8e0; body size 68 bytes.
#line 1 "ENTRY_1069e8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1069e8e0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10699d60(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_1069a360(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 1069e9d0; body size 57 bytes.
#line 1 "ENTRY_1069e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1069e9d0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x14);
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


// Reference entry 1069ea20; body size 60 bytes.
#line 1 "ENTRY_1069ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1069ea20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x14);
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


// Reference entry 1069ea70; body size 61 bytes.
#line 1 "ENTRY_1069ea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1069ea70(int param_1,int param_2)

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


// Reference entry 1069ed20; body size 32 bytes.
#line 1 "ENTRY_1069ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069ed20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 1069ed50; body size 32 bytes.
#line 1 "ENTRY_1069ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1069ed50(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 106a12c0; body size 27 bytes.
#line 1 "ENTRY_106a12c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a12c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 106a2ff0; body size 45 bytes.
#line 1 "ENTRY_106a2ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106a2ff0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106a3070; body size 47 bytes.
#line 1 "ENTRY_106a3070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106a3070(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106a30b0; body size 32 bytes.
#line 1 "ENTRY_106a30b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a30b0(undefined1 *param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = (int)(fgetc(param_2));
  if (iVar1 == -1) {
    return (undefined4)(0);
  }
  *param_1 = (undefined1)((char)iVar1);
  return (undefined4)(1);
}


// Reference entry 106a3710; body size 37 bytes.
#line 1 "ENTRY_106a3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106a3710(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_106a48e0(param_2,param_1 + 0x10));
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106a3740; body size 51 bytes.
#line 1 "ENTRY_106a3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106a3740(int param_1,uint param_2,uint param_3,char param_4)

{
  void *pvVar1;
  
  if (param_3 < param_2) {
    pvVar1 = (void *)(memchr((void *)(param_1 + param_3),(int)param_4,param_2 - param_3));
    if ((void *)(pvVar1) != (void *)0x0) {
      return (int)((int)pvVar1 - param_1);
    }
  }
  return (int)(-1);
}


// Reference entry 106a3ef0; body size 78 bytes.
#line 1 "ENTRY_106a3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_106a3ef0(undefined4 *param_2,uint param_3,uint param_4)
{
  undefined1 *param_1 = (undefined1 *)this;
  uint uVar1;
  
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  if (param_3 <= (uint)param_2[4]) {
    uVar1 = (uint)(param_2[4] - param_3);
    if (uVar1 < param_4) {
      param_4 = (uint)(uVar1);
    }
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)((undefined4 *)*param_2);
    }
    thunk_FUN_1012d130((int)param_2 + param_3,param_4);
    return (undefined1 *)(param_1);
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a3f60; body size 46 bytes.
#line 1 "ENTRY_106a3f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a3f60(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_4);
  param_1[1] = (undefined4)(param_5);
  param_1[4] = (undefined4)(param_2);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[5] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106a3fa0; body size 52 bytes.
#line 1 "ENTRY_106a3fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a3fa0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106a43e0; body size 17 bytes.
#line 1 "ENTRY_106a43e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a43e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 106a4590; body size 82 bytes.
#line 1 "ENTRY_106a4590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_106a4590(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)((int *)*param_1);
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    return (int *)((int *)(piVar2[2] + 0x10));
  }
  iVar3 = (int)(*piVar2);
  if (*(char *)(iVar3 + 0xd) != '\0') {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar5 = (int *)((int *)piVar2[1]);
    while ((cVar1 == '\0' && ((int *)(piVar2) == (int *)*piVar5))) {
      cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
      piVar2 = (int *)(piVar5);
      piVar5 = (int *)((int *)piVar5[1]);
    }
    if (*(char *)((int)piVar2 + 0xd) != '\0') {
      piVar5 = (int *)(piVar2);
    }
    return (int *)(piVar5 + 4);
  }
  cVar1 = (char)(*(char *)(*(int *)(iVar3 + 8) + 0xd));
  iVar4 = (int)(*(int *)(iVar3 + 8));
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar4 + 8) + 0xd));
    iVar3 = (int)(iVar4);
    iVar4 = (int)(*(int *)(iVar4 + 8));
  }
  return (int *)((int *)(iVar3 + 0x10));
}


// Reference entry 106a4760; body size 16 bytes.
#line 1 "ENTRY_106a4760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a4760(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 4);
  return;
}


// Reference entry 106a48c0; body size 23 bytes.
#line 1 "ENTRY_106a48c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106a48c0(undefined4 *param_1)

{
  if ((undefined4 *)(param_1) != (undefined4 *)0x0) {
                    
                    
    (**(code **)*param_1)();
    return;
  }
  return;
}


// Reference entry 106a4e70; body size 31 bytes.
#line 1 "ENTRY_106a4e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a4e70(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106a4ea0; body size 14 bytes.
#line 1 "ENTRY_106a4ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106a4ea0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 106a4ec0; body size 17 bytes.
#line 1 "ENTRY_106a4ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a4ec0(uint param_2)
{
  int param_1 = (int )this;
  if ((uint)(param_2) <= *(uint *)(param_1 + 0x10)) {
    return;
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a5010; body size 68 bytes.
#line 1 "ENTRY_106a5010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a5010(int param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = (uint)(param_1[4] - param_2);
  if (uVar1 < param_3) {
    param_3 = (uint)(uVar1);
  }
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  iVar3 = (int)(param_1[4] - param_3);
  param_1[4] = (undefined4)(iVar3);
  memmove((void *)((int)puVar2 + param_2),(void *)((int)puVar2 + param_2 + param_3),
          (iVar3 - param_2) + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 106a5190; body size 48 bytes.
#line 1 "ENTRY_106a5190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a5190(std_codecvt_base *param_2)
{
  std_basic_streambuf<char,std::char_traits<char>> *param_1 = (std_basic_streambuf<char,std::char_traits<char>> *)this;
  bool bVar1;
  
  bVar1 = (bool)(((std::codecvt_base *)(param_2))->always_noconv());
  if (bVar1) {
    *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
    return;
  }
  *(codecvt_base**)(param_1 + 0x38) = (codecvt_base *)(param_2);
  ((std::basic_streambuf *)(param_1))->_Init();
  return;
}


// Reference entry 106a64e0; body size 59 bytes.
#line 1 "ENTRY_106a64e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106a64e0(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 <= (uint)param_1[4]) {
    uVar1 = (uint)(param_1[4] - param_2);
    if (uVar1 < param_3) {
      param_3 = (uint)(uVar1);
    }
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)((undefined4 *)*param_1);
    }
    thunk_FUN_1012d130((int)param_1 + param_2,param_3);
    return;
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a6a80; body size 12 bytes.
#line 1 "ENTRY_106a6a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a6a80(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (undefined4 *)((undefined4 *)*param_1);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106a6b10; body size 25 bytes.
#line 1 "ENTRY_106a6b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a6b10(void *param_1,size_t param_2,char *param_3)

{
  memchr(param_1,(int)*param_3,param_2);
  return;
}


// Reference entry 106a6ba0; body size 60 bytes.
#line 1 "ENTRY_106a6ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_106a6ba0(char param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  if (param_3 < (uint)param_1[4]) {
    pvVar1 = (void *)(memchr((void *)((int)puVar2 + param_3),(int)param_2,param_1[4] - param_3));
    if ((void *)(pvVar1) != (void *)0x0) {
      return (int)((int)pvVar1 - (int)puVar2);
    }
  }
  return (int)(-1);
}


// Reference entry 106a6bf0; body size 12 bytes.
#line 1 "ENTRY_106a6bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106a6bf0(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (undefined4 *)((undefined4 *)*param_1);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106a7ed0; body size 18 bytes.
#line 1 "ENTRY_106a7ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a7ed0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x14));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x10));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 106a7ef0; body size 76 bytes.
#line 1 "ENTRY_106a7ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_106a7ef0(undefined1 *param_2,uint param_3,uint param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0xf);
  *param_2 = (undefined1)(0);
  if (param_3 <= (uint)param_1[4]) {
    uVar1 = (uint)(param_1[4] - param_3);
    if (uVar1 < param_4) {
      param_4 = (uint)(uVar1);
    }
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)((undefined4 *)*param_1);
    }
    thunk_FUN_1012d130((int)param_1 + param_3,param_4);
    return (undefined1 *)(param_2);
  }
                    
  thunk_FUN_106a5620();
}


// Reference entry 106a8b20; body size 25 bytes.
#line 1 "ENTRY_106a8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8b20(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a8bc0; body size 106 bytes.
#line 1 "ENTRY_106a8bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a8bc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1 + 2));
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (undefined4 *)(param_1);
      }
    }
    else {
      param_1[0xb] = (undefined4)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106a9070; body size 27 bytes.
#line 1 "ENTRY_106a9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106a9070(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106a91c0; body size 39 bytes.
#line 1 "ENTRY_106a91c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106a91c0(SCStr *param_2,undefined4 *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  
  ((SCStr *)(param_1))->op_ctor(param_2);
  uVar1 = (undefined4)(*param_3);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3[1]);
  *(undefined4*)(param_1 + 8) = (undefined4)(uVar1);
  return (SCStr *)(param_1);
}


// Reference entry 106a92c0; body size 39 bytes.
#line 1 "ENTRY_106a92c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106a92c0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(*param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(*param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 106a9740; body size 25 bytes.
#line 1 "ENTRY_106a9740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9740(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106a9760; body size 25 bytes.
#line 1 "ENTRY_106a9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9760(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106a9920; body size 38 bytes.
#line 1 "ENTRY_106a9920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106a9920(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 106aa140; body size 34 bytes.
#line 1 "ENTRY_106aa140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aa140(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 5) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106aa350; body size 23 bytes.
#line 1 "ENTRY_106aa350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106aa350(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106b1900(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 106aa4d0; body size 23 bytes.
#line 1 "ENTRY_106aa4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106aa4d0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106b1900(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 106ab980; body size 49 bytes.
#line 1 "ENTRY_106ab980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_106ab980(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  if ((SCStr *)(param_1) == (SCStr *)(param_2)) {
    return (SCStr *)(param_1);
  }
  do {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq(param_3));
    if (bVar1) {
      return (SCStr *)(param_1);
    }
    param_1 = (SCStr *)(param_1 + 4);
  } while ((SCStr *)(param_1) != (SCStr *)(param_2));
  return (SCStr *)(param_1);
}


// Reference entry 106ab9c0; body size 49 bytes.
#line 1 "ENTRY_106ab9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_106ab9c0(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  if ((SCStr *)(param_1) == (SCStr *)(param_2)) {
    return (SCStr *)(param_1);
  }
  do {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq(param_3));
    if (bVar1) {
      return (SCStr *)(param_1);
    }
    param_1 = (SCStr *)(param_1 + 4);
  } while ((SCStr *)(param_1) != (SCStr *)(param_2));
  return (SCStr *)(param_1);
}


// Reference entry 106ac430; body size 37 bytes.
#line 1 "ENTRY_106ac430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ac430(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106ac460; body size 31 bytes.
#line 1 "ENTRY_106ac460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_106ac460(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 106ac490; body size 31 bytes.
#line 1 "ENTRY_106ac490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_106ac490(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 106ac690; body size 70 bytes.
#line 1 "ENTRY_106ac690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_106ac690(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  if ((SCStr *)(param_1) == (SCStr *)(param_2)) {
    return (SCStr *)(param_3);
  }
  do {
    if ((SCStr *)(param_1) != (SCStr *)(param_3)) {
      ((SCStr *)(param_3))->int_release();
      *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)param_1));
      ((SCStr *)(param_3))->int_addref();
    }
    pSVar1 = (SCStr *)(param_1 + 4);
    param_1 = (SCStr *)(param_1 + 8);
    param_3[4] = (SCStr)(*pSVar1);
    param_3 = (SCStr *)(param_3 + 8);
  } while ((SCStr *)(param_1) != (SCStr *)(param_2));
  return (SCStr *)(param_3);
}


// Reference entry 106ac770; body size 187 bytes.
#line 1 "ENTRY_106ac770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106ac770(SCStr *param_1,SCStr *param_2,int param_3)

{
  SCStr *pSVar1;
  int iVar2;
  undefined4 uVar3;
  SCStr *pSVar4;
  SCStr *this_;
  
  if ((SCStr *)(param_1) != (SCStr *)(param_2)) {
    this_ = (SCStr *)((SCStr *)(param_3 + 4));
    pSVar4 = (SCStr *)(param_1 + 4);
    do {
      if ((SCStr *)(pSVar4) != (SCStr *)(this_)) {
        ((SCStr *)(this_))->int_release();
        *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar4));
        ((SCStr *)(this_))->int_addref();
      }
      pSVar1 = (SCStr *)(this_ + 4);
      if (pSVar4 + 4 != pSVar1) {
        ((SCStr *)(pSVar1))->int_release();
        *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(pSVar4 + 4)));
        ((SCStr *)(pSVar1))->int_addref();
      }
      pSVar1 = (SCStr *)(this_ + 8);
      if ((SCStr *)(pSVar1) != (SCStr *)(pSVar4) + 8) {
        iVar2 = (int)(*(int *)pSVar1);
        thunk_FUN_106ab5b0(pSVar1,*(undefined4 *)(iVar2 + 4));
        *(int*)(iVar2 + 4) = (int)(iVar2);
        *(int*)iVar2 = (int)((int)(iVar2));
        *(int*)(iVar2 + 8) = (int)(iVar2);
        *(undefined4*)(this_ + 0xc) = (undefined4)(0);
        iVar2 = (int)(*(int *)pSVar1);
        *(int*)pSVar1 = (int)((SCStr *)(*(int *)(pSVar4 + 8)));
        *(int*)(pSVar4 + 8) = (int)(iVar2);
        uVar3 = (undefined4)(*(undefined4 *)(this_ + 0xc));
        *(undefined4*)(this_ + 0xc) = (undefined4)(*(undefined4 *)(pSVar4 + 0xc));
        *(undefined4*)(pSVar4 + 0xc) = (undefined4)(uVar3);
      }
      param_3 = (int)(param_3 + 0x14);
      this_ = (SCStr *)(this_ + 0x14);
      pSVar1 = (SCStr *)(pSVar4 + 0x10);
      pSVar4 = (SCStr *)(pSVar4 + 0x14);
    } while ((SCStr *)(pSVar1) != (SCStr *)(param_2));
    return (int)(param_3);
  }
  return (int)(param_3);
}


// Reference entry 106ae9b0; body size 20 bytes.
#line 1 "ENTRY_106ae9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ae9b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_106a9340(param_1,param_2,param_2);
  return;
}


// Reference entry 106ae9d0; body size 20 bytes.
#line 1 "ENTRY_106ae9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106ae9d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_106a94b0(param_1,param_2,param_2);
  return;
}


// Reference entry 106aea20; body size 33 bytes.
#line 1 "ENTRY_106aea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aea20(undefined4 param_1,SCStr *param_2,SCStr *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  ((SCStr *)(param_2))->op_ctor(param_3);
  uVar1 = (undefined4)(param_4[1]);
  *(undefined4*)(param_2 + 8) = (undefined4)(*param_4);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(uVar1);
  return;
}


// Reference entry 106aea50; body size 53 bytes.
#line 1 "ENTRY_106aea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aea50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_2 = (undefined4)(*param_3);
  param_2[2] = (undefined4)(param_3[2]);
  ((SCStr *)((SCStr *)(param_2 + 3)))->op_ctor((SCStr *)(param_3 + 3));
  uVar1 = (undefined4)(param_3[5]);
  param_2[4] = (undefined4)(param_3[4]);
  param_2[5] = (undefined4)(uVar1);
  return;
}


// Reference entry 106aec40; body size 14 bytes.
#line 1 "ENTRY_106aec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aec40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_106b1900(param_3);
  return;
}


// Reference entry 106aec60; body size 14 bytes.
#line 1 "ENTRY_106aec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106aec60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_106b1900(param_3);
  return;
}


// Reference entry 106af010; body size 11 bytes.
#line 1 "ENTRY_106af010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106af010(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)(0);
  return;
}


// Reference entry 106af050; body size 86 bytes.
#line 1 "ENTRY_106af050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106af050(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while ((int *)(param_1) != (int *)(param_2)) {
    piVar2 = (int *)((int *)param_1[2]);
    iVar4 = (int)(iVar4 + 1);
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar2 + 0xd));
      param_1 = (int *)(piVar2);
      piVar2 = (int *)((int *)*piVar2);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        param_1 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
      }
    }
    else {
      cVar1 = (char)(*(char *)(param_1[1] + 0xd));
      piVar3 = (int *)((int *)param_1[1]);
      piVar2 = (int *)(param_1);
      while ((param_1 = piVar3, cVar1 == '\0' && ((int *)(piVar2) == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (int)(iVar4);
}


// Reference entry 106af1f0; body size 56 bytes.
#line 1 "ENTRY_106af1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106af1f0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4));
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 8)) {
    ((SCStr *)(this_))->op_ctor(param_2);
    this_[4] = (SCStr)(param_2[4]);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_106aa5c0(this_,param_2);
  return;
}


// Reference entry 106af290; body size 40 bytes.
#line 1 "ENTRY_106af290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106af290(undefined4 param_2)
{
  int param_1 = (int )this;
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_106b1900(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
    return;
  }
  thunk_FUN_106aaa10(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106af370; body size 42 bytes.
#line 1 "ENTRY_106af370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106af370(undefined4 param_2)
{
  int param_1 = (int )this;
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_106aec80(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
    return;
  }
  thunk_FUN_106ab040(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106af680; body size 57 bytes.
#line 1 "ENTRY_106af680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106af680(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4)

{
  bool bVar1;
  
  if ((SCStr *)(param_2) == (SCStr *)(param_3)) {
    *param_1 = (undefined4)(param_2);
    return;
  }
  do {
    bVar1 = (bool)(((SCStr *)(param_2))->op_eq(param_4));
    if (bVar1) break;
    param_2 = (SCStr *)(param_2 + 4);
  } while ((SCStr *)(param_2) != (SCStr *)(param_3));
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106af720; body size 66 bytes.
#line 1 "ENTRY_106af720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_106af720(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  
  iVar2 = (int)(param_3);
  puVar1 = (undefined4 *)(param_2);
  puVar4 = (undefined4 *)(param_1);
  while( true ) {
    if ((undefined4 *)((puVar4)) == (undefined4 *)(puVar1)) {
      return (undefined4 *)(puVar4);
    }
    param_1 = (undefined4 *)((undefined4 *)*puVar4);
    if (*(int **)(iVar2 + 0x24) == (int *)(0x0)) break;
    cVar3 = (char)((**(code **)(**(int **)(iVar2 + 0x24) + 8))(&param_1));
    if (cVar3 != '\0') {
      return (undefined4 *)(puVar4);
    }
    puVar4 = (undefined4 *)(puVar4 + 2);
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 106afc80; body size 49 bytes.
#line 1 "ENTRY_106afc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106afc80(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106abdc0(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + (param_3 - iVar1 >> 3) * 8);
  return;
}


// Reference entry 106afcc0; body size 38 bytes.
#line 1 "ENTRY_106afcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106afcc0(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 106b03f0; body size 95 bytes.
#line 1 "ENTRY_106b03f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b03f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_1074ed30());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0470; body size 95 bytes.
#line 1 "ENTRY_106b0470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0470(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_1076bff0());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 106b04f0; body size 95 bytes.
#line 1 "ENTRY_106b04f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b04f0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10783320());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0990; body size 51 bytes.
#line 1 "ENTRY_106b0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0990(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 106b0de0; body size 52 bytes.
#line 1 "ENTRY_106b0de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0de0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0e30; body size 76 bytes.
#line 1 "ENTRY_106b0e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0e30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x28));
  *(void**)pvVar2 = (void *)((void *)(pvVar2));
  *(void**)((int)pvVar2 + 4) = (void *)(pvVar2);
  *(void**)((int)pvVar2 + 8) = (void *)(pvVar2);
  *(undefined2*)((int)pvVar2 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar2);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(pvVar2);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0f30; body size 52 bytes.
#line 1 "ENTRY_106b0f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b0f30(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0f80; body size 63 bytes.
#line 1 "ENTRY_106b0f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b0f80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(*param_2);
  param_1[2] = (undefined4)(param_2[2]);
  ((SCStr *)((SCStr *)(param_1 + 3)))->op_ctor((SCStr *)(param_2 + 3));
  uVar1 = (undefined4)(param_2[5]);
  param_1[4] = (undefined4)(param_2[4]);
  param_1[5] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106b10d0; body size 49 bytes.
#line 1 "ENTRY_106b10d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106b10d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 106b22b0; body size 33 bytes.
#line 1 "ENTRY_106b22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106b22b0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  param_1[4] = (SCStr)(param_2[4]);
  return (SCStr *)(param_1);
}


// Reference entry 106b22e0; body size 33 bytes.
#line 1 "ENTRY_106b22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106b22e0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  param_1[4] = (SCStr)(param_2[4]);
  return (SCStr *)(param_1);
}


// Reference entry 106b2310; body size 14 bytes.
#line 1 "ENTRY_106b2310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106b2310(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


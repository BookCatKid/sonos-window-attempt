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
extern int __stdio_common_vsprintf(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int func_0x100027f7(...);
extern int func_0x10014c4a(...);
extern int func_0x100632cd(...);
extern int func_0x1006b4c8(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int int_start(...);
extern int memmove(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_1029ae60(...);
extern int thunk_FUN_102c45c0(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105a26c0(...);
extern int thunk_FUN_106d8310(...);
extern int thunk_FUN_106d8da0(...);
extern int thunk_FUN_1086f2f0(...);
extern int thunk_FUN_108754f0(...);
extern int thunk_FUN_10dd1260(...);
extern int thunk_FUN_10dd3190(...);
extern int thunk_FUN_10dd31f0(...);
extern int thunk_FUN_10df2ea0(...);
extern int thunk_FUN_10e0f500(...);
extern int thunk_FUN_10e0f790(...);
extern int thunk_FUN_10e10dc0(...);
extern int thunk_FUN_10e45e20(...);
extern int thunk_FUN_10e460f0(...);
extern int thunk_FUN_10e467a0(...);
extern int thunk_FUN_10e485f0(...);
extern int thunk_FUN_10e48ae0(...);
extern int thunk_FUN_10e5d160(...);
extern int thunk_FUN_10ea7960(...);
extern int thunk_FUN_10ea7a90(...);
extern int thunk_FUN_10ea7d70(...);
extern int thunk_FUN_10ea8f20(...);
extern int thunk_FUN_10eaab70(...);
extern int thunk_FUN_10eaad30(...);
extern int thunk_FUN_10eae570(...);
extern int thunk_FUN_10eb1010(...);
extern int thunk_FUN_10eb2520(...);
extern int thunk_FUN_10eb27e0(...);
extern int thunk_FUN_10ebcd20(...);
extern int thunk_FUN_10ebd6e0(...);
extern int thunk_FUN_10ebeb90(...);
extern int thunk_FUN_10ebf160(...);
extern int thunk_FUN_10ebfc10(...);
extern int thunk_FUN_10ec1d20(...);
extern int thunk_FUN_10ee18e0(...);
extern int thunk_FUN_10ee1d10(...);
extern int thunk_FUN_10ee2ae0(...);
extern int thunk_FUN_10ee3510(...);
extern int thunk_FUN_10ee3c70(...);
extern int thunk_FUN_10ee70c0(...);
extern int thunk_FUN_10ee7180(...);
extern int thunk_FUN_10ef4470(...);
extern int thunk_FUN_10ef4620(...);
extern int thunk_FUN_10ef64d0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_111a0640(...);
extern int thunk_FUN_111a2140(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a74d0(...);
extern int thunk_FUN_111bce60(...);
extern int thunk_FUN_111bcfc0(...);
extern int thunk_FUN_111bcfe0(...);
extern int thunk_FUN_111bd6b0(...);
extern int thunk_FUN_111beca0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113ba290(...);
extern int thunk_FUN_113bcbd0(...);
extern int thunk_FUN_113bcc60(...);
extern int thunk_FUN_113bcd70(...);
extern int thunk_FUN_113bcdf0(...);
extern int thunk_FUN_113bce30(...);
extern int thunk_FUN_113bd290(...);
extern int thunk_FUN_113bd6c0(...);
extern int thunk_FUN_113bd750(...);
extern int thunk_FUN_113bd910(...);
extern int thunk_FUN_113be100(...);
extern int thunk_FUN_113be140(...);
extern int thunk_FUN_113be1c0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145abd0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_12126b84;
extern int DAT_121a6ab8;
extern int DAT_121a6b1c;
extern int g_lSCObjCount;
extern int ghidra_vftable_ExtractArchiveOp;
extern int ghidra_vftable_Netstart2DtlsClient_MessageHandler;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RSHdmiGetInfoRequest;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState;
extern int ghidra_vftable_SCAlexaAuthCompleteState;
extern int ghidra_vftable_SCAlexaAuthEnableAckChimeState;
extern int ghidra_vftable_SCAlexaAuthGenericErrorState;
extern int ghidra_vftable_SCAlexaAuthIntroState;
extern int ghidra_vftable_SCAlexaAuthLowMemoryErrorState;
extern int ghidra_vftable_SCAlexaAuthMicSetupState;
extern int ghidra_vftable_SCAlexaAuthMissingPlayersErrorState;
extern int ghidra_vftable_SCAlexaAuthPushAuthCodeState;
extern int ghidra_vftable_SCAlexaAuthReminderState;
extern int ghidra_vftable_SCAlexaAuthRoomState;
extern int ghidra_vftable_SCAlexaAuthSuccessState;
extern int ghidra_vftable_SCAlexaAuthUseDifferentAccountErrorState;
extern int ghidra_vftable_SCAlexaAuthWizardState;
extern int ghidra_vftable_SCAlexaAuthWrongAccountErrorState;
extern int ghidra_vftable_SCAlexaSetUpMusicServicesState;
extern int ghidra_vftable_SCChangeEmailWizCompleteState;
extern int ghidra_vftable_SCChangeEmailWizInitState;
extern int ghidra_vftable_SCChangeEmailWizTransferState;
extern int ghidra_vftable_SCChangeEmailWizVerifyState;
extern int ghidra_vftable_SCHouseholdEventSink;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIIntegerSettingsProperty;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpHTControlGetLEDFeedbackState;
extern int ghidra_vftable_SCISonarCalibrationItem;
extern int ghidra_vftable_SCIStringFromCustomSettingsProperty;
extern int ghidra_vftable_SCIStringFromListSettingsProperty;
extern int ghidra_vftable_SCIVSResponseListener;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizard;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardInitState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardSubwizardState;
extern int ghidra_vftable_SCLegacySonanceDetectionWizard;
extern int ghidra_vftable_SCLifecycleMixedLegacyCompleteState;
extern int ghidra_vftable_SCLifecycleMixedLegacyIncompatPlayersState;
extern int ghidra_vftable_SCLifecycleMixedLegacyOptionsState;
extern int ghidra_vftable_SCLifecycleMixedLegacyOutroState;
extern int ghidra_vftable_SCLifecycleMixedLegacyRemindMeLaterState;
extern int ghidra_vftable_SCLifecycleMixedLegacyWizard;
extern int ghidra_vftable_SCLifecycleMixedLegacyWizardState;
extern int ghidra_vftable_SCLifecycleModernCompleteState;
extern int ghidra_vftable_SCLifecycleModernReadyForDownloadState;
extern int ghidra_vftable_SCLifecycleModernRemindMeLaterState;
extern int ghidra_vftable_SCLifecycleModernTermsOfUseState;
extern int ghidra_vftable_SCLifecycleModernWizard;
extern int ghidra_vftable_SCLifecycleModernWizardState;
extern int ghidra_vftable_SCLifecycleWizardMixedLegacyInitState;
extern int ghidra_vftable_SCLifecycleWizardModernInitState;
extern int ghidra_vftable_SCNewWizLayoutTemplate;
extern int ghidra_vftable_SCNewWizResponseTemplate;
extern int ghidra_vftable_SCOpHTControlGetLEDFeedbackState;
extern int ghidra_vftable_SCOpHdmiGetInfo;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCProductSetupWizardData_Data;
extern int ghidra_vftable_SCSecurePlayerCalcConfirmState;
extern int ghidra_vftable_SCSecurePlayerCompleteState;
extern int ghidra_vftable_SCSecurePlayerConfirmState;
extern int ghidra_vftable_SCSecurePlayerDoRegisterState;
extern int ghidra_vftable_SCSecurePlayerFailureBadTokenState;
extern int ghidra_vftable_SCSecurePlayerFailureState;
extern int ghidra_vftable_SCSecurePlayerInitState;
extern int ghidra_vftable_SCSecurePlayerLinkPlayersIntroState;
extern int ghidra_vftable_SCSecurePlayerState;
extern int ghidra_vftable_SCSecurePlayerSuccessState;
extern int ghidra_vftable_SCSecurePlayerTransferFailureState;
extern int ghidra_vftable_SCSecurePlayerUnconfirmedState;
extern int ghidra_vftable_SCSecureTransferButtonsState;
extern int ghidra_vftable_SCSecureTransferNetworkErrorState;
extern int ghidra_vftable_SCSecureTransferPressButtonState;
extern int ghidra_vftable_SCSecureTransferSpeakerChoiceState;
extern int ghidra_vftable_SCSecureTransferSuccessState;
extern int ghidra_vftable_SCSecureTransferWaitingForTransferState;
extern int ghidra_vftable_SCSecureTransferWizCompleteState;
extern int ghidra_vftable_SCSecureTransferWizInitState;
extern int ghidra_vftable_SCSecureTransferWizIntroState;
extern int ghidra_vftable_SCSecureTransferWizard;
extern int ghidra_vftable_SCSonanceDetectionCompleteState;
extern int ghidra_vftable_SCSonanceDetectionDetectState;
extern int ghidra_vftable_SCSonanceDetectionInitState;
extern int ghidra_vftable_SCSonanceDetectionIntroState;
extern int ghidra_vftable_SCSonanceDetectionWizardState;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCVoiceAuthErrorBaseState;
extern int ghidra_vftable_SCVoiceResponseHandler;
extern int ghidra_vftable_SCVoiceResponseHandler_VoiceResponseDelegate;
extern int ghidra_vftable_SCWifiConfigWizardData_Data;
extern int ghidra_vftable_SCWizard;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_SCXMLSecurePlayerWizard;
extern int ghidra_vftable_SwfObj;
extern int ghidra_vftable_SwfThreadOp;
extern int in_EAX;
extern undefined1 LAB_10e482e4[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11728460[];
extern undefined1 LAB_11745740[];
extern undefined1 LAB_1174f270[];
extern undefined1 LAB_1175f295[];
extern undefined1 LAB_11761430[];
extern undefined1 LAB_117c1080[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int getSingleton(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_eq(A...); template<class... A> int op_lt(A...); };
typedef void *COMMIT_SETTINGS;
typedef void *E9;
typedef void *ECHO;
typedef void *GET_PSK;
typedef void *GET_SCAN_LIST;
typedef void *KEEP_ALIVE;
typedef void *MSG_ECHO;
typedef void *SETUP_CANCEL;
typedef void *SETUP_CLIENT_HELLO;
typedef void *SETUP_CONTINUE;
typedef void *SETUP_REAUTHORIZE;
typedef void *SET_NET_SETTINGS;
typedef void *START_ISLAND;
typedef void *START_OPEN_AP;
typedef void *UPGRADE;
typedef void *WARNING;
struct Clearing { char _pad; Clearing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Destructor { char _pad; Destructor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Dtls { char _pad; Dtls(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Entering { char _pad; Entering(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ExtractArchiveOp { char _pad; ExtractArchiveOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FlashDebugObjects { char _pad; FlashDebugObjects(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetLEDFeedbackState { char _pad; GetLEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HTControl { char _pad; HTControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct KeepAlive { char _pad; KeepAlive(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Netstart2 { char _pad; Netstart2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIIntegerSettingsProperty { char _pad; SCIIntegerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpHTControlGetLEDFeedbackState { char _pad; SCIOpHTControlGetLEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISonarCalibrationItem { char _pad; SCISonarCalibrationItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIVSResponseListener { char _pad; SCIVSResponseListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Send { char _pad; Send(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unable { char _pad; Unable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e2aa20(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e2aa40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e2aa60(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e2aa80(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e2aaa0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e2aab0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e2aac0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e2aad0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e46230(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e46690(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e46bb0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46d40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46d60(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46d80(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46da0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46db0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e46ed0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46f10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46f30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46f50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e46f70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47030(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47050(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47070(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47110(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47130(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47150(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47170(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47190(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e476a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e47700(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10e47820(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e47890(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e48020(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e480d0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10e48100(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10e48140(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e48210(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e485b0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e485d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e48b70(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e4a8b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50bd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50d00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50da0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50dd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50ea0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50ec0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50ee0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50f90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50fb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e50fd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5a320(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5a350(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5a450(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5a470(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e5a4a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e5a520(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e5b160(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e5b210(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e5b2c0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e5b420(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5bed0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5bf70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5bf90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5c040(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5c050(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5c0e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5c110(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5c4b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5c720(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5c820(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5c850(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5ca00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5cf80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d020(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d040(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d060(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d340(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d3e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d400(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d750(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d770(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d810(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e5d880(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e5f570(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10e5f830(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e5f940(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10e610f0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61b90(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61bb0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61bd0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61bf0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61c10(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61ca0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61cb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61cc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61cd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e61ce0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e620f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e65eb0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e69690(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e75660(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e75f70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e760c0(int param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e76390(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e765b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e765d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e76680(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e7f590(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e7f5b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e7f5d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e7f9a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e7f9e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e83090(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e83290(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e83340(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e83360(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e83380(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e833b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e83530(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e83550(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e86d60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e86d80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e86da0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e86dc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e86de0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e86e10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e86e90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e86eb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e89960(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e89a50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e89a70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e89a90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e89ab0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e89f30(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e89f50(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e8a030(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e8a050(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a080(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a0c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a0e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a160(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a1e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a260(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a360(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a3e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a460(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a4e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a560(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10e8a5a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8a6f0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8a7a0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8a850(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8a9b0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8aa60(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8ab10(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8abc0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8ac70(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10e8ad20(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10e8c3a0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99a90(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99ab0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99ad0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99af0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99b10(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99b30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99b50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99b60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99b70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99b80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99b90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10e99ba0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ea1c80(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ea1cd0(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ea1d80(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ea1e20(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ea1e70(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ea1f30(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ea2070(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ea20c0(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ea2760(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ea6c40(undefined1 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ea6c50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ea6f90(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ea7840(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ea78d0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ea7d10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ea7d30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ea7d50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eaa230(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eaa5a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eaa620(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eaa660(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eaa6c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eaa6e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eaa700(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eaa870(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10eab5e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10eab640(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10eab6a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10eab730(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10eab9d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10eab9f0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eaba80(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10eabb20(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10eabb30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10eabca0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eac030(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eac4c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eac7e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eac7f0(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ead1c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eae7c0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10eb0020(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10eb0040(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10eb01d0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb0340(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb0360(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb03c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb03e0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb0400(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb0810(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb18f0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb1940(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb1970(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb19a0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb19d0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb1a00(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb1a30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb1a40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10eb1a50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10eb29a0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb29b0(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb3740(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb3750(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb4300(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb4320(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb4340(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb48e0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb4900(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb4920(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb5fe0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb6000(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb6020(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb6100(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb6110(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb6120(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb62b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb62c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eb62d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10eb6e70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10eb6e90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10eb6eb0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb81b0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb8220(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb8290(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb8330(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb83a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb8410(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb8ac0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb8ad0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb8ae0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eb97a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ebc4c0(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ebfb10(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ebfb70(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ebfbb0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ec0640(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ec0650(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ec0660(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ec0670(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ec0680(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ec0690(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ec2c70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ec2cd0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ec2ce0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ec2cf0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ec2d10(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ec2d30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ec2d40(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ec2d90(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec2f10(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec2f30(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec2f50(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10ec3510(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6730(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6740(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6750(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6760(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6b40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6b50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6b60(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6b70(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ec6b80(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ecfad0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ecfde0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ecfdf0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ecfe00(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ecfe20(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ecfe30(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ed0050(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ed0060(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ed09b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ed0b10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ed0b20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ed1690(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ed1710(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10edf340(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10edfdc0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10edfde0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee18c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee1be0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ee1cc0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ee1cd0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ee2630(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee2720(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ee2750(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee2870(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee2d50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee4140(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee42b0(undefined4 *param_2,void *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee4e40(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee5f20(undefined4 param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee61f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee66b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee6a40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee6b50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee6fb0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ee8730(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eea570(int param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10eeb4d0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10eeb580(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eec290(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eec2b0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eec2d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eec2e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10eecfb0(SCStr *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eed6f0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eed810(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eedae0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eee0b0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eee130(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eeed00(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eeee20(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10eef0f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eef740(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10eef7c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef0b80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ef2230(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ef2260(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef4270(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef4360(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef4430(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef4450(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef4cf0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef4d20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef4e60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef4f00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef4f10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef4f20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef4f30(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef50b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ef5380(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ef53a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef5580(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef55a0(int *param_2); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28de0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e28df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a960(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a970(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2a9a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2a9b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2a9c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2a9d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a9e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2a9f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2aa00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e2aa10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2f170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2f190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2f1b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e2f1d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e30000(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e30980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e30990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e309a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e309b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10e3cad0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e3e3d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e3f0d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e3f0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e3f0f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f2c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e3f2f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e45dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e45df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e45e10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46520(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10e46530(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e465b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e466b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e466c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e468e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e468f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e46900(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e46920(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e46940(undefined4 param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10e46af0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e46b90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10e46ba0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e46dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e46de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e46eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e47390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e473a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e473b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e474e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e474f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e47500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e475c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e475d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e475e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e475f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e47600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e47610(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e47790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10e47840(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e47860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e47870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10e47880(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10e478b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e48370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e48380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e483e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e483f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48400(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48430(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e48450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e48460(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e48470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e48480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e48d10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e48d20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10e4dda0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4e460(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4e470(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4e480(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4e490(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e4f810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e4fb10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e513e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e514a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e51720(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5a2e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5a300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5a370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5a590(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5a5b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5a5c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5a5d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5ad50(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5adf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5ae00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10e5ae10(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5af60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b110(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b140(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b150(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e5b580(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b8f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b910(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e5b9e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e5b9f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bb50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bb80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bbe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bc40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bd00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5bd90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5beb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bfb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bfc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bfd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bfe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5bff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5c0f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5c130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5c150(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5c160(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c200(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c290(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c320(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5c3b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5c440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5c490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5d840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5d850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5d8e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e5da10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5db50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5e4e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5e750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5e930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5ea00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5eab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5eac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5ee60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5ee70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5f020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5f0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5f370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e5f380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5f960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f970(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f9a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f9b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e5f9c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5f9d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5f9e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5f9f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5fa00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5fa10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5fa20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e5fa30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5fa40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5fa50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e5fa60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e610a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61240(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61250(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61260(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61270(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e616f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61710(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61720(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61730(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61740(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61750(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61760(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61770(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61780(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61790(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e61a70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10e61af0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e61b50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e61b60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e61b70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e61b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10e65d80(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10e65e00(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e66b30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e692a0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e692f0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e693a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e693c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e693e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e69680(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69d40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e69e00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e71450(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e71480(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e71490(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e716f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e71700(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e71710(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e71720(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e71730(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e72170(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e721a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e721b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72e70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e72ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e733b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e75700(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e75710(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e75720(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e767c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e767f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e76b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e76b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e77f90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e79210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e7faa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e7fab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e7fde0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e837e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e837f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e83800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e838a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e838d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e838e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e838f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e868c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86ee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e86f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89ae0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89b10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e89b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8add0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8ae10(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8ae50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8ae90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8aed0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8af10(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8af50(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8af90(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8afd0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b010(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b050(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b090(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b0d0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b110(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b150(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b190(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b1d0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b210(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b250(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b290(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10e8b2d0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e8b310(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b340(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b350(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b360(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b370(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b380(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10e8b390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e8b3a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e8b3b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10e8b3c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b4c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b4f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8b960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8bb40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8be20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8bfc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8bfd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8bfe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8bff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c000(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c010(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c020(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c030(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c140(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c1d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c260(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c2f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c300(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e8c310(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10e8dc70(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10e92eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e942f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e94960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e94970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e94990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e949a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10e95010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96930(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96950(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96960(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96970(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e96980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e969f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e96a80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99970(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e999a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e999b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e999c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e999d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e999e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e999f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e99a00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e99a10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e99a20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10e99a80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10e9c270(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d0a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d0c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d1a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d1c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d1e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d2a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d2c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d2e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d3a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d3c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d3e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9d450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10e9db10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10e9df80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea2550(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ea2560(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ea2580(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ea2590(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ea25a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ea25d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ea25e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ea28e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ea28f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5ee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea5fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea60c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea60f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea61b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea61e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea62a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea62d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ea6300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ea6f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ea6fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ea7150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7560(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7570(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ea7810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7820(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7830(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea7ce0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ea8180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ea8190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ea9150(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea98c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ea9bf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ea9fe0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa010(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa140(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa160(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa170(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa180(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa190(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa210(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa270(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa290(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa2e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa300(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa310(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa3e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa3f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa410(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eaa420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eaa470(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa6a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa6f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaa740(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaa9f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaaa10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eaab10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eaba00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eaba50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10eaba60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10eaba70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eabc50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eabda0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabe90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabeb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10eabed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10eabf00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eabfd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eabfe0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eabff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eac000(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eac010(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eac020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eac2c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eac2d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eac3d0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eac450(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eac4d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eac5d0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10ead0f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ead1a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ead1b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ead500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ead510(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eae190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eae560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eae670(undefined4 param_1,int param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eae790(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eae7a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eae7b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eae7e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eae800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eae900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb0000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb02d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb02e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10eb02f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb0320(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb0330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eb0790(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb0820(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb0960(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb0970(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb0e90(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb0ff0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb1000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb18b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10eb18c0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb18e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb28c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb2ab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb2ac0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb2ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb3b20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb3b40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb42a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb42c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb42e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb4360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb4380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb43a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4b40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4b60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4b80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4ba0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4bb0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4bc0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4bd0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4be0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4bf0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4c00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4c10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb4c20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb51a0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb51c0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb51e0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb53d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb53e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb53f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5400(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5430(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5460(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5a90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5aa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ae0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5af0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5b00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5b10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5e90(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5eb0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ed0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5ef0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f10(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f30(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5f90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5fa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5fb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5fc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eb5fd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb62e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb6300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb6320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb6340(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb6350(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb6360(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb6370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb63c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eb6410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10eb6460(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __fastcall FUN_10eb66a0(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb73c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb73d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb73e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb73f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb7400(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eb7410(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb7790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7890(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb78f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb7990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb79f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb8300(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb8310(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eb8320(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eb8480(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eb8500(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10eb8570(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eb88c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb88d0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb8920(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eb8970(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eb89c0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eb8a10(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eb8a60(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10eb97c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10eba210(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10eba280(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10eba2a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eba4f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb1e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb1f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb200(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb210(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb230(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb460(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebb470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ebc4a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebc4e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebc4f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebc500(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebc510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebca80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebca90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebcaa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebcab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebcac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebcad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebdde0(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebe2a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebeb80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebed80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebef10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebef20(int param_1,int param_2,int param_3,int *param_4,code *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebf860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebf970(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebf990(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ebf9b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfae0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfaf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfb00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfd30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ebfd40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ebfd50(int param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ec0620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ec0630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec06a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ec06b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ec2f70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ec2f80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec34b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec34c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec34d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec34e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ec3660(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ec6720(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ec6770(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ec6790(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec6fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ec6fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ec7900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ec7910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ec7920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ec7930(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca4f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca500(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca510(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca530(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eca550(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ecfab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ecfaf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0070(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0090(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed00a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed00b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0250(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0320(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10ed0330(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0660(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0670(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0680(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0690(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed06a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0890(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed08b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed08d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed08e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed08f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0950(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed0960(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed0990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ed09a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ed0a90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed0ab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ed0ac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10ed1230(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ed1310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed1380(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed1390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed13f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ed1700(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ed3840(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ed40d0(undefined4 param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ed9820(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ed9870(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ed98c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10edf310(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10edf320(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10edf330(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10edf3f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10edf400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10edf4a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10edf4b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10edfaf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10edfb00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10edfd90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10edfda0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10edfdb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee0700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee0790(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee0c90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1870(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ee1880(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee18b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1a30(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1a60(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1a90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1ab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ee1ac0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1af0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1b00(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ee1b10(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1b40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ee1b50(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ee1b80(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1bb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1bd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee1c10(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1c40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1c50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1c60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee1c70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee1d00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ee1db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee2170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee21f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ee2650(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ee2660(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee2800(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee2810(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee2860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ee28f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ee2920(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ee2950(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee2990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee29a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ee30f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee3170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ee3490(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ee49a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee60c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6310(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6440(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6570(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6c60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6d50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee6e80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee7fb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee7fc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee8940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee8970(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ee8ab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee8df0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee8fd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee90f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee9210(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee9310(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ee9f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea050(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea160(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea270(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea380(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eea4a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeb310(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeb630(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeb640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10eeb6d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eeb770(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eeb780(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eeb810(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eeb820(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eebf30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eebf40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eebf50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eebf60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eec230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eec240(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eec250(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eec260(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eec270(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10eec280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eece60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eece80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecef0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10eecf40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecf70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10eecfa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eecfd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eed610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eed6a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eed860(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eed8e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eed8f0(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeda60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eedaa0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eedac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eedad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eeddd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eedde0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eeddf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eede00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eede10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eee120(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10eee3e0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10eeea40(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeec40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeec50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10eeec70(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10eeee70(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeeef0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eeef00(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eef070(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eef0b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eef0d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10eef0e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef460(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef480(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef490(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef4a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10eef7b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef0040(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ef09e0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef10d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef10e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef1170(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ef1610(undefined4 *param_1);
/* WARNING: Removing unreachable block_10ef1900 (ram,0x101ba14a) */ void __fastcall FUN_10ef1900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef1cd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef1cf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ef22d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef22e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10ef2310(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef3af0(undefined4 param_1,char *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef3cc0(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef41c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef4200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ef4380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef43a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef43b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef43c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef43d0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef4400(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef47e0(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4810(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4840(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4870(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef48f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4910(int param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef4940(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ef4970(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef49a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef49b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef49c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef49d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ef4b70(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4ba0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4bb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ef4bc0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ef4bf0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ef4c20(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4c50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4c60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4c70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4c80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4c90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4cd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4ce0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4d50(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef4d70(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4dd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4df0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef4e50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ef5100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef5140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef5310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5520(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5550(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ef5560(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ef5570(int *param_1);
// Reference entry 10e28de0; body size 4 bytes.
#line 1 "ENTRY_10e28de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28de0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e28df0; body size 3 bytes.
#line 1 "ENTRY_10e28df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e28df0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e2a960; body size 8 bytes.
#line 1 "ENTRY_10e2a960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a960(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e2a970; body size 8 bytes.
#line 1 "ENTRY_10e2a970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a970(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e2a980; body size 8 bytes.
#line 1 "ENTRY_10e2a980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a980(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e2a990; body size 8 bytes.
#line 1 "ENTRY_10e2a990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e2a9a0; body size 4 bytes.
#line 1 "ENTRY_10e2a9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2a9a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e2a9b0; body size 4 bytes.
#line 1 "ENTRY_10e2a9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2a9b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e2a9c0; body size 4 bytes.
#line 1 "ENTRY_10e2a9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2a9c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e2a9d0; body size 4 bytes.
#line 1 "ENTRY_10e2a9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2a9d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e2a9e0; body size 7 bytes.
#line 1 "ENTRY_10e2a9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a9e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e2a9f0; body size 7 bytes.
#line 1 "ENTRY_10e2a9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2a9f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e2aa00; body size 7 bytes.
#line 1 "ENTRY_10e2aa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2aa00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e2aa10; body size 7 bytes.
#line 1 "ENTRY_10e2aa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e2aa10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e2aa20; body size 26 bytes.
#line 1 "ENTRY_10e2aa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e2aa20(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e2aa40; body size 26 bytes.
#line 1 "ENTRY_10e2aa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e2aa40(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e2aa60; body size 26 bytes.
#line 1 "ENTRY_10e2aa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e2aa60(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e2aa80; body size 26 bytes.
#line 1 "ENTRY_10e2aa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e2aa80(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e2aaa0; body size 10 bytes.
#line 1 "ENTRY_10e2aaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e2aaa0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e2aab0; body size 10 bytes.
#line 1 "ENTRY_10e2aab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e2aab0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e2aac0; body size 10 bytes.
#line 1 "ENTRY_10e2aac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e2aac0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e2aad0; body size 10 bytes.
#line 1 "ENTRY_10e2aad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e2aad0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e2f170; body size 16 bytes.
#line 1 "ENTRY_10e2f170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2f170(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e2f190; body size 16 bytes.
#line 1 "ENTRY_10e2f190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2f190(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e2f1b0; body size 16 bytes.
#line 1 "ENTRY_10e2f1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2f1b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e2f1d0; body size 16 bytes.
#line 1 "ENTRY_10e2f1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e2f1d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e30000; body size 4 bytes.
#line 1 "ENTRY_10e30000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e30000(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x40));
}


// Reference entry 10e30980; body size 4 bytes.
#line 1 "ENTRY_10e30980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e30980(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e30990; body size 4 bytes.
#line 1 "ENTRY_10e30990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e30990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e309a0; body size 4 bytes.
#line 1 "ENTRY_10e309a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e309a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e309b0; body size 4 bytes.
#line 1 "ENTRY_10e309b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e309b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e3cad0; body size 3 bytes.
#line 1 "ENTRY_10e3cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10e3cad0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 10e3e3d0; body size 16 bytes.
#line 1 "ENTRY_10e3e3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e3e3d0(void)

{
  SCLibrary *pSVar1;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*(int *)(pSVar1 + 0x4c) >> 8)) << 8 | (uint)(*(int *)(*(int *)(pSVar1 + 0x4c) + 0x6c) == 3)));
}


// Reference entry 10e3f0d0; body size 3 bytes.
#line 1 "ENTRY_10e3f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e3f0d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e3f0e0; body size 3 bytes.
#line 1 "ENTRY_10e3f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e3f0e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e3f0f0; body size 3 bytes.
#line 1 "ENTRY_10e3f0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e3f0f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e3f200; body size 28 bytes.
#line 1 "ENTRY_10e3f200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f200(undefined4 *param_1)

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


// Reference entry 10e3f230; body size 28 bytes.
#line 1 "ENTRY_10e3f230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f230(undefined4 *param_1)

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


// Reference entry 10e3f260; body size 28 bytes.
#line 1 "ENTRY_10e3f260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f260(undefined4 *param_1)

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


// Reference entry 10e3f290; body size 28 bytes.
#line 1 "ENTRY_10e3f290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f290(undefined4 *param_1)

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


// Reference entry 10e3f2c0; body size 28 bytes.
#line 1 "ENTRY_10e3f2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f2c0(undefined4 *param_1)

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


// Reference entry 10e3f2f0; body size 28 bytes.
#line 1 "ENTRY_10e3f2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e3f2f0(undefined4 *param_1)

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


// Reference entry 10e45dd0; body size 25 bytes.
#line 1 "ENTRY_10e45dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e45dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e45df0; body size 25 bytes.
#line 1 "ENTRY_10e45df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e45df0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e45e10; body size 3 bytes.
#line 1 "ENTRY_10e45e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e45e10(void)

{
  return;
}


// Reference entry 10e46230; body size 48 bytes.
#line 1 "ENTRY_10e46230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e46230(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  *piVar1 = (int)(0);
  if (piVar1 != (int *)(param_2)) {
    iVar2 = (int)(*param_2);
    *piVar1 = (int)(iVar2);
    if (iVar2 != 0) {
      thunk_FUN_1123fce0(iVar2 + 4);
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10e46500; body size 7 bytes.
#line 1 "ENTRY_10e46500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46500(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e46510; body size 7 bytes.
#line 1 "ENTRY_10e46510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46510(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e46520; body size 7 bytes.
#line 1 "ENTRY_10e46520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46520(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e46530; body size 92 bytes.
#line 1 "ENTRY_10e46530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10e46530(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10e465b0; body size 3 bytes.
#line 1 "ENTRY_10e465b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e465b0(void)

{
  return;
}


// Reference entry 10e46690; body size 24 bytes.
#line 1 "ENTRY_10e46690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e46690(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e467a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10e466b0; body size 5 bytes.
#line 1 "ENTRY_10e466b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e466b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e466c0; body size 5 bytes.
#line 1 "ENTRY_10e466c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e466c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e468e0; body size 5 bytes.
#line 1 "ENTRY_10e468e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e468e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e468f0; body size 5 bytes.
#line 1 "ENTRY_10e468f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e468f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e46900; body size 18 bytes.
#line 1 "ENTRY_10e46900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e46900(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 4);
  return;
}


// Reference entry 10e46920; body size 20 bytes.
#line 1 "ENTRY_10e46920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e46920(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10e45e20(param_1,param_2,param_2);
  return;
}


// Reference entry 10e46940; body size 37 bytes.
#line 1 "ENTRY_10e46940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e46940(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  *param_2 = (int)(0);
  if (param_2 != (int *)(param_3)) {
    iVar1 = (int)(*param_3);
    *param_2 = (int)(iVar1);
    if (iVar1 != 0) {
      thunk_FUN_1123fce0(iVar1 + 4);
    }
  }
  return;
}


// Reference entry 10e46af0; body size 12 bytes.
#line 1 "ENTRY_10e46af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10e46af0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_1 >> 2);
}


// Reference entry 10e46b50; body size 5 bytes.
#line 1 "ENTRY_10e46b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e46b60; body size 5 bytes.
#line 1 "ENTRY_10e46b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e46b70; body size 5 bytes.
#line 1 "ENTRY_10e46b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e46b80; body size 5 bytes.
#line 1 "ENTRY_10e46b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e46b90; body size 5 bytes.
#line 1 "ENTRY_10e46b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e46b90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e46ba0; body size 12 bytes.
#line 1 "ENTRY_10e46ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10e46ba0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + param_2 * 4);
}


// Reference entry 10e46bb0; body size 49 bytes.
#line 1 "ENTRY_10e46bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e46bb0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  *param_1 = (int)(0);
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_1 = (int)(iVar1);
    if (iVar1 != 0) {
      thunk_FUN_1123fce0(iVar1 + 4);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10e46d40; body size 26 bytes.
#line 1 "ENTRY_10e46d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46d40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46d60; body size 21 bytes.
#line 1 "ENTRY_10e46d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46d60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46d80; body size 21 bytes.
#line 1 "ENTRY_10e46d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46d80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46da0; body size 11 bytes.
#line 1 "ENTRY_10e46da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46db0; body size 11 bytes.
#line 1 "ENTRY_10e46db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46db0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46dc0; body size 23 bytes.
#line 1 "ENTRY_10e46dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e46dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46de0; body size 3 bytes.
#line 1 "ENTRY_10e46de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e46de0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e46eb0; body size 23 bytes.
#line 1 "ENTRY_10e46eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e46eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46ed0; body size 43 bytes.
#line 1 "ENTRY_10e46ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e46ed0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  *param_1 = (int)(0);
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_1 = (int)(iVar1);
    if (iVar1 != 0) {
      thunk_FUN_1123fce0(iVar1 + 4);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10e46f10; body size 26 bytes.
#line 1 "ENTRY_10e46f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46f10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerCalcConfirmState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46f30; body size 26 bytes.
#line 1 "ENTRY_10e46f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46f30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerCompleteState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46f50; body size 26 bytes.
#line 1 "ENTRY_10e46f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46f50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerConfirmState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e46f70; body size 144 bytes.
#line 1 "ENTRY_10e46f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e46f70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerDoRegisterState);
  param_1[3] = (uint)&ghidra_vftable_SCSecurePlayerDoRegisterState;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xd] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x19] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47030; body size 26 bytes.
#line 1 "ENTRY_10e47030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47030(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerFailureBadTokenState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47050; body size 26 bytes.
#line 1 "ENTRY_10e47050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerFailureState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47070; body size 26 bytes.
#line 1 "ENTRY_10e47070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47070(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerInitState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47110; body size 26 bytes.
#line 1 "ENTRY_10e47110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47110(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerLinkPlayersIntroState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47130; body size 26 bytes.
#line 1 "ENTRY_10e47130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47130(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47150; body size 26 bytes.
#line 1 "ENTRY_10e47150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerSuccessState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47170; body size 26 bytes.
#line 1 "ENTRY_10e47170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerTransferFailureState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47190; body size 26 bytes.
#line 1 "ENTRY_10e47190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerUnconfirmedState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47390; body size 7 bytes.
#line 1 "ENTRY_10e47390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e47390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e473a0; body size 7 bytes.
#line 1 "ENTRY_10e473a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e473a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e473b0; body size 7 bytes.
#line 1 "ENTRY_10e473b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e473b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e474e0; body size 7 bytes.
#line 1 "ENTRY_10e474e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e474e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e474f0; body size 7 bytes.
#line 1 "ENTRY_10e474f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e474f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e47500; body size 7 bytes.
#line 1 "ENTRY_10e47500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e47500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e475c0; body size 7 bytes.
#line 1 "ENTRY_10e475c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e475c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e475d0; body size 7 bytes.
#line 1 "ENTRY_10e475d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e475d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e475e0; body size 7 bytes.
#line 1 "ENTRY_10e475e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e475e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e475f0; body size 7 bytes.
#line 1 "ENTRY_10e475f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e475f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e47600; body size 7 bytes.
#line 1 "ENTRY_10e47600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e47600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e47610; body size 39 bytes.
#line 1 "ENTRY_10e47610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e47610(int *param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCXMLSecurePlayerWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCXMLSecurePlayerWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCXMLSecurePlayerWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCXMLSecurePlayerWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCXMLSecurePlayerWizard;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11728460);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCWizard;
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
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
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)((int *)param_1[0x15]);
  uStack_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (int)(uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();
  uStack_8 = (undefined4)(8);
  param_1[2] = (int)(uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10e476a0; body size 65 bytes.
#line 1 "ENTRY_10e476a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e476a0(int *param_2)
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


// Reference entry 10e47700; body size 31 bytes.
#line 1 "ENTRY_10e47700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e47700(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_10e45e20(*param_2,param_2[1],param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e47790; body size 5 bytes.
#line 1 "ENTRY_10e47790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e47790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e47820; body size 14 bytes.
#line 1 "ENTRY_10e47820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10e47820(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10e47840; body size 22 bytes.
#line 1 "ENTRY_10e47840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10e47840(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_111a0640(param_1,param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 == '\0');
}


// Reference entry 10e47860; body size 3 bytes.
#line 1 "ENTRY_10e47860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e47860(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e47870; body size 3 bytes.
#line 1 "ENTRY_10e47870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e47870(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e47880; body size 6 bytes.
#line 1 "ENTRY_10e47880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10e47880(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10e47890; body size 16 bytes.
#line 1 "ENTRY_10e47890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e47890(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 10e478b0; body size 6 bytes.
#line 1 "ENTRY_10e478b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10e478b0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10e48020; body size 129 bytes.
#line 1 "ENTRY_10e48020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e48020(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x40000000) {
    param_2 = (uint)(param_2 * 4);
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


// Reference entry 10e480d0; body size 30 bytes.
#line 1 "ENTRY_10e480d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e480d0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10e48ae0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 8;
  return;
}


// Reference entry 10e48100; body size 49 bytes.
#line 1 "ENTRY_10e48100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10e48100(uint param_2)
{
  int *param_1 = (int *)this;
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


// Reference entry 10e48140; body size 49 bytes.
#line 1 "ENTRY_10e48140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10e48140(uint param_2)
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


// Reference entry 10e48210; body size 277 bytes.
#line 1 "ENTRY_10e48210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e48210(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_10e485f0();
  }
  uVar3 = (uint)(*param_1);
  uVar4 = (uint)((int)(param_1[2] - uVar3) >> 2);
  if (0x3fffffff - (uVar4 >> 1) < uVar4) {
    uVar4 = (uint)(0x3fffffff);
  }
  else {
    uVar4 = (uint)((uVar4 >> 1) + uVar4);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (uVar3 != 0) {
    thunk_FUN_10e460f0(uVar3,param_1[1],param_1);
    uVar3 = (uint)(*param_1);
    uVar5 = (uint)(param_1[2] - uVar3 & 0xfffffffc);
    uVar1 = (uint)(uVar3);
    if (0xfff < uVar5) {
      uVar1 = (uint)(*(uint *)(uVar3 - 4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uVar3 - uVar1) - 4) goto LAB_10e482e4;
    }
    thunk_FUN_1148a50e(uVar1,uVar5);
    *param_1 = (uint)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar4 < 0x40000000) {
    uVar4 = (uint)(uVar4 * 4);
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        *param_1 = (uint)(0);
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      pvVar2 = (void *)(operator_new(uVar4));
      *param_1 = (uint)((uint)pvVar2);
      param_1[1] = (uint)pvVar2;
      param_1[2] = (uint)((int)pvVar2 + uVar4);
      return;
    }
    if (uVar4 < uVar4 + 0x23) {
      pvVar2 = (void *)(operator_new(uVar4 + 0x23));
      if (pvVar2 != (void *)0x0) {
        uVar3 = (uint)((int)pvVar2 + 0x23U & 0xffffffe0);
        *(void **)(uVar3 - 4) = pvVar2;
        *param_1 = (uint)(uVar3);
        param_1[1] = uVar3;
        param_1[2] = uVar3 + uVar4;
        return;
      }
LAB_10e482e4:
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10e48370; body size 3 bytes.
#line 1 "ENTRY_10e48370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e48370(void)

{
  return;
}


// Reference entry 10e48380; body size 21 bytes.
#line 1 "ENTRY_10e48380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e48380(undefined4 *param_1)

{
  thunk_FUN_10e45e20(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 10e483e0; body size 3 bytes.
#line 1 "ENTRY_10e483e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e483e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e483f0; body size 3 bytes.
#line 1 "ENTRY_10e483f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e483f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e48400; body size 3 bytes.
#line 1 "ENTRY_10e48400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48400(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e48410; body size 3 bytes.
#line 1 "ENTRY_10e48410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e48420; body size 3 bytes.
#line 1 "ENTRY_10e48420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e48430; body size 3 bytes.
#line 1 "ENTRY_10e48430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48430(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e48440; body size 3 bytes.
#line 1 "ENTRY_10e48440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e48450; body size 3 bytes.
#line 1 "ENTRY_10e48450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e48450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e48460; body size 3 bytes.
#line 1 "ENTRY_10e48460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e48460(void)

{
  return;
}


// Reference entry 10e48470; body size 6 bytes.
#line 1 "ENTRY_10e48470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e48470(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10e48480; body size 6 bytes.
#line 1 "ENTRY_10e48480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e48480(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10e485b0; body size 24 bytes.
#line 1 "ENTRY_10e485b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e485b0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e467a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10e485d0; body size 24 bytes.
#line 1 "ENTRY_10e485d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e485d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10e467a0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10e48b70; body size 11 bytes.
#line 1 "ENTRY_10e48b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e48b70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10e48d10; body size 9 bytes.
#line 1 "ENTRY_10e48d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e48d10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10e48d20; body size 9 bytes.
#line 1 "ENTRY_10e48d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e48d20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10e4a8b0; body size 12 bytes.
#line 1 "ENTRY_10e4a8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e4a8b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10e4dda0; body size 3 bytes.
#line 1 "ENTRY_10e4dda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10e4dda0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 10e4e460; body size 6 bytes.
#line 1 "ENTRY_10e4e460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4e460(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10e4e470; body size 6 bytes.
#line 1 "ENTRY_10e4e470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4e470(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10e4e480; body size 6 bytes.
#line 1 "ENTRY_10e4e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4e480(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10e4e490; body size 6 bytes.
#line 1 "ENTRY_10e4e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4e490(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10e4f810; body size 5 bytes.
#line 1 "ENTRY_10e4f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e4f810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e4fb10; body size 9 bytes.
#line 1 "ENTRY_10e4fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e4fb10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10e50bd0; body size 26 bytes.
#line 1 "ENTRY_10e50bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50bd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50d00; body size 26 bytes.
#line 1 "ENTRY_10e50d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50d00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferButtonsState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50da0; body size 30 bytes.
#line 1 "ENTRY_10e50da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferNetworkErrorState);
  *(undefined1 *)(param_1 + 3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50dd0; body size 165 bytes.
#line 1 "ENTRY_10e50dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50dd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[4] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferPressButtonState);
  param_1[3] = (uint)&ghidra_vftable_SCSecureTransferPressButtonState;
  param_1[4] = (uint)&ghidra_vftable_SCSecureTransferPressButtonState;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x1b] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50ea0; body size 26 bytes.
#line 1 "ENTRY_10e50ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferSpeakerChoiceState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50ec0; body size 26 bytes.
#line 1 "ENTRY_10e50ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50ec0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferSuccessState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50ee0; body size 134 bytes.
#line 1 "ENTRY_10e50ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50ee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[4] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWaitingForTransferState);
  param_1[3] = (uint)&ghidra_vftable_SCSecureTransferWaitingForTransferState;
  param_1[4] = (uint)&ghidra_vftable_SCSecureTransferWaitingForTransferState;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xb] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x17] = 0;
  param_1[0x21] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50f90; body size 26 bytes.
#line 1 "ENTRY_10e50f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50f90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50fb0; body size 26 bytes.
#line 1 "ENTRY_10e50fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50fb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizInitState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e50fd0; body size 26 bytes.
#line 1 "ENTRY_10e50fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e50fd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizIntroState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e513e0; body size 7 bytes.
#line 1 "ENTRY_10e513e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e513e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e514a0; body size 7 bytes.
#line 1 "ENTRY_10e514a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e514a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51570; body size 7 bytes.
#line 1 "ENTRY_10e51570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51580; body size 7 bytes.
#line 1 "ENTRY_10e51580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51640; body size 7 bytes.
#line 1 "ENTRY_10e51640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51650; body size 7 bytes.
#line 1 "ENTRY_10e51650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51660; body size 7 bytes.
#line 1 "ENTRY_10e51660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e51720; body size 39 bytes.
#line 1 "ENTRY_10e51720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e51720(int *param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCSecureTransferWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCSecureTransferWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCSecureTransferWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCSecureTransferWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCSecureTransferWizard;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11728460);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCWizard;
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
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
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)((int *)param_1[0x15]);
  uStack_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (int)(uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();
  uStack_8 = (undefined4)(8);
  param_1[2] = (int)(uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10e5a2e0; body size 18 bytes.
#line 1 "ENTRY_10e5a2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5a2e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5a300; body size 25 bytes.
#line 1 "ENTRY_10e5a300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5a300(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5a320; body size 32 bytes.
#line 1 "ENTRY_10e5a320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5a320(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5a350; body size 22 bytes.
#line 1 "ENTRY_10e5a350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5a350(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5a370; body size 18 bytes.
#line 1 "ENTRY_10e5a370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5a370(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5a450; body size 22 bytes.
#line 1 "ENTRY_10e5a450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5a450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5a470; body size 34 bytes.
#line 1 "ENTRY_10e5a470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5a470(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5a4a0; body size 91 bytes.
#line 1 "ENTRY_10e5a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e5a4a0(int *param_2)
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


// Reference entry 10e5a520; body size 83 bytes.
#line 1 "ENTRY_10e5a520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e5a520(int *param_2)
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


// Reference entry 10e5a590; body size 25 bytes.
#line 1 "ENTRY_10e5a590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5a590(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10e5a5b0; body size 13 bytes.
#line 1 "ENTRY_10e5a5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5a5b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10e5a5c0; body size 13 bytes.
#line 1 "ENTRY_10e5a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5a5c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10e5a5d0; body size 3 bytes.
#line 1 "ENTRY_10e5a5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5a5d0(void)

{
  return;
}


// Reference entry 10e5ad50; body size 15 bytes.
#line 1 "ENTRY_10e5ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5ad50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10e5adf0; body size 7 bytes.
#line 1 "ENTRY_10e5adf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5adf0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e5ae00; body size 5 bytes.
#line 1 "ENTRY_10e5ae00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5ae00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5ae10; body size 31 bytes.
#line 1 "ENTRY_10e5ae10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10e5ae10(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= in_EAX)
     ) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10e5af60; body size 5 bytes.
#line 1 "ENTRY_10e5af60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5af60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b110; body size 5 bytes.
#line 1 "ENTRY_10e5b110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b110(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b120; body size 5 bytes.
#line 1 "ENTRY_10e5b120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b130; body size 5 bytes.
#line 1 "ENTRY_10e5b130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b130(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b140; body size 5 bytes.
#line 1 "ENTRY_10e5b140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b140(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b150; body size 5 bytes.
#line 1 "ENTRY_10e5b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b150(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b160; body size 130 bytes.
#line 1 "ENTRY_10e5b160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e5b160(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e5b210; body size 130 bytes.
#line 1 "ENTRY_10e5b210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e5b210(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e5b2c0; body size 130 bytes.
#line 1 "ENTRY_10e5b2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e5b2c0(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e5b420; body size 130 bytes.
#line 1 "ENTRY_10e5b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e5b420(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e5b580; body size 29 bytes.
#line 1 "ENTRY_10e5b580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e5b580(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// Reference entry 10e5b8f0; body size 15 bytes.
#line 1 "ENTRY_10e5b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b8f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e5b910; body size 15 bytes.
#line 1 "ENTRY_10e5b910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e5b930; body size 5 bytes.
#line 1 "ENTRY_10e5b930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b940; body size 5 bytes.
#line 1 "ENTRY_10e5b940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b950; body size 5 bytes.
#line 1 "ENTRY_10e5b950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b960; body size 5 bytes.
#line 1 "ENTRY_10e5b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b970; body size 5 bytes.
#line 1 "ENTRY_10e5b970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b980; body size 5 bytes.
#line 1 "ENTRY_10e5b980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b990; body size 5 bytes.
#line 1 "ENTRY_10e5b990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b9a0; body size 5 bytes.
#line 1 "ENTRY_10e5b9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b9b0; body size 5 bytes.
#line 1 "ENTRY_10e5b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b9c0; body size 5 bytes.
#line 1 "ENTRY_10e5b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b9d0; body size 5 bytes.
#line 1 "ENTRY_10e5b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5b9e0; body size 6 bytes.
#line 1 "ENTRY_10e5b9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e5b9e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIVSResponseListener");
}


// Reference entry 10e5b9f0; body size 5 bytes.
#line 1 "ENTRY_10e5b9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e5b9f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5bb50; body size 27 bytes.
#line 1 "ENTRY_10e5bb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5bb50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bb80; body size 70 bytes.
#line 1 "ENTRY_10e5bb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5bb80(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bbe0; body size 70 bytes.
#line 1 "ENTRY_10e5bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5bbe0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bc40; body size 70 bytes.
#line 1 "ENTRY_10e5bc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5bc40(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bca0; body size 70 bytes.
#line 1 "ENTRY_10e5bca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5bca0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bd00; body size 70 bytes.
#line 1 "ENTRY_10e5bd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5bd00(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bd90; body size 16 bytes.
#line 1 "ENTRY_10e5bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5bd90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5beb0; body size 16 bytes.
#line 1 "ENTRY_10e5beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5beb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bed0; body size 127 bytes.
#line 1 "ENTRY_10e5bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5bed0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceAuthErrorBaseState);
  param_1[3] = (uint)&ghidra_vftable_SCVoiceAuthErrorBaseState;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xb] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x17] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bf70; body size 26 bytes.
#line 1 "ENTRY_10e5bf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5bf70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bf90; body size 18 bytes.
#line 1 "ENTRY_10e5bf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5bf90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5bfb0; body size 10 bytes.
#line 1 "ENTRY_10e5bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bfb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5bfc0; body size 10 bytes.
#line 1 "ENTRY_10e5bfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bfc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5bfd0; body size 10 bytes.
#line 1 "ENTRY_10e5bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bfd0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5bfe0; body size 10 bytes.
#line 1 "ENTRY_10e5bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bfe0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5bff0; body size 10 bytes.
#line 1 "ENTRY_10e5bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5bff0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5c040; body size 11 bytes.
#line 1 "ENTRY_10e5c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5c040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c050; body size 11 bytes.
#line 1 "ENTRY_10e5c050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5c050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c0e0; body size 11 bytes.
#line 1 "ENTRY_10e5c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5c0e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c0f0; body size 16 bytes.
#line 1 "ENTRY_10e5c0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5c0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c110; body size 21 bytes.
#line 1 "ENTRY_10e5c110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5c110(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c130; body size 23 bytes.
#line 1 "ENTRY_10e5c130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5c130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c150; body size 3 bytes.
#line 1 "ENTRY_10e5c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5c150(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5c160; body size 3 bytes.
#line 1 "ENTRY_10e5c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5c160(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e5c170; body size 12 bytes.
#line 1 "ENTRY_10e5c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c170(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5c200; body size 12 bytes.
#line 1 "ENTRY_10e5c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c200(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5c290; body size 12 bytes.
#line 1 "ENTRY_10e5c290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c290(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5c320; body size 12 bytes.
#line 1 "ENTRY_10e5c320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c320(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5c3b0; body size 12 bytes.
#line 1 "ENTRY_10e5c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5c3b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e5c440; body size 52 bytes.
#line 1 "ENTRY_10e5c440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5c440(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c490; body size 23 bytes.
#line 1 "ENTRY_10e5c490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5c490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c4b0; body size 37 bytes.
#line 1 "ENTRY_10e5c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5c4b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10e5d160(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState);
  param_1[3] = (uint)&ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c720; body size 26 bytes.
#line 1 "ENTRY_10e5c720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5c720(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthCompleteState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c820; body size 30 bytes.
#line 1 "ENTRY_10e5c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5c820(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthEnableAckChimeState);
  *(undefined1 *)(param_1 + 3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5c850; body size 127 bytes.
#line 1 "ENTRY_10e5c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5c850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xb] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x17] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthGenericErrorState);
  param_1[3] = (uint)&ghidra_vftable_SCAlexaAuthGenericErrorState;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5ca00; body size 26 bytes.
#line 1 "ENTRY_10e5ca00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5ca00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthIntroState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5cf80; body size 127 bytes.
#line 1 "ENTRY_10e5cf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5cf80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xb] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x17] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthLowMemoryErrorState);
  param_1[3] = (uint)&ghidra_vftable_SCAlexaAuthLowMemoryErrorState;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d020; body size 26 bytes.
#line 1 "ENTRY_10e5d020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthMicSetupState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d040; body size 26 bytes.
#line 1 "ENTRY_10e5d040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthMissingPlayersErrorState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d060; body size 197 bytes.
#line 1 "ENTRY_10e5d060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthPushAuthCodeState);
  param_1[3] = (uint)&ghidra_vftable_SCAlexaAuthPushAuthCodeState;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = (uint)&ghidra_vftable_SCOpRef;
  param_1[9] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x15] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x20] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x23] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x2f] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d340; body size 26 bytes.
#line 1 "ENTRY_10e5d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthRoomState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d3e0; body size 26 bytes.
#line 1 "ENTRY_10e5d3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d3e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthSuccessState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d400; body size 127 bytes.
#line 1 "ENTRY_10e5d400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d400(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xb] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x17] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthUseDifferentAccountErrorState);
  param_1[3] = (uint)&ghidra_vftable_SCAlexaAuthUseDifferentAccountErrorState;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d750; body size 26 bytes.
#line 1 "ENTRY_10e5d750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthWizardState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d770; body size 127 bytes.
#line 1 "ENTRY_10e5d770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xb] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x17] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthWrongAccountErrorState);
  param_1[3] = (uint)&ghidra_vftable_SCAlexaAuthWrongAccountErrorState;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d810; body size 30 bytes.
#line 1 "ENTRY_10e5d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaSetUpMusicServicesState);
  *(undefined1 *)(param_1 + 3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d840; body size 9 bytes.
#line 1 "ENTRY_10e5d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5d840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIVSResponseListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d850; body size 28 bytes.
#line 1 "ENTRY_10e5d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5d850(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d880; body size 77 bytes.
#line 1 "ENTRY_10e5d880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e5d880(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (uint)&ghidra_vftable_RITQHandler;
  param_1[3] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceResponseHandler);
  param_1[2] = (uint)&ghidra_vftable_SCVoiceResponseHandler;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5d8e0; body size 9 bytes.
#line 1 "ENTRY_10e5d8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5d8e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceResponseHandler_VoiceResponseDelegate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5da10; body size 28 bytes.
#line 1 "ENTRY_10e5da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e5da10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e5db50; body size 19 bytes.
#line 1 "ENTRY_10e5db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5db50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e5e4e0; body size 19 bytes.
#line 1 "ENTRY_10e5e4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5e4e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10e5e750; body size 18 bytes.
#line 1 "ENTRY_10e5e750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5e750(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState);
  param_1[3] = (uint)&ghidra_vftable_SCAlexaAuthChecklistDownloadAlexaState;
  puStack_c = (undefined1 *)(LAB_11745740);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthReminderState);
  param_1[3] = (uint)&ghidra_vftable_SCAlexaAuthReminderState;
  uStack_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0x6e)))->int_release();
  param_1[0x6e] = 0;
  thunk_FUN_102c45c0(uVar2);
  thunk_FUN_102cc870();
  thunk_FUN_102cc870();
  thunk_FUN_102cc870();
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  uStack_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10e5e930; body size 7 bytes.
#line 1 "ENTRY_10e5e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5e930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5ea00; body size 7 bytes.
#line 1 "ENTRY_10e5ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5ea00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5eab0; body size 7 bytes.
#line 1 "ENTRY_10e5eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5eab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5eac0; body size 7 bytes.
#line 1 "ENTRY_10e5eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5eac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5ee60; body size 7 bytes.
#line 1 "ENTRY_10e5ee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5ee60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5ee70; body size 7 bytes.
#line 1 "ENTRY_10e5ee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5ee70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5f020; body size 7 bytes.
#line 1 "ENTRY_10e5f020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5f020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5f0e0; body size 7 bytes.
#line 1 "ENTRY_10e5f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5f0e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5f370; body size 7 bytes.
#line 1 "ENTRY_10e5f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5f370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e5f380; body size 7 bytes.
#line 1 "ENTRY_10e5f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e5f380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e5f570; body size 65 bytes.
#line 1 "ENTRY_10e5f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e5f570(int *param_2)
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


// Reference entry 10e5f830; body size 14 bytes.
#line 1 "ENTRY_10e5f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10e5f830(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10e5f940; body size 15 bytes.
#line 1 "ENTRY_10e5f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e5f940(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0xc);
}


// Reference entry 10e5f960; body size 3 bytes.
#line 1 "ENTRY_10e5f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5f960(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e5f970; body size 7 bytes.
#line 1 "ENTRY_10e5f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f970(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10e5f980; body size 8 bytes.
#line 1 "ENTRY_10e5f980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f980(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f990; body size 8 bytes.
#line 1 "ENTRY_10e5f990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f9a0; body size 8 bytes.
#line 1 "ENTRY_10e5f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f9a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f9b0; body size 8 bytes.
#line 1 "ENTRY_10e5f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f9b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f9c0; body size 8 bytes.
#line 1 "ENTRY_10e5f9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e5f9c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e5f9d0; body size 4 bytes.
#line 1 "ENTRY_10e5f9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5f9d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5f9e0; body size 4 bytes.
#line 1 "ENTRY_10e5f9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5f9e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5f9f0; body size 4 bytes.
#line 1 "ENTRY_10e5f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5f9f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5fa00; body size 4 bytes.
#line 1 "ENTRY_10e5fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5fa00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5fa10; body size 4 bytes.
#line 1 "ENTRY_10e5fa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5fa10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e5fa20; body size 3 bytes.
#line 1 "ENTRY_10e5fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5fa20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e5fa30; body size 3 bytes.
#line 1 "ENTRY_10e5fa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e5fa30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e5fa40; body size 6 bytes.
#line 1 "ENTRY_10e5fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5fa40(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10e5fa50; body size 6 bytes.
#line 1 "ENTRY_10e5fa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5fa50(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10e5fa60; body size 6 bytes.
#line 1 "ENTRY_10e5fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e5fa60(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10e610a0; body size 31 bytes.
#line 1 "ENTRY_10e610a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e610a0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10e610f0; body size 62 bytes.
#line 1 "ENTRY_10e610f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10e610f0(uint param_2)
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


// Reference entry 10e61230; body size 8 bytes.
#line 1 "ENTRY_10e61230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61230(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61240; body size 8 bytes.
#line 1 "ENTRY_10e61240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61240(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61250; body size 8 bytes.
#line 1 "ENTRY_10e61250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61250(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61260; body size 8 bytes.
#line 1 "ENTRY_10e61260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61260(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61270; body size 8 bytes.
#line 1 "ENTRY_10e61270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61270(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e61690; body size 3 bytes.
#line 1 "ENTRY_10e61690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61690(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e616a0; body size 3 bytes.
#line 1 "ENTRY_10e616a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e616b0; body size 3 bytes.
#line 1 "ENTRY_10e616b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e616c0; body size 3 bytes.
#line 1 "ENTRY_10e616c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e616d0; body size 3 bytes.
#line 1 "ENTRY_10e616d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e616e0; body size 3 bytes.
#line 1 "ENTRY_10e616e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e616f0; body size 3 bytes.
#line 1 "ENTRY_10e616f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e616f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e61700; body size 3 bytes.
#line 1 "ENTRY_10e61700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e61710; body size 3 bytes.
#line 1 "ENTRY_10e61710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61710(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e61720; body size 3 bytes.
#line 1 "ENTRY_10e61720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61720(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e61730; body size 3 bytes.
#line 1 "ENTRY_10e61730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61730(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e61740; body size 3 bytes.
#line 1 "ENTRY_10e61740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61740(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e61750; body size 4 bytes.
#line 1 "ENTRY_10e61750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61750(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61760; body size 4 bytes.
#line 1 "ENTRY_10e61760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61760(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61770; body size 4 bytes.
#line 1 "ENTRY_10e61770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61770(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61780; body size 4 bytes.
#line 1 "ENTRY_10e61780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61780(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61790; body size 4 bytes.
#line 1 "ENTRY_10e61790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61790(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e61a30; body size 7 bytes.
#line 1 "ENTRY_10e61a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e61a40; body size 7 bytes.
#line 1 "ENTRY_10e61a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e61a50; body size 7 bytes.
#line 1 "ENTRY_10e61a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e61a60; body size 7 bytes.
#line 1 "ENTRY_10e61a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e61a70; body size 7 bytes.
#line 1 "ENTRY_10e61a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e61a70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e61af0; body size 30 bytes.
#line 1 "ENTRY_10e61af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10e61af0(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e61b50; body size 3 bytes.
#line 1 "ENTRY_10e61b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e61b50(void)

{
  return;
}


// Reference entry 10e61b60; body size 3 bytes.
#line 1 "ENTRY_10e61b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e61b60(void)

{
  return;
}


// Reference entry 10e61b70; body size 11 bytes.
#line 1 "ENTRY_10e61b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e61b70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e61b80; body size 6 bytes.
#line 1 "ENTRY_10e61b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e61b80(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10e61b90; body size 26 bytes.
#line 1 "ENTRY_10e61b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61b90(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e61bb0; body size 26 bytes.
#line 1 "ENTRY_10e61bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61bb0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e61bd0; body size 26 bytes.
#line 1 "ENTRY_10e61bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61bd0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e61bf0; body size 26 bytes.
#line 1 "ENTRY_10e61bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61bf0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e61c10; body size 26 bytes.
#line 1 "ENTRY_10e61c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61c10(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e61ca0; body size 10 bytes.
#line 1 "ENTRY_10e61ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61ca0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e61cb0; body size 10 bytes.
#line 1 "ENTRY_10e61cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e61cc0; body size 10 bytes.
#line 1 "ENTRY_10e61cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61cc0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e61cd0; body size 10 bytes.
#line 1 "ENTRY_10e61cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61cd0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e61ce0; body size 10 bytes.
#line 1 "ENTRY_10e61ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e61ce0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e620f0; body size 11 bytes.
#line 1 "ENTRY_10e620f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e620f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10e65d80; body size 97 bytes.
#line 1 "ENTRY_10e65d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10e65d80(uint param_1)

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


// Reference entry 10e65e00; body size 90 bytes.
#line 1 "ENTRY_10e65e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10e65e00(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x15555556) {
    param_1 = (uint)(param_1 * 0xc);
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


// Reference entry 10e65eb0; body size 13 bytes.
#line 1 "ENTRY_10e65eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e65eb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10e66b30; body size 22 bytes.
#line 1 "ENTRY_10e66b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e66b30(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 10e692a0; body size 63 bytes.
#line 1 "ENTRY_10e692a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e692a0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10e692f0; body size 66 bytes.
#line 1 "ENTRY_10e692f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e692f0(int param_1,int param_2)

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


// Reference entry 10e693a0; body size 16 bytes.
#line 1 "ENTRY_10e693a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e693a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e693c0; body size 16 bytes.
#line 1 "ENTRY_10e693c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e693c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e693e0; body size 16 bytes.
#line 1 "ENTRY_10e693e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e693e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e69400; body size 16 bytes.
#line 1 "ENTRY_10e69400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69400(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e69420; body size 16 bytes.
#line 1 "ENTRY_10e69420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69420(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e69680; body size 8 bytes.
#line 1 "ENTRY_10e69680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e69680(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10e69690; body size 11 bytes.
#line 1 "ENTRY_10e69690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e69690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10e69d00; body size 4 bytes.
#line 1 "ENTRY_10e69d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69d10; body size 4 bytes.
#line 1 "ENTRY_10e69d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69d20; body size 4 bytes.
#line 1 "ENTRY_10e69d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69d30; body size 4 bytes.
#line 1 "ENTRY_10e69d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69d40; body size 4 bytes.
#line 1 "ENTRY_10e69d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69d40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e69e00; body size 4 bytes.
#line 1 "ENTRY_10e69e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e69e00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10e71450; body size 6 bytes.
#line 1 "ENTRY_10e71450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e71450(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIVSResponseListener");
}


// Reference entry 10e71480; body size 7 bytes.
#line 1 "ENTRY_10e71480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e71480(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10e71490; body size 7 bytes.
#line 1 "ENTRY_10e71490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e71490(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10e716f0; body size 11 bytes.
#line 1 "ENTRY_10e716f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e716f0(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x150) + 0x14) = 1;
  return;
}


// Reference entry 10e71700; body size 6 bytes.
#line 1 "ENTRY_10e71700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e71700(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10e71710; body size 6 bytes.
#line 1 "ENTRY_10e71710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e71710(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x15555555);
}


// Reference entry 10e71720; body size 6 bytes.
#line 1 "ENTRY_10e71720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e71720(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10e71730; body size 6 bytes.
#line 1 "ENTRY_10e71730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e71730(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x15555555);
}


// Reference entry 10e72170; body size 5 bytes.
#line 1 "ENTRY_10e72170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e72170(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e721a0; body size 3 bytes.
#line 1 "ENTRY_10e721a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e721a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e721b0; body size 3 bytes.
#line 1 "ENTRY_10e721b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e721b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e72e10; body size 28 bytes.
#line 1 "ENTRY_10e72e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72e10(undefined4 *param_1)

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


// Reference entry 10e72e40; body size 28 bytes.
#line 1 "ENTRY_10e72e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72e40(undefined4 *param_1)

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


// Reference entry 10e72e70; body size 28 bytes.
#line 1 "ENTRY_10e72e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72e70(undefined4 *param_1)

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


// Reference entry 10e72ea0; body size 28 bytes.
#line 1 "ENTRY_10e72ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72ea0(undefined4 *param_1)

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


// Reference entry 10e72ed0; body size 28 bytes.
#line 1 "ENTRY_10e72ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e72ed0(undefined4 *param_1)

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


// Reference entry 10e733b0; body size 8 bytes.
#line 1 "ENTRY_10e733b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e733b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10e75660; body size 11 bytes.
#line 1 "ENTRY_10e75660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e75660(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(*(int *)(param_1 + 0x150) + 0x40) = param_2;
  return;
}


// Reference entry 10e75700; body size 10 bytes.
#line 1 "ENTRY_10e75700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e75700(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*(int *)(param_1 + 8) + 0x150));
}


// Reference entry 10e75710; body size 4 bytes.
#line 1 "ENTRY_10e75710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e75710(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e75720; body size 22 bytes.
#line 1 "ENTRY_10e75720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e75720(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 10e75f70; body size 26 bytes.
#line 1 "ENTRY_10e75f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e75f70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e760c0; body size 66 bytes.
#line 1 "ENTRY_10e760c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e760c0(int param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionCompleteState);
  thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",param_3);
  *(undefined4 *)(param_2 + 0x94) = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e76390; body size 430 bytes.
#line 1 "ENTRY_10e76390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e76390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionDetectState);
  param_1[3] = (uint)&ghidra_vftable_SCSonanceDetectionDetectState;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = (uint)&ghidra_vftable_SCOpRef;
  param_1[9] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x15] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x20] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x23] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x2f] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3a] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x3d] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x49] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x54] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x57] = (uint)&ghidra_vftable_SCOpRef;
  param_1[99] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x6e] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x71] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x7d] = 0;
  param_1[0x87] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e765b0; body size 26 bytes.
#line 1 "ENTRY_10e765b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e765b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionInitState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e765d0; body size 26 bytes.
#line 1 "ENTRY_10e765d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e765d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionIntroState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e76680; body size 26 bytes.
#line 1 "ENTRY_10e76680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e76680(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e767c0; body size 39 bytes.
#line 1 "ENTRY_10e767c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e767c0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLegacySonanceDetectionWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCLegacySonanceDetectionWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCLegacySonanceDetectionWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCLegacySonanceDetectionWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCLegacySonanceDetectionWizard;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11728460);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCWizard;
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
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
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)((int *)param_1[0x15]);
  uStack_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (int)(uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();
  uStack_8 = (undefined4)(8);
  param_1[2] = (int)(uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10e767f0; body size 7 bytes.
#line 1 "ENTRY_10e767f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e767f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e76b70; body size 7 bytes.
#line 1 "ENTRY_10e76b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e76b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e76b80; body size 7 bytes.
#line 1 "ENTRY_10e76b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e76b80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e77f90; body size 24 bytes.
#line 1 "ENTRY_10e77f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e77f90(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))());
    if (cVar1 != '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10e79210; body size 16 bytes.
#line 1 "ENTRY_10e79210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e79210(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e7f590; body size 26 bytes.
#line 1 "ENTRY_10e7f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e7f590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e7f5b0; body size 26 bytes.
#line 1 "ENTRY_10e7f5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e7f5b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizCompleteState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e7f5d0; body size 26 bytes.
#line 1 "ENTRY_10e7f5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e7f5d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizInitState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e7f9a0; body size 40 bytes.
#line 1 "ENTRY_10e7f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e7f9a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizTransferState);
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e7f9e0; body size 141 bytes.
#line 1 "ENTRY_10e7f9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e7f9e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizVerifyState);
  param_1[3] = (uint)&ghidra_vftable_SCChangeEmailWizVerifyState;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xd] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x19] = 0;
  param_1[0x23] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e7faa0; body size 7 bytes.
#line 1 "ENTRY_10e7faa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e7faa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e7fab0; body size 7 bytes.
#line 1 "ENTRY_10e7fab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e7fab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e7fde0; body size 3 bytes.
#line 1 "ENTRY_10e7fde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e7fde0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e83090; body size 78 bytes.
#line 1 "ENTRY_10e83090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e83090(int *param_2)
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


// Reference entry 10e83290; body size 26 bytes.
#line 1 "ENTRY_10e83290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e83290(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e83340; body size 26 bytes.
#line 1 "ENTRY_10e83340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e83340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleModernCompleteState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e83360; body size 26 bytes.
#line 1 "ENTRY_10e83360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e83360(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleModernReadyForDownloadState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e83380; body size 30 bytes.
#line 1 "ENTRY_10e83380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e83380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleModernRemindMeLaterState);
  *(undefined1 *)(param_1 + 3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e833b0; body size 54 bytes.
#line 1 "ENTRY_10e833b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e833b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = (uint)&ghidra_vftable_SCIActionDelegateCB;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleModernTermsOfUseState);
  param_1[3] = (uint)&ghidra_vftable_SCLifecycleModernTermsOfUseState;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e83530; body size 26 bytes.
#line 1 "ENTRY_10e83530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e83530(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleModernWizardState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e83550; body size 26 bytes.
#line 1 "ENTRY_10e83550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e83550(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleWizardModernInitState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e837e0; body size 7 bytes.
#line 1 "ENTRY_10e837e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e837e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e837f0; body size 7 bytes.
#line 1 "ENTRY_10e837f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e837f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e83800; body size 7 bytes.
#line 1 "ENTRY_10e83800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e83800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e838a0; body size 39 bytes.
#line 1 "ENTRY_10e838a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e838a0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLifecycleModernWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCLifecycleModernWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCLifecycleModernWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCLifecycleModernWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCLifecycleModernWizard;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11728460);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCWizard;
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
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
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)((int *)param_1[0x15]);
  uStack_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (int)(uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();
  uStack_8 = (undefined4)(8);
  param_1[2] = (int)(uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10e838d0; body size 7 bytes.
#line 1 "ENTRY_10e838d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e838d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e838e0; body size 7 bytes.
#line 1 "ENTRY_10e838e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e838e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e838f0; body size 3 bytes.
#line 1 "ENTRY_10e838f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e838f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e868c0; body size 28 bytes.
#line 1 "ENTRY_10e868c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e868c0(undefined4 *param_1)

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


// Reference entry 10e86d60; body size 26 bytes.
#line 1 "ENTRY_10e86d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e86d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e86d80; body size 26 bytes.
#line 1 "ENTRY_10e86d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e86d80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyCompleteState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e86da0; body size 26 bytes.
#line 1 "ENTRY_10e86da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e86da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyIncompatPlayersState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e86dc0; body size 26 bytes.
#line 1 "ENTRY_10e86dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e86dc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyOptionsState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e86de0; body size 30 bytes.
#line 1 "ENTRY_10e86de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e86de0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyOutroState);
  *(undefined1 *)(param_1 + 3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e86e10; body size 30 bytes.
#line 1 "ENTRY_10e86e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e86e10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyRemindMeLaterState);
  *(undefined1 *)(param_1 + 3) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e86e90; body size 26 bytes.
#line 1 "ENTRY_10e86e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e86e90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizardState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e86eb0; body size 26 bytes.
#line 1 "ENTRY_10e86eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e86eb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleWizardMixedLegacyInitState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e86ed0; body size 7 bytes.
#line 1 "ENTRY_10e86ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86ee0; body size 7 bytes.
#line 1 "ENTRY_10e86ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86ee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86ef0; body size 7 bytes.
#line 1 "ENTRY_10e86ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f00; body size 7 bytes.
#line 1 "ENTRY_10e86f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f10; body size 7 bytes.
#line 1 "ENTRY_10e86f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f20; body size 7 bytes.
#line 1 "ENTRY_10e86f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f30; body size 39 bytes.
#line 1 "ENTRY_10e86f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f30(int *param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11728460);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCWizard;
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
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
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)((int *)param_1[0x15]);
  uStack_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (int)(uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();
  uStack_8 = (undefined4)(8);
  param_1[2] = (int)(uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10e86f60; body size 7 bytes.
#line 1 "ENTRY_10e86f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e86f70; body size 7 bytes.
#line 1 "ENTRY_10e86f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e86f70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89960; body size 26 bytes.
#line 1 "ENTRY_10e89960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e89960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e89a50; body size 26 bytes.
#line 1 "ENTRY_10e89a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e89a50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e89a70; body size 26 bytes.
#line 1 "ENTRY_10e89a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e89a70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardInitState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e89a90; body size 26 bytes.
#line 1 "ENTRY_10e89a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e89a90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e89ab0; body size 26 bytes.
#line 1 "ENTRY_10e89ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e89ab0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardSubwizardState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e89ad0; body size 7 bytes.
#line 1 "ENTRY_10e89ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89ae0; body size 39 bytes.
#line 1 "ENTRY_10e89ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89ae0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizard;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11728460);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[10] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x12] = (int)(uint)&ghidra_vftable_SCWizard;
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCWizard;
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
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
  param_1[0x13] = (int)(uint)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)((int *)param_1[0x15]);
  uStack_8 = (undefined4)(7);
  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (int)(uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();
  uStack_8 = (undefined4)(8);
  param_1[2] = (int)(uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10e89b10; body size 7 bytes.
#line 1 "ENTRY_10e89b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89b20; body size 7 bytes.
#line 1 "ENTRY_10e89b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89b30; body size 7 bytes.
#line 1 "ENTRY_10e89b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89b40; body size 7 bytes.
#line 1 "ENTRY_10e89b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e89b40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10e89f30; body size 25 bytes.
#line 1 "ENTRY_10e89f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e89f30(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e89f50; body size 22 bytes.
#line 1 "ENTRY_10e89f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e89f50(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8a030; body size 22 bytes.
#line 1 "ENTRY_10e8a030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e8a030(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8a050; body size 27 bytes.
#line 1 "ENTRY_10e8a050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e8a050(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8a080; body size 43 bytes.
#line 1 "ENTRY_10e8a080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a080(int *param_2)
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


// Reference entry 10e8a0c0; body size 26 bytes.
#line 1 "ENTRY_10e8a0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a0c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10e8a0e0; body size 91 bytes.
#line 1 "ENTRY_10e8a0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a0e0(int *param_2)
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


// Reference entry 10e8a160; body size 91 bytes.
#line 1 "ENTRY_10e8a160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a160(int *param_2)
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


// Reference entry 10e8a1e0; body size 91 bytes.
#line 1 "ENTRY_10e8a1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a1e0(int *param_2)
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


// Reference entry 10e8a260; body size 91 bytes.
#line 1 "ENTRY_10e8a260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a260(int *param_2)
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


// Reference entry 10e8a360; body size 91 bytes.
#line 1 "ENTRY_10e8a360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a360(int *param_2)
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


// Reference entry 10e8a3e0; body size 91 bytes.
#line 1 "ENTRY_10e8a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a3e0(int *param_2)
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


// Reference entry 10e8a460; body size 91 bytes.
#line 1 "ENTRY_10e8a460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a460(int *param_2)
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


// Reference entry 10e8a4e0; body size 91 bytes.
#line 1 "ENTRY_10e8a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a4e0(int *param_2)
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


// Reference entry 10e8a560; body size 43 bytes.
#line 1 "ENTRY_10e8a560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a560(int *param_2)
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


// Reference entry 10e8a5a0; body size 43 bytes.
#line 1 "ENTRY_10e8a5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10e8a5a0(int *param_2)
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


// Reference entry 10e8a6f0; body size 130 bytes.
#line 1 "ENTRY_10e8a6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8a6f0(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8a7a0; body size 130 bytes.
#line 1 "ENTRY_10e8a7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8a7a0(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8a850; body size 130 bytes.
#line 1 "ENTRY_10e8a850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8a850(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8a9b0; body size 130 bytes.
#line 1 "ENTRY_10e8a9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8a9b0(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8aa60; body size 130 bytes.
#line 1 "ENTRY_10e8aa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8aa60(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8ab10; body size 130 bytes.
#line 1 "ENTRY_10e8ab10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8ab10(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8abc0; body size 130 bytes.
#line 1 "ENTRY_10e8abc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8abc0(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8ac70; body size 130 bytes.
#line 1 "ENTRY_10e8ac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8ac70(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8ad20; body size 130 bytes.
#line 1 "ENTRY_10e8ad20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10e8ad20(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10e8add0; body size 40 bytes.
#line 1 "ENTRY_10e8add0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8add0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8ae10; body size 40 bytes.
#line 1 "ENTRY_10e8ae10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8ae10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8ae50; body size 40 bytes.
#line 1 "ENTRY_10e8ae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8ae50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8ae90; body size 40 bytes.
#line 1 "ENTRY_10e8ae90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8ae90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8aed0; body size 40 bytes.
#line 1 "ENTRY_10e8aed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8aed0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8af10; body size 40 bytes.
#line 1 "ENTRY_10e8af10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8af10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8af50; body size 40 bytes.
#line 1 "ENTRY_10e8af50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8af50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8af90; body size 40 bytes.
#line 1 "ENTRY_10e8af90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8af90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8afd0; body size 40 bytes.
#line 1 "ENTRY_10e8afd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8afd0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b010; body size 40 bytes.
#line 1 "ENTRY_10e8b010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b010(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b050; body size 40 bytes.
#line 1 "ENTRY_10e8b050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b050(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b090; body size 40 bytes.
#line 1 "ENTRY_10e8b090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b090(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b0d0; body size 40 bytes.
#line 1 "ENTRY_10e8b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b0d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b110; body size 40 bytes.
#line 1 "ENTRY_10e8b110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b110(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b150; body size 40 bytes.
#line 1 "ENTRY_10e8b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b150(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b190; body size 40 bytes.
#line 1 "ENTRY_10e8b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b190(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b1d0; body size 40 bytes.
#line 1 "ENTRY_10e8b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b1d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b210; body size 40 bytes.
#line 1 "ENTRY_10e8b210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b210(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b250; body size 40 bytes.
#line 1 "ENTRY_10e8b250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b250(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b290; body size 40 bytes.
#line 1 "ENTRY_10e8b290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b290(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b2d0; body size 40 bytes.
#line 1 "ENTRY_10e8b2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10e8b2d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10e8b310; body size 22 bytes.
#line 1 "ENTRY_10e8b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e8b310(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = 0;
  return;
}


// Reference entry 10e8b330; body size 5 bytes.
#line 1 "ENTRY_10e8b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b330(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e8b340; body size 5 bytes.
#line 1 "ENTRY_10e8b340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b340(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e8b350; body size 5 bytes.
#line 1 "ENTRY_10e8b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b350(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e8b360; body size 5 bytes.
#line 1 "ENTRY_10e8b360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b360(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e8b370; body size 5 bytes.
#line 1 "ENTRY_10e8b370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b370(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e8b380; body size 5 bytes.
#line 1 "ENTRY_10e8b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b380(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e8b390; body size 5 bytes.
#line 1 "ENTRY_10e8b390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10e8b390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10e8b3a0; body size 6 bytes.
#line 1 "ENTRY_10e8b3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e8b3a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIIntegerSettingsProperty");
}


// Reference entry 10e8b3b0; body size 6 bytes.
#line 1 "ENTRY_10e8b3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e8b3b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlGetLEDFeedbackState");
}


// Reference entry 10e8b3c0; body size 6 bytes.
#line 1 "ENTRY_10e8b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10e8b3c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCISonarCalibrationItem");
}


// Reference entry 10e8b460; body size 27 bytes.
#line 1 "ENTRY_10e8b460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8b460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8b490; body size 27 bytes.
#line 1 "ENTRY_10e8b490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8b490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8b4c0; body size 27 bytes.
#line 1 "ENTRY_10e8b4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8b4c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8b4f0; body size 27 bytes.
#line 1 "ENTRY_10e8b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8b4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8b680; body size 70 bytes.
#line 1 "ENTRY_10e8b680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8b680(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8b960; body size 70 bytes.
#line 1 "ENTRY_10e8b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8b960(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8bb40; body size 16 bytes.
#line 1 "ENTRY_10e8bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8bb40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8be20; body size 16 bytes.
#line 1 "ENTRY_10e8be20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8be20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8bfc0; body size 10 bytes.
#line 1 "ENTRY_10e8bfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8bfc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8bfd0; body size 10 bytes.
#line 1 "ENTRY_10e8bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8bfd0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8bfe0; body size 10 bytes.
#line 1 "ENTRY_10e8bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8bfe0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8bff0; body size 10 bytes.
#line 1 "ENTRY_10e8bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8bff0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c000; body size 10 bytes.
#line 1 "ENTRY_10e8c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c000(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c010; body size 10 bytes.
#line 1 "ENTRY_10e8c010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c010(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c020; body size 10 bytes.
#line 1 "ENTRY_10e8c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c020(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c030; body size 12 bytes.
#line 1 "ENTRY_10e8c030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c030(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c140; body size 10 bytes.
#line 1 "ENTRY_10e8c140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c140(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c1d0; body size 10 bytes.
#line 1 "ENTRY_10e8c1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c1d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c260; body size 10 bytes.
#line 1 "ENTRY_10e8c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c260(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c2f0; body size 10 bytes.
#line 1 "ENTRY_10e8c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c2f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c300; body size 10 bytes.
#line 1 "ENTRY_10e8c300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c300(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c310; body size 12 bytes.
#line 1 "ENTRY_10e8c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e8c310(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10e8c3a0; body size 134 bytes.
#line 1 "ENTRY_10e8c3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10e8c3a0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:HTControl:1","GetLEDFeedbackState",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp;
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8dc30; body size 9 bytes.
#line 1 "ENTRY_10e8dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIIntegerSettingsProperty);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8dc40; body size 9 bytes.
#line 1 "ENTRY_10e8dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlGetLEDFeedbackState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8dc50; body size 9 bytes.
#line 1 "ENTRY_10e8dc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISonarCalibrationItem);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8dc60; body size 9 bytes.
#line 1 "ENTRY_10e8dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringFromCustomSettingsProperty);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e8dc70; body size 9 bytes.
#line 1 "ENTRY_10e8dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10e8dc70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStringFromListSettingsProperty);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10e92eb0; body size 11 bytes.
#line 1 "ENTRY_10e92eb0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e92eb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114f5ce0);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
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


// Reference entry 10e942f0; body size 28 bytes.
#line 1 "ENTRY_10e942f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e942f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpHTCGetLEDFeedbackStateAIOOp;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpAsyncIOOperation;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpAsyncIOOperation;
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
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


// Reference entry 10e94960; body size 7 bytes.
#line 1 "ENTRY_10e94960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e94960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e94970; body size 7 bytes.
#line 1 "ENTRY_10e94970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e94970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e94990; body size 7 bytes.
#line 1 "ENTRY_10e94990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e94990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e949a0; body size 7 bytes.
#line 1 "ENTRY_10e949a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e949a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10e95010; body size 18 bytes.
#line 1 "ENTRY_10e95010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10e95010(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlGetLEDFeedbackState);
  param_1[2] = (uint)&ghidra_vftable_SCOpHTControlGetLEDFeedbackState;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1174f270);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
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
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&ghidra_vftable_SCIObj;
  uStack_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  uStack_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  uStack_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10e96930; body size 8 bytes.
#line 1 "ENTRY_10e96930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96930(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96940; body size 8 bytes.
#line 1 "ENTRY_10e96940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96940(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96950; body size 8 bytes.
#line 1 "ENTRY_10e96950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96950(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96960; body size 8 bytes.
#line 1 "ENTRY_10e96960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96960(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96970; body size 8 bytes.
#line 1 "ENTRY_10e96970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96970(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96980; body size 8 bytes.
#line 1 "ENTRY_10e96980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e96980(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10e96990; body size 4 bytes.
#line 1 "ENTRY_10e96990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969a0; body size 4 bytes.
#line 1 "ENTRY_10e969a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969b0; body size 4 bytes.
#line 1 "ENTRY_10e969b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969c0; body size 4 bytes.
#line 1 "ENTRY_10e969c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969d0; body size 4 bytes.
#line 1 "ENTRY_10e969d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969e0; body size 4 bytes.
#line 1 "ENTRY_10e969e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e969f0; body size 4 bytes.
#line 1 "ENTRY_10e969f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e969f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a00; body size 4 bytes.
#line 1 "ENTRY_10e96a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a10; body size 4 bytes.
#line 1 "ENTRY_10e96a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a20; body size 4 bytes.
#line 1 "ENTRY_10e96a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a30; body size 4 bytes.
#line 1 "ENTRY_10e96a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e96a40; body size 3 bytes.
#line 1 "ENTRY_10e96a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e96a50; body size 3 bytes.
#line 1 "ENTRY_10e96a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e96a60; body size 3 bytes.
#line 1 "ENTRY_10e96a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e96a70; body size 3 bytes.
#line 1 "ENTRY_10e96a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e96a80; body size 3 bytes.
#line 1 "ENTRY_10e96a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e96a80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10e99970; body size 8 bytes.
#line 1 "ENTRY_10e99970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99970(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e99980; body size 8 bytes.
#line 1 "ENTRY_10e99980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99980(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e99990; body size 8 bytes.
#line 1 "ENTRY_10e99990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e999a0; body size 8 bytes.
#line 1 "ENTRY_10e999a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e999a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e999b0; body size 8 bytes.
#line 1 "ENTRY_10e999b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e999b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e999c0; body size 8 bytes.
#line 1 "ENTRY_10e999c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e999c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10e999d0; body size 4 bytes.
#line 1 "ENTRY_10e999d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e999d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e999e0; body size 4 bytes.
#line 1 "ENTRY_10e999e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e999e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e999f0; body size 4 bytes.
#line 1 "ENTRY_10e999f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e999f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e99a00; body size 4 bytes.
#line 1 "ENTRY_10e99a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e99a00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e99a10; body size 4 bytes.
#line 1 "ENTRY_10e99a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e99a10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e99a20; body size 4 bytes.
#line 1 "ENTRY_10e99a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e99a20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10e99a30; body size 7 bytes.
#line 1 "ENTRY_10e99a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e99a40; body size 7 bytes.
#line 1 "ENTRY_10e99a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e99a50; body size 7 bytes.
#line 1 "ENTRY_10e99a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e99a60; body size 7 bytes.
#line 1 "ENTRY_10e99a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e99a70; body size 7 bytes.
#line 1 "ENTRY_10e99a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e99a80; body size 7 bytes.
#line 1 "ENTRY_10e99a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10e99a80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10e99a90; body size 26 bytes.
#line 1 "ENTRY_10e99a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99a90(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e99ab0; body size 26 bytes.
#line 1 "ENTRY_10e99ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99ab0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e99ad0; body size 26 bytes.
#line 1 "ENTRY_10e99ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99ad0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e99af0; body size 26 bytes.
#line 1 "ENTRY_10e99af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99af0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e99b10; body size 26 bytes.
#line 1 "ENTRY_10e99b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99b10(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e99b30; body size 26 bytes.
#line 1 "ENTRY_10e99b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99b30(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10e99b50; body size 10 bytes.
#line 1 "ENTRY_10e99b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99b50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e99b60; body size 10 bytes.
#line 1 "ENTRY_10e99b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99b60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e99b70; body size 10 bytes.
#line 1 "ENTRY_10e99b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99b70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e99b80; body size 10 bytes.
#line 1 "ENTRY_10e99b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99b80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e99b90; body size 10 bytes.
#line 1 "ENTRY_10e99b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99b90(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e99ba0; body size 10 bytes.
#line 1 "ENTRY_10e99ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10e99ba0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10e9c270; body size 3 bytes.
#line 1 "ENTRY_10e9c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10e9c270(void)

{
  return;
}


// Reference entry 10e9d060; body size 16 bytes.
#line 1 "ENTRY_10e9d060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d060(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d080; body size 16 bytes.
#line 1 "ENTRY_10e9d080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d080(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d0a0; body size 16 bytes.
#line 1 "ENTRY_10e9d0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d0a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d0c0; body size 16 bytes.
#line 1 "ENTRY_10e9d0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d0c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d0e0; body size 16 bytes.
#line 1 "ENTRY_10e9d0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d0e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d100; body size 16 bytes.
#line 1 "ENTRY_10e9d100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d100(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d120; body size 16 bytes.
#line 1 "ENTRY_10e9d120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d120(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d140; body size 16 bytes.
#line 1 "ENTRY_10e9d140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d140(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d160; body size 16 bytes.
#line 1 "ENTRY_10e9d160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d160(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d180; body size 16 bytes.
#line 1 "ENTRY_10e9d180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d180(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d1a0; body size 16 bytes.
#line 1 "ENTRY_10e9d1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d1a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d1c0; body size 16 bytes.
#line 1 "ENTRY_10e9d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d1c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d1e0; body size 16 bytes.
#line 1 "ENTRY_10e9d1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d1e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d200; body size 16 bytes.
#line 1 "ENTRY_10e9d200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d200(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d220; body size 16 bytes.
#line 1 "ENTRY_10e9d220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d220(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d240; body size 16 bytes.
#line 1 "ENTRY_10e9d240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d240(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d260; body size 16 bytes.
#line 1 "ENTRY_10e9d260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d260(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d280; body size 16 bytes.
#line 1 "ENTRY_10e9d280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d280(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d2a0; body size 16 bytes.
#line 1 "ENTRY_10e9d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d2a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d2c0; body size 16 bytes.
#line 1 "ENTRY_10e9d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d2c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d2e0; body size 16 bytes.
#line 1 "ENTRY_10e9d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d2e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d300; body size 16 bytes.
#line 1 "ENTRY_10e9d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d300(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d320; body size 16 bytes.
#line 1 "ENTRY_10e9d320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d320(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d340; body size 16 bytes.
#line 1 "ENTRY_10e9d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d340(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d360; body size 16 bytes.
#line 1 "ENTRY_10e9d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d360(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d380; body size 16 bytes.
#line 1 "ENTRY_10e9d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d380(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d3a0; body size 16 bytes.
#line 1 "ENTRY_10e9d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d3a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d3c0; body size 16 bytes.
#line 1 "ENTRY_10e9d3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d3c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d3e0; body size 16 bytes.
#line 1 "ENTRY_10e9d3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d3e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d400; body size 16 bytes.
#line 1 "ENTRY_10e9d400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d400(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d420; body size 16 bytes.
#line 1 "ENTRY_10e9d420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d420(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d440; body size 9 bytes.
#line 1 "ENTRY_10e9d440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d440(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9d450; body size 9 bytes.
#line 1 "ENTRY_10e9d450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9d450(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10e9db10; body size 7 bytes.
#line 1 "ENTRY_10e9db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10e9db10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xd7d0);
}


// Reference entry 10e9df30; body size 4 bytes.
#line 1 "ENTRY_10e9df30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df40; body size 4 bytes.
#line 1 "ENTRY_10e9df40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df50; body size 4 bytes.
#line 1 "ENTRY_10e9df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df60; body size 4 bytes.
#line 1 "ENTRY_10e9df60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df70; body size 4 bytes.
#line 1 "ENTRY_10e9df70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10e9df80; body size 4 bytes.
#line 1 "ENTRY_10e9df80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10e9df80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ea1c80; body size 56 bytes.
#line 1 "ENTRY_10ea1c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ea1c80(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10ea1cd0; body size 56 bytes.
#line 1 "ENTRY_10ea1cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ea1cd0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x2089 - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10ea1d80; body size 56 bytes.
#line 1 "ENTRY_10ea1d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ea1d80(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x80) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10ea1e20; body size 56 bytes.
#line 1 "ENTRY_10ea1e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ea1e20(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x80) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10ea1e70; body size 56 bytes.
#line 1 "ENTRY_10ea1e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ea1e70(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x80) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10ea1f30; body size 56 bytes.
#line 1 "ENTRY_10ea1f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ea1f30(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x80) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10ea2070; body size 56 bytes.
#line 1 "ENTRY_10ea2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ea2070(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x2089 - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10ea20c0; body size 56 bytes.
#line 1 "ENTRY_10ea20c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ea20c0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10ea2550; body size 13 bytes.
#line 1 "ENTRY_10ea2550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea2550(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x30))();
  return;
}


// Reference entry 10ea2560; body size 19 bytes.
#line 1 "ENTRY_10ea2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ea2560(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x8c) + 0x30))());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 == '\0');
}


// Reference entry 10ea2580; body size 6 bytes.
#line 1 "ENTRY_10ea2580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ea2580(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIIntegerSettingsProperty");
}


// Reference entry 10ea2590; body size 6 bytes.
#line 1 "ENTRY_10ea2590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ea2590(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlGetLEDFeedbackState");
}


// Reference entry 10ea25a0; body size 6 bytes.
#line 1 "ENTRY_10ea25a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ea25a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCISonarCalibrationItem");
}


// Reference entry 10ea25d0; body size 7 bytes.
#line 1 "ENTRY_10ea25d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ea25d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10ea25e0; body size 7 bytes.
#line 1 "ENTRY_10ea25e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ea25e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10ea2760; body size 45 bytes.
#line 1 "ENTRY_10ea2760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ea2760(int param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(bool *)(*(int *)(param_1 + 0x7c) + 0x10) = param_2 == 1;
  iStack_10 = (int)(param_1);
  iStack_c = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIBrowseItem:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10ea28e0; body size 3 bytes.
#line 1 "ENTRY_10ea28e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ea28e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ea28f0; body size 3 bytes.
#line 1 "ENTRY_10ea28f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ea28f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ea5eb0; body size 28 bytes.
#line 1 "ENTRY_10ea5eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5eb0(undefined4 *param_1)

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


// Reference entry 10ea5ee0; body size 28 bytes.
#line 1 "ENTRY_10ea5ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5ee0(undefined4 *param_1)

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


// Reference entry 10ea5f10; body size 28 bytes.
#line 1 "ENTRY_10ea5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5f10(undefined4 *param_1)

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


// Reference entry 10ea5f40; body size 28 bytes.
#line 1 "ENTRY_10ea5f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5f40(undefined4 *param_1)

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


// Reference entry 10ea5f70; body size 28 bytes.
#line 1 "ENTRY_10ea5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5f70(undefined4 *param_1)

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


// Reference entry 10ea5fa0; body size 28 bytes.
#line 1 "ENTRY_10ea5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5fa0(undefined4 *param_1)

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


// Reference entry 10ea5fd0; body size 28 bytes.
#line 1 "ENTRY_10ea5fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea5fd0(undefined4 *param_1)

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


// Reference entry 10ea6000; body size 28 bytes.
#line 1 "ENTRY_10ea6000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6000(undefined4 *param_1)

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


// Reference entry 10ea6030; body size 28 bytes.
#line 1 "ENTRY_10ea6030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6030(undefined4 *param_1)

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


// Reference entry 10ea6060; body size 28 bytes.
#line 1 "ENTRY_10ea6060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6060(undefined4 *param_1)

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


// Reference entry 10ea6090; body size 28 bytes.
#line 1 "ENTRY_10ea6090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6090(undefined4 *param_1)

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


// Reference entry 10ea60c0; body size 28 bytes.
#line 1 "ENTRY_10ea60c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea60c0(undefined4 *param_1)

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


// Reference entry 10ea60f0; body size 28 bytes.
#line 1 "ENTRY_10ea60f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea60f0(undefined4 *param_1)

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


// Reference entry 10ea6120; body size 28 bytes.
#line 1 "ENTRY_10ea6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6120(undefined4 *param_1)

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


// Reference entry 10ea6150; body size 28 bytes.
#line 1 "ENTRY_10ea6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6150(undefined4 *param_1)

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


// Reference entry 10ea6180; body size 28 bytes.
#line 1 "ENTRY_10ea6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6180(undefined4 *param_1)

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


// Reference entry 10ea61b0; body size 28 bytes.
#line 1 "ENTRY_10ea61b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea61b0(undefined4 *param_1)

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


// Reference entry 10ea61e0; body size 28 bytes.
#line 1 "ENTRY_10ea61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea61e0(undefined4 *param_1)

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


// Reference entry 10ea6210; body size 28 bytes.
#line 1 "ENTRY_10ea6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6210(undefined4 *param_1)

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


// Reference entry 10ea6240; body size 28 bytes.
#line 1 "ENTRY_10ea6240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6240(undefined4 *param_1)

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


// Reference entry 10ea6270; body size 28 bytes.
#line 1 "ENTRY_10ea6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6270(undefined4 *param_1)

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


// Reference entry 10ea62a0; body size 28 bytes.
#line 1 "ENTRY_10ea62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea62a0(undefined4 *param_1)

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


// Reference entry 10ea62d0; body size 28 bytes.
#line 1 "ENTRY_10ea62d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea62d0(undefined4 *param_1)

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


// Reference entry 10ea6300; body size 28 bytes.
#line 1 "ENTRY_10ea6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ea6300(undefined4 *param_1)

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


// Reference entry 10ea6c40; body size 10 bytes.
#line 1 "ENTRY_10ea6c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ea6c40(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}


// Reference entry 10ea6c50; body size 10 bytes.
#line 1 "ENTRY_10ea6c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ea6c50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// Reference entry 10ea6f70; body size 25 bytes.
#line 1 "ENTRY_10ea6f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ea6f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ea6f90; body size 22 bytes.
#line 1 "ENTRY_10ea6f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ea6f90(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ea6fd0; body size 18 bytes.
#line 1 "ENTRY_10ea6fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ea6fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ea7150; body size 18 bytes.
#line 1 "ENTRY_10ea7150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ea7150(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ea7560; body size 3 bytes.
#line 1 "ENTRY_10ea7560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea7560(void)

{
  return;
}


// Reference entry 10ea7570; body size 25 bytes.
#line 1 "ENTRY_10ea7570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea7570(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10ea7810; body size 5 bytes.
#line 1 "ENTRY_10ea7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ea7810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ea7820; body size 13 bytes.
#line 1 "ENTRY_10ea7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea7820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ea7830; body size 13 bytes.
#line 1 "ENTRY_10ea7830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea7830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ea7840; body size 113 bytes.
#line 1 "ENTRY_10ea7840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ea7840(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10ea7960(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 10ea78d0; body size 113 bytes.
#line 1 "ENTRY_10ea78d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ea78d0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10ea7a90(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 10ea7ce0; body size 33 bytes.
#line 1 "ENTRY_10ea7ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea7ce0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    thunk_FUN_108754f0();
  }
  return;
}


// Reference entry 10ea7d10; body size 23 bytes.
#line 1 "ENTRY_10ea7d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ea7d10(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10eaad30(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x4c;
  return;
}


// Reference entry 10ea7d30; body size 23 bytes.
#line 1 "ENTRY_10ea7d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ea7d30(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10eaab70(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x4c;
  return;
}


// Reference entry 10ea7d50; body size 23 bytes.
#line 1 "ENTRY_10ea7d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ea7d50(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10eaad30(param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x4c;
  return;
}


// Reference entry 10ea8180; body size 7 bytes.
#line 1 "ENTRY_10ea8180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ea8180(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ea8190; body size 7 bytes.
#line 1 "ENTRY_10ea8190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ea8190(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ea9150; body size 8 bytes.
#line 1 "ENTRY_10ea9150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ea9150(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x4c);
}


// Reference entry 10ea98c0; body size 3 bytes.
#line 1 "ENTRY_10ea98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea98c0(void)

{
  return;
}


// Reference entry 10ea9bf0; body size 8 bytes.
#line 1 "ENTRY_10ea9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ea9bf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -0x4c);
}


// Reference entry 10ea9fe0; body size 19 bytes.
#line 1 "ENTRY_10ea9fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ea9fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10eaa010; body size 5 bytes.
#line 1 "ENTRY_10eaa010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa010(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa140; body size 5 bytes.
#line 1 "ENTRY_10eaa140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa140(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa160; body size 5 bytes.
#line 1 "ENTRY_10eaa160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa160(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa170; body size 5 bytes.
#line 1 "ENTRY_10eaa170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa170(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa180; body size 5 bytes.
#line 1 "ENTRY_10eaa180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa180(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa190; body size 14 bytes.
#line 1 "ENTRY_10eaa190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eaa190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10eaad30(param_3);
  return;
}


// Reference entry 10eaa1b0; body size 14 bytes.
#line 1 "ENTRY_10eaa1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eaa1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10eaad30(param_3);
  return;
}


// Reference entry 10eaa1d0; body size 14 bytes.
#line 1 "ENTRY_10eaa1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eaa1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10eaab70(param_3);
  return;
}


// Reference entry 10eaa210; body size 13 bytes.
#line 1 "ENTRY_10eaa210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eaa210(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10eaa230; body size 40 bytes.
#line 1 "ENTRY_10eaa230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eaa230(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_10eaad30(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x4c;
    return;
  }
  thunk_FUN_10ea7d70(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10eaa270; body size 15 bytes.
#line 1 "ENTRY_10eaa270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa270(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eaa290; body size 5 bytes.
#line 1 "ENTRY_10eaa290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa290(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa2a0; body size 5 bytes.
#line 1 "ENTRY_10eaa2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa2b0; body size 5 bytes.
#line 1 "ENTRY_10eaa2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa2c0; body size 5 bytes.
#line 1 "ENTRY_10eaa2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa2d0; body size 5 bytes.
#line 1 "ENTRY_10eaa2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa2e0; body size 5 bytes.
#line 1 "ENTRY_10eaa2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa2e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa300; body size 5 bytes.
#line 1 "ENTRY_10eaa300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa300(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa310; body size 5 bytes.
#line 1 "ENTRY_10eaa310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa310(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa330; body size 5 bytes.
#line 1 "ENTRY_10eaa330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa330(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa3e0; body size 5 bytes.
#line 1 "ENTRY_10eaa3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa3e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa3f0; body size 5 bytes.
#line 1 "ENTRY_10eaa3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa3f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa410; body size 5 bytes.
#line 1 "ENTRY_10eaa410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa410(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa420; body size 5 bytes.
#line 1 "ENTRY_10eaa420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eaa420(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa470; body size 19 bytes.
#line 1 "ENTRY_10eaa470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eaa470(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10eaa5a0; body size 18 bytes.
#line 1 "ENTRY_10eaa5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eaa5a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa620; body size 51 bytes.
#line 1 "ENTRY_10eaa620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eaa620(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *(void **)param_1[1] = pvVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa660; body size 51 bytes.
#line 1 "ENTRY_10eaa660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eaa660(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *(void **)param_1[1] = pvVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa6a0; body size 16 bytes.
#line 1 "ENTRY_10eaa6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa6a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa6c0; body size 21 bytes.
#line 1 "ENTRY_10eaa6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eaa6c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa6e0; body size 11 bytes.
#line 1 "ENTRY_10eaa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eaa6e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa6f0; body size 9 bytes.
#line 1 "ENTRY_10eaa6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa700; body size 11 bytes.
#line 1 "ENTRY_10eaa700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eaa700(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa710; body size 9 bytes.
#line 1 "ENTRY_10eaa710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa710(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa720; body size 23 bytes.
#line 1 "ENTRY_10eaa720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa720(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa740; body size 3 bytes.
#line 1 "ENTRY_10eaa740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaa740(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eaa870; body size 76 bytes.
#line 1 "ENTRY_10eaa870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eaa870(undefined4 *param_2)
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaa9f0; body size 23 bytes.
#line 1 "ENTRY_10eaa9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaa9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaaa10; body size 203 bytes.
#line 1 "ENTRY_10eaaa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaaa10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductSetupWizardData_Data);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0x17] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eaab10; body size 74 bytes.
#line 1 "ENTRY_10eaab10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eaab10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizardData_Data);
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eab5e0; body size 65 bytes.
#line 1 "ENTRY_10eab5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10eab5e0(int *param_2)
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


// Reference entry 10eab640; body size 65 bytes.
#line 1 "ENTRY_10eab640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10eab640(int *param_2)
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


// Reference entry 10eab6a0; body size 110 bytes.
#line 1 "ENTRY_10eab6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10eab6a0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 != (int *)(param_2)) {
    iVar2 = (int)(*param_1);
    cVar1 = (char)(*(char *)((int)*(int **)(iVar2 + 4) + 0xd));
    piVar4 = (int *)(*(int **)(iVar2 + 4));
    while (cVar1 == '\0') {
      thunk_FUN_1086f2f0(param_1,piVar4[2]);
      piVar3 = (int *)((int *)*piVar4);
      thunk_FUN_1148a50e(piVar4,0x14);
      piVar4 = (int *)(piVar3);
      cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
    }
    *(int *)(iVar2 + 4) = iVar2;
    *(int *)iVar2 = (int)(iVar2);
    *(int *)(iVar2 + 8) = iVar2;
    param_1[1] = 0;
    iVar2 = (int)(*param_1);
    *param_1 = (int)(*param_2);
    *param_2 = (int)(iVar2);
    iVar2 = (int)(param_1[1]);
    param_1[1] = param_2[1];
    param_2[1] = iVar2;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10eab730; body size 110 bytes.
#line 1 "ENTRY_10eab730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10eab730(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 != (int *)(param_2)) {
    iVar2 = (int)(*param_1);
    cVar1 = (char)(*(char *)((int)*(int **)(iVar2 + 4) + 0xd));
    piVar4 = (int *)(*(int **)(iVar2 + 4));
    while (cVar1 == '\0') {
      thunk_FUN_1086f2f0(param_1,piVar4[2]);
      piVar3 = (int *)((int *)*piVar4);
      thunk_FUN_1148a50e(piVar4,0x14);
      piVar4 = (int *)(piVar3);
      cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
    }
    *(int *)(iVar2 + 4) = iVar2;
    *(int *)iVar2 = (int)(iVar2);
    *(int *)(iVar2 + 8) = iVar2;
    param_1[1] = 0;
    iVar2 = (int)(*param_1);
    *param_1 = (int)(*param_2);
    *param_2 = (int)(iVar2);
    iVar2 = (int)(param_1[1]);
    param_1[1] = param_2[1];
    param_2[1] = iVar2;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10eab9d0; body size 14 bytes.
#line 1 "ENTRY_10eab9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10eab9d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10eab9f0; body size 10 bytes.
#line 1 "ENTRY_10eab9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10eab9f0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 * 0x4c + *param_1);
}


// Reference entry 10eaba00; body size 7 bytes.
#line 1 "ENTRY_10eaba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eaba00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10eaba10; body size 3 bytes.
#line 1 "ENTRY_10eaba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eaba20; body size 3 bytes.
#line 1 "ENTRY_10eaba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eaba30; body size 3 bytes.
#line 1 "ENTRY_10eaba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eaba40; body size 3 bytes.
#line 1 "ENTRY_10eaba40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eaba50; body size 3 bytes.
#line 1 "ENTRY_10eaba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eaba50(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eaba60; body size 6 bytes.
#line 1 "ENTRY_10eaba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10eaba60(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x4c);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10eaba70; body size 6 bytes.
#line 1 "ENTRY_10eaba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10eaba70(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x4c);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10eaba80; body size 16 bytes.
#line 1 "ENTRY_10eaba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eaba80(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(param_3 * 0x4c + *param_1);
  return;
}


// Reference entry 10eabb20; body size 12 bytes.
#line 1 "ENTRY_10eabb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10eabb20(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 0x4c);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10eabb30; body size 12 bytes.
#line 1 "ENTRY_10eabb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10eabb30(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 0x4c);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10eabc50; body size 31 bytes.
#line 1 "ENTRY_10eabc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eabc50(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10eabca0; body size 63 bytes.
#line 1 "ENTRY_10eabca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10eabca0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x4c);
  if (0x35e50d7 - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x35e50d7);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10eabda0; body size 3 bytes.
#line 1 "ENTRY_10eabda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eabda0(void)

{
  return;
}


// Reference entry 10eabe50; body size 3 bytes.
#line 1 "ENTRY_10eabe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eabe60; body size 3 bytes.
#line 1 "ENTRY_10eabe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eabe70; body size 3 bytes.
#line 1 "ENTRY_10eabe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eabe80; body size 3 bytes.
#line 1 "ENTRY_10eabe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eabe90; body size 3 bytes.
#line 1 "ENTRY_10eabe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabe90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eabea0; body size 3 bytes.
#line 1 "ENTRY_10eabea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eabeb0; body size 3 bytes.
#line 1 "ENTRY_10eabeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabeb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eabec0; body size 3 bytes.
#line 1 "ENTRY_10eabec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eabed0; body size 30 bytes.
#line 1 "ENTRY_10eabed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10eabed0(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10eabf00; body size 31 bytes.
#line 1 "ENTRY_10eabf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10eabf00(int *param_1)

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


// Reference entry 10eabfd0; body size 3 bytes.
#line 1 "ENTRY_10eabfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eabfd0(void)

{
  return;
}


// Reference entry 10eabfe0; body size 3 bytes.
#line 1 "ENTRY_10eabfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eabfe0(void)

{
  return;
}


// Reference entry 10eabff0; body size 11 bytes.
#line 1 "ENTRY_10eabff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eabff0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eac000; body size 8 bytes.
#line 1 "ENTRY_10eac000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eac000(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 10eac010; body size 8 bytes.
#line 1 "ENTRY_10eac010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eac010(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 10eac020; body size 6 bytes.
#line 1 "ENTRY_10eac020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eac020(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10eac030; body size 33 bytes.
#line 1 "ENTRY_10eac030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eac030(undefined4 *param_2)
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


// Reference entry 10eac2c0; body size 3 bytes.
#line 1 "ENTRY_10eac2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eac2c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eac2d0; body size 3 bytes.
#line 1 "ENTRY_10eac2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eac2d0(void)

{
  return;
}


// Reference entry 10eac3d0; body size 90 bytes.
#line 1 "ENTRY_10eac3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10eac3d0(uint param_1)

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


// Reference entry 10eac450; body size 87 bytes.
#line 1 "ENTRY_10eac450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10eac450(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x35e50d8) {
    param_1 = (uint)(param_1 * 0x4c);
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


// Reference entry 10eac4c0; body size 11 bytes.
#line 1 "ENTRY_10eac4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eac4c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eac4d0; body size 23 bytes.
#line 1 "ENTRY_10eac4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eac4d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x4c);
}


// Reference entry 10eac5d0; body size 60 bytes.
#line 1 "ENTRY_10eac5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eac5d0(int param_1,int param_2)

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


// Reference entry 10eac7e0; body size 12 bytes.
#line 1 "ENTRY_10eac7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eac7e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eac7f0; body size 50 bytes.
#line 1 "ENTRY_10eac7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eac7f0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  thunk_FUN_10ea8f20(param_3 + 0x4c,*(undefined4 *)(param_1 + 4),param_3);
  thunk_FUN_108754f0();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -0x4c;
  *param_2 = (int)(param_3);
  return;
}


// Reference entry 10ead0f0; body size 7 bytes.
#line 1 "ENTRY_10ead0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10ead0f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ead1a0; body size 6 bytes.
#line 1 "ENTRY_10ead1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ead1a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x35e50d7);
}


// Reference entry 10ead1b0; body size 6 bytes.
#line 1 "ENTRY_10ead1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ead1b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x35e50d7);
}


// Reference entry 10ead1c0; body size 40 bytes.
#line 1 "ENTRY_10ead1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ead1c0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_10eaad30(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x4c;
    return;
  }
  thunk_FUN_10ea7d70(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10ead500; body size 5 bytes.
#line 1 "ENTRY_10ead500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ead500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ead510; body size 5 bytes.
#line 1 "ENTRY_10ead510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ead510(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eae190; body size 25 bytes.
#line 1 "ENTRY_10eae190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eae190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eae560; body size 7 bytes.
#line 1 "ENTRY_10eae560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eae560(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eae670; body size 81 bytes.
#line 1 "ENTRY_10eae670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eae670(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x24) = 0;
  piVar1 = (int *)((int *)param_3[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_3)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_2));
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_3[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_3));
        param_3[9] = 0;
        return;
      }
    }
    else {
      *(int **)(param_2 + 0x24) = piVar1;
      param_3[9] = 0;
    }
  }
  return;
}


// Reference entry 10eae790; body size 5 bytes.
#line 1 "ENTRY_10eae790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eae790(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eae7a0; body size 5 bytes.
#line 1 "ENTRY_10eae7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eae7a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eae7b0; body size 5 bytes.
#line 1 "ENTRY_10eae7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eae7b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eae7c0; body size 21 bytes.
#line 1 "ENTRY_10eae7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eae7c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eae7e0; body size 23 bytes.
#line 1 "ENTRY_10eae7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eae7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eae800; body size 3 bytes.
#line 1 "ENTRY_10eae800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eae800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eae900; body size 23 bytes.
#line 1 "ENTRY_10eae900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eae900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb0000; body size 17 bytes.
#line 1 "ENTRY_10eb0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eb0000(undefined4 *param_1)

{
  thunk_FUN_106d8da0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10eb0020; body size 14 bytes.
#line 1 "ENTRY_10eb0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10eb0020(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10eb0040; body size 15 bytes.
#line 1 "ENTRY_10eb0040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10eb0040(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0x28);
}


// Reference entry 10eb01d0; body size 63 bytes.
#line 1 "ENTRY_10eb01d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10eb01d0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x28);
  if (0x6666666 - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x6666666);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10eb02d0; body size 3 bytes.
#line 1 "ENTRY_10eb02d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb02d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb02e0; body size 3 bytes.
#line 1 "ENTRY_10eb02e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb02e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb02f0; body size 31 bytes.
#line 1 "ENTRY_10eb02f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10eb02f0(int *param_1)

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


// Reference entry 10eb0320; body size 3 bytes.
#line 1 "ENTRY_10eb0320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb0320(void)

{
  return;
}


// Reference entry 10eb0330; body size 6 bytes.
#line 1 "ENTRY_10eb0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eb0330(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10eb0340; body size 26 bytes.
#line 1 "ENTRY_10eb0340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb0340(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10eb0360; body size 76 bytes.
#line 1 "ENTRY_10eb0360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb0360(int *param_2)
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


// Reference entry 10eb03c0; body size 24 bytes.
#line 1 "ENTRY_10eb03c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb03c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eae570(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10eb03e0; body size 24 bytes.
#line 1 "ENTRY_10eb03e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb03e0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eae570(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10eb0400; body size 24 bytes.
#line 1 "ENTRY_10eb0400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb0400(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eae570(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10eb0790; body size 90 bytes.
#line 1 "ENTRY_10eb0790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10eb0790(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
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


// Reference entry 10eb0810; body size 13 bytes.
#line 1 "ENTRY_10eb0810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb0810(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10eb0820; body size 23 bytes.
#line 1 "ENTRY_10eb0820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb0820(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x28);
}


// Reference entry 10eb0960; body size 6 bytes.
#line 1 "ENTRY_10eb0960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb0960(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x6666666);
}


// Reference entry 10eb0970; body size 6 bytes.
#line 1 "ENTRY_10eb0970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb0970(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x6666666);
}


// Reference entry 10eb0e90; body size 23 bytes.
#line 1 "ENTRY_10eb0e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb0e90(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[1] - *param_1) / 0x28);
}


// Reference entry 10eb0ff0; body size 3 bytes.
#line 1 "ENTRY_10eb0ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb0ff0(void)

{
  return;
}


// Reference entry 10eb1000; body size 7 bytes.
#line 1 "ENTRY_10eb1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb1000(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eb18b0; body size 5 bytes.
#line 1 "ENTRY_10eb18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb18b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb18c0; body size 26 bytes.
#line 1 "ENTRY_10eb18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10eb18c0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - param_1) / 0x34);
}


// Reference entry 10eb18e0; body size 5 bytes.
#line 1 "ENTRY_10eb18e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb18e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb18f0; body size 64 bytes.
#line 1 "ENTRY_10eb18f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb18f0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10eb1010(param_3,param_4,param_5,param_3);
  *param_2 = (int)(((param_3 - iVar1) / 0x34) * 0x34 + *param_1);
  return;
}


// Reference entry 10eb1940; body size 37 bytes.
#line 1 "ENTRY_10eb1940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb1940(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb2520(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizResponseTemplate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb1970; body size 37 bytes.
#line 1 "ENTRY_10eb1970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb1970(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb2520(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizResponseTemplate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb19a0; body size 37 bytes.
#line 1 "ENTRY_10eb19a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb19a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb2520(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizResponseTemplate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb19d0; body size 37 bytes.
#line 1 "ENTRY_10eb19d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb19d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb2520(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizResponseTemplate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb1a00; body size 37 bytes.
#line 1 "ENTRY_10eb1a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb1a00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb2520(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizResponseTemplate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb1a30; body size 11 bytes.
#line 1 "ENTRY_10eb1a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb1a30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb1a40; body size 11 bytes.
#line 1 "ENTRY_10eb1a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb1a40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb1a50; body size 26 bytes.
#line 1 "ENTRY_10eb1a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10eb1a50(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10eb27e0(3,param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb28c0; body size 20 bytes.
#line 1 "ENTRY_10eb28c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb28c0(undefined4 param_1)

{
  thunk_FUN_106d8310(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb29a0; body size 12 bytes.
#line 1 "ENTRY_10eb29a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10eb29a0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 * 0x20 + *param_1);
}


// Reference entry 10eb29b0; body size 16 bytes.
#line 1 "ENTRY_10eb29b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb29b0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(param_3 * 0x34 + *param_1);
  return;
}


// Reference entry 10eb2ab0; body size 3 bytes.
#line 1 "ENTRY_10eb2ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb2ab0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eb2ac0; body size 4 bytes.
#line 1 "ENTRY_10eb2ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb2ac0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eb2ad0; body size 3 bytes.
#line 1 "ENTRY_10eb2ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb2ad0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eb3740; body size 11 bytes.
#line 1 "ENTRY_10eb3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb3740(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eb3750; body size 12 bytes.
#line 1 "ENTRY_10eb3750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb3750(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eb3b20; body size 23 bytes.
#line 1 "ENTRY_10eb3b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb3b20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[1] - *param_1) / 0x34);
}


// Reference entry 10eb3b40; body size 9 bytes.
#line 1 "ENTRY_10eb3b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb3b40(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 5);
}


// Reference entry 10eb42a0; body size 18 bytes.
#line 1 "ENTRY_10eb42a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb42a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb42c0; body size 18 bytes.
#line 1 "ENTRY_10eb42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb42c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb42e0; body size 18 bytes.
#line 1 "ENTRY_10eb42e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb42e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb4300; body size 22 bytes.
#line 1 "ENTRY_10eb4300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb4300(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb4320; body size 22 bytes.
#line 1 "ENTRY_10eb4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb4320(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb4340; body size 22 bytes.
#line 1 "ENTRY_10eb4340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb4340(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb4360; body size 18 bytes.
#line 1 "ENTRY_10eb4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb4360(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb4380; body size 18 bytes.
#line 1 "ENTRY_10eb4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb4380(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb43a0; body size 18 bytes.
#line 1 "ENTRY_10eb43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb43a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb48e0; body size 22 bytes.
#line 1 "ENTRY_10eb48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb48e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb4900; body size 22 bytes.
#line 1 "ENTRY_10eb4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb4900(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb4920; body size 22 bytes.
#line 1 "ENTRY_10eb4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb4920(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb4b40; body size 25 bytes.
#line 1 "ENTRY_10eb4b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4b40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10eb4b60; body size 25 bytes.
#line 1 "ENTRY_10eb4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4b60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10eb4b80; body size 25 bytes.
#line 1 "ENTRY_10eb4b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4b80(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10eb4ba0; body size 13 bytes.
#line 1 "ENTRY_10eb4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4ba0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4bb0; body size 13 bytes.
#line 1 "ENTRY_10eb4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4bb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4bc0; body size 13 bytes.
#line 1 "ENTRY_10eb4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4bc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4bd0; body size 13 bytes.
#line 1 "ENTRY_10eb4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4bd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4be0; body size 13 bytes.
#line 1 "ENTRY_10eb4be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4be0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4bf0; body size 13 bytes.
#line 1 "ENTRY_10eb4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4bf0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eb4c00; body size 3 bytes.
#line 1 "ENTRY_10eb4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4c00(void)

{
  return;
}


// Reference entry 10eb4c10; body size 3 bytes.
#line 1 "ENTRY_10eb4c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4c10(void)

{
  return;
}


// Reference entry 10eb4c20; body size 3 bytes.
#line 1 "ENTRY_10eb4c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb4c20(void)

{
  return;
}


// Reference entry 10eb51a0; body size 15 bytes.
#line 1 "ENTRY_10eb51a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb51a0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10eb51c0; body size 15 bytes.
#line 1 "ENTRY_10eb51c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb51c0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10eb51e0; body size 15 bytes.
#line 1 "ENTRY_10eb51e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb51e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10eb53d0; body size 5 bytes.
#line 1 "ENTRY_10eb53d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb53d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb53e0; body size 5 bytes.
#line 1 "ENTRY_10eb53e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb53e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb53f0; body size 5 bytes.
#line 1 "ENTRY_10eb53f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb53f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5400; body size 37 bytes.
#line 1 "ENTRY_10eb5400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5400(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10eb5430; body size 37 bytes.
#line 1 "ENTRY_10eb5430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5430(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10eb5460; body size 37 bytes.
#line 1 "ENTRY_10eb5460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5460(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10eb5a00; body size 5 bytes.
#line 1 "ENTRY_10eb5a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a10; body size 5 bytes.
#line 1 "ENTRY_10eb5a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a20; body size 5 bytes.
#line 1 "ENTRY_10eb5a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a30; body size 5 bytes.
#line 1 "ENTRY_10eb5a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a40; body size 5 bytes.
#line 1 "ENTRY_10eb5a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a50; body size 5 bytes.
#line 1 "ENTRY_10eb5a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a60; body size 5 bytes.
#line 1 "ENTRY_10eb5a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a70; body size 5 bytes.
#line 1 "ENTRY_10eb5a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a80; body size 5 bytes.
#line 1 "ENTRY_10eb5a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5a90; body size 5 bytes.
#line 1 "ENTRY_10eb5a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5a90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5aa0; body size 5 bytes.
#line 1 "ENTRY_10eb5aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5aa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5ab0; body size 5 bytes.
#line 1 "ENTRY_10eb5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5ac0; body size 5 bytes.
#line 1 "ENTRY_10eb5ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5ad0; body size 5 bytes.
#line 1 "ENTRY_10eb5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5ae0; body size 5 bytes.
#line 1 "ENTRY_10eb5ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ae0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5af0; body size 5 bytes.
#line 1 "ENTRY_10eb5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5af0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5b00; body size 5 bytes.
#line 1 "ENTRY_10eb5b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5b00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5b10; body size 5 bytes.
#line 1 "ENTRY_10eb5b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5b10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5e90; body size 15 bytes.
#line 1 "ENTRY_10eb5e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5e90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb5eb0; body size 15 bytes.
#line 1 "ENTRY_10eb5eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5eb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb5ed0; body size 15 bytes.
#line 1 "ENTRY_10eb5ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb5ef0; body size 15 bytes.
#line 1 "ENTRY_10eb5ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5ef0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb5f10; body size 15 bytes.
#line 1 "ENTRY_10eb5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb5f30; body size 15 bytes.
#line 1 "ENTRY_10eb5f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb5f50; body size 5 bytes.
#line 1 "ENTRY_10eb5f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5f60; body size 5 bytes.
#line 1 "ENTRY_10eb5f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5f70; body size 5 bytes.
#line 1 "ENTRY_10eb5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5f80; body size 5 bytes.
#line 1 "ENTRY_10eb5f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5f90; body size 5 bytes.
#line 1 "ENTRY_10eb5f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5f90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5fa0; body size 5 bytes.
#line 1 "ENTRY_10eb5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5fa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5fb0; body size 5 bytes.
#line 1 "ENTRY_10eb5fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5fb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5fc0; body size 5 bytes.
#line 1 "ENTRY_10eb5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5fc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5fd0; body size 5 bytes.
#line 1 "ENTRY_10eb5fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eb5fd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb5fe0; body size 18 bytes.
#line 1 "ENTRY_10eb5fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb5fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6000; body size 18 bytes.
#line 1 "ENTRY_10eb6000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb6000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6020; body size 18 bytes.
#line 1 "ENTRY_10eb6020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb6020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6100; body size 11 bytes.
#line 1 "ENTRY_10eb6100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb6100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6110; body size 11 bytes.
#line 1 "ENTRY_10eb6110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb6110(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6120; body size 11 bytes.
#line 1 "ENTRY_10eb6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb6120(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb62b0; body size 11 bytes.
#line 1 "ENTRY_10eb62b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb62b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb62c0; body size 11 bytes.
#line 1 "ENTRY_10eb62c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb62c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb62d0; body size 11 bytes.
#line 1 "ENTRY_10eb62d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eb62d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb62e0; body size 16 bytes.
#line 1 "ENTRY_10eb62e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb62e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6300; body size 16 bytes.
#line 1 "ENTRY_10eb6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb6300(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6320; body size 16 bytes.
#line 1 "ENTRY_10eb6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb6320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6340; body size 3 bytes.
#line 1 "ENTRY_10eb6340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb6340(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb6350; body size 3 bytes.
#line 1 "ENTRY_10eb6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb6350(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb6360; body size 3 bytes.
#line 1 "ENTRY_10eb6360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb6360(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb6370; body size 52 bytes.
#line 1 "ENTRY_10eb6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb6370(undefined4 *param_1)

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


// Reference entry 10eb63c0; body size 52 bytes.
#line 1 "ENTRY_10eb63c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb63c0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6410; body size 52 bytes.
#line 1 "ENTRY_10eb6410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eb6410(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eb6460; body size 6 bytes.
#line 1 "ENTRY_10eb6460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10eb6460(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(param_1);
}


// Reference entry 10eb66a0; body size 30 bytes.
#line 1 "ENTRY_10eb66a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __fastcall FUN_10eb66a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_1);
}


// Reference entry 10eb6e70; body size 14 bytes.
#line 1 "ENTRY_10eb6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10eb6e70(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10eb6e90; body size 14 bytes.
#line 1 "ENTRY_10eb6e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10eb6e90(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10eb6eb0; body size 14 bytes.
#line 1 "ENTRY_10eb6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10eb6eb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10eb73c0; body size 6 bytes.
#line 1 "ENTRY_10eb73c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb73c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10eb73d0; body size 6 bytes.
#line 1 "ENTRY_10eb73d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb73d0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10eb73e0; body size 6 bytes.
#line 1 "ENTRY_10eb73e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb73e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10eb73f0; body size 6 bytes.
#line 1 "ENTRY_10eb73f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb73f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10eb7400; body size 6 bytes.
#line 1 "ENTRY_10eb7400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb7400(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10eb7410; body size 6 bytes.
#line 1 "ENTRY_10eb7410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eb7410(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10eb7730; body size 31 bytes.
#line 1 "ENTRY_10eb7730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eb7730(undefined4 *param_1)

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


// Reference entry 10eb7760; body size 31 bytes.
#line 1 "ENTRY_10eb7760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eb7760(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10eb7790; body size 31 bytes.
#line 1 "ENTRY_10eb7790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eb7790(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10eb7880; body size 3 bytes.
#line 1 "ENTRY_10eb7880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7880(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7890; body size 3 bytes.
#line 1 "ENTRY_10eb7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7890(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb78a0; body size 3 bytes.
#line 1 "ENTRY_10eb78a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb78b0; body size 3 bytes.
#line 1 "ENTRY_10eb78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb78c0; body size 3 bytes.
#line 1 "ENTRY_10eb78c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb78d0; body size 3 bytes.
#line 1 "ENTRY_10eb78d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb78e0; body size 3 bytes.
#line 1 "ENTRY_10eb78e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb78f0; body size 3 bytes.
#line 1 "ENTRY_10eb78f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb78f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7900; body size 3 bytes.
#line 1 "ENTRY_10eb7900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7910; body size 3 bytes.
#line 1 "ENTRY_10eb7910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7920; body size 3 bytes.
#line 1 "ENTRY_10eb7920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7930; body size 3 bytes.
#line 1 "ENTRY_10eb7930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7940; body size 3 bytes.
#line 1 "ENTRY_10eb7940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7950; body size 3 bytes.
#line 1 "ENTRY_10eb7950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7960; body size 3 bytes.
#line 1 "ENTRY_10eb7960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7970; body size 3 bytes.
#line 1 "ENTRY_10eb7970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7980; body size 3 bytes.
#line 1 "ENTRY_10eb7980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb7990; body size 3 bytes.
#line 1 "ENTRY_10eb7990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb7990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb79a0; body size 3 bytes.
#line 1 "ENTRY_10eb79a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb79b0; body size 3 bytes.
#line 1 "ENTRY_10eb79b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb79c0; body size 3 bytes.
#line 1 "ENTRY_10eb79c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb79d0; body size 3 bytes.
#line 1 "ENTRY_10eb79d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb79e0; body size 3 bytes.
#line 1 "ENTRY_10eb79e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb79f0; body size 3 bytes.
#line 1 "ENTRY_10eb79f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb79f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eb81b0; body size 79 bytes.
#line 1 "ENTRY_10eb81b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb81b0(int param_2)
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


// Reference entry 10eb8220; body size 79 bytes.
#line 1 "ENTRY_10eb8220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb8220(int param_2)
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


// Reference entry 10eb8290; body size 79 bytes.
#line 1 "ENTRY_10eb8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb8290(int param_2)
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


// Reference entry 10eb8300; body size 11 bytes.
#line 1 "ENTRY_10eb8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb8300(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb8310; body size 11 bytes.
#line 1 "ENTRY_10eb8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb8310(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb8320; body size 11 bytes.
#line 1 "ENTRY_10eb8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eb8320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eb8330; body size 83 bytes.
#line 1 "ENTRY_10eb8330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb8330(int *param_2)
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


// Reference entry 10eb83a0; body size 83 bytes.
#line 1 "ENTRY_10eb83a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb83a0(int *param_2)
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


// Reference entry 10eb8410; body size 83 bytes.
#line 1 "ENTRY_10eb8410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb8410(int *param_2)
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


// Reference entry 10eb8480; body size 90 bytes.
#line 1 "ENTRY_10eb8480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10eb8480(uint param_1)

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


// Reference entry 10eb8500; body size 87 bytes.
#line 1 "ENTRY_10eb8500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10eb8500(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 10eb8570; body size 97 bytes.
#line 1 "ENTRY_10eb8570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10eb8570(uint param_1)

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


// Reference entry 10eb88c0; body size 13 bytes.
#line 1 "ENTRY_10eb88c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eb88c0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xc))());
                    
                    
  (**(code **)(*(int *)(iVar1 + 0x38) + 8))();
  return;
}


// Reference entry 10eb88d0; body size 57 bytes.
#line 1 "ENTRY_10eb88d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb88d0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10eb8920; body size 54 bytes.
#line 1 "ENTRY_10eb8920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb8920(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x20);
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


// Reference entry 10eb8970; body size 63 bytes.
#line 1 "ENTRY_10eb8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eb8970(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10eb89c0; body size 60 bytes.
#line 1 "ENTRY_10eb89c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eb89c0(int param_1,int param_2)

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


// Reference entry 10eb8a10; body size 57 bytes.
#line 1 "ENTRY_10eb8a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eb8a10(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x20);
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


// Reference entry 10eb8a60; body size 66 bytes.
#line 1 "ENTRY_10eb8a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eb8a60(int param_1,int param_2)

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


// Reference entry 10eb8ac0; body size 11 bytes.
#line 1 "ENTRY_10eb8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb8ac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eb8ad0; body size 11 bytes.
#line 1 "ENTRY_10eb8ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb8ad0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eb8ae0; body size 11 bytes.
#line 1 "ENTRY_10eb8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb8ae0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10eb97a0; body size 19 bytes.
#line 1 "ENTRY_10eb97a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eb97a0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 8))(param_2);
  func_0x100027f7();
  return;
}


// Reference entry 10eb97c0; body size 21 bytes.
#line 1 "ENTRY_10eb97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10eb97c0(void)

{
  int iVar1;
  
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2ea0());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 != 0);
}


// Reference entry 10eba210; body size 85 bytes.
#line 1 "ENTRY_10eba210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10eba210(SCStr *param_1)

{
  bool bVar1;
  uint uVar2;
  SCStr *pSVar3;
  
  pSVar3 = (SCStr *)((SCStr *)&DAT_121a6ab8);
  uVar2 = (uint)(0);
  do {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq(pSVar3));
    if (bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
    }
    uVar2 = (uint)(uVar2 + 4);
    pSVar3 = (SCStr *)(pSVar3 + 4);
  } while (uVar2 < 0x38);
  pSVar3 = (SCStr *)((SCStr *)&DAT_121a6b1c);
  uVar2 = (uint)(0);
  do {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq(pSVar3));
    if (bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
    }
    uVar2 = (uint)(uVar2 + 4);
    pSVar3 = (SCStr *)(pSVar3 + 4);
  } while (uVar2 < 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 10eba280; body size 21 bytes.
#line 1 "ENTRY_10eba280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10eba280(void)

{
  int iVar1;
  
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2ea0());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 == 0);
}


// Reference entry 10eba2a0; body size 21 bytes.
#line 1 "ENTRY_10eba2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10eba2a0(void)

{
  int iVar1;
  
  thunk_FUN_105a26c0();
  iVar1 = (int)(thunk_FUN_10df2ea0());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 != 0);
}


// Reference entry 10eba4f0; body size 17 bytes.
#line 1 "ENTRY_10eba4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eba4f0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xc))());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(iVar1 + 0xb0) != 0);
}


// Reference entry 10ebb1e0; body size 6 bytes.
#line 1 "ENTRY_10ebb1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb1e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10ebb1f0; body size 6 bytes.
#line 1 "ENTRY_10ebb1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb1f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10ebb200; body size 6 bytes.
#line 1 "ENTRY_10ebb200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb200(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10ebb210; body size 6 bytes.
#line 1 "ENTRY_10ebb210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb210(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10ebb220; body size 6 bytes.
#line 1 "ENTRY_10ebb220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb220(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10ebb230; body size 6 bytes.
#line 1 "ENTRY_10ebb230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb230(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10ebb450; body size 5 bytes.
#line 1 "ENTRY_10ebb450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebb460; body size 5 bytes.
#line 1 "ENTRY_10ebb460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb460(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebb470; body size 5 bytes.
#line 1 "ENTRY_10ebb470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebb470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebc4a0; body size 25 bytes.
#line 1 "ENTRY_10ebc4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ebc4a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ebc4c0; body size 22 bytes.
#line 1 "ENTRY_10ebc4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ebc4c0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ebc4e0; body size 3 bytes.
#line 1 "ENTRY_10ebc4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebc4e0(void)

{
  return;
}


// Reference entry 10ebc4f0; body size 3 bytes.
#line 1 "ENTRY_10ebc4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebc4f0(void)

{
  return;
}


// Reference entry 10ebc500; body size 3 bytes.
#line 1 "ENTRY_10ebc500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebc500(void)

{
  return;
}


// Reference entry 10ebc510; body size 3 bytes.
#line 1 "ENTRY_10ebc510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebc510(void)

{
  return;
}


// Reference entry 10ebca80; body size 7 bytes.
#line 1 "ENTRY_10ebca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebca80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ebca90; body size 7 bytes.
#line 1 "ENTRY_10ebca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebca90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ebcaa0; body size 7 bytes.
#line 1 "ENTRY_10ebcaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebcaa0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ebcab0; body size 7 bytes.
#line 1 "ENTRY_10ebcab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebcab0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ebcac0; body size 7 bytes.
#line 1 "ENTRY_10ebcac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebcac0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ebcad0; body size 7 bytes.
#line 1 "ENTRY_10ebcad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebcad0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ebdde0; body size 85 bytes.
#line 1 "ENTRY_10ebdde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebdde0(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  char cVar1;
  
  cVar1 = (char)((*param_4)(param_2,param_1));
  if (cVar1 != '\0') {
    thunk_FUN_10ebfc10(param_2,param_1);
  }
  cVar1 = (char)((*param_4)(param_3,param_2));
  if (cVar1 != '\0') {
    thunk_FUN_10ebfc10(param_3,param_2);
    cVar1 = (char)((*param_4)(param_2,param_1));
    if (cVar1 != '\0') {
      thunk_FUN_10ebfc10(param_2,param_1);
    }
  }
  return;
}


// Reference entry 10ebe2a0; body size 8 bytes.
#line 1 "ENTRY_10ebe2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebe2a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10ebeb80; body size 5 bytes.
#line 1 "ENTRY_10ebeb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebeb80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebed80; body size 92 bytes.
#line 1 "ENTRY_10ebed80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebed80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
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
  thunk_FUN_10ebeb90(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10ebef10; body size 8 bytes.
#line 1 "ENTRY_10ebef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebef10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -8);
}


// Reference entry 10ebef20; body size 186 bytes.
#line 1 "ENTRY_10ebef20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebef20(int param_1,int param_2,int param_3,int *param_4,code *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  while (iVar2 = param_2, param_3 < iVar2) {
    param_2 = (int)(iVar2 + -1 >> 1);
    piVar5 = (int *)((int *)(param_2 * 8 + param_1));
    cVar3 = (char)((*param_5)(piVar5,param_4));
    if (cVar3 == '\0') break;
    iVar4 = (int)(*piVar5);
    if (iVar4 != *(int *)(param_1 + iVar2 * 8)) {
      piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + iVar2 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
        (**(code **)(*piVar1 + 8))();
        iVar4 = (int)(*piVar5);
      }
      *(int *)(param_1 + iVar2 * 8) = iVar4;
      piVar5 = (int *)((int *)piVar5[1]);
      *(int **)(param_1 + 4 + iVar2 * 8) = piVar5;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
      }
    }
  }
  iVar4 = (int)(*param_4);
  if (iVar4 != *(int *)(param_1 + iVar2 * 8)) {
    piVar5 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8));
    if (piVar5 != (int *)0x0) {
      *(undefined4 *)(param_1 + iVar2 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + iVar2 * 8) = 0;
      (**(code **)(*piVar5 + 8))();
      iVar4 = (int)(*param_4);
    }
    *(int *)(param_1 + iVar2 * 8) = iVar4;
    piVar5 = (int *)((int *)param_4[1]);
    *(int **)(param_1 + 4 + iVar2 * 8) = piVar5;
    if (piVar5 != (int *)0x0) {
                    
                    
      (**(code **)(*piVar5 + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10ebf820; body size 5 bytes.
#line 1 "ENTRY_10ebf820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebf830; body size 5 bytes.
#line 1 "ENTRY_10ebf830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebf840; body size 5 bytes.
#line 1 "ENTRY_10ebf840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebf850; body size 5 bytes.
#line 1 "ENTRY_10ebf850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebf860; body size 5 bytes.
#line 1 "ENTRY_10ebf860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebf860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebf970; body size 25 bytes.
#line 1 "ENTRY_10ebf970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebf970(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - param_1) / 0xc);
}


// Reference entry 10ebf990; body size 26 bytes.
#line 1 "ENTRY_10ebf990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebf990(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - param_1) / 0x24);
}


// Reference entry 10ebf9b0; body size 12 bytes.
#line 1 "ENTRY_10ebf9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ebf9b0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_1 >> 3);
}


// Reference entry 10ebfac0; body size 5 bytes.
#line 1 "ENTRY_10ebfac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebfad0; body size 5 bytes.
#line 1 "ENTRY_10ebfad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebfae0; body size 5 bytes.
#line 1 "ENTRY_10ebfae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfae0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebfaf0; body size 5 bytes.
#line 1 "ENTRY_10ebfaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfaf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebfb00; body size 5 bytes.
#line 1 "ENTRY_10ebfb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfb00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebfb10; body size 67 bytes.
#line 1 "ENTRY_10ebfb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ebfb10(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  func_0x1006b4c8(param_3,param_4,param_5);
  *param_3 = (int)(*param_1 + (((int)param_3 - iVar1) / 0x24) * 0x24);
  return;
}


// Reference entry 10ebfb70; body size 49 bytes.
#line 1 "ENTRY_10ebfb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ebfb70(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10ebd6e0(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + (param_3 - iVar1 >> 3) * 8);
  return;
}


// Reference entry 10ebfbb0; body size 66 bytes.
#line 1 "ENTRY_10ebfbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ebfbb0(int *param_2,int param_3,undefined4 param_4,undefined4 param_5)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10ebcd20(param_3,param_4,param_5,param_3);
  *param_2 = (int)(*param_1 + ((param_3 - iVar1) / 0xc) * 0xc);
  return;
}


// Reference entry 10ebfd30; body size 5 bytes.
#line 1 "ENTRY_10ebfd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfd30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebfd40; body size 5 bytes.
#line 1 "ENTRY_10ebfd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ebfd40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ebfd50; body size 31 bytes.
#line 1 "ENTRY_10ebfd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ebfd50(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10ebf160(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}


// Reference entry 10ec0620; body size 9 bytes.
#line 1 "ENTRY_10ec0620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ec0620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayoutTemplate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec0630; body size 9 bytes.
#line 1 "ENTRY_10ec0630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ec0630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayoutTemplate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec0640; body size 11 bytes.
#line 1 "ENTRY_10ec0640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ec0640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec0650; body size 11 bytes.
#line 1 "ENTRY_10ec0650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ec0650(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec0660; body size 11 bytes.
#line 1 "ENTRY_10ec0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ec0660(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec0670; body size 11 bytes.
#line 1 "ENTRY_10ec0670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ec0670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec0680; body size 11 bytes.
#line 1 "ENTRY_10ec0680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ec0680(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec0690; body size 11 bytes.
#line 1 "ENTRY_10ec0690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ec0690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec06a0; body size 3 bytes.
#line 1 "ENTRY_10ec06a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec06a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ec06b0; body size 23 bytes.
#line 1 "ENTRY_10ec06b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ec06b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ec2c70; body size 65 bytes.
#line 1 "ENTRY_10ec2c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ec2c70(int *param_2)
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


// Reference entry 10ec2cd0; body size 12 bytes.
#line 1 "ENTRY_10ec2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ec2cd0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 * 0x20 + *param_1);
}


// Reference entry 10ec2ce0; body size 12 bytes.
#line 1 "ENTRY_10ec2ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ec2ce0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 * 0x20 + *param_1);
}


// Reference entry 10ec2cf0; body size 15 bytes.
#line 1 "ENTRY_10ec2cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ec2cf0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0x24);
}


// Reference entry 10ec2d10; body size 15 bytes.
#line 1 "ENTRY_10ec2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ec2d10(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 0xc);
}


// Reference entry 10ec2d30; body size 12 bytes.
#line 1 "ENTRY_10ec2d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ec2d30(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 10ec2d40; body size 63 bytes.
#line 1 "ENTRY_10ec2d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ec2d40(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x24);
  if (0x71c71c7 - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x71c71c7);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10ec2d90; body size 49 bytes.
#line 1 "ENTRY_10ec2d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ec2d90(uint param_2)
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


// Reference entry 10ec2f10; body size 21 bytes.
#line 1 "ENTRY_10ec2f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec2f10(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 0x24);
  return;
}


// Reference entry 10ec2f30; body size 21 bytes.
#line 1 "ENTRY_10ec2f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec2f30(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 0xc);
  return;
}


// Reference entry 10ec2f50; body size 18 bytes.
#line 1 "ENTRY_10ec2f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec2f50(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 10ec2f70; body size 3 bytes.
#line 1 "ENTRY_10ec2f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ec2f70(void)

{
  return;
}


// Reference entry 10ec2f80; body size 3 bytes.
#line 1 "ENTRY_10ec2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ec2f80(void)

{
  return;
}


// Reference entry 10ec34b0; body size 3 bytes.
#line 1 "ENTRY_10ec34b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec34b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ec34c0; body size 3 bytes.
#line 1 "ENTRY_10ec34c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec34c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ec34d0; body size 3 bytes.
#line 1 "ENTRY_10ec34d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec34d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ec34e0; body size 3 bytes.
#line 1 "ENTRY_10ec34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec34e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ec3510; body size 30 bytes.
#line 1 "ENTRY_10ec3510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10ec3510(undefined4 *param_2)
{
  int param_1 = (int )this;
  func_0x1006b4c8(*(undefined4 *)(param_1 + 4),*param_2,param_2[1],param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10ec3660; body size 3 bytes.
#line 1 "ENTRY_10ec3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ec3660(void)

{
  return;
}


// Reference entry 10ec6720; body size 7 bytes.
#line 1 "ENTRY_10ec6720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ec6720(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + -0x20);
}


// Reference entry 10ec6730; body size 11 bytes.
#line 1 "ENTRY_10ec6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6730(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ec6740; body size 11 bytes.
#line 1 "ENTRY_10ec6740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6740(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ec6750; body size 11 bytes.
#line 1 "ENTRY_10ec6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ec6760; body size 11 bytes.
#line 1 "ENTRY_10ec6760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6760(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ec6770; body size 23 bytes.
#line 1 "ENTRY_10ec6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ec6770(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[2] - *param_1) / 0x24);
}


// Reference entry 10ec6790; body size 9 bytes.
#line 1 "ENTRY_10ec6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ec6790(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10ec6b40; body size 12 bytes.
#line 1 "ENTRY_10ec6b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6b40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6b50; body size 12 bytes.
#line 1 "ENTRY_10ec6b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6b50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6b60; body size 12 bytes.
#line 1 "ENTRY_10ec6b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6b60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6b70; body size 12 bytes.
#line 1 "ENTRY_10ec6b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6b80; body size 12 bytes.
#line 1 "ENTRY_10ec6b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ec6b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ec6fa0; body size 3 bytes.
#line 1 "ENTRY_10ec6fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec6fa0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ec6fb0; body size 3 bytes.
#line 1 "ENTRY_10ec6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ec6fb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ec7900; body size 6 bytes.
#line 1 "ENTRY_10ec7900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ec7900(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x71c71c7);
}


// Reference entry 10ec7910; body size 6 bytes.
#line 1 "ENTRY_10ec7910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ec7910(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10ec7920; body size 6 bytes.
#line 1 "ENTRY_10ec7920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ec7920(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x71c71c7);
}


// Reference entry 10ec7930; body size 6 bytes.
#line 1 "ENTRY_10ec7930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ec7930(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10eca4f0; body size 9 bytes.
#line 1 "ENTRY_10eca4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca4f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 5);
}


// Reference entry 10eca500; body size 9 bytes.
#line 1 "ENTRY_10eca500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca500(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 5);
}


// Reference entry 10eca510; body size 23 bytes.
#line 1 "ENTRY_10eca510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca510(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[1] - *param_1) / 0x24);
}


// Reference entry 10eca530; body size 22 bytes.
#line 1 "ENTRY_10eca530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca530(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 10eca550; body size 9 bytes.
#line 1 "ENTRY_10eca550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eca550(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10ecfab0; body size 18 bytes.
#line 1 "ENTRY_10ecfab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ecfab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ecfad0; body size 22 bytes.
#line 1 "ENTRY_10ecfad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ecfad0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ecfaf0; body size 18 bytes.
#line 1 "ENTRY_10ecfaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ecfaf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ecfde0; body size 11 bytes.
#line 1 "ENTRY_10ecfde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ecfde0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ecfdf0; body size 11 bytes.
#line 1 "ENTRY_10ecfdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ecfdf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ecfe00; body size 22 bytes.
#line 1 "ENTRY_10ecfe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ecfe00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ecfe20; body size 11 bytes.
#line 1 "ENTRY_10ecfe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ecfe20(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ecfe30; body size 11 bytes.
#line 1 "ENTRY_10ecfe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ecfe30(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed0050; body size 11 bytes.
#line 1 "ENTRY_10ed0050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ed0050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed0060; body size 11 bytes.
#line 1 "ENTRY_10ed0060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ed0060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed0070; body size 25 bytes.
#line 1 "ENTRY_10ed0070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0070(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10ed0090; body size 13 bytes.
#line 1 "ENTRY_10ed0090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0090(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ed00a0; body size 13 bytes.
#line 1 "ENTRY_10ed00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed00a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ed00b0; body size 3 bytes.
#line 1 "ENTRY_10ed00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed00b0(void)

{
  return;
}


// Reference entry 10ed0250; body size 15 bytes.
#line 1 "ENTRY_10ed0250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0250(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 10ed0320; body size 5 bytes.
#line 1 "ENTRY_10ed0320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0320(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0330; body size 31 bytes.
#line 1 "ENTRY_10ed0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10ed0330(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10ed0640; body size 7 bytes.
#line 1 "ENTRY_10ed0640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0640(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ed0650; body size 7 bytes.
#line 1 "ENTRY_10ed0650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0650(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ed0660; body size 5 bytes.
#line 1 "ENTRY_10ed0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0660(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0670; body size 5 bytes.
#line 1 "ENTRY_10ed0670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0670(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0680; body size 5 bytes.
#line 1 "ENTRY_10ed0680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0680(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0690; body size 5 bytes.
#line 1 "ENTRY_10ed0690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0690(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed06a0; body size 5 bytes.
#line 1 "ENTRY_10ed06a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed06a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0890; body size 15 bytes.
#line 1 "ENTRY_10ed0890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ed08b0; body size 15 bytes.
#line 1 "ENTRY_10ed08b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed08b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ed08d0; body size 5 bytes.
#line 1 "ENTRY_10ed08d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed08d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed08e0; body size 5 bytes.
#line 1 "ENTRY_10ed08e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed08e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed08f0; body size 5 bytes.
#line 1 "ENTRY_10ed08f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed08f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0900; body size 5 bytes.
#line 1 "ENTRY_10ed0900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0910; body size 5 bytes.
#line 1 "ENTRY_10ed0910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0920; body size 5 bytes.
#line 1 "ENTRY_10ed0920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0930; body size 5 bytes.
#line 1 "ENTRY_10ed0930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0940; body size 5 bytes.
#line 1 "ENTRY_10ed0940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0950; body size 11 bytes.
#line 1 "ENTRY_10ed0950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0950(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ed0960; body size 11 bytes.
#line 1 "ENTRY_10ed0960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed0960(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ed0970; body size 5 bytes.
#line 1 "ENTRY_10ed0970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0980; body size 5 bytes.
#line 1 "ENTRY_10ed0980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0990; body size 5 bytes.
#line 1 "ENTRY_10ed0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed0990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed09a0; body size 11 bytes.
#line 1 "ENTRY_10ed09a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ed09a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayoutTemplate);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed09b0; body size 18 bytes.
#line 1 "ENTRY_10ed09b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ed09b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed0a90; body size 16 bytes.
#line 1 "ENTRY_10ed0a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ed0a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed0ab0; body size 3 bytes.
#line 1 "ENTRY_10ed0ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed0ab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed0ac0; body size 52 bytes.
#line 1 "ENTRY_10ed0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ed0ac0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed0b10; body size 13 bytes.
#line 1 "ENTRY_10ed0b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ed0b10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed0b20; body size 13 bytes.
#line 1 "ENTRY_10ed0b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ed0b20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ed1230; body size 18 bytes.
#line 1 "ENTRY_10ed1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10ed1230(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 < *param_2);
}


// Reference entry 10ed1310; body size 31 bytes.
#line 1 "ENTRY_10ed1310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ed1310(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10ed1380; body size 3 bytes.
#line 1 "ENTRY_10ed1380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed1380(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed1390; body size 3 bytes.
#line 1 "ENTRY_10ed1390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed1390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed13a0; body size 3 bytes.
#line 1 "ENTRY_10ed13a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed13b0; body size 3 bytes.
#line 1 "ENTRY_10ed13b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed13c0; body size 3 bytes.
#line 1 "ENTRY_10ed13c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed13d0; body size 3 bytes.
#line 1 "ENTRY_10ed13d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed13e0; body size 3 bytes.
#line 1 "ENTRY_10ed13e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed13f0; body size 3 bytes.
#line 1 "ENTRY_10ed13f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed13f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed1690; body size 79 bytes.
#line 1 "ENTRY_10ed1690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ed1690(int param_2)
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


// Reference entry 10ed1700; body size 11 bytes.
#line 1 "ENTRY_10ed1700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ed1700(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ed1710; body size 83 bytes.
#line 1 "ENTRY_10ed1710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ed1710(int *param_2)
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


// Reference entry 10ed3840; body size 90 bytes.
#line 1 "ENTRY_10ed3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ed3840(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5555556) {
    param_1 = (uint)(param_1 * 0x30);
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


// Reference entry 10ed40d0; body size 60 bytes.
#line 1 "ENTRY_10ed40d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ed40d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(param_3));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,param_3);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ed9820; body size 57 bytes.
#line 1 "ENTRY_10ed9820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ed9820(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x30);
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


// Reference entry 10ed9870; body size 60 bytes.
#line 1 "ENTRY_10ed9870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ed9870(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x30);
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


// Reference entry 10ed98c0; body size 8 bytes.
#line 1 "ENTRY_10ed98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ed98c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10edf310; body size 6 bytes.
#line 1 "ENTRY_10edf310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10edf310(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x5555555);
}


// Reference entry 10edf320; body size 6 bytes.
#line 1 "ENTRY_10edf320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10edf320(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x5555555);
}


// Reference entry 10edf330; body size 4 bytes.
#line 1 "ENTRY_10edf330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10edf330(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10edf340; body size 130 bytes.
#line 1 "ENTRY_10edf340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10edf340(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10edf3f0; body size 5 bytes.
#line 1 "ENTRY_10edf3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10edf3f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10edf400; body size 70 bytes.
#line 1 "ENTRY_10edf400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10edf400(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10edf4a0; body size 10 bytes.
#line 1 "ENTRY_10edf4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10edf4a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10edf4b0; body size 12 bytes.
#line 1 "ENTRY_10edf4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10edf4b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10edfaf0; body size 8 bytes.
#line 1 "ENTRY_10edfaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10edfaf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10edfb00; body size 4 bytes.
#line 1 "ENTRY_10edfb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10edfb00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10edfd90; body size 8 bytes.
#line 1 "ENTRY_10edfd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10edfd90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10edfda0; body size 4 bytes.
#line 1 "ENTRY_10edfda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10edfda0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10edfdb0; body size 7 bytes.
#line 1 "ENTRY_10edfdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10edfdb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10edfdc0; body size 26 bytes.
#line 1 "ENTRY_10edfdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10edfdc0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10edfde0; body size 10 bytes.
#line 1 "ENTRY_10edfde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10edfde0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10ee0700; body size 16 bytes.
#line 1 "ENTRY_10ee0700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee0700(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ee0790; body size 4 bytes.
#line 1 "ENTRY_10ee0790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee0790(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ee0c90; body size 28 bytes.
#line 1 "ENTRY_10ee0c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee0c90(undefined4 *param_1)

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


// Reference entry 10ee1830; body size 25 bytes.
#line 1 "ENTRY_10ee1830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1830(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ee1850; body size 25 bytes.
#line 1 "ENTRY_10ee1850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1850(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ee1870; body size 3 bytes.
#line 1 "ENTRY_10ee1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1870(void)

{
  return;
}


// Reference entry 10ee1880; body size 33 bytes.
#line 1 "ENTRY_10ee1880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ee1880(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10ee18b0; body size 3 bytes.
#line 1 "ENTRY_10ee18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee18b0(void)

{
  return;
}


// Reference entry 10ee18c0; body size 18 bytes.
#line 1 "ENTRY_10ee18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee18c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10ee1a30; body size 30 bytes.
#line 1 "ENTRY_10ee1a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1a30(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10ee1a60; body size 30 bytes.
#line 1 "ENTRY_10ee1a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1a60(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10ee1a90; body size 7 bytes.
#line 1 "ENTRY_10ee1a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1a90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ee1aa0; body size 7 bytes.
#line 1 "ENTRY_10ee1aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1aa0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ee1ab0; body size 7 bytes.
#line 1 "ENTRY_10ee1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1ab0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ee1ac0; body size 33 bytes.
#line 1 "ENTRY_10ee1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ee1ac0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10ee1af0; body size 5 bytes.
#line 1 "ENTRY_10ee1af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1af0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee1b00; body size 13 bytes.
#line 1 "ENTRY_10ee1b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1b00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ee1b10; body size 38 bytes.
#line 1 "ENTRY_10ee1b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ee1b10(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ee1b40; body size 5 bytes.
#line 1 "ENTRY_10ee1b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1b40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee1b50; body size 36 bytes.
#line 1 "ENTRY_10ee1b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ee1b50(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ee1b80; body size 36 bytes.
#line 1 "ENTRY_10ee1b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ee1b80(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ee1bb0; body size 5 bytes.
#line 1 "ENTRY_10ee1bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1bb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee1bc0; body size 13 bytes.
#line 1 "ENTRY_10ee1bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10ee1bd0; body size 3 bytes.
#line 1 "ENTRY_10ee1bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1bd0(void)

{
  return;
}


// Reference entry 10ee1be0; body size 36 bytes.
#line 1 "ENTRY_10ee1be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee1be0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10ee18e0(puVar1,param_2);
  return;
}


// Reference entry 10ee1c10; body size 36 bytes.
#line 1 "ENTRY_10ee1c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee1c10(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if (param_2 != (int *)(param_3)) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = (int *)(param_2 + 1);
    } while (param_2 != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ee1c40; body size 5 bytes.
#line 1 "ENTRY_10ee1c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1c40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee1c50; body size 5 bytes.
#line 1 "ENTRY_10ee1c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1c50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee1c60; body size 5 bytes.
#line 1 "ENTRY_10ee1c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1c60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee1c70; body size 5 bytes.
#line 1 "ENTRY_10ee1c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee1c70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee1cc0; body size 11 bytes.
#line 1 "ENTRY_10ee1cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ee1cc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ee1cd0; body size 11 bytes.
#line 1 "ENTRY_10ee1cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ee1cd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ee1ce0; body size 23 bytes.
#line 1 "ENTRY_10ee1ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ee1d00; body size 3 bytes.
#line 1 "ENTRY_10ee1d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee1d00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee1d90; body size 23 bytes.
#line 1 "ENTRY_10ee1d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1d90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ee1db0; body size 9 bytes.
#line 1 "ENTRY_10ee1db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ee1db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_Netstart2DtlsClient_MessageHandler);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ee2170; body size 16 bytes.
#line 1 "ENTRY_10ee2170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee2170(undefined4 *param_1)

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


// Reference entry 10ee21f0; body size 3 bytes.
#line 1 "ENTRY_10ee21f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee21f0(void)

{
  return;
}


// Reference entry 10ee2630; body size 14 bytes.
#line 1 "ENTRY_10ee2630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ee2630(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10ee2650; body size 7 bytes.
#line 1 "ENTRY_10ee2650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ee2650(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10ee2660; body size 7 bytes.
#line 1 "ENTRY_10ee2660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ee2660(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10ee2670; body size 3 bytes.
#line 1 "ENTRY_10ee2670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2670(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ee2680; body size 3 bytes.
#line 1 "ENTRY_10ee2680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2680(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ee2720; body size 30 bytes.
#line 1 "ENTRY_10ee2720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee2720(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ee2ae0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = iVar1;
  param_1[2] = iVar1 + param_2 * 4;
  return;
}


// Reference entry 10ee2750; body size 49 bytes.
#line 1 "ENTRY_10ee2750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ee2750(uint param_2)
{
  int *param_1 = (int *)this;
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


// Reference entry 10ee2800; body size 3 bytes.
#line 1 "ENTRY_10ee2800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee2800(void)

{
  return;
}


// Reference entry 10ee2810; body size 3 bytes.
#line 1 "ENTRY_10ee2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee2810(void)

{
  return;
}


// Reference entry 10ee2820; body size 3 bytes.
#line 1 "ENTRY_10ee2820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee2830; body size 3 bytes.
#line 1 "ENTRY_10ee2830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee2840; body size 3 bytes.
#line 1 "ENTRY_10ee2840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee2850; body size 3 bytes.
#line 1 "ENTRY_10ee2850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee2860; body size 3 bytes.
#line 1 "ENTRY_10ee2860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee2860(void)

{
  return;
}


// Reference entry 10ee2870; body size 9 bytes.
#line 1 "ENTRY_10ee2870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee2870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ee28f0; body size 38 bytes.
#line 1 "ENTRY_10ee28f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ee28f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ee2920; body size 27 bytes.
#line 1 "ENTRY_10ee2920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ee2920(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ee2950; body size 27 bytes.
#line 1 "ENTRY_10ee2950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ee2950(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ee2980; body size 3 bytes.
#line 1 "ENTRY_10ee2980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2980(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ee2990; body size 4 bytes.
#line 1 "ENTRY_10ee2990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee2990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ee29a0; body size 3 bytes.
#line 1 "ENTRY_10ee29a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee29a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ee2d50; body size 11 bytes.
#line 1 "ENTRY_10ee2d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee2d50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ee30f0; body size 9 bytes.
#line 1 "ENTRY_10ee30f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ee30f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ee3170; body size 272 bytes.
#line 1 "ENTRY_10ee3170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee3170(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if ((((*(int *)(param_1 + 0xa8) != 0) || (*(int *)(param_1 + 0xac) != 0)) ||
      (*(int *)(param_1 + 0xb0) != 0)) || (*(int *)(param_1 + 0xb4) != 0)) {
    if ((*(int *)(param_1 + 0xb0) != 0) || (iVar2 = param_1 + 0xa8, *(int *)(param_1 + 0xb4) != 0))
    {
      iVar2 = (int)(param_1 + 0xb0);
    }
    iVar2 = (int)(thunk_FUN_1145abd0(iVar2));
    if (iVar2 < 1) {
      thunk_FUN_10302280(param_1 + 4,"KeepAlive timer is expired!!");
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if ((*(int *)(param_1 + 0xb8) == 2) && (*(int *)(param_1 + 0x84) != 0)) {
        uStack_590 = (undefined4)(0x586);
        cVar1 = (char)(thunk_FUN_113bce30(auStack_58c,&uStack_590));
        if (cVar1 == '\0') {
          pcVar3 = (char *)("KEEP_ALIVE write failed!");
        }
        else {
          cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
          if (cVar1 == '\0') {
            pcVar3 = (char *)("KEEP_ALIVE send failed!");
          }
          else {
            *(undefined1 *)(param_1 + 0xa4) = 1;
            pcVar3 = (char *)("KEEP_ALIVE send succeeded");
          }
        }
        thunk_FUN_10302280(param_1 + 4,pcVar3);
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee3490; body size 61 bytes.
#line 1 "ENTRY_10ee3490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ee3490(int param_1,int param_2)

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


// Reference entry 10ee4140; body size 12 bytes.
#line 1 "ENTRY_10ee4140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee4140(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ee42b0; body size 42 bytes.
#line 1 "ENTRY_10ee42b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee42b0(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(void *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10ee49a0; body size 24 bytes.
#line 1 "ENTRY_10ee49a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ee49a0(int param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 1;
  thunk_FUN_111bd6b0();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10ee4e40; body size 355 bytes.
#line 1 "ENTRY_10ee4e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee4e40(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puStack_5ac;
  undefined4 *puStack_5a8;
  int iStack_5a4;
  SCStr aSStack_5a0 [4];
  void *pvStack_59c;
  undefined1 *puStack_598;
  int iStack_594;
  char acStack_590 [1416];
  uint uStack_8;
  
  iStack_594 = (int)(0xffffffff);
  puStack_598 = (undefined1 *)(LAB_1175f295);
  pvStack_59c = (void *)(ExceptionList);
  uStack_8 = (uint)(DAT_12126b84 ^ (uint)acStack_590);
  ExceptionList = (void *)(&pvStack_59c);
  iVar4 = (int)(0);
  iVar1 = (int)(param_1 + 4);
  cVar2 = (char)(thunk_FUN_113ba290(param_2,param_3,acStack_590,0x586,0,uStack_8));
  if (cVar2 == '\0') {
    thunk_FUN_10302280(iVar1,"MSG_ECHO parsing failed! Invalid Netstart2 message.");
    iVar4 = (int)(1000);
  }
  else {
    thunk_FUN_10302280(iVar1,"MSG_ECHO parsed successfully: %s",acStack_590);
  }
  ((SCStr *)(aSStack_5a0))->int_allocRep(acStack_590);
  iStack_594 = (int)(0);
  if (iVar4 == 0) {
    thunk_FUN_10ee1d10(param_1 + 8);
    *(unsigned char *)((char *)&iStack_594 + 0) = 1;
    for (puVar5 = (undefined4 *)(puStack_5ac); puVar5 != (undefined4 *)(puStack_5a8); puVar5 = puVar5 + 1) {
      (**(code **)(*(int *)*puVar5 + 0x20))(aSStack_5a0);
    }
    iStack_594 = (int)((uint)*(unsigned short *)((char *)&iStack_594 + 1) << 8);
    if (puStack_5ac != (undefined4 *)0x0) {
      uVar3 = (uint)((iStack_5a4 - (int)puStack_5ac >> 2) * 4);
      puVar5 = (undefined4 *)(puStack_5ac);
      if (0xfff < uVar3) {
        puVar5 = (undefined4 *)((undefined4 *)puStack_5ac[-1]);
        uVar3 = (uint)(uVar3 + 0x23);
        if (0x1f < (uint)((int)puStack_5ac + (-4 - (int)puVar5))) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(puVar5,uVar3);
    }
  }
  else {
    thunk_FUN_10302280(iVar1,"send ECHO request failed!");
    thunk_FUN_10ee3c70(iVar4,1,7);
  }
  iStack_594 = (int)(2);
  ((SCStr *)(aSStack_5a0))->int_release();
  ExceptionList = (void *)(pvStack_59c);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee5f20; body size 329 bytes.
#line 1 "ENTRY_10ee5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee5f20(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined1 auStack_5ac [32];
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_5b4);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  if (param_3 != 0) {
    thunk_FUN_111bcfc0(param_2,param_3);
  }
  uVar2 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_111bce60());
  uStack_5b4 = (undefined4)(0x20);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(0x40);
  }
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_111bcfe0(auStack_5ac,&uStack_5b4));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"Unable to sign SETUP_CLIENT_HELLO handshake signature");
  }
  else {
    uStack_5b0 = (undefined4)(0x586);
    cVar1 = (char)(thunk_FUN_113bd750(auStack_58c,&uStack_5b0,0x2a,"90.0-77070",uVar2,auStack_5ac,
                               uStack_5b4,0));
    if (cVar1 == '\0') {
      thunk_FUN_10302280(param_1,"SETUP_CLIENT_HELLO write failed!");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_5b0));
      if (cVar1 == '\0') {
        thunk_FUN_10302280(param_1,"SETUP_CLIENT_HELLO send failed!");
      }
      else {
        thunk_FUN_10302280(param_1,"SETUP_CLIENT_HELLO send succeeded");
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee60c0; body size 242 bytes.
#line 1 "ENTRY_10ee60c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee60c0(int param_1)

{
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113bcbd0(auStack_58c,&uStack_590,0));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"COMMIT_SETTINGS write failed!");
    thunk_FUN_1148ac28();
    return;
  }
  cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"COMMIT_SETTINGS send failed!");
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10302280(param_1,"COMMIT_SETTINGS send succeeded");
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee61f0; body size 224 bytes.
#line 1 "ENTRY_10ee61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee61f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined1 *puVar2;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113bcc60(auStack_58c,&uStack_590,puVar2,0));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"ECHO write failed!");
  }
  else {
    cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
    if (cVar1 == '\0') {
      thunk_FUN_10302280(param_1,"ECHO send failed!");
    }
    else {
      thunk_FUN_10302280(param_1,"ECHO send succeeded");
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6310; body size 242 bytes.
#line 1 "ENTRY_10ee6310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee6310(int param_1)

{
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113bcd70(auStack_58c,&uStack_590,0));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"GET_PSK write failed!");
    thunk_FUN_1148ac28();
    return;
  }
  cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"GET_PSK send failed!");
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10302280(param_1,"GET_PSK send succeeded");
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6440; body size 240 bytes.
#line 1 "ENTRY_10ee6440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee6440(int param_1)

{
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113bcdf0(auStack_58c,&uStack_590));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"GET_SCAN_LIST write failed!");
    thunk_FUN_1148ac28();
    return;
  }
  cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"GET_SCAN_LIST send failed!");
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10302280(param_1,"GET_SCAN_LIST send succeeded");
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6570; body size 247 bytes.
#line 1 "ENTRY_10ee6570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee6570(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  iVar1 = (int)(param_1 + 4);
  cVar2 = (char)(thunk_FUN_113bce30(auStack_58c,&uStack_590));
  if (cVar2 == '\0') {
    thunk_FUN_10302280(iVar1,"KEEP_ALIVE write failed!");
    thunk_FUN_1148ac28();
    return;
  }
  cVar2 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
  if (cVar2 == '\0') {
    thunk_FUN_10302280(iVar1,"KEEP_ALIVE send failed!");
    thunk_FUN_1148ac28();
    return;
  }
  *(undefined1 *)(param_1 + 0xa4) = 1;
  thunk_FUN_10302280(iVar1,"KEEP_ALIVE send succeeded");
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee66b0; body size 262 bytes.
#line 1 "ENTRY_10ee66b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee66b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    param_1 = (int)(param_1 + 4);
    cVar1 = (char)(thunk_FUN_113bd290(auStack_58c,&uStack_590,param_2,param_3,param_4,param_5,param_6,
                               param_7,param_8,param_9,param_10,param_11));
    if (cVar1 == '\0') {
      thunk_FUN_10302280(param_1,"SET_NET_SETTINGS write failed.");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar1 == '\0') {
        thunk_FUN_10302280(param_1,"SET_NET_SETTINGS send failed!");
      }
      else {
        thunk_FUN_10302280(param_1,"SET_NET_SETTINGS send succeeded");
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6a40; body size 209 bytes.
#line 1 "ENTRY_10ee6a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee6a40(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113bd6c0(auStack_58c,&uStack_590,param_2));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"SETUP_CANCEL write failed!");
  }
  else {
    cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
    if (cVar1 == '\0') {
      thunk_FUN_10302280(param_1,"SETUP_CANCEL send failed!");
    }
    else {
      thunk_FUN_10302280(param_1,"SETUP_CANCEL send succeeded");
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6b50; body size 211 bytes.
#line 1 "ENTRY_10ee6b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee6b50(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113bd910(auStack_58c,&uStack_590,param_2,0));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"SETUP_CONTINUE write failed");
  }
  else {
    cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
    if (cVar1 == '\0') {
      thunk_FUN_10302280(param_1,"SETUP_CONTINUE send failed!");
    }
    else {
      thunk_FUN_10302280(param_1,"SETUP_CONTINUE send succeeded");
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6c60; body size 187 bytes.
#line 1 "ENTRY_10ee6c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee6c60(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    if (*(int *)(param_1 + 0x90) < 1) {
      iVar2 = (int)(60000);
    }
    else {
      iVar2 = (int)(*(int *)(param_1 + 0x90) * 1000);
    }
    cVar1 = (char)(func_0x10014c4a(auStack_58c,&uStack_590,1,iVar2));
    if (cVar1 == '\0') {
      pcVar3 = (char *)("SETUP_REAUTHORIZE write failed!");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar1 != '\0') {
        thunk_FUN_1148ac28();
        return;
      }
      pcVar3 = (char *)("SETUP_REAUTHORIZE send failed!");
    }
    thunk_FUN_10302280(param_1 + 4,pcVar3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6d50; body size 240 bytes.
#line 1 "ENTRY_10ee6d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee6d50(int param_1)

{
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113be100(auStack_58c,&uStack_590));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"START_ISLAND write failed!");
    thunk_FUN_1148ac28();
    return;
  }
  cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"START_ISLAND send failed!");
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10302280(param_1,"START_ISLAND send succeeded");
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6e80; body size 240 bytes.
#line 1 "ENTRY_10ee6e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee6e80(int param_1)

{
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113be140(auStack_58c,&uStack_590));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"START_OPEN_AP write failed!");
    thunk_FUN_1148ac28();
    return;
  }
  cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"START_OPEN_AP send failed!");
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10302280(param_1,"START_OPEN_AP send succeeded");
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee6fb0; body size 217 bytes.
#line 1 "ENTRY_10ee6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee6fb0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  if (*(int *)(param_1 + 0x84) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uStack_590 = (undefined4)(0x586);
  param_1 = (int)(param_1 + 4);
  cVar1 = (char)(thunk_FUN_113be1c0(auStack_58c,&uStack_590,param_2,param_3));
  if (cVar1 == '\0') {
    thunk_FUN_10302280(param_1,"UPGRADE write failed!");
  }
  else {
    cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
    if (cVar1 == '\0') {
      thunk_FUN_10302280(param_1,"UPGRADE send failed!");
    }
    else {
      thunk_FUN_10302280(param_1,"UPGRADE send succeeded");
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee7fb0; body size 6 bytes.
#line 1 "ENTRY_10ee7fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee7fb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10ee7fc0; body size 6 bytes.
#line 1 "ENTRY_10ee7fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee7fc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10ee8730; body size 36 bytes.
#line 1 "ENTRY_10ee8730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ee8730(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10ee18e0(puVar1,param_2);
  return;
}


// Reference entry 10ee8940; body size 28 bytes.
#line 1 "ENTRY_10ee8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee8940(undefined4 *param_1)

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


// Reference entry 10ee8970; body size 11 bytes.
#line 1 "ENTRY_10ee8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee8970(int param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}


// Reference entry 10ee8ab0; body size 5 bytes.
#line 1 "ENTRY_10ee8ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ee8ab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ee8df0; body size 372 bytes.
#line 1 "ENTRY_10ee8df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee8df0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined1 auStack_5cc [32];
  undefined1 auStack_5ac [32];
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_5d4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(*(int *)(param_1 + 0xd4) + 8) != 0)) {
    iVar3 = (int)(0x20);
    if (*(int *)(param_1 + 0xc4) == 0) {
      iVar3 = (int)(0);
    }
    else {
      thunk_FUN_1029ae60(auStack_5cc,0x20);
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      if (iVar3 != 0) {
        thunk_FUN_111bcfc0(auStack_5cc,iVar3);
      }
      uVar2 = (undefined4)(0);
      cVar1 = (char)(thunk_FUN_111bce60());
      uStack_5d4 = (undefined4)(0x20);
      if (cVar1 != '\0') {
        uVar2 = (undefined4)(0x40);
      }
      cVar1 = (char)(thunk_FUN_111bcfe0(auStack_5ac,&uStack_5d4));
      if (cVar1 == '\0') {
        pcVar4 = (char *)("Unable to sign SETUP_CLIENT_HELLO handshake signature");
      }
      else {
        uStack_5d0 = (undefined4)(0x586);
        cVar1 = (char)(thunk_FUN_113bd750(auStack_58c,&uStack_5d0,0x2a,"90.0-77070",uVar2,auStack_5ac,
                                   uStack_5d4,0));
        if (cVar1 == '\0') {
          pcVar4 = (char *)("SETUP_CLIENT_HELLO write failed!");
        }
        else {
          cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_5d0));
          if (cVar1 != '\0') {
            thunk_FUN_10302280(param_1 + 4,"SETUP_CLIENT_HELLO send succeeded");
            thunk_FUN_1148ac28();
            return;
          }
          pcVar4 = (char *)("SETUP_CLIENT_HELLO send failed!");
        }
      }
      thunk_FUN_10302280(param_1 + 4,pcVar4);
    }
  }
  thunk_FUN_10302280(param_1 + 4,"Send Dtls client hello message failed.");
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee8fd0; body size 220 bytes.
#line 1 "ENTRY_10ee8fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee8fd0(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  iVar1 = (int)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    cVar2 = (char)(thunk_FUN_113bcbd0(auStack_58c,&uStack_590,0));
    if (cVar2 == '\0') {
      pcVar3 = (char *)("COMMIT_SETTINGS write failed!");
    }
    else {
      cVar2 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar2 != '\0') {
        thunk_FUN_10302280(iVar1,"COMMIT_SETTINGS send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar3 = (char *)("COMMIT_SETTINGS send failed!");
    }
    thunk_FUN_10302280(iVar1,pcVar3);
  }
  thunk_FUN_10302280(iVar1,"send COMMIT_SETTINGS failed!");
  thunk_FUN_10ee70c0();
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee90f0; body size 230 bytes.
#line 1 "ENTRY_10ee90f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee90f0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  iVar1 = (int)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x3574) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x3574));
    }
    cVar2 = (char)(thunk_FUN_113bcc60(auStack_58c,&uStack_590,puVar3,0));
    if (cVar2 == '\0') {
      pcVar4 = (char *)("ECHO write failed!");
    }
    else {
      cVar2 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar2 != '\0') {
        thunk_FUN_10302280(iVar1,"ECHO send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar4 = (char *)("ECHO send failed!");
    }
    thunk_FUN_10302280(iVar1,pcVar4);
  }
  thunk_FUN_10302280(iVar1,"send ECHO request failed!");
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee9210; body size 199 bytes.
#line 1 "ENTRY_10ee9210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee9210(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    cVar1 = (char)(thunk_FUN_113bcd70(auStack_58c,&uStack_590,0));
    if (cVar1 == '\0') {
      pcVar2 = (char *)("GET_PSK write failed!");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar1 != '\0') {
        thunk_FUN_10302280(param_1 + 4,"GET_PSK send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar2 = (char *)("GET_PSK send failed!");
    }
    thunk_FUN_10302280(param_1 + 4,pcVar2);
  }
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee9310; body size 229 bytes.
#line 1 "ENTRY_10ee9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee9310(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  memset((void *)(param_1 + 0x194),0,0xff);
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    cVar1 = (char)(thunk_FUN_113bcdf0(auStack_58c,&uStack_590));
    if (cVar1 == '\0') {
      pcVar2 = (char *)("GET_SCAN_LIST write failed!");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar1 != '\0') {
        thunk_FUN_10302280(param_1 + 4,"GET_SCAN_LIST send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar2 = (char *)("GET_SCAN_LIST send failed!");
    }
    thunk_FUN_10302280(param_1 + 4,pcVar2);
  }
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ee9f30; body size 219 bytes.
#line 1 "ENTRY_10ee9f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ee9f30(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    cVar1 = (char)(thunk_FUN_113bd6c0(auStack_58c,&uStack_590,*(undefined4 *)(param_1 + 0x3580)));
    if (cVar1 == '\0') {
      pcVar2 = (char *)("SETUP_CANCEL write failed!");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar1 != '\0') {
        thunk_FUN_10302280(param_1 + 4,"SETUP_CANCEL send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar2 = (char *)("SETUP_CANCEL send failed!");
    }
    thunk_FUN_10302280(param_1 + 4,pcVar2);
  }
  thunk_FUN_10ee3c70(1000,1,7);
  if (*(char *)(param_1 + 0x358d) != '\0') {
    thunk_FUN_10ee3510();
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10eea050; body size 213 bytes.
#line 1 "ENTRY_10eea050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eea050(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_594);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uStack_590 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_590 + 1)) << 8 | (uint)(*(undefined1 *)(param_1 + 0x357d))));
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_594 = (undefined4)(0x586);
    cVar1 = (char)(thunk_FUN_113bd910(auStack_58c,&uStack_594,uStack_590,0));
    if (cVar1 == '\0') {
      pcVar2 = (char *)("SETUP_CONTINUE write failed");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_594));
      if (cVar1 != '\0') {
        thunk_FUN_10302280(param_1 + 4,"SETUP_CONTINUE send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar2 = (char *)("SETUP_CONTINUE send failed!");
    }
    thunk_FUN_10302280(param_1 + 4,pcVar2);
  }
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10eea160; body size 211 bytes.
#line 1 "ENTRY_10eea160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eea160(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  iVar1 = (int)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    cVar2 = (char)(thunk_FUN_113be100(auStack_58c,&uStack_590));
    if (cVar2 == '\0') {
      pcVar3 = (char *)("START_ISLAND write failed!");
    }
    else {
      cVar2 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar2 != '\0') {
        thunk_FUN_10302280(iVar1,"START_ISLAND send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar3 = (char *)("START_ISLAND send failed!");
    }
    thunk_FUN_10302280(iVar1,pcVar3);
  }
  thunk_FUN_10302280(iVar1,"send START_ISLAND failed!");
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10eea270; body size 211 bytes.
#line 1 "ENTRY_10eea270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eea270(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  iVar1 = (int)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    cVar2 = (char)(thunk_FUN_113be140(auStack_58c,&uStack_590));
    if (cVar2 == '\0') {
      pcVar3 = (char *)("START_OPEN_AP write failed!");
    }
    else {
      cVar2 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar2 != '\0') {
        thunk_FUN_10302280(iVar1,"START_OPEN_AP send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar3 = (char *)("START_OPEN_AP send failed!");
    }
    thunk_FUN_10302280(iVar1,pcVar3);
  }
  thunk_FUN_10302280(iVar1,"send START_OPEN_AP failed!");
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10eea380; body size 220 bytes.
#line 1 "ENTRY_10eea380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eea380(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x3588) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x3588));
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    uStack_590 = (undefined4)(0x586);
    cVar1 = (char)(thunk_FUN_113be1c0(auStack_58c,&uStack_590,puVar2,*(undefined4 *)(param_1 + 0x3584)));
    if (cVar1 == '\0') {
      pcVar3 = (char *)("UPGRADE write failed!");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar1 != '\0') {
        thunk_FUN_10302280(param_1 + 4,"UPGRADE send succeeded");
        thunk_FUN_1148ac28();
        return;
      }
      pcVar3 = (char *)("UPGRADE send failed!");
    }
    thunk_FUN_10302280(param_1 + 4,pcVar3);
  }
  thunk_FUN_10ee3c70(1000,1,7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10eea4a0; body size 167 bytes.
#line 1 "ENTRY_10eea4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eea4a0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uStack_590;
  undefined1 auStack_58c [1416];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_590);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if ((*(int *)(param_1 + 0xb8) == 2) && (*(int *)(param_1 + 0x84) != 0)) {
    uStack_590 = (undefined4)(0x586);
    cVar1 = (char)(thunk_FUN_113bce30(auStack_58c,&uStack_590));
    if (cVar1 == '\0') {
      pcVar2 = (char *)("KEEP_ALIVE write failed!");
    }
    else {
      cVar1 = (char)(thunk_FUN_111beca0(auStack_58c,uStack_590));
      if (cVar1 == '\0') {
        pcVar2 = (char *)("KEEP_ALIVE send failed!");
      }
      else {
        *(undefined1 *)(param_1 + 0xa4) = 1;
        pcVar2 = (char *)("KEEP_ALIVE send succeeded");
      }
    }
    thunk_FUN_10302280(param_1 + 4,pcVar2);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10eea570; body size 66 bytes.
#line 1 "ENTRY_10eea570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eea570(int param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(int *)(param_1 + 0xbc) = param_2;
  *(undefined4 *)(param_1 + 0xc0) = param_3;
  if (((param_2 != 1) && (param_2 != 2)) && (*(int *)(param_1 + 0xb8) == 0)) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    thunk_FUN_10ee3c70(1000,1,7);
  }
  return;
}


// Reference entry 10eeb310; body size 12 bytes.
#line 1 "ENTRY_10eeb310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeb310(void)

{
  thunk_FUN_10ee7180();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10eeb4d0; body size 130 bytes.
#line 1 "ENTRY_10eeb4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10eeb4d0(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10eeb580; body size 130 bytes.
#line 1 "ENTRY_10eeb580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10eeb580(int *param_2,undefined4 param_3)
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
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1]);
}


// Reference entry 10eeb630; body size 5 bytes.
#line 1 "ENTRY_10eeb630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeb630(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eeb640; body size 5 bytes.
#line 1 "ENTRY_10eeb640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeb640(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eeb6d0; body size 70 bytes.
#line 1 "ENTRY_10eeb6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10eeb6d0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eeb770; body size 10 bytes.
#line 1 "ENTRY_10eeb770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eeb770(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10eeb780; body size 10 bytes.
#line 1 "ENTRY_10eeb780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eeb780(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10eeb810; body size 10 bytes.
#line 1 "ENTRY_10eeb810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eeb810(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10eeb820; body size 12 bytes.
#line 1 "ENTRY_10eeb820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eeb820(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10eebf30; body size 8 bytes.
#line 1 "ENTRY_10eebf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eebf30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10eebf40; body size 8 bytes.
#line 1 "ENTRY_10eebf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eebf40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10eebf50; body size 4 bytes.
#line 1 "ENTRY_10eebf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eebf50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eebf60; body size 4 bytes.
#line 1 "ENTRY_10eebf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eebf60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eec230; body size 8 bytes.
#line 1 "ENTRY_10eec230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eec230(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10eec240; body size 8 bytes.
#line 1 "ENTRY_10eec240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eec240(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10eec250; body size 4 bytes.
#line 1 "ENTRY_10eec250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eec250(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10eec260; body size 4 bytes.
#line 1 "ENTRY_10eec260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eec260(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10eec270; body size 7 bytes.
#line 1 "ENTRY_10eec270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eec270(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10eec280; body size 7 bytes.
#line 1 "ENTRY_10eec280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10eec280(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10eec290; body size 26 bytes.
#line 1 "ENTRY_10eec290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eec290(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10eec2b0; body size 26 bytes.
#line 1 "ENTRY_10eec2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eec2b0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10eec2d0; body size 10 bytes.
#line 1 "ENTRY_10eec2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eec2d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10eec2e0; body size 10 bytes.
#line 1 "ENTRY_10eec2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eec2e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10eece60; body size 16 bytes.
#line 1 "ENTRY_10eece60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eece60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eece80; body size 16 bytes.
#line 1 "ENTRY_10eece80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eece80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eecea0; body size 4 bytes.
#line 1 "ENTRY_10eecea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10eecef0; body size 4 bytes.
#line 1 "ENTRY_10eecef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecef0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x58));
}


// Reference entry 10eecf00; body size 4 bytes.
#line 1 "ENTRY_10eecf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x40));
}


// Reference entry 10eecf10; body size 4 bytes.
#line 1 "ENTRY_10eecf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10eecf40; body size 4 bytes.
#line 1 "ENTRY_10eecf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10eecf40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x28);
}


// Reference entry 10eecf50; body size 4 bytes.
#line 1 "ENTRY_10eecf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eecf60; body size 4 bytes.
#line 1 "ENTRY_10eecf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10eecf70; body size 4 bytes.
#line 1 "ENTRY_10eecf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecf70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x14));
}


// Reference entry 10eecfa0; body size 8 bytes.
#line 1 "ENTRY_10eecfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10eecfa0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*(undefined2 *)(param_1 + 0x716));
}


// Reference entry 10eecfb0; body size 23 bytes.
#line 1 "ENTRY_10eecfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10eecfb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 0x6d4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr *)(param_2);
}


// Reference entry 10eecfd0; body size 4 bytes.
#line 1 "ENTRY_10eecfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eecfd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x18));
}


// Reference entry 10eed610; body size 3 bytes.
#line 1 "ENTRY_10eed610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eed610(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10eed6a0; body size 28 bytes.
#line 1 "ENTRY_10eed6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eed6a0(undefined4 *param_1)

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


// Reference entry 10eed6f0; body size 22 bytes.
#line 1 "ENTRY_10eed6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eed6f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eed810; body size 22 bytes.
#line 1 "ENTRY_10eed810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eed810(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eed860; body size 13 bytes.
#line 1 "ENTRY_10eed860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eed860(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eed8e0; body size 5 bytes.
#line 1 "ENTRY_10eed8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eed8e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eed8f0; body size 37 bytes.
#line 1 "ENTRY_10eed8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eed8f0(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10eeda60; body size 5 bytes.
#line 1 "ENTRY_10eeda60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeda60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eedaa0; body size 15 bytes.
#line 1 "ENTRY_10eedaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eedaa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eedac0; body size 5 bytes.
#line 1 "ENTRY_10eedac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eedac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eedad0; body size 5 bytes.
#line 1 "ENTRY_10eedad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eedad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eedae0; body size 18 bytes.
#line 1 "ENTRY_10eedae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eedae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eeddd0; body size 3 bytes.
#line 1 "ENTRY_10eeddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eeddd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eedde0; body size 3 bytes.
#line 1 "ENTRY_10eedde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eedde0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eeddf0; body size 3 bytes.
#line 1 "ENTRY_10eeddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eeddf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eede00; body size 3 bytes.
#line 1 "ENTRY_10eede00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eede00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eede10; body size 3 bytes.
#line 1 "ENTRY_10eede10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eede10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eee0b0; body size 79 bytes.
#line 1 "ENTRY_10eee0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eee0b0(int param_2)
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


// Reference entry 10eee120; body size 11 bytes.
#line 1 "ENTRY_10eee120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eee120(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eee130; body size 83 bytes.
#line 1 "ENTRY_10eee130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eee130(int *param_2)
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


// Reference entry 10eee3e0; body size 60 bytes.
#line 1 "ENTRY_10eee3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10eee3e0(int param_1,int param_2)

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


// Reference entry 10eeea40; body size 3 bytes.
#line 1 "ENTRY_10eeea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10eeea40(undefined1 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*param_1);
}


// Reference entry 10eeec40; body size 6 bytes.
#line 1 "ENTRY_10eeec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeec40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10eeec50; body size 6 bytes.
#line 1 "ENTRY_10eeec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeec50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10eeec70; body size 4 bytes.
#line 1 "ENTRY_10eeec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10eeec70(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 10eeed00; body size 22 bytes.
#line 1 "ENTRY_10eeed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eeed00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eeee20; body size 22 bytes.
#line 1 "ENTRY_10eeee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eeee20(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eeee70; body size 13 bytes.
#line 1 "ENTRY_10eeee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10eeee70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10eeeef0; body size 5 bytes.
#line 1 "ENTRY_10eeeef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeeef0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eeef00; body size 37 bytes.
#line 1 "ENTRY_10eeef00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eeef00(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10eef070; body size 5 bytes.
#line 1 "ENTRY_10eef070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eef070(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eef0b0; body size 15 bytes.
#line 1 "ENTRY_10eef0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eef0b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eef0d0; body size 5 bytes.
#line 1 "ENTRY_10eef0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eef0d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eef0e0; body size 5 bytes.
#line 1 "ENTRY_10eef0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10eef0e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eef0f0; body size 18 bytes.
#line 1 "ENTRY_10eef0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10eef0f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10eef460; body size 3 bytes.
#line 1 "ENTRY_10eef460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef460(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eef470; body size 3 bytes.
#line 1 "ENTRY_10eef470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef470(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eef480; body size 3 bytes.
#line 1 "ENTRY_10eef480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef480(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eef490; body size 3 bytes.
#line 1 "ENTRY_10eef490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef490(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eef4a0; body size 3 bytes.
#line 1 "ENTRY_10eef4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef4a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10eef740; body size 79 bytes.
#line 1 "ENTRY_10eef740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eef740(int param_2)
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


// Reference entry 10eef7b0; body size 11 bytes.
#line 1 "ENTRY_10eef7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10eef7b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10eef7c0; body size 83 bytes.
#line 1 "ENTRY_10eef7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10eef7c0(int *param_2)
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


// Reference entry 10ef0040; body size 60 bytes.
#line 1 "ENTRY_10ef0040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef0040(int param_1,int param_2)

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


// Reference entry 10ef09e0; body size 3 bytes.
#line 1 "ENTRY_10ef09e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ef09e0(undefined1 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*param_1);
}


// Reference entry 10ef0b80; body size 22 bytes.
#line 1 "ENTRY_10ef0b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef0b80(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  thunk_FUN_10e0f790(param_2,param_1,0);
  thunk_FUN_10ef64d0(param_2,param_1,uVar1);
  return;
}


// Reference entry 10ef10d0; body size 6 bytes.
#line 1 "ENTRY_10ef10d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef10d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10ef10e0; body size 6 bytes.
#line 1 "ENTRY_10ef10e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef10e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10ef1170; body size 4 bytes.
#line 1 "ENTRY_10ef1170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef1170(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return;
}


// Reference entry 10ef1610; body size 189 bytes.
#line 1 "ENTRY_10ef1610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ef1610(undefined4 *param_1)

{
  thunk_FUN_1124a160(0);
  param_1[0x1843] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1844] = 0;
  param_1[0x1845] = 0;
  param_1[0x1846] = 0;
  *(undefined2 *)(param_1 + 0x1847) = 1;
  *(undefined1 *)((int)param_1 + 0x611e) = 0;
  param_1[0x1848] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSHdmiGetInfoRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RSHdmiGetInfoRequest;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  param_1[0x184c] = 0;
  param_1[0x184d] = 0;
  param_1[0x184e] = 0;
  param_1[0x184f] = 0;
  param_1[0x1850] = 0;
  *(undefined1 *)(param_1 + 0x1851) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef1900; body size 11 bytes.
#line 1 "ENTRY_10ef1900"

/* WARNING: Removing unreachable block_10ef1900 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef1900(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114f5ce0);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
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


// Reference entry 10ef1cd0; body size 18 bytes.
#line 1 "ENTRY_10ef1cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef1cd0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHdmiGetInfo);
  param_1[2] = (uint)&ghidra_vftable_SCOpHdmiGetInfo;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11761430);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
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
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&ghidra_vftable_SCIObj;
  uStack_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  uStack_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  uStack_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ef1cf0; body size 4 bytes.
#line 1 "ENTRY_10ef1cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef1cf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ef2230; body size 28 bytes.
#line 1 "ENTRY_10ef2230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ef2230(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6154));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10ef2260; body size 28 bytes.
#line 1 "ENTRY_10ef2260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ef2260(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6138));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10ef22d0; body size 7 bytes.
#line 1 "ENTRY_10ef22d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ef22d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x6178));
}


// Reference entry 10ef22e0; body size 10 bytes.
#line 1 "ENTRY_10ef22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef22e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x6178))));
}


// Reference entry 10ef2310; body size 17 bytes.
#line 1 "ENTRY_10ef2310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10ef2310(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6134) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6134));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10ef3af0; body size 43 bytes.
#line 1 "ENTRY_10ef3af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef3af0(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  func_0x100632cd(param_1,param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 10ef3cc0; body size 30 bytes.
#line 1 "ENTRY_10ef3cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef3cc0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_2);
  }
  func_0x100632cd(param_1,puVar1,param_2[4]);
  return;
}


// Reference entry 10ef41c0; body size 50 bytes.
#line 1 "ENTRY_10ef41c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ef41c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,param_4));
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 1,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 10ef4200; body size 52 bytes.
#line 1 "ENTRY_10ef4200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ef4200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,param_2,param_3,param_4,param_5));
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 1,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 10ef4270; body size 22 bytes.
#line 1 "ENTRY_10ef4270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef4270(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef4360; body size 22 bytes.
#line 1 "ENTRY_10ef4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef4360(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef4380; body size 25 bytes.
#line 1 "ENTRY_10ef4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ef4380(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef43a0; body size 3 bytes.
#line 1 "ENTRY_10ef43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef43a0(void)

{
  return;
}


// Reference entry 10ef43b0; body size 3 bytes.
#line 1 "ENTRY_10ef43b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef43b0(void)

{
  return;
}


// Reference entry 10ef43c0; body size 13 bytes.
#line 1 "ENTRY_10ef43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef43c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ef43d0; body size 33 bytes.
#line 1 "ENTRY_10ef43d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ef43d0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10ef4400; body size 33 bytes.
#line 1 "ENTRY_10ef4400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ef4400(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10ef4430; body size 18 bytes.
#line 1 "ENTRY_10ef4430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef4430(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10ef4450; body size 18 bytes.
#line 1 "ENTRY_10ef4450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef4450(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10ef47e0; body size 30 bytes.
#line 1 "ENTRY_10ef47e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef47e0(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10ef4810; body size 30 bytes.
#line 1 "ENTRY_10ef4810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4810(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10ef4840; body size 30 bytes.
#line 1 "ENTRY_10ef4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4840(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10ef4870; body size 30 bytes.
#line 1 "ENTRY_10ef4870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4870(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != (int *)(param_2)) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while (param_1 != (int *)(param_2));
  }
  return;
}


// Reference entry 10ef48a0; body size 7 bytes.
#line 1 "ENTRY_10ef48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef48b0; body size 7 bytes.
#line 1 "ENTRY_10ef48b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef48c0; body size 7 bytes.
#line 1 "ENTRY_10ef48c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef48d0; body size 7 bytes.
#line 1 "ENTRY_10ef48d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef48e0; body size 7 bytes.
#line 1 "ENTRY_10ef48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef48f0; body size 7 bytes.
#line 1 "ENTRY_10ef48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef48f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef4900; body size 5 bytes.
#line 1 "ENTRY_10ef4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4910; body size 37 bytes.
#line 1 "ENTRY_10ef4910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4910(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10ef4940; body size 33 bytes.
#line 1 "ENTRY_10ef4940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ef4940(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10ef4970; body size 33 bytes.
#line 1 "ENTRY_10ef4970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10ef4970(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10ef49a0; body size 5 bytes.
#line 1 "ENTRY_10ef49a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef49a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef49b0; body size 5 bytes.
#line 1 "ENTRY_10ef49b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef49b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef49c0; body size 13 bytes.
#line 1 "ENTRY_10ef49c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef49c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ef49d0; body size 13 bytes.
#line 1 "ENTRY_10ef49d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef49d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ef4b70; body size 38 bytes.
#line 1 "ENTRY_10ef4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ef4b70(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ef4ba0; body size 5 bytes.
#line 1 "ENTRY_10ef4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4ba0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4bb0; body size 5 bytes.
#line 1 "ENTRY_10ef4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4bb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4bc0; body size 36 bytes.
#line 1 "ENTRY_10ef4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ef4bc0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ef4bf0; body size 36 bytes.
#line 1 "ENTRY_10ef4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ef4bf0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ef4c20; body size 36 bytes.
#line 1 "ENTRY_10ef4c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ef4c20(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ef4c50; body size 5 bytes.
#line 1 "ENTRY_10ef4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4c50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4c60; body size 5 bytes.
#line 1 "ENTRY_10ef4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4c60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4c70; body size 5 bytes.
#line 1 "ENTRY_10ef4c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4c70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4c80; body size 13 bytes.
#line 1 "ENTRY_10ef4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4c80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10ef4c90; body size 13 bytes.
#line 1 "ENTRY_10ef4c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4c90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10ef4cd0; body size 3 bytes.
#line 1 "ENTRY_10ef4cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4cd0(void)

{
  return;
}


// Reference entry 10ef4ce0; body size 3 bytes.
#line 1 "ENTRY_10ef4ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4ce0(void)

{
  return;
}


// Reference entry 10ef4cf0; body size 36 bytes.
#line 1 "ENTRY_10ef4cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef4cf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10ef4470(puVar1,param_2);
  return;
}


// Reference entry 10ef4d20; body size 36 bytes.
#line 1 "ENTRY_10ef4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef4d20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10ef4620(puVar1,param_2);
  return;
}


// Reference entry 10ef4d50; body size 15 bytes.
#line 1 "ENTRY_10ef4d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4d50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ef4d70; body size 36 bytes.
#line 1 "ENTRY_10ef4d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef4d70(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if (param_2 != (int *)(param_3)) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = (int *)(param_2 + 1);
    } while (param_2 != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef4dd0; body size 5 bytes.
#line 1 "ENTRY_10ef4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4dd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4de0; body size 5 bytes.
#line 1 "ENTRY_10ef4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4de0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4df0; body size 5 bytes.
#line 1 "ENTRY_10ef4df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4df0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4e00; body size 5 bytes.
#line 1 "ENTRY_10ef4e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4e10; body size 5 bytes.
#line 1 "ENTRY_10ef4e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4e20; body size 5 bytes.
#line 1 "ENTRY_10ef4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4e30; body size 5 bytes.
#line 1 "ENTRY_10ef4e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4e40; body size 5 bytes.
#line 1 "ENTRY_10ef4e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4e50; body size 5 bytes.
#line 1 "ENTRY_10ef4e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef4e50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef4e60; body size 18 bytes.
#line 1 "ENTRY_10ef4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef4e60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef4f00; body size 11 bytes.
#line 1 "ENTRY_10ef4f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef4f00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef4f10; body size 11 bytes.
#line 1 "ENTRY_10ef4f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef4f10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef4f20; body size 11 bytes.
#line 1 "ENTRY_10ef4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef4f20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef4f30; body size 11 bytes.
#line 1 "ENTRY_10ef4f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef4f30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef50b0; body size 58 bytes.
#line 1 "ENTRY_10ef50b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef50b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"ExtractArchiveOp");
  param_1[5] = (uint)&ghidra_vftable_SwfThreadOp;
  param_1[6] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_ExtractArchiveOp);
  param_1[5] = (uint)&ghidra_vftable_ExtractArchiveOp;
  *(undefined1 *)(param_1 + 7) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef5100; body size 14 bytes.
#line 1 "ENTRY_10ef5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ef5100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfThreadOp);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef5140; body size 16 bytes.
#line 1 "ENTRY_10ef5140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef5140(undefined4 *param_1)

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


// Reference entry 10ef5310; body size 18 bytes.
#line 1 "ENTRY_10ef5310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef5310(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_ExtractArchiveOp);
  param_1[5] = (uint)&ghidra_vftable_RITQHandler;
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117c1080);
  pvStack_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&pvStack_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObj);
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[2] != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)param_1[2]);
  }
  thunk_FUN_111a74d0("FlashDebugObjects",10,"destroy instance 0x%p of class %s",param_1,puVar4,uVar2
                    );
  thunk_FUN_111a2140();
  iVar1 = (int)(param_1[2]);
  uStack_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  ExceptionList = (void *)(pvStack_10);
  return;
}


// Reference entry 10ef5380; body size 14 bytes.
#line 1 "ENTRY_10ef5380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ef5380(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10ef53a0; body size 14 bytes.
#line 1 "ENTRY_10ef53a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ef53a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10ef5520; body size 3 bytes.
#line 1 "ENTRY_10ef5520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5520(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef5530; body size 3 bytes.
#line 1 "ENTRY_10ef5530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5530(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef5540; body size 3 bytes.
#line 1 "ENTRY_10ef5540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5540(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef5550; body size 3 bytes.
#line 1 "ENTRY_10ef5550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5550(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef5560; body size 6 bytes.
#line 1 "ENTRY_10ef5560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ef5560(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10ef5570; body size 6 bytes.
#line 1 "ENTRY_10ef5570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ef5570(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10ef5580; body size 16 bytes.
#line 1 "ENTRY_10ef5580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef5580(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 4);
  return;
}


// Reference entry 10ef55a0; body size 16 bytes.
#line 1 "ENTRY_10ef55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef55a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 4);
  return;
}


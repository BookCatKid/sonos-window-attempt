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
extern int FUN_1148c94c(...);
extern int _CxxThrowException(...);
extern int _Xlength_error(...);
extern int __std_exception_destroy(...);
extern int __stdio_common_vsprintf_p(...);
extern int _callnewh(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int hash(...);
extern int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int strchr(...);
extern int thunk_FUN_101170a0(...);
extern int thunk_FUN_10117950(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1011f870(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a3180(...);
extern int thunk_FUN_101a31e0(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101a6f70(...);
extern int thunk_FUN_101a7120(...);
extern int thunk_FUN_101a7f30(...);
extern int thunk_FUN_101a8030(...);
extern int thunk_FUN_101a83f0(...);
extern int thunk_FUN_101a8700(...);
extern int thunk_FUN_101ab4a0(...);
extern int thunk_FUN_101ab700(...);
extern int thunk_FUN_101ae960(...);
extern int thunk_FUN_11069bc0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148c928(...);
extern int tolower(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11d330dc;
extern int Ext_AnacapaLauncherCB_vftable;
extern int Ext_RITQHandler_vftable;
extern int Ext_SCAbilityManager_vftable;
extern int Ext_SCArray_vftable;
extern int Ext_SCHouseholdEventSinkInternal_vftable;
extern int Ext_SCIAbilityDelegateSwigBase_vftable;
extern int Ext_SCIAbilityDelegate_vftable;
extern int Ext_SCIAbilityListener_vftable;
extern int Ext_SCIActionDelegateSwigBase_vftable;
extern int Ext_SCIActionDelegate_vftable;
extern int Ext_SCIActionFactorySwigBase_vftable;
extern int Ext_SCIActionFactory_vftable;
extern int Ext_SCIActionFilterSwigBase_vftable;
extern int Ext_SCIActionFilter_vftable;
extern int Ext_SCIActionSwigBase_vftable;
extern int Ext_SCIAction_vftable;
extern int Ext_SCIAutomationDelegateSwigBase_vftable;
extern int Ext_SCIAutomationDelegate_vftable;
extern int Ext_SCIBTAccessoryDelegateSwigBase_vftable;
extern int Ext_SCIBTAccessoryDelegate_vftable;
extern int Ext_SCIBTClassicConnectionCallbackSwigBase_vftable;
extern int Ext_SCIBTClassicConnectionCallback_vftable;
extern int Ext_SCIBTClassicConnectionProviderSwigBase_vftable;
extern int Ext_SCIBTClassicConnectionProvider_vftable;
extern int Ext_SCIBleDelegateSwigBase_vftable;
extern int Ext_SCIBleDelegate_vftable;
extern int Ext_SCIBlePeripheralDelegateSwigBase_vftable;
extern int Ext_SCIBlePeripheralDelegate_vftable;
extern int Ext_SCIBrowseItemSwigBase_vftable;
extern int Ext_SCIBrowseItem_vftable;
extern int Ext_SCIChirpDelegateSwigBase_vftable;
extern int Ext_SCIChirpDelegate_vftable;
extern int Ext_SCIClipboardDelegateSwigBase_vftable;
extern int Ext_SCIClipboardDelegate_vftable;
extern int Ext_SCICrashReportProviderSwigBase_vftable;
extern int Ext_SCICrashReportProvider_vftable;
extern int Ext_SCICustomSubWizardSwigBase_vftable;
extern int Ext_SCICustomSubWizard_vftable;
extern int Ext_SCIDebug_vftable;
extern int Ext_SCIEnumerable_vftable;
extern int Ext_SCIEventSinkSwigBase_vftable;
extern int Ext_SCIEventSink_vftable;
extern int Ext_SCIExperimentManagerProviderSwigBase_vftable;
extern int Ext_SCIExperimentManagerProvider_vftable;
extern int Ext_SCIGetAboutSonosStringCBSwigBase_vftable;
extern int Ext_SCIGetAboutSonosStringCB_vftable;
extern int Ext_SCIGetSonosPlaylistsCBSwigBase_vftable;
extern int Ext_SCIGetSonosPlaylistsCB_vftable;
extern int Ext_SCIHapticDelegateSwigBase_vftable;
extern int Ext_SCIHapticDelegate_vftable;
extern int Ext_SCIInAppMessagingProviderSwigBase_vftable;
extern int Ext_SCIInAppMessagingProvider_vftable;
extern int Ext_SCIInAppPurchaseManagerProviderSwigBase_vftable;
extern int Ext_SCIInAppPurchaseManagerProvider_vftable;
extern int Ext_SCIInput_vftable;
extern int Ext_SCIIntArray_vftable;
extern int Ext_SCILibrary_vftable;
extern int Ext_SCILifecycleAppProviderSwigBase_vftable;
extern int Ext_SCILifecycleAppProvider_vftable;
extern int Ext_SCILocalMediaCollectionSwigBase_vftable;
extern int Ext_SCILocalMediaCollection_vftable;
extern int Ext_SCILocalMusicBrowseItemInfoSwigBase_vftable;
extern int Ext_SCILocalMusicBrowseItemInfo_vftable;
extern int Ext_SCILocalMusicSearchableDelegateSwigBase_vftable;
extern int Ext_SCILocalMusicSearchableDelegate_vftable;
extern int Ext_SCILoggingProviderSwigBase_vftable;
extern int Ext_SCILoggingProvider_vftable;
extern int Ext_SCIMdnsDelegateSwigBase_vftable;
extern int Ext_SCIMdnsDelegate_vftable;
extern int Ext_SCIMusicServerBrowseDelegateSwigBase_vftable;
extern int Ext_SCIMusicServerBrowseDelegate_vftable;
extern int Ext_SCIMusicServerDelegateSwigBase_vftable;
extern int Ext_SCIMusicServerDelegate_vftable;
extern int Ext_SCINetstartListenerSwigBase_vftable;
extern int Ext_SCINetstartListener_vftable;
extern int Ext_SCINetworkManagementDelegateSwigBase_vftable;
extern int Ext_SCINetworkManagementDelegate_vftable;
extern int Ext_SCINewWizDelegateSwigBase_vftable;
extern int Ext_SCINewWizDelegate_vftable;
extern int Ext_SCINfcDelegateSwigBase_vftable;
extern int Ext_SCINfcDelegate_vftable;
extern int Ext_SCIObjImpl_vftable;
extern int Ext_SCIObj_vftable;
extern int Ext_SCIOpCBSwigBase_vftable;
extern int Ext_SCIOpCB_vftable;
extern int Ext_SCIPlatformDateTimeProvider_vftable;
extern int Ext_SCISavedDataProviderSwigBase_vftable;
extern int Ext_SCISavedDataProvider_vftable;
extern int Ext_SCISecureStoreSwigBase_vftable;
extern int Ext_SCISecureStore_vftable;
extern int Ext_SCISecurityContextSwigBase_vftable;
extern int Ext_SCISecurityContext_vftable;
extern int Ext_SCIServiceAppInteropSwigBase_vftable;
extern int Ext_SCIServiceAppInterop_vftable;
extern int Ext_SCIStackTraceCaptureDelegateSwigBase_vftable;
extern int Ext_SCIStackTraceCaptureDelegate_vftable;
extern int Ext_SCIStringInputBase_vftable;
extern int Ext_SCIStringInputSwigBase_vftable;
extern int Ext_SCIStringInput_vftable;
extern int Ext_SCITrackInfoSwigBase_vftable;
extern int Ext_SCITrackInfo_vftable;
extern int Ext_SCIUINotificationsDelegate_vftable;
extern int Ext_SCIUrbanAirshipDelegateSwigBase_vftable;
extern int Ext_SCIUrbanAirshipDelegate_vftable;
extern int Ext_SCIUrlConnectionSwigBase_vftable;
extern int Ext_SCIUrlConnection_vftable;
extern int Ext_SCIUrlSessionCallbackSwigBase_vftable;
extern int Ext_SCIUrlSessionCallback_vftable;
extern int Ext_SCIUrlSessionProviderSwigBase_vftable;
extern int Ext_SCIUrlSessionProvider_vftable;
extern int Ext_SCIVoiceServiceDelegateSwigBase_vftable;
extern int Ext_SCIVoiceServiceDelegate_vftable;
extern int Ext_SCIVpnDelegateSwigBase_vftable;
extern int Ext_SCIVpnDelegate_vftable;
extern int Ext_SCIWebsocketCallbackSwigBase_vftable;
extern int Ext_SCIWebsocketCallback_vftable;
extern int Ext_SCIWebsocketDelegateSwigBase_vftable;
extern int Ext_SCIWebsocketDelegate_vftable;
extern int Ext_SCIWifiDelegateSwigBase_vftable;
extern int Ext_SCIWifiDelegate_vftable;
extern int Ext_SCIntArray_vftable;
extern int Ext_SCLibAssertionFailureCallback_vftable;
extern int Ext_SCLibCallUIThreadCallback_vftable;
extern int Ext_SCLibCustomSubWizardCallback_vftable;
extern int Ext_SCLibDelegateFactory_vftable;
extern int Ext_SCLibDiagnosticConsoleLogCallback_vftable;
extern int Ext_SCLibDiagnosticExtraInfoCallback_vftable;
extern int Ext_SCLibLogCallback_vftable;
extern int Ext_SCLibPlatformStringCallback_vftable;
extern int Ext_SCLibSonarCallback_vftable;
extern int Ext_SCLibTruncatedStringsCallback_vftable;
extern int Ext_SCLoggingHelper_vftable;
extern int Ext_SwigDirector_SCIAbilityDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIActionDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIActionFactorySwigBase_vftable;
extern int Ext_SwigDirector_SCIActionFilterSwigBase_vftable;
extern int Ext_SwigDirector_SCIActionSwigBase_vftable;
extern int Ext_SwigDirector_SCIAutomationDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIBTAccessoryDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIBTClassicConnectionCallbackSwigBase_vftable;
extern int Ext_SwigDirector_SCIBTClassicConnectionProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCIBleDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIBlePeripheralDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIBrowseItemSwigBase_vftable;
extern int Ext_SwigDirector_SCIChirpDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIClipboardDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCICrashReportProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCICustomSubWizardSwigBase_vftable;
extern int Ext_SwigDirector_SCIEventSinkSwigBase_vftable;
extern int Ext_SwigDirector_SCIExperimentManagerProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCIGetAboutSonosStringCBSwigBase_vftable;
extern int Ext_SwigDirector_SCIGetSonosPlaylistsCBSwigBase_vftable;
extern int Ext_SwigDirector_SCIHapticDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIInAppMessagingProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCIInAppPurchaseManagerProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCILifecycleAppProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCILocalMediaCollectionSwigBase_vftable;
extern int Ext_SwigDirector_SCILocalMusicBrowseItemInfoSwigBase_vftable;
extern int Ext_SwigDirector_SCILocalMusicSearchableDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCILoggingProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCIMdnsDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIMusicServerBrowseDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIMusicServerDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCINetstartListenerSwigBase_vftable;
extern int Ext_SwigDirector_SCINetworkManagementDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCINewWizDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCINfcDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIOpCBSwigBase_vftable;
extern int Ext_SwigDirector_SCIPlatformDateTimeProvider_vftable;
extern int Ext_SwigDirector_SCISavedDataProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCISecureStoreSwigBase_vftable;
extern int Ext_SwigDirector_SCISecurityContextSwigBase_vftable;
extern int Ext_SwigDirector_SCIServiceAppInteropSwigBase_vftable;
extern int Ext_SwigDirector_SCIStackTraceCaptureDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIStringInputSwigBase_vftable;
extern int Ext_SwigDirector_SCITrackInfoSwigBase_vftable;
extern int Ext_SwigDirector_SCIUINotificationsDelegate_vftable;
extern int Ext_SwigDirector_SCIUrbanAirshipDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIUrlConnectionSwigBase_vftable;
extern int Ext_SwigDirector_SCIUrlSessionCallbackSwigBase_vftable;
extern int Ext_SwigDirector_SCIUrlSessionProviderSwigBase_vftable;
extern int Ext_SwigDirector_SCIVoiceServiceDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIVpnDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIVpnDelegate_vftable;
extern int Ext_SwigDirector_SCIWebsocketCallbackSwigBase_vftable;
extern int Ext_SwigDirector_SCIWebsocketDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCIWifiDelegateSwigBase_vftable;
extern int Ext_SwigDirector_SCLibAssertionFailureCallback_vftable;
extern int Ext_SwigDirector_SCLibCallUIThreadCallback_vftable;
extern int Ext_SwigDirector_SCLibCustomSubWizardCallback_vftable;
extern int Ext_SwigDirector_SCLibDelegateFactory_vftable;
extern int Ext_SwigDirector_SCLibDiagnosticConsoleLogCallback_vftable;
extern int Ext_SwigDirector_SCLibDiagnosticExtraInfoCallback_vftable;
extern int Ext_SwigDirector_SCLibLogCallback_vftable;
extern int Ext_SwigDirector_SCLibPlatformStringCallback_vftable;
extern int Ext_SwigDirector_SCLibSonarCallback_vftable;
extern int Ext_SwigDirector_SCLibTruncatedStringsCallback_vftable;
extern int Ext_Swig_DirectorException_vftable;
extern int Ext_Swig_DirectorPureVirtualException_vftable;
extern int Ext_std_bad_alloc_vftable;
extern int Ext_std_exception_vftable;
extern int g_lSCObjCount;
typedef void *E9;
typedef void *WARNING;
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAbilityDelegate { char _pad; SCIAbilityDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAbilityListener { char _pad; SCIAbilityListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionDelegate { char _pad; SCIActionDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIDebug { char _pad; SCIDebug(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEnumerable { char _pad; SCIEnumerable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIIntArray { char _pad; SCIIntArray(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILibrary { char _pad; SCILibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILibraryTests { char _pad; SCILibraryTests(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetworkManagement { char _pad; SCINetworkManagement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpFactory { char _pad; SCIOpFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISystem { char _pad; SCISystem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIZoneGroupMgr { char _pad; SCIZoneGroupMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stub_SCStr { Stub_SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int SCStr(...); int hash(...); int op_eq(...); };
struct Stub_std { Stub_std(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int _Xlength_error(...); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10116690(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101166c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101166d0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101169b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101169d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10116ad0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10116fe0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10117280(uint param_2,undefined4 param_3,void *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10117370(uint param_2,undefined4 param_3,void *param_4,size_t param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10117f00(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118060(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101180c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118150(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118200(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118300(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118330(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118360(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101183c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118450(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118690(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118820(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118850(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101188c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118910(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118940(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118a00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118af0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118b00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118b10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118b20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118b80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118ba0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118f20(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118f50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10118f80(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1011bce0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1011bd00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1011bd20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1011be20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101225c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122620(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122680(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101226b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122700(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122730(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122760(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122790(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101227c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101227f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122820(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122850(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122880(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101228b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101228e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122910(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122940(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122970(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101229a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101229d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122a00(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122a30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122a60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122a90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122ae0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122b10(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122b40(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122b70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122bc0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122bf0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122c20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122c50(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122c80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122cb0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122ce0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122d30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122d60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122d90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122dc0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122df0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122e20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122e50(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122e80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122eb0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122f00(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122f30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122f60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122f90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122fc0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10122ff0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123020(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123050(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123080(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101230b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101230e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123110(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123140(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123170(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101231c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123210(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123260(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123290(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101232c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101232f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123340(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123370(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101233a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101233d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123400(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123430(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123460(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101234b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101234e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123510(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123540(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123570(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101235a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101235d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123600(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123630(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123660(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123690(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101236c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101236f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123720(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123750(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123780(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101237b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101237e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123810(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123840(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123870(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101238a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101238d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123900(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123930(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123960(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123990(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101239c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101239f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123a20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123a50(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123a80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123ad0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123b00(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123b30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123b60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123b90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123bc0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123bf0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123c20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123c50(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123c80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123cb0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123ce0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123d10(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123d40(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123d70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123da0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123dd0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123e00(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123e30(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123e60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123e90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123ec0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123ef0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123f40(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123f90(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123fc0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10123ff0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10124020(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10124050(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101240a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101240d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10124100(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10124150(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101241a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101241d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10124200(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10124230(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10124260(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10124290(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101242c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101242f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10124350(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10124430(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10124df0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10125e40(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10126700(byte param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10129880(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101299a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10129ed0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10129f60(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a170(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a1f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a230(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a3e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a400(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a420(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a430(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a440(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a450(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a460(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1012a470(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1012cc10(char *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146880(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146900(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146910(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146a10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146a20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146a30(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146a50(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146ae0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146b20(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146ba0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146bf0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
            undefined4 param_30,undefined4 param_31,undefined4 param_32,undefined4 param_33,
            undefined4 param_34,undefined4 param_35,undefined4 param_36,undefined4 param_37,
            undefined4 param_38,undefined4 param_39,undefined4 param_40,undefined4 param_41,
            undefined4 param_42,undefined4 param_43,undefined4 param_44,undefined4 param_45,
            undefined4 param_46); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146df0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146e20(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146e40(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146e70(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146ef0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146f10(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146fb0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146fc0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10146fe0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147000(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147050(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147080(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147090(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101470e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147170(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101471a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101471d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147200(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147240(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101472a0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101472c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101472d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147310(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147320(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147350(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101473d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147400(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147470(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147490(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101474a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147500(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147540(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147560(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101475a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101475d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101475e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147610(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147670(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101476a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101476c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101476f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147730(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101477c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101477d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101477e0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147800(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147820(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147830(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147840(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147850(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147860(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10147920(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101489f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101a21e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a22d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a2310(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a2350(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101a2a50(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101a2a70(undefined4 param_2,undefined4 param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101a2ab0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_101a32a0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a4d00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101a6dd0(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101a6df0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101a6e10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a6f30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a6f50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a8a30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a8a60(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101a8e10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101a8e20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_101a9320(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a9380(int *param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101a93a0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101a93c0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_101a9780(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_101a97c0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a99a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a9cf0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101a9d50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101aa000(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101aa010(undefined4 *param_2,void *param_3,void *param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101aa050(undefined4 *param_2,void *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101aa130(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101aa160(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101aa700(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101aa890(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101aa8b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101aa8d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101aa950(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101aaae0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_101ab370(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101ab460(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101ab480(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_101abd50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101ac350(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101ac9b0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101ac9d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101ac9e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101ac9f0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101aca10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101aca20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101aca50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101aca60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101acca0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101accc0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101ad040(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_101ad9e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_101af1b0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af1f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af2c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af320(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af380(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af3e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af440(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af580(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af650(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af6b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af710(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af770(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af7d0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af830(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af890(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af8f0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101af950(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101afa20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101afa80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101afae0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_101afb40(int *param_2); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10116540(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10116560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10116580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101165a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101165c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101165e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101166a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101166b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101166f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10116af0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10116b00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10116cd0(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10116ce0(SCStr *param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 FUN_10116d40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116d50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116d90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116da0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116db0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116dc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116dd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116de0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116df0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116e00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116e10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116e20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116e30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10116e40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116e50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116e60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10116e70(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116ed0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f10(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f30(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10116f50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116f60(void *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116fb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116fc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10116fd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117150(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101171f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10117200(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10117220(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117240(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117260(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117270(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101174c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101174e0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117510(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117520(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117530(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117570(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117580(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117590(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101175a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101175b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117650(undefined4 param_1,SCStr *param_2,SCStr *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117930(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101179d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101179e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101179f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117a80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10117a90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10117aa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10117ab0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_10117d40(uint *param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_10117d60(uint *param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117d80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117d90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117da0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117db0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117dc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117dd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10117df0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117e00(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117e20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117e40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10117e60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117f90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10117ff0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101180a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101180b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101180e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101180f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101181f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101182f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101183a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101183b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101183e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101183f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118430(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118490(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101184f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118520(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118550(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101185f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118650(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101186f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101187f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101188a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101188b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101188e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101188f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101189e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10118b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118bb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10118bd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10118be0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10118f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101191a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101191b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101191d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101191f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101192a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101192c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101192d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101192f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119350(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119380(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119390(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101193b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101193c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101193e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101193f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119420(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101194a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101194b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101194d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101194e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101195a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101195c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101195d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101195e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119600(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101196a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101196c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101196d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101196f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119700(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119720(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119780(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119790(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101197b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101197c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101197e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101197f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119810(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119860(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101198a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101198c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101198d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101198f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101199a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101199c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101199d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101199e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119a90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10119ac0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119ae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119af0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10119e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a2a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a2b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a2c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a4e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a6d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a750(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a7a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a800(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a8a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011a910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ab00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ab50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ab90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011abe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ac80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011acc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ad80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011adb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011adf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ae30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011aea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011aef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011af20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011af80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b0d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b1d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b2f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b410(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b4f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b5e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b680(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b6e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b730(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b760(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b7b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b880(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b8c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011b970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ba20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ba50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011ba80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bb00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bb30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bb60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bb90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bbc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1011bca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1011bcf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1011bd10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f590(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1011f5d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1011f760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1011f770(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f8e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f8f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f930(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011f9f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fa90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011faa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fb90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fbf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fc90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fcb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fcc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fcd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fcf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fd90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fda0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fdb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fdc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fdd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fde0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fdf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fe90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011feb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ff00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ff10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ff20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ff30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ffd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011ffe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1011fff0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101200a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10120190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101201a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101201b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10122460(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10122480(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101224f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10122510(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10122530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10122550(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10124ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10124eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10124ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10124ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10124f40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10124f50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10124f60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10124f70(void *param_1,size_t param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10124fa0(void *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10124fe0(SCStr *param_1,SCStr *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10125000(SCStr *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101296c0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101296f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10129700(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10129710(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __cdecl operator_new(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_101298d0(uint param_1,uint param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10129910(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10129920(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10129940(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10129ad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10129ae0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129d90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129da0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10129db0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129dc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129dd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129df0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10129e80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10129e90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10129ea0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129eb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10129ec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1012a030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1012a040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a050(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a060(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a070(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1012a130(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1012a140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a150(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a160(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1012a3c0(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012a480(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1012cb20(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1012cba0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1012d0f0(undefined1 *param_1,undefined1 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1012d100(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1012d300(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1012da90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1012ddb0(void *param_1,void *param_2,size_t param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101307c0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10130860(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101308b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130970(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101309f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130a90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ac0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ae0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130af0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130b90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130bb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130bc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130bd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130be0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130bf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130c90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130cc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130cd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130cf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130de0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ec0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130f90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10130ff0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131000(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131010(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101310f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131190(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101311f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10131220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10139370(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10139380(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10139390(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1013a500(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a810(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_1013a820(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a830(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a840(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a850(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a870(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1013a880(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1013a890(void *param_1,void *param_2,size_t param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1013b570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1013b580(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1013b590(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f5a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f5d0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f5f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1013f610(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101446d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101446e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10145ca0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147980(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147a00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147a10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147b10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147b20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147b30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147ba0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147bd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147c10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147c90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147ce0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147eb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147ee0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147f00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147fb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10147fd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148080(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101480a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101480c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148110(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148140(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148150(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148190(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148220(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148250(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101482b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101482f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148320(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148350(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148370(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148380(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101483c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101483d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148400(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148480(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101484b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148520(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148540(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148550(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101485b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101485f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148610(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148650(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148680(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148690(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101486c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148720(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148750(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148770(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101487a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101487e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148870(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148880(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148890(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101488b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101488d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101488e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101488f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148900(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10148910(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101489d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a1e90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __fastcall FUN_101a1fd0(undefined2 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a2020(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a21c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2680(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a2810(undefined4 param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a2840(undefined4 param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a2870(undefined4 param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a29b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a29d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a29e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a29f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_101a2a10(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2a30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a2a40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a2a90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a2af0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_101a3250(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * FUN_101a3280(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a3390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a33a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a33b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a33c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a33d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a33e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a36e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a36f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a3740(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a3b20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a3b30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a3b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a3b60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a3cb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101a4230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a4750(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a4770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a4780(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a4c40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a4c60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a4c80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a4d10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a4e60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a4e70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a5290(char *param_1,char *param_2,char param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a5700(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_101a5d20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __cdecl strchr(char *_Str,int _Val);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __cdecl strstr(char *_Str,char *_SubStr);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6c90(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a6d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a6db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_101a6e50(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a6e70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a6e80(void *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6eb0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a6ee0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a6f10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a6f20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a72d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a72e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a72f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a7300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a76b0(undefined4 *param_1,undefined4 *param_2,code *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_101a7760(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a77f0(int param_1,int param_2,code *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a7910(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a79d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a7a40(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a7a80(void *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a7ab0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a7ae0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a7f10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_101a7f20(undefined1 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a80e0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 code *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8120(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8160(undefined4 *param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a81b0(undefined4 *param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101a8200(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8210(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8280(int param_1,int param_2,int param_3,int *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a82e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a82f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8300(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8310(undefined4 *param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8380(undefined4 *param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101a8990(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101a89c0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a89f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8a00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8a10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8a20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8a90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8aa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8ab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8ac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8ad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101a8ae0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101a8af0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8b00(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101a8b20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8b30(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8b60(int param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8b90(int param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8bc0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8be0(undefined4 *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a8c60(undefined4 *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8d30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8d60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8e50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a8e70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a8e80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101a8ee0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a8fc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a9280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_101a9350(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a98e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a98f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a9980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a9990(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_101a9a90(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_101a9ac0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a9af0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a9b20(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9b50(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9b80(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9bb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101a9bc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a9d60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101a9d70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a9d80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a9d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101a9da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_101a9ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9f50(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_101a9fa0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101a9ff0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101aa0c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101aa0d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101aa0e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101aa0f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101aa100(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101aa110(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101aa120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aa3d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aa400(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_101aa520(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aa5a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aa670(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aa690(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aa6b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101aa6d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101aa6e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101aa6f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101aad70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_101aad80(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101aada0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101aadb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab3c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab3d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab3e0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab3f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101ab400(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab430(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab440(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab450(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab7e0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101ab8a0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab8c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab8d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab8e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab8f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ab910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_101ab930(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab9a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab9b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab9c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101ab9d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101aba10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101abaa0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abd80(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abda0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abdc0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abe60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abe70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abe80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abe90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abeb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abed0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101abee0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abef0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101abf80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101ac200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac320(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac550(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ac980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aca30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101aca80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101acaa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101acac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101acc70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101acc90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101acce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101accf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ad990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101ada00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101aebe0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aeca0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aefc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101aefe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_101af010(undefined4 *param_1);
// Reference entry 10116540; body size 19 bytes.
#line 1 "ENTRY_10116540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10116540(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10116560; body size 25 bytes.
#line 1 "ENTRY_10116560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10116560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10116580; body size 25 bytes.
#line 1 "ENTRY_10116580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10116580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101165a0; body size 18 bytes.
#line 1 "ENTRY_101165a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101165a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101165c0; body size 25 bytes.
#line 1 "ENTRY_101165c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101165c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101165e0; body size 25 bytes.
#line 1 "ENTRY_101165e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101165e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10116690; body size 13 bytes.
#line 1 "ENTRY_10116690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10116690(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101166a0; body size 5 bytes.
#line 1 "ENTRY_101166a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101166a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101166b0; body size 5 bytes.
#line 1 "ENTRY_101166b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101166b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101166c0; body size 13 bytes.
#line 1 "ENTRY_101166c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101166c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101166d0; body size 22 bytes.
#line 1 "ENTRY_101166d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101166d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101166f0; body size 19 bytes.
#line 1 "ENTRY_101166f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101166f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 101169b0; body size 26 bytes.
#line 1 "ENTRY_101169b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101169b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101169d0; body size 26 bytes.
#line 1 "ENTRY_101169d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101169d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10116ad0; body size 26 bytes.
#line 1 "ENTRY_10116ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10116ad0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10116af0; body size 5 bytes.
#line 1 "ENTRY_10116af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10116af0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10116b00; body size 5 bytes.
#line 1 "ENTRY_10116b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10116b00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10116cd0; body size 12 bytes.
#line 1 "ENTRY_10116cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10116cd0(SCStr *param_1)

{
  ((Stub_SCStr *)(param_1))->hash();
  return;
}


// Reference entry 10116ce0; body size 21 bytes.
#line 1 "ENTRY_10116ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10116ce0(SCStr *param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_1))->op_eq(param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(!bVar1);
}


// Reference entry 10116d00; body size 3 bytes.
#line 1 "ENTRY_10116d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116d10; body size 3 bytes.
#line 1 "ENTRY_10116d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116d20; body size 3 bytes.
#line 1 "ENTRY_10116d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116d30; body size 3 bytes.
#line 1 "ENTRY_10116d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116d40; body size 3 bytes.
#line 1 "ENTRY_10116d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 FUN_10116d40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)0);
}


// Reference entry 10116d50; body size 11 bytes.
#line 1 "ENTRY_10116d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116d50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10116d60; body size 3 bytes.
#line 1 "ENTRY_10116d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116d70; body size 3 bytes.
#line 1 "ENTRY_10116d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116d80; body size 3 bytes.
#line 1 "ENTRY_10116d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116d90; body size 3 bytes.
#line 1 "ENTRY_10116d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116d90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116da0; body size 3 bytes.
#line 1 "ENTRY_10116da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116da0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116db0; body size 3 bytes.
#line 1 "ENTRY_10116db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116db0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116dc0; body size 3 bytes.
#line 1 "ENTRY_10116dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116dc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116dd0; body size 3 bytes.
#line 1 "ENTRY_10116dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116dd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116de0; body size 3 bytes.
#line 1 "ENTRY_10116de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116de0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116df0; body size 3 bytes.
#line 1 "ENTRY_10116df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116df0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116e00; body size 3 bytes.
#line 1 "ENTRY_10116e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116e00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116e10; body size 3 bytes.
#line 1 "ENTRY_10116e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116e10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116e20; body size 3 bytes.
#line 1 "ENTRY_10116e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116e20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116e30; body size 3 bytes.
#line 1 "ENTRY_10116e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116e30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10116e40; body size 3 bytes.
#line 1 "ENTRY_10116e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10116e40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 10116e50; body size 3 bytes.
#line 1 "ENTRY_10116e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116e50(void)

{
  return;
}


// Reference entry 10116e60; body size 3 bytes.
#line 1 "ENTRY_10116e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116e60(void)

{
  return;
}


// Reference entry 10116e70; body size 69 bytes.
#line 1 "ENTRY_10116e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10116e70(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *extraout_EAX;
  int iVar3;
  undefined4 uStack_c;
  
  if (param_1 < 0x1000) {
    if (param_1 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    do {
      uStack_c = (undefined4)(0x1148a4ec);
      pvVar1 = (void *)(malloc(param_1));
      if (pvVar1 != (void *)0x0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      uStack_c = (undefined4)(0x1148a4df);
      iVar3 = (int)(_callnewh(param_1));
    } while (iVar3 != 0);
    if (param_1 == 0xffffffff) {
      pvVar1 = (void *)((void *)FUN_1148c94c());
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
    }
    pvVar1 = (void *)((void *)thunk_FUN_1148c928());
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
  }
  if (param_1 + 0x23 <= param_1) {
    thunk_FUN_1011bdc0();
                    
    _CxxThrowException(&uStack_c,(ThrowInfo *)&DAT_11d330dc);
  }
  pvVar1 = (void *)(operator_new(param_1 + 0x23));
  if (pvVar1 == (void *)0x0) {
                    
                    
                    
    _invalid_parameter_noinfo_noreturn();
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(extraout_EAX);
  }
  pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
  *(void **)((int)pvVar2 - 4) = pvVar1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
}


// Reference entry 10116ed0; body size 46 bytes.
#line 1 "ENTRY_10116ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116ed0(uint param_1)

{
  void *pvVar1;
  undefined1 auStack_c [4];
  undefined4 uStack_8;
  
  if (param_1 + 0x23 <= param_1) {
    thunk_FUN_1011bdc0();
                    
    _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
  }
  uStack_8 = (undefined4)(0x10116ee5);
  pvVar1 = (void *)(operator_new(param_1 + 0x23));
  if (pvVar1 != (void *)0x0) {
    *(void **)(((int)pvVar1 + 0x23U & 0xffffffe0) - 4) = pvVar1;
    return;
  }
                    
                    
                    
  _invalid_parameter_noinfo_noreturn();
  return;
}


// Reference entry 10116f10; body size 13 bytes.
#line 1 "ENTRY_10116f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10116f20; body size 13 bytes.
#line 1 "ENTRY_10116f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10116f30; body size 13 bytes.
#line 1 "ENTRY_10116f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10116f40; body size 13 bytes.
#line 1 "ENTRY_10116f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10116f50; body size 5 bytes.
#line 1 "ENTRY_10116f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10116f50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10116f60; body size 55 bytes.
#line 1 "ENTRY_10116f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116f60(void *param_1,uint param_2)

{
  uint uVar1;
  
  if ((0xfff < param_2) &&
     (uVar1 = (int)param_1 + (-4 - (int)*(void **)((int)param_1 + -4)),
     param_1 = *(void **)((int)param_1 + -4), 0x1f < uVar1)) {
                    
                    
                    
    _invalid_parameter_noinfo_noreturn();
    return;
  }
  free(param_1);
  return;
}


// Reference entry 10116fb0; body size 3 bytes.
#line 1 "ENTRY_10116fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116fb0(void)

{
  return;
}


// Reference entry 10116fc0; body size 3 bytes.
#line 1 "ENTRY_10116fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116fc0(void)

{
  return;
}


// Reference entry 10116fd0; body size 3 bytes.
#line 1 "ENTRY_10116fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10116fd0(void)

{
  return;
}


// Reference entry 10116fe0; body size 18 bytes.
#line 1 "ENTRY_10116fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10116fe0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10117150; body size 15 bytes.
#line 1 "ENTRY_10117150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117150(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0xc);
  return;
}


// Reference entry 101171f0; body size 5 bytes.
#line 1 "ENTRY_101171f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101171f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117200; body size 19 bytes.
#line 1 "ENTRY_10117200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10117200(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x40000000) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 << 2);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 10117220; body size 22 bytes.
#line 1 "ENTRY_10117220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10117220(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x15555556) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0xc);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 10117240; body size 5 bytes.
#line 1 "ENTRY_10117240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117240(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117250; body size 7 bytes.
#line 1 "ENTRY_10117250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117250(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10117260; body size 3 bytes.
#line 1 "ENTRY_10117260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117260(void)

{
  return;
}


// Reference entry 10117270; body size 3 bytes.
#line 1 "ENTRY_10117270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117270(void)

{
  return;
}


// Reference entry 10117280; body size 186 bytes.
#line 1 "ENTRY_10117280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10117280(uint param_2,undefined4 param_3,void *param_4)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  uint uVar5;
  
  if (0x7fffffff < param_2) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar2 = (uint)(param_1[5]);
  uVar5 = (uint)(param_2 | 0xf);
  if (uVar5 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar5 = (uint)(0x7fffffff);
    }
    else {
      uVar1 = (uint)((uVar2 >> 1) + uVar2);
      if (uVar5 < uVar1) {
        uVar5 = (uint)(uVar1);
      }
    }
  }
  else {
    uVar5 = (uint)(0x7fffffff);
  }
  _Dst = (void *)((void *)thunk_FUN_1012cab0(uVar5 + 1));
  param_1[4] = param_2;
  param_1[5] = uVar5;
  memcpy(_Dst,param_4,param_2);
  *(undefined1 *)((int)_Dst + param_2) = 0;
  if (0xf < uVar2) {
    iVar3 = (int)(*param_1);
    uVar5 = (uint)(uVar2 + 1);
    iVar4 = (int)(iVar3);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar3 + -4));
      uVar5 = (uint)(uVar2 + 0x24);
      if (0x1f < (iVar3 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  *param_1 = (int)((int)_Dst);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10117370; body size 268 bytes.
#line 1 "ENTRY_10117370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10117370(uint param_2,undefined4 param_3,void *param_4,size_t param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  size_t _Size;
  uint uVar1;
  void *_Src;
  uint uVar2;
  void *_Dst;
  undefined1 *puVar3;
  uint uVar4;
  void *pvVar5;
  
  _Size = (size_t)(param_1[4]);
  if (0x7fffffff - _Size < param_2) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar1 = (uint)(param_1[5]);
  uVar4 = (uint)(param_2 + _Size | 0xf);
  if (uVar4 < 0x80000000) {
    if (0x7fffffff - (uVar1 >> 1) < uVar1) {
      uVar4 = (uint)(0x7fffffff);
    }
    else {
      uVar2 = (uint)(uVar1 + (uVar1 >> 1));
      if (uVar4 < uVar2) {
        uVar4 = (uint)(uVar2);
      }
    }
  }
  else {
    uVar4 = (uint)(0x7fffffff);
  }
  _Dst = (void *)((void *)thunk_FUN_1012cab0(uVar4 + 1));
  param_1[5] = uVar4;
  param_1[4] = param_2 + _Size;
  puVar3 = (undefined1 *)((undefined1 *)(param_5 + (int)(_Size + (int)_Dst)));
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memcpy((void *)(_Size + (int)_Dst),param_4,param_5);
    *puVar3 = (undefined1)(0);
    *param_1 = (undefined4)(_Dst);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,_Size);
  memcpy((void *)(_Size + (int)_Dst),param_4,param_5);
  uVar4 = (uint)(uVar1 + 1);
  *puVar3 = (undefined1)(0);
  pvVar5 = (void *)(_Src);
  if (0xfff < uVar4) {
    pvVar5 = (void *)(*(void **)((int)_Src + -4));
    uVar4 = (uint)(uVar1 + 0x24);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar5))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar5,uVar4);
  *param_1 = (undefined4)(_Dst);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101174c0; body size 19 bytes.
#line 1 "ENTRY_101174c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101174c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 101174e0; body size 19 bytes.
#line 1 "ENTRY_101174e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101174e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10117500; body size 5 bytes.
#line 1 "ENTRY_10117500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117510; body size 5 bytes.
#line 1 "ENTRY_10117510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117510(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117520; body size 5 bytes.
#line 1 "ENTRY_10117520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117520(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117530; body size 5 bytes.
#line 1 "ENTRY_10117530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117530(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117540; body size 5 bytes.
#line 1 "ENTRY_10117540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117550; body size 5 bytes.
#line 1 "ENTRY_10117550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117560; body size 5 bytes.
#line 1 "ENTRY_10117560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117570; body size 5 bytes.
#line 1 "ENTRY_10117570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117570(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117580; body size 5 bytes.
#line 1 "ENTRY_10117580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117580(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117590; body size 5 bytes.
#line 1 "ENTRY_10117590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117590(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101175a0; body size 5 bytes.
#line 1 "ENTRY_101175a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101175a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101175b0; body size 5 bytes.
#line 1 "ENTRY_101175b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101175b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117650; body size 14 bytes.
#line 1 "ENTRY_10117650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117650(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((Stub_SCStr *)(param_2))->SCStr(param_3);
  return;
}


// Reference entry 10117930; body size 15 bytes.
#line 1 "ENTRY_10117930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117930(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101179d0; body size 5 bytes.
#line 1 "ENTRY_101179d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101179d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101179e0; body size 5 bytes.
#line 1 "ENTRY_101179e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101179e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101179f0; body size 5 bytes.
#line 1 "ENTRY_101179f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101179f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a00; body size 5 bytes.
#line 1 "ENTRY_10117a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a10; body size 5 bytes.
#line 1 "ENTRY_10117a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a20; body size 5 bytes.
#line 1 "ENTRY_10117a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a30; body size 5 bytes.
#line 1 "ENTRY_10117a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a40; body size 5 bytes.
#line 1 "ENTRY_10117a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a50; body size 5 bytes.
#line 1 "ENTRY_10117a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a60; body size 5 bytes.
#line 1 "ENTRY_10117a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a70; body size 5 bytes.
#line 1 "ENTRY_10117a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a80; body size 5 bytes.
#line 1 "ENTRY_10117a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117a80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117a90; body size 6 bytes.
#line 1 "ENTRY_10117a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10117a90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINowPlaying");
}


// Reference entry 10117aa0; body size 6 bytes.
#line 1 "ENTRY_10117aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10117aa0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCISystem");
}


// Reference entry 10117ab0; body size 6 bytes.
#line 1 "ENTRY_10117ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10117ab0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIZoneGroupMgr");
}


// Reference entry 10117d40; body size 16 bytes.
#line 1 "ENTRY_10117d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * FUN_10117d40(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = (uint *)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)(param_1);
}


// Reference entry 10117d60; body size 16 bytes.
#line 1 "ENTRY_10117d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * FUN_10117d60(uint *param_1,uint *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = (uint *)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint *)(param_1);
}


// Reference entry 10117d80; body size 5 bytes.
#line 1 "ENTRY_10117d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117d80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117d90; body size 5 bytes.
#line 1 "ENTRY_10117d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117d90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117da0; body size 5 bytes.
#line 1 "ENTRY_10117da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117da0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117db0; body size 5 bytes.
#line 1 "ENTRY_10117db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117db0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117dc0; body size 5 bytes.
#line 1 "ENTRY_10117dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117dc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117dd0; body size 5 bytes.
#line 1 "ENTRY_10117dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117dd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117de0; body size 5 bytes.
#line 1 "ENTRY_10117de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117de0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117df0; body size 5 bytes.
#line 1 "ENTRY_10117df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10117df0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10117e00; body size 19 bytes.
#line 1 "ENTRY_10117e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117e00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10117e20; body size 19 bytes.
#line 1 "ENTRY_10117e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117e20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10117e40; body size 19 bytes.
#line 1 "ENTRY_10117e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117e40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10117e60; body size 30 bytes.
#line 1 "ENTRY_10117e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10117e60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10117ef0; body size 9 bytes.
#line 1 "ENTRY_10117ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f00; body size 25 bytes.
#line 1 "ENTRY_10117f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10117f00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f20; body size 9 bytes.
#line 1 "ENTRY_10117f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f30; body size 9 bytes.
#line 1 "ENTRY_10117f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f40; body size 9 bytes.
#line 1 "ENTRY_10117f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f50; body size 9 bytes.
#line 1 "ENTRY_10117f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f60; body size 9 bytes.
#line 1 "ENTRY_10117f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f70; body size 9 bytes.
#line 1 "ENTRY_10117f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f80; body size 9 bytes.
#line 1 "ENTRY_10117f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117f90; body size 9 bytes.
#line 1 "ENTRY_10117f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117f90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117fa0; body size 9 bytes.
#line 1 "ENTRY_10117fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117fb0; body size 9 bytes.
#line 1 "ENTRY_10117fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117fc0; body size 9 bytes.
#line 1 "ENTRY_10117fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117fd0; body size 9 bytes.
#line 1 "ENTRY_10117fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117fe0; body size 9 bytes.
#line 1 "ENTRY_10117fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10117ff0; body size 9 bytes.
#line 1 "ENTRY_10117ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10117ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118000; body size 9 bytes.
#line 1 "ENTRY_10118000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118010; body size 9 bytes.
#line 1 "ENTRY_10118010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118020; body size 9 bytes.
#line 1 "ENTRY_10118020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118030; body size 9 bytes.
#line 1 "ENTRY_10118030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118030(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118040; body size 9 bytes.
#line 1 "ENTRY_10118040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118050; body size 9 bytes.
#line 1 "ENTRY_10118050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118060; body size 25 bytes.
#line 1 "ENTRY_10118060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118060(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118080; body size 9 bytes.
#line 1 "ENTRY_10118080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118080(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118090; body size 9 bytes.
#line 1 "ENTRY_10118090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118090(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101180a0; body size 9 bytes.
#line 1 "ENTRY_101180a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101180a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101180b0; body size 9 bytes.
#line 1 "ENTRY_101180b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101180b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101180c0; body size 25 bytes.
#line 1 "ENTRY_101180c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101180c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101180e0; body size 9 bytes.
#line 1 "ENTRY_101180e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101180e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101180f0; body size 9 bytes.
#line 1 "ENTRY_101180f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101180f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118100; body size 9 bytes.
#line 1 "ENTRY_10118100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118110; body size 9 bytes.
#line 1 "ENTRY_10118110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118110(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118120; body size 9 bytes.
#line 1 "ENTRY_10118120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118130; body size 9 bytes.
#line 1 "ENTRY_10118130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118140; body size 9 bytes.
#line 1 "ENTRY_10118140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118150; body size 25 bytes.
#line 1 "ENTRY_10118150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118150(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118170; body size 9 bytes.
#line 1 "ENTRY_10118170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118170(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118180; body size 9 bytes.
#line 1 "ENTRY_10118180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118190; body size 9 bytes.
#line 1 "ENTRY_10118190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101181a0; body size 9 bytes.
#line 1 "ENTRY_101181a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101181b0; body size 9 bytes.
#line 1 "ENTRY_101181b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101181c0; body size 9 bytes.
#line 1 "ENTRY_101181c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101181d0; body size 9 bytes.
#line 1 "ENTRY_101181d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101181e0; body size 9 bytes.
#line 1 "ENTRY_101181e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101181f0; body size 9 bytes.
#line 1 "ENTRY_101181f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101181f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118200; body size 25 bytes.
#line 1 "ENTRY_10118200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118200(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118220; body size 9 bytes.
#line 1 "ENTRY_10118220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118220(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118230; body size 9 bytes.
#line 1 "ENTRY_10118230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118230(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118240; body size 9 bytes.
#line 1 "ENTRY_10118240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118250; body size 9 bytes.
#line 1 "ENTRY_10118250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118250(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118260; body size 9 bytes.
#line 1 "ENTRY_10118260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118270; body size 9 bytes.
#line 1 "ENTRY_10118270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118270(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118280; body size 9 bytes.
#line 1 "ENTRY_10118280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118280(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118290; body size 9 bytes.
#line 1 "ENTRY_10118290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118290(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101182a0; body size 9 bytes.
#line 1 "ENTRY_101182a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101182b0; body size 9 bytes.
#line 1 "ENTRY_101182b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101182c0; body size 9 bytes.
#line 1 "ENTRY_101182c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101182d0; body size 9 bytes.
#line 1 "ENTRY_101182d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101182e0; body size 9 bytes.
#line 1 "ENTRY_101182e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101182f0; body size 9 bytes.
#line 1 "ENTRY_101182f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101182f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118300; body size 25 bytes.
#line 1 "ENTRY_10118300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118320; body size 9 bytes.
#line 1 "ENTRY_10118320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118330; body size 25 bytes.
#line 1 "ENTRY_10118330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118330(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118350; body size 9 bytes.
#line 1 "ENTRY_10118350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118350(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118360; body size 25 bytes.
#line 1 "ENTRY_10118360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118360(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118380; body size 9 bytes.
#line 1 "ENTRY_10118380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118380(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118390; body size 9 bytes.
#line 1 "ENTRY_10118390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118390(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101183a0; body size 9 bytes.
#line 1 "ENTRY_101183a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101183a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101183b0; body size 9 bytes.
#line 1 "ENTRY_101183b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101183b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101183c0; body size 25 bytes.
#line 1 "ENTRY_101183c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101183c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101183e0; body size 9 bytes.
#line 1 "ENTRY_101183e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101183e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101183f0; body size 9 bytes.
#line 1 "ENTRY_101183f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101183f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118400; body size 9 bytes.
#line 1 "ENTRY_10118400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118400(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118410; body size 9 bytes.
#line 1 "ENTRY_10118410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118420; body size 9 bytes.
#line 1 "ENTRY_10118420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118430; body size 9 bytes.
#line 1 "ENTRY_10118430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118430(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118440; body size 9 bytes.
#line 1 "ENTRY_10118440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118440(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118450; body size 25 bytes.
#line 1 "ENTRY_10118450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118450(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118490; body size 9 bytes.
#line 1 "ENTRY_10118490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101184a0; body size 9 bytes.
#line 1 "ENTRY_101184a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101184b0; body size 9 bytes.
#line 1 "ENTRY_101184b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101184c0; body size 9 bytes.
#line 1 "ENTRY_101184c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101184d0; body size 9 bytes.
#line 1 "ENTRY_101184d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101184e0; body size 9 bytes.
#line 1 "ENTRY_101184e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101184f0; body size 9 bytes.
#line 1 "ENTRY_101184f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101184f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118500; body size 9 bytes.
#line 1 "ENTRY_10118500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118500(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118510; body size 9 bytes.
#line 1 "ENTRY_10118510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118510(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118520; body size 9 bytes.
#line 1 "ENTRY_10118520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118520(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118530; body size 9 bytes.
#line 1 "ENTRY_10118530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118530(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118540; body size 9 bytes.
#line 1 "ENTRY_10118540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118540(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118550; body size 9 bytes.
#line 1 "ENTRY_10118550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118550(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118560; body size 9 bytes.
#line 1 "ENTRY_10118560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118570; body size 9 bytes.
#line 1 "ENTRY_10118570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118570(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118580; body size 9 bytes.
#line 1 "ENTRY_10118580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118590; body size 9 bytes.
#line 1 "ENTRY_10118590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118590(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101185a0; body size 9 bytes.
#line 1 "ENTRY_101185a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101185b0; body size 9 bytes.
#line 1 "ENTRY_101185b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101185c0; body size 9 bytes.
#line 1 "ENTRY_101185c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101185d0; body size 9 bytes.
#line 1 "ENTRY_101185d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101185e0; body size 9 bytes.
#line 1 "ENTRY_101185e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101185f0; body size 9 bytes.
#line 1 "ENTRY_101185f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101185f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118600; body size 9 bytes.
#line 1 "ENTRY_10118600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118610; body size 9 bytes.
#line 1 "ENTRY_10118610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118610(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118620; body size 9 bytes.
#line 1 "ENTRY_10118620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118620(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118630; body size 9 bytes.
#line 1 "ENTRY_10118630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118630(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118640; body size 9 bytes.
#line 1 "ENTRY_10118640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118640(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118650; body size 9 bytes.
#line 1 "ENTRY_10118650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118650(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118660; body size 9 bytes.
#line 1 "ENTRY_10118660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118670; body size 9 bytes.
#line 1 "ENTRY_10118670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118680; body size 9 bytes.
#line 1 "ENTRY_10118680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118680(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118690; body size 25 bytes.
#line 1 "ENTRY_10118690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101186b0; body size 9 bytes.
#line 1 "ENTRY_101186b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101186c0; body size 9 bytes.
#line 1 "ENTRY_101186c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101186d0; body size 9 bytes.
#line 1 "ENTRY_101186d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101186e0; body size 9 bytes.
#line 1 "ENTRY_101186e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101186f0; body size 9 bytes.
#line 1 "ENTRY_101186f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101186f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118700; body size 9 bytes.
#line 1 "ENTRY_10118700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118700(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118710; body size 9 bytes.
#line 1 "ENTRY_10118710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118710(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118720; body size 9 bytes.
#line 1 "ENTRY_10118720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118720(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118730; body size 9 bytes.
#line 1 "ENTRY_10118730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118730(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118740; body size 9 bytes.
#line 1 "ENTRY_10118740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118740(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118750; body size 9 bytes.
#line 1 "ENTRY_10118750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118750(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118760; body size 9 bytes.
#line 1 "ENTRY_10118760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118760(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118770; body size 9 bytes.
#line 1 "ENTRY_10118770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118770(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118780; body size 9 bytes.
#line 1 "ENTRY_10118780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118780(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118790; body size 9 bytes.
#line 1 "ENTRY_10118790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118790(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101187a0; body size 9 bytes.
#line 1 "ENTRY_101187a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101187b0; body size 9 bytes.
#line 1 "ENTRY_101187b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101187c0; body size 9 bytes.
#line 1 "ENTRY_101187c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101187d0; body size 9 bytes.
#line 1 "ENTRY_101187d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101187e0; body size 9 bytes.
#line 1 "ENTRY_101187e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101187f0; body size 9 bytes.
#line 1 "ENTRY_101187f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101187f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118800; body size 9 bytes.
#line 1 "ENTRY_10118800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118810; body size 9 bytes.
#line 1 "ENTRY_10118810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118810(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118820; body size 25 bytes.
#line 1 "ENTRY_10118820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118820(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118840; body size 9 bytes.
#line 1 "ENTRY_10118840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118840(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118850; body size 25 bytes.
#line 1 "ENTRY_10118850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118850(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118870; body size 9 bytes.
#line 1 "ENTRY_10118870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118880; body size 9 bytes.
#line 1 "ENTRY_10118880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118880(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118890; body size 9 bytes.
#line 1 "ENTRY_10118890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118890(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101188a0; body size 9 bytes.
#line 1 "ENTRY_101188a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101188a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101188b0; body size 9 bytes.
#line 1 "ENTRY_101188b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101188b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101188c0; body size 25 bytes.
#line 1 "ENTRY_101188c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101188c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101188e0; body size 9 bytes.
#line 1 "ENTRY_101188e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101188e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101188f0; body size 9 bytes.
#line 1 "ENTRY_101188f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101188f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118900; body size 9 bytes.
#line 1 "ENTRY_10118900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118910; body size 25 bytes.
#line 1 "ENTRY_10118910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118910(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118930; body size 9 bytes.
#line 1 "ENTRY_10118930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118930(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118940; body size 25 bytes.
#line 1 "ENTRY_10118940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118940(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118960; body size 9 bytes.
#line 1 "ENTRY_10118960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118960(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118970; body size 9 bytes.
#line 1 "ENTRY_10118970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118970(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118980; body size 9 bytes.
#line 1 "ENTRY_10118980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118980(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118990; body size 9 bytes.
#line 1 "ENTRY_10118990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118990(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101189a0; body size 9 bytes.
#line 1 "ENTRY_101189a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101189b0; body size 9 bytes.
#line 1 "ENTRY_101189b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101189c0; body size 9 bytes.
#line 1 "ENTRY_101189c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101189d0; body size 9 bytes.
#line 1 "ENTRY_101189d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101189e0; body size 14 bytes.
#line 1 "ENTRY_101189e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101189e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118a00; body size 18 bytes.
#line 1 "ENTRY_10118a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118a00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118af0; body size 11 bytes.
#line 1 "ENTRY_10118af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118af0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118b00; body size 11 bytes.
#line 1 "ENTRY_10118b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118b00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118b10; body size 11 bytes.
#line 1 "ENTRY_10118b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118b10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118b20; body size 11 bytes.
#line 1 "ENTRY_10118b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118b20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118b30; body size 16 bytes.
#line 1 "ENTRY_10118b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118b50; body size 17 bytes.
#line 1 "ENTRY_10118b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10118b50(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10118b70; body size 9 bytes.
#line 1 "ENTRY_10118b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118b70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118b80; body size 14 bytes.
#line 1 "ENTRY_10118b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118b80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118ba0; body size 13 bytes.
#line 1 "ENTRY_10118ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118ba0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118bb0; body size 23 bytes.
#line 1 "ENTRY_10118bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118bd0; body size 3 bytes.
#line 1 "ENTRY_10118bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10118bd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10118be0; body size 3 bytes.
#line 1 "ENTRY_10118be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10118be0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10118f10; body size 9 bytes.
#line 1 "ENTRY_10118f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10118f10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118f20; body size 37 bytes.
#line 1 "ENTRY_10118f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118f20(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_Swig_DirectorException_vftable);
  thunk_FUN_10118c40(param_2 + 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118f50; body size 33 bytes.
#line 1 "ENTRY_10118f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118f50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_Swig_DirectorException_vftable);
  thunk_FUN_10118c40(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10118f80; body size 43 bytes.
#line 1 "ENTRY_10118f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10118f80(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_Swig_DirectorException_vftable);
  thunk_FUN_10118c40(param_2 + 4);
  *param_1 = (undefined4)((uint)&Ext_Swig_DirectorPureVirtualException_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119160; body size 9 bytes.
#line 1 "ENTRY_10119160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIAbilityDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119170; body size 21 bytes.
#line 1 "ENTRY_10119170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIAbilityDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119190; body size 9 bytes.
#line 1 "ENTRY_10119190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIAction_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101191a0; body size 9 bytes.
#line 1 "ENTRY_101191a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101191a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIActionDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101191b0; body size 21 bytes.
#line 1 "ENTRY_101191b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101191b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIActionDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101191d0; body size 14 bytes.
#line 1 "ENTRY_101191d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101191d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIActionFactory_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101191f0; body size 21 bytes.
#line 1 "ENTRY_101191f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101191f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIActionFactorySwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119210; body size 9 bytes.
#line 1 "ENTRY_10119210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIActionFilter_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119220; body size 21 bytes.
#line 1 "ENTRY_10119220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIActionFilterSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119240; body size 21 bytes.
#line 1 "ENTRY_10119240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIActionSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119260; body size 9 bytes.
#line 1 "ENTRY_10119260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIAutomationDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119270; body size 21 bytes.
#line 1 "ENTRY_10119270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIAutomationDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119290; body size 9 bytes.
#line 1 "ENTRY_10119290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBTAccessoryDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101192a0; body size 21 bytes.
#line 1 "ENTRY_101192a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101192a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBTAccessoryDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101192c0; body size 9 bytes.
#line 1 "ENTRY_101192c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101192c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBTClassicConnectionCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101192d0; body size 21 bytes.
#line 1 "ENTRY_101192d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101192d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBTClassicConnectionCallbackSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101192f0; body size 9 bytes.
#line 1 "ENTRY_101192f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101192f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBTClassicConnectionProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119300; body size 21 bytes.
#line 1 "ENTRY_10119300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBTClassicConnectionProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119320; body size 9 bytes.
#line 1 "ENTRY_10119320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBleDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119330; body size 21 bytes.
#line 1 "ENTRY_10119330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBleDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119350; body size 9 bytes.
#line 1 "ENTRY_10119350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBlePeripheralDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119360; body size 21 bytes.
#line 1 "ENTRY_10119360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119360(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBlePeripheralDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119380; body size 9 bytes.
#line 1 "ENTRY_10119380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBrowseItem_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119390; body size 21 bytes.
#line 1 "ENTRY_10119390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIBrowseItemSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101193b0; body size 9 bytes.
#line 1 "ENTRY_101193b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101193b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIChirpDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101193c0; body size 21 bytes.
#line 1 "ENTRY_101193c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101193c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIChirpDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101193e0; body size 9 bytes.
#line 1 "ENTRY_101193e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101193e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIClipboardDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101193f0; body size 21 bytes.
#line 1 "ENTRY_101193f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101193f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIClipboardDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119410; body size 9 bytes.
#line 1 "ENTRY_10119410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCICrashReportProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119420; body size 21 bytes.
#line 1 "ENTRY_10119420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119420(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCICrashReportProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119440; body size 9 bytes.
#line 1 "ENTRY_10119440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCICustomSubWizard_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119450; body size 21 bytes.
#line 1 "ENTRY_10119450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCICustomSubWizardSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119470; body size 9 bytes.
#line 1 "ENTRY_10119470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIEventSink_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119480; body size 21 bytes.
#line 1 "ENTRY_10119480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIEventSinkSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101194a0; body size 9 bytes.
#line 1 "ENTRY_101194a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101194a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIExperimentManagerProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101194b0; body size 21 bytes.
#line 1 "ENTRY_101194b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101194b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIExperimentManagerProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101194d0; body size 9 bytes.
#line 1 "ENTRY_101194d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101194d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIGetAboutSonosStringCB_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101194e0; body size 21 bytes.
#line 1 "ENTRY_101194e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101194e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIGetAboutSonosStringCBSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119500; body size 9 bytes.
#line 1 "ENTRY_10119500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIGetSonosPlaylistsCB_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119510; body size 21 bytes.
#line 1 "ENTRY_10119510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIGetSonosPlaylistsCBSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119530; body size 9 bytes.
#line 1 "ENTRY_10119530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIHapticDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119540; body size 21 bytes.
#line 1 "ENTRY_10119540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIHapticDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119560; body size 9 bytes.
#line 1 "ENTRY_10119560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIInAppMessagingProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119570; body size 21 bytes.
#line 1 "ENTRY_10119570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIInAppMessagingProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119590; body size 9 bytes.
#line 1 "ENTRY_10119590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIInAppPurchaseManagerProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101195a0; body size 21 bytes.
#line 1 "ENTRY_101195a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101195a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIInAppPurchaseManagerProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101195c0; body size 9 bytes.
#line 1 "ENTRY_101195c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101195c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIInput_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101195d0; body size 9 bytes.
#line 1 "ENTRY_101195d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101195d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILifecycleAppProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101195e0; body size 21 bytes.
#line 1 "ENTRY_101195e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101195e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILifecycleAppProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119600; body size 9 bytes.
#line 1 "ENTRY_10119600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILocalMediaCollection_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119610; body size 21 bytes.
#line 1 "ENTRY_10119610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILocalMediaCollectionSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119630; body size 9 bytes.
#line 1 "ENTRY_10119630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILocalMusicBrowseItemInfo_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119640; body size 21 bytes.
#line 1 "ENTRY_10119640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILocalMusicBrowseItemInfoSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119660; body size 9 bytes.
#line 1 "ENTRY_10119660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILocalMusicSearchableDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119670; body size 21 bytes.
#line 1 "ENTRY_10119670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILocalMusicSearchableDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119690; body size 9 bytes.
#line 1 "ENTRY_10119690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILoggingProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101196a0; body size 21 bytes.
#line 1 "ENTRY_101196a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101196a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILoggingProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101196c0; body size 9 bytes.
#line 1 "ENTRY_101196c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101196c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIMdnsDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101196d0; body size 21 bytes.
#line 1 "ENTRY_101196d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101196d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIMdnsDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101196f0; body size 9 bytes.
#line 1 "ENTRY_101196f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101196f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIMusicServerBrowseDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119700; body size 21 bytes.
#line 1 "ENTRY_10119700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIMusicServerBrowseDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119720; body size 9 bytes.
#line 1 "ENTRY_10119720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIMusicServerDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119730; body size 21 bytes.
#line 1 "ENTRY_10119730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIMusicServerDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119750; body size 9 bytes.
#line 1 "ENTRY_10119750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCINetstartListener_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119760; body size 21 bytes.
#line 1 "ENTRY_10119760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119760(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCINetstartListenerSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119780; body size 9 bytes.
#line 1 "ENTRY_10119780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCINetworkManagementDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119790; body size 21 bytes.
#line 1 "ENTRY_10119790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCINetworkManagementDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101197b0; body size 9 bytes.
#line 1 "ENTRY_101197b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101197b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCINewWizDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101197c0; body size 21 bytes.
#line 1 "ENTRY_101197c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101197c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCINewWizDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101197e0; body size 9 bytes.
#line 1 "ENTRY_101197e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101197e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCINfcDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101197f0; body size 21 bytes.
#line 1 "ENTRY_101197f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101197f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCINfcDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119810; body size 9 bytes.
#line 1 "ENTRY_10119810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119820; body size 9 bytes.
#line 1 "ENTRY_10119820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIOpCB_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119830; body size 21 bytes.
#line 1 "ENTRY_10119830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIOpCBSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119850; body size 9 bytes.
#line 1 "ENTRY_10119850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIPlatformDateTimeProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119860; body size 9 bytes.
#line 1 "ENTRY_10119860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119860(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCISavedDataProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119870; body size 21 bytes.
#line 1 "ENTRY_10119870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCISavedDataProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119890; body size 9 bytes.
#line 1 "ENTRY_10119890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCISecureStore_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101198a0; body size 21 bytes.
#line 1 "ENTRY_101198a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101198a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCISecureStoreSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101198c0; body size 9 bytes.
#line 1 "ENTRY_101198c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101198c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCISecurityContext_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101198d0; body size 21 bytes.
#line 1 "ENTRY_101198d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101198d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCISecurityContextSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101198f0; body size 9 bytes.
#line 1 "ENTRY_101198f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101198f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIServiceAppInterop_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119900; body size 21 bytes.
#line 1 "ENTRY_10119900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIServiceAppInteropSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119920; body size 9 bytes.
#line 1 "ENTRY_10119920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIStackTraceCaptureDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119930; body size 21 bytes.
#line 1 "ENTRY_10119930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIStackTraceCaptureDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119950; body size 9 bytes.
#line 1 "ENTRY_10119950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIStringInput_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119960; body size 9 bytes.
#line 1 "ENTRY_10119960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIStringInputBase_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119970; body size 21 bytes.
#line 1 "ENTRY_10119970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIStringInputSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119990; body size 9 bytes.
#line 1 "ENTRY_10119990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCITrackInfo_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101199a0; body size 21 bytes.
#line 1 "ENTRY_101199a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101199a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCITrackInfoSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101199c0; body size 9 bytes.
#line 1 "ENTRY_101199c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101199c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUINotificationsDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101199d0; body size 9 bytes.
#line 1 "ENTRY_101199d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101199d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUrbanAirshipDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101199e0; body size 21 bytes.
#line 1 "ENTRY_101199e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101199e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUrbanAirshipDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119a00; body size 9 bytes.
#line 1 "ENTRY_10119a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUrlConnection_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119a10; body size 21 bytes.
#line 1 "ENTRY_10119a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUrlConnectionSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119a30; body size 9 bytes.
#line 1 "ENTRY_10119a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUrlSessionCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119a40; body size 21 bytes.
#line 1 "ENTRY_10119a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUrlSessionCallbackSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119a60; body size 9 bytes.
#line 1 "ENTRY_10119a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUrlSessionProvider_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119a70; body size 21 bytes.
#line 1 "ENTRY_10119a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUrlSessionProviderSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119a90; body size 9 bytes.
#line 1 "ENTRY_10119a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119a90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIVoiceServiceDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119aa0; body size 21 bytes.
#line 1 "ENTRY_10119aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIVoiceServiceDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119ac0; body size 22 bytes.
#line 1 "ENTRY_10119ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10119ac0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10119ae0; body size 9 bytes.
#line 1 "ENTRY_10119ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIVpnDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119af0; body size 21 bytes.
#line 1 "ENTRY_10119af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119af0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIVpnDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119b10; body size 9 bytes.
#line 1 "ENTRY_10119b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIWebsocketCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119b20; body size 21 bytes.
#line 1 "ENTRY_10119b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIWebsocketCallbackSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119b40; body size 14 bytes.
#line 1 "ENTRY_10119b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119b60; body size 9 bytes.
#line 1 "ENTRY_10119b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIWebsocketDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119b70; body size 21 bytes.
#line 1 "ENTRY_10119b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIWebsocketDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119b90; body size 9 bytes.
#line 1 "ENTRY_10119b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIWifiDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119ba0; body size 21 bytes.
#line 1 "ENTRY_10119ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIWifiDelegateSwigBase_vftable);
  param_1[1] = 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119da0; body size 9 bytes.
#line 1 "ENTRY_10119da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibAssertionFailureCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119db0; body size 9 bytes.
#line 1 "ENTRY_10119db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibCallUIThreadCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119dc0; body size 9 bytes.
#line 1 "ENTRY_10119dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibCustomSubWizardCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119dd0; body size 9 bytes.
#line 1 "ENTRY_10119dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibDelegateFactory_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119de0; body size 9 bytes.
#line 1 "ENTRY_10119de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibDiagnosticConsoleLogCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119df0; body size 9 bytes.
#line 1 "ENTRY_10119df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibDiagnosticExtraInfoCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10119e00; body size 9 bytes.
#line 1 "ENTRY_10119e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10119e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibLogCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a2a0; body size 9 bytes.
#line 1 "ENTRY_1011a2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a2a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibPlatformStringCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a2b0; body size 9 bytes.
#line 1 "ENTRY_1011a2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibSonarCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a2c0; body size 9 bytes.
#line 1 "ENTRY_1011a2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a2c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibTruncatedStringsCallback_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a440; body size 119 bytes.
#line 1 "ENTRY_1011a440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a440(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIAbilityDelegateSwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a4e0; body size 35 bytes.
#line 1 "ENTRY_1011a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a4e0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIActionDelegateSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a510; body size 224 bytes.
#line 1 "ENTRY_1011a510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a510(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIActionFactorySwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a630; body size 35 bytes.
#line 1 "ENTRY_1011a630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a630(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIActionFilterSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a660; body size 35 bytes.
#line 1 "ENTRY_1011a660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a660(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIActionSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a690; body size 42 bytes.
#line 1 "ENTRY_1011a690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a690(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIAutomationDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a6d0; body size 91 bytes.
#line 1 "ENTRY_1011a6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a6d0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIBTAccessoryDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a750; body size 56 bytes.
#line 1 "ENTRY_1011a750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a750(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIBTClassicConnectionCallbackSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a7a0; body size 70 bytes.
#line 1 "ENTRY_1011a7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a7a0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIBTClassicConnectionProviderSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a800; body size 119 bytes.
#line 1 "ENTRY_1011a800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a800(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIBleDelegateSwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a8a0; body size 84 bytes.
#line 1 "ENTRY_1011a8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a8a0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIBlePeripheralDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011a910; body size 391 bytes.
#line 1 "ENTRY_1011a910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011a910(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIBrowseItemSwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ab00; body size 63 bytes.
#line 1 "ENTRY_1011ab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ab00(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIChirpDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ab50; body size 42 bytes.
#line 1 "ENTRY_1011ab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ab50(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIClipboardDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ab90; body size 56 bytes.
#line 1 "ENTRY_1011ab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ab90(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCICrashReportProviderSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011abe0; body size 126 bytes.
#line 1 "ENTRY_1011abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011abe0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCICustomSubWizardSwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ac80; body size 42 bytes.
#line 1 "ENTRY_1011ac80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ac80(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIEventSinkSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011acc0; body size 147 bytes.
#line 1 "ENTRY_1011acc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011acc0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIExperimentManagerProviderSwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ad80; body size 35 bytes.
#line 1 "ENTRY_1011ad80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ad80(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIGetAboutSonosStringCBSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011adb0; body size 42 bytes.
#line 1 "ENTRY_1011adb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011adb0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIGetSonosPlaylistsCBSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011adf0; body size 42 bytes.
#line 1 "ENTRY_1011adf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011adf0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIHapticDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ae30; body size 84 bytes.
#line 1 "ENTRY_1011ae30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ae30(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIInAppMessagingProviderSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011aea0; body size 63 bytes.
#line 1 "ENTRY_1011aea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011aea0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIInAppPurchaseManagerProviderSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011aef0; body size 35 bytes.
#line 1 "ENTRY_1011aef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011aef0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCILifecycleAppProviderSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011af20; body size 77 bytes.
#line 1 "ENTRY_1011af20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011af20(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCILocalMediaCollectionSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011af80; body size 140 bytes.
#line 1 "ENTRY_1011af80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011af80(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCILocalMusicBrowseItemInfoSwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b030; body size 56 bytes.
#line 1 "ENTRY_1011b030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b030(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCILocalMusicSearchableDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b080; body size 56 bytes.
#line 1 "ENTRY_1011b080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b080(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCILoggingProviderSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b0d0; body size 56 bytes.
#line 1 "ENTRY_1011b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b0d0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIMdnsDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b120; body size 70 bytes.
#line 1 "ENTRY_1011b120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b120(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIMusicServerBrowseDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b180; body size 63 bytes.
#line 1 "ENTRY_1011b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b180(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIMusicServerDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b1d0; body size 56 bytes.
#line 1 "ENTRY_1011b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b1d0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCINetstartListenerSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b220; body size 42 bytes.
#line 1 "ENTRY_1011b220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b220(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCINetworkManagementDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b260; body size 35 bytes.
#line 1 "ENTRY_1011b260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b260(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCINewWizDelegateSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b290; body size 70 bytes.
#line 1 "ENTRY_1011b290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b290(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCINfcDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b2f0; body size 35 bytes.
#line 1 "ENTRY_1011b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b2f0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIOpCBSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b320; body size 55 bytes.
#line 1 "ENTRY_1011b320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIPlatformDateTimeProvider_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b370; body size 119 bytes.
#line 1 "ENTRY_1011b370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b370(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCISavedDataProviderSwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b410; body size 56 bytes.
#line 1 "ENTRY_1011b410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b410(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCISecureStoreSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b460; body size 105 bytes.
#line 1 "ENTRY_1011b460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b460(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCISecurityContextSwigBase_vftable);
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b4f0; body size 42 bytes.
#line 1 "ENTRY_1011b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b4f0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIServiceAppInteropSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b530; body size 35 bytes.
#line 1 "ENTRY_1011b530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b530(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIStackTraceCaptureDelegateSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b560; body size 98 bytes.
#line 1 "ENTRY_1011b560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b560(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIStringInputSwigBase_vftable);
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b5e0; body size 70 bytes.
#line 1 "ENTRY_1011b5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b5e0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCITrackInfoSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b640; body size 48 bytes.
#line 1 "ENTRY_1011b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b640(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIUINotificationsDelegate_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b680; body size 70 bytes.
#line 1 "ENTRY_1011b680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b680(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIUrbanAirshipDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b6e0; body size 63 bytes.
#line 1 "ENTRY_1011b6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b6e0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIUrlConnectionSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b730; body size 35 bytes.
#line 1 "ENTRY_1011b730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b730(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIUrlSessionCallbackSwigBase_vftable);
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b760; body size 56 bytes.
#line 1 "ENTRY_1011b760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b760(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIUrlSessionProviderSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b7b0; body size 98 bytes.
#line 1 "ENTRY_1011b7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b7b0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIVoiceServiceDelegateSwigBase_vftable);
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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b830; body size 62 bytes.
#line 1 "ENTRY_1011b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b830(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIVpnDelegate_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b880; body size 49 bytes.
#line 1 "ENTRY_1011b880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b880(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIVpnDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b8c0; body size 63 bytes.
#line 1 "ENTRY_1011b8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b8c0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIWebsocketCallbackSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b910; body size 70 bytes.
#line 1 "ENTRY_1011b910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b910(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIWebsocketDelegateSwigBase_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011b970; body size 140 bytes.
#line 1 "ENTRY_1011b970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011b970(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCIWifiDelegateSwigBase_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ba20; body size 34 bytes.
#line 1 "ENTRY_1011ba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ba20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibAssertionFailureCallback_vftable);
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ba50; body size 34 bytes.
#line 1 "ENTRY_1011ba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ba50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibCallUIThreadCallback_vftable);
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011ba80; body size 41 bytes.
#line 1 "ENTRY_1011ba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011ba80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibCustomSubWizardCallback_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bac0; body size 41 bytes.
#line 1 "ENTRY_1011bac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011bac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibDelegateFactory_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bb00; body size 34 bytes.
#line 1 "ENTRY_1011bb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011bb00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibDiagnosticConsoleLogCallback_vftable);
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bb30; body size 34 bytes.
#line 1 "ENTRY_1011bb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011bb30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibDiagnosticExtraInfoCallback_vftable);
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bb60; body size 34 bytes.
#line 1 "ENTRY_1011bb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011bb60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibLogCallback_vftable);
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bb90; body size 34 bytes.
#line 1 "ENTRY_1011bb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011bb90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibPlatformStringCallback_vftable);
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bbc0; body size 174 bytes.
#line 1 "ENTRY_1011bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011bbc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibSonarCallback_vftable);
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bca0; body size 41 bytes.
#line 1 "ENTRY_1011bca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1011bca0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&Ext_SwigDirector_SCLibTruncatedStringsCallback_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bce0; body size 11 bytes.
#line 1 "ENTRY_1011bce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1011bce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bcf0; body size 3 bytes.
#line 1 "ENTRY_1011bcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1011bcf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1011bd00; body size 11 bytes.
#line 1 "ENTRY_1011bd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1011bd00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011bd10; body size 5 bytes.
#line 1 "ENTRY_1011bd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1011bd10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 1011bd20; body size 26 bytes.
#line 1 "ENTRY_1011bd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1011bd20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = param_2;
  *param_1 = (undefined4)((uint)&Ext_std_bad_alloc_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011be20; body size 26 bytes.
#line 1 "ENTRY_1011be20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1011be20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_std_exception_vftable);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1011f590; body size 18 bytes.
#line 1 "ENTRY_1011f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f590(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 1011f5d0; body size 3 bytes.
#line 1 "ENTRY_1011f5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1011f5d0(void)

{
  return;
}


// Reference entry 1011f760; body size 3 bytes.
#line 1 "ENTRY_1011f760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1011f760(void)

{
  return;
}


// Reference entry 1011f770; body size 3 bytes.
#line 1 "ENTRY_1011f770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1011f770(void)

{
  return;
}


// Reference entry 1011f8e0; body size 5 bytes.
#line 1 "ENTRY_1011f8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f8e0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  *param_1 = (undefined4)((uint)&Ext_Swig_DirectorException_vftable);
  uVar1 = (uint)(param_1[6]);
  if (0xf < uVar1) {
    iVar2 = (int)(param_1[1]);
    uVar4 = (uint)(uVar1 + 1);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar1 + 0x24);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// Reference entry 1011f8f0; body size 7 bytes.
#line 1 "ENTRY_1011f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f8f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f900; body size 7 bytes.
#line 1 "ENTRY_1011f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f910; body size 7 bytes.
#line 1 "ENTRY_1011f910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f930; body size 7 bytes.
#line 1 "ENTRY_1011f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f940; body size 7 bytes.
#line 1 "ENTRY_1011f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f950; body size 7 bytes.
#line 1 "ENTRY_1011f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f960; body size 7 bytes.
#line 1 "ENTRY_1011f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f970; body size 7 bytes.
#line 1 "ENTRY_1011f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f980; body size 7 bytes.
#line 1 "ENTRY_1011f980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f990; body size 7 bytes.
#line 1 "ENTRY_1011f990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f9a0; body size 7 bytes.
#line 1 "ENTRY_1011f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f9b0; body size 7 bytes.
#line 1 "ENTRY_1011f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f9c0; body size 7 bytes.
#line 1 "ENTRY_1011f9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f9d0; body size 7 bytes.
#line 1 "ENTRY_1011f9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f9e0; body size 7 bytes.
#line 1 "ENTRY_1011f9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011f9f0; body size 7 bytes.
#line 1 "ENTRY_1011f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011f9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa00; body size 7 bytes.
#line 1 "ENTRY_1011fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa10; body size 7 bytes.
#line 1 "ENTRY_1011fa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa20; body size 7 bytes.
#line 1 "ENTRY_1011fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa30; body size 7 bytes.
#line 1 "ENTRY_1011fa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa40; body size 7 bytes.
#line 1 "ENTRY_1011fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa50; body size 7 bytes.
#line 1 "ENTRY_1011fa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa60; body size 7 bytes.
#line 1 "ENTRY_1011fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa70; body size 7 bytes.
#line 1 "ENTRY_1011fa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa80; body size 7 bytes.
#line 1 "ENTRY_1011fa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fa90; body size 7 bytes.
#line 1 "ENTRY_1011fa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fa90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011faa0; body size 7 bytes.
#line 1 "ENTRY_1011faa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011faa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fab0; body size 7 bytes.
#line 1 "ENTRY_1011fab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fac0; body size 7 bytes.
#line 1 "ENTRY_1011fac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fad0; body size 7 bytes.
#line 1 "ENTRY_1011fad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fae0; body size 7 bytes.
#line 1 "ENTRY_1011fae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb00; body size 7 bytes.
#line 1 "ENTRY_1011fb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb10; body size 7 bytes.
#line 1 "ENTRY_1011fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb20; body size 7 bytes.
#line 1 "ENTRY_1011fb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb30; body size 7 bytes.
#line 1 "ENTRY_1011fb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb40; body size 7 bytes.
#line 1 "ENTRY_1011fb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb50; body size 7 bytes.
#line 1 "ENTRY_1011fb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb60; body size 7 bytes.
#line 1 "ENTRY_1011fb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb70; body size 7 bytes.
#line 1 "ENTRY_1011fb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb80; body size 7 bytes.
#line 1 "ENTRY_1011fb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fb90; body size 7 bytes.
#line 1 "ENTRY_1011fb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fb90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fba0; body size 7 bytes.
#line 1 "ENTRY_1011fba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fbb0; body size 7 bytes.
#line 1 "ENTRY_1011fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fbc0; body size 7 bytes.
#line 1 "ENTRY_1011fbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fbd0; body size 7 bytes.
#line 1 "ENTRY_1011fbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fbe0; body size 7 bytes.
#line 1 "ENTRY_1011fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fbf0; body size 7 bytes.
#line 1 "ENTRY_1011fbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fbf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc00; body size 7 bytes.
#line 1 "ENTRY_1011fc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc10; body size 7 bytes.
#line 1 "ENTRY_1011fc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc20; body size 7 bytes.
#line 1 "ENTRY_1011fc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc30; body size 7 bytes.
#line 1 "ENTRY_1011fc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc40; body size 7 bytes.
#line 1 "ENTRY_1011fc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc50; body size 7 bytes.
#line 1 "ENTRY_1011fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc60; body size 7 bytes.
#line 1 "ENTRY_1011fc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc70; body size 7 bytes.
#line 1 "ENTRY_1011fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc80; body size 7 bytes.
#line 1 "ENTRY_1011fc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fc90; body size 7 bytes.
#line 1 "ENTRY_1011fc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fc90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fca0; body size 7 bytes.
#line 1 "ENTRY_1011fca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fcb0; body size 7 bytes.
#line 1 "ENTRY_1011fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fcb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fcc0; body size 7 bytes.
#line 1 "ENTRY_1011fcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fcc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fcd0; body size 7 bytes.
#line 1 "ENTRY_1011fcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fcd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fce0; body size 7 bytes.
#line 1 "ENTRY_1011fce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fcf0; body size 7 bytes.
#line 1 "ENTRY_1011fcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fcf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd00; body size 7 bytes.
#line 1 "ENTRY_1011fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd10; body size 7 bytes.
#line 1 "ENTRY_1011fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd20; body size 7 bytes.
#line 1 "ENTRY_1011fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd30; body size 7 bytes.
#line 1 "ENTRY_1011fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd40; body size 7 bytes.
#line 1 "ENTRY_1011fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd50; body size 7 bytes.
#line 1 "ENTRY_1011fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd60; body size 7 bytes.
#line 1 "ENTRY_1011fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd80; body size 7 bytes.
#line 1 "ENTRY_1011fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fd90; body size 7 bytes.
#line 1 "ENTRY_1011fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fd90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIPlatformDateTimeProvider_vftable);
  return;
}


// Reference entry 1011fda0; body size 7 bytes.
#line 1 "ENTRY_1011fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fda0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fdb0; body size 7 bytes.
#line 1 "ENTRY_1011fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fdb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fdc0; body size 7 bytes.
#line 1 "ENTRY_1011fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fdd0; body size 7 bytes.
#line 1 "ENTRY_1011fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fdd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fde0; body size 7 bytes.
#line 1 "ENTRY_1011fde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fde0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fdf0; body size 7 bytes.
#line 1 "ENTRY_1011fdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fdf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe00; body size 7 bytes.
#line 1 "ENTRY_1011fe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe10; body size 7 bytes.
#line 1 "ENTRY_1011fe10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe20; body size 7 bytes.
#line 1 "ENTRY_1011fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe30; body size 7 bytes.
#line 1 "ENTRY_1011fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe40; body size 7 bytes.
#line 1 "ENTRY_1011fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe50; body size 7 bytes.
#line 1 "ENTRY_1011fe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe60; body size 7 bytes.
#line 1 "ENTRY_1011fe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe70; body size 7 bytes.
#line 1 "ENTRY_1011fe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe80; body size 7 bytes.
#line 1 "ENTRY_1011fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fe90; body size 7 bytes.
#line 1 "ENTRY_1011fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fe90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIUINotificationsDelegate_vftable);
  return;
}


// Reference entry 1011fea0; body size 7 bytes.
#line 1 "ENTRY_1011fea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011feb0; body size 7 bytes.
#line 1 "ENTRY_1011feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011feb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fec0; body size 7 bytes.
#line 1 "ENTRY_1011fec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fed0; body size 7 bytes.
#line 1 "ENTRY_1011fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fee0; body size 7 bytes.
#line 1 "ENTRY_1011fee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fef0; body size 7 bytes.
#line 1 "ENTRY_1011fef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011ff00; body size 7 bytes.
#line 1 "ENTRY_1011ff00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ff00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011ff10; body size 7 bytes.
#line 1 "ENTRY_1011ff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ff10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011ff20; body size 7 bytes.
#line 1 "ENTRY_1011ff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ff20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011ff30; body size 7 bytes.
#line 1 "ENTRY_1011ff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ff30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011ffd0; body size 7 bytes.
#line 1 "ENTRY_1011ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ffd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011ffe0; body size 7 bytes.
#line 1 "ENTRY_1011ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011ffe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 1011fff0; body size 7 bytes.
#line 1 "ENTRY_1011fff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1011fff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 10120000; body size 7 bytes.
#line 1 "ENTRY_10120000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 10120070; body size 7 bytes.
#line 1 "ENTRY_10120070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 10120080; body size 7 bytes.
#line 1 "ENTRY_10120080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 10120090; body size 7 bytes.
#line 1 "ENTRY_10120090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 101200a0; body size 7 bytes.
#line 1 "ENTRY_101200a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101200a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 10120120; body size 7 bytes.
#line 1 "ENTRY_10120120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibAssertionFailureCallback_vftable);
  return;
}


// Reference entry 10120130; body size 7 bytes.
#line 1 "ENTRY_10120130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibCallUIThreadCallback_vftable);
  return;
}


// Reference entry 10120140; body size 7 bytes.
#line 1 "ENTRY_10120140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120140(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibCustomSubWizardCallback_vftable);
  return;
}


// Reference entry 10120150; body size 7 bytes.
#line 1 "ENTRY_10120150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibDelegateFactory_vftable);
  return;
}


// Reference entry 10120160; body size 7 bytes.
#line 1 "ENTRY_10120160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibDiagnosticConsoleLogCallback_vftable);
  return;
}


// Reference entry 10120170; body size 7 bytes.
#line 1 "ENTRY_10120170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibDiagnosticExtraInfoCallback_vftable);
  return;
}


// Reference entry 10120180; body size 7 bytes.
#line 1 "ENTRY_10120180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120180(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibLogCallback_vftable);
  return;
}


// Reference entry 10120190; body size 7 bytes.
#line 1 "ENTRY_10120190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10120190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibPlatformStringCallback_vftable);
  return;
}


// Reference entry 101201a0; body size 7 bytes.
#line 1 "ENTRY_101201a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101201a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibSonarCallback_vftable);
  return;
}


// Reference entry 101201b0; body size 7 bytes.
#line 1 "ENTRY_101201b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101201b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLibTruncatedStringsCallback_vftable);
  return;
}


// Reference entry 10122460; body size 18 bytes.
#line 1 "ENTRY_10122460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10122460(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,8);
  }
  return;
}


// Reference entry 10122480; body size 3 bytes.
#line 1 "ENTRY_10122480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10122480(void)

{
  return;
}


// Reference entry 101224f0; body size 17 bytes.
#line 1 "ENTRY_101224f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101224f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_std_exception_vftable);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 10122510; body size 17 bytes.
#line 1 "ENTRY_10122510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10122510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_std_exception_vftable);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 10122530; body size 17 bytes.
#line 1 "ENTRY_10122530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10122530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_std_exception_vftable);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 10122550; body size 5 bytes.
#line 1 "ENTRY_10122550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10122550(undefined4 param_1,undefined4 param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_2);
}


// Reference entry 101225c0; body size 65 bytes.
#line 1 "ENTRY_101225c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101225c0(int *param_2)
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


// Reference entry 10122620; body size 65 bytes.
#line 1 "ENTRY_10122620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122620(int *param_2)
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


// Reference entry 10122680; body size 36 bytes.
#line 1 "ENTRY_10122680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122680(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101226b0; body size 36 bytes.
#line 1 "ENTRY_101226b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101226b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122700; body size 36 bytes.
#line 1 "ENTRY_10122700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122700(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122730; body size 36 bytes.
#line 1 "ENTRY_10122730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122730(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122760; body size 36 bytes.
#line 1 "ENTRY_10122760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122760(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122790; body size 36 bytes.
#line 1 "ENTRY_10122790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122790(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101227c0; body size 36 bytes.
#line 1 "ENTRY_101227c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101227c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101227f0; body size 36 bytes.
#line 1 "ENTRY_101227f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101227f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122820; body size 36 bytes.
#line 1 "ENTRY_10122820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122820(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122850; body size 36 bytes.
#line 1 "ENTRY_10122850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122850(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122880; body size 36 bytes.
#line 1 "ENTRY_10122880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122880(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101228b0; body size 36 bytes.
#line 1 "ENTRY_101228b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101228b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101228e0; body size 36 bytes.
#line 1 "ENTRY_101228e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101228e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122910; body size 36 bytes.
#line 1 "ENTRY_10122910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122910(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122940; body size 36 bytes.
#line 1 "ENTRY_10122940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122940(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122970; body size 36 bytes.
#line 1 "ENTRY_10122970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122970(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101229a0; body size 36 bytes.
#line 1 "ENTRY_101229a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101229a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101229d0; body size 36 bytes.
#line 1 "ENTRY_101229d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101229d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122a00; body size 36 bytes.
#line 1 "ENTRY_10122a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122a00(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122a30; body size 36 bytes.
#line 1 "ENTRY_10122a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122a30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122a60; body size 36 bytes.
#line 1 "ENTRY_10122a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122a60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122a90; body size 36 bytes.
#line 1 "ENTRY_10122a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122a90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122ae0; body size 36 bytes.
#line 1 "ENTRY_10122ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122ae0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122b10; body size 36 bytes.
#line 1 "ENTRY_10122b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122b10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122b40; body size 36 bytes.
#line 1 "ENTRY_10122b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122b40(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122b70; body size 36 bytes.
#line 1 "ENTRY_10122b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122b70(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122bc0; body size 36 bytes.
#line 1 "ENTRY_10122bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122bc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122bf0; body size 36 bytes.
#line 1 "ENTRY_10122bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122bf0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122c20; body size 36 bytes.
#line 1 "ENTRY_10122c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122c20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122c50; body size 36 bytes.
#line 1 "ENTRY_10122c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122c50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122c80; body size 36 bytes.
#line 1 "ENTRY_10122c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122c80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122cb0; body size 36 bytes.
#line 1 "ENTRY_10122cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122cb0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122ce0; body size 36 bytes.
#line 1 "ENTRY_10122ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122ce0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122d30; body size 36 bytes.
#line 1 "ENTRY_10122d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122d30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122d60; body size 36 bytes.
#line 1 "ENTRY_10122d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122d60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122d90; body size 36 bytes.
#line 1 "ENTRY_10122d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122d90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122dc0; body size 36 bytes.
#line 1 "ENTRY_10122dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122dc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122df0; body size 36 bytes.
#line 1 "ENTRY_10122df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122df0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122e20; body size 36 bytes.
#line 1 "ENTRY_10122e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122e20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122e50; body size 36 bytes.
#line 1 "ENTRY_10122e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122e50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122e80; body size 36 bytes.
#line 1 "ENTRY_10122e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122e80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122eb0; body size 36 bytes.
#line 1 "ENTRY_10122eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122eb0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122f00; body size 36 bytes.
#line 1 "ENTRY_10122f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122f00(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122f30; body size 36 bytes.
#line 1 "ENTRY_10122f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122f30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122f60; body size 36 bytes.
#line 1 "ENTRY_10122f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122f60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122f90; body size 36 bytes.
#line 1 "ENTRY_10122f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122f90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122fc0; body size 36 bytes.
#line 1 "ENTRY_10122fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122fc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10122ff0; body size 36 bytes.
#line 1 "ENTRY_10122ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10122ff0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123020; body size 36 bytes.
#line 1 "ENTRY_10123020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123020(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123050; body size 36 bytes.
#line 1 "ENTRY_10123050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123050(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123080; body size 36 bytes.
#line 1 "ENTRY_10123080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123080(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101230b0; body size 36 bytes.
#line 1 "ENTRY_101230b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101230b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101230e0; body size 36 bytes.
#line 1 "ENTRY_101230e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101230e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123110; body size 36 bytes.
#line 1 "ENTRY_10123110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123110(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123140; body size 36 bytes.
#line 1 "ENTRY_10123140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123140(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123170; body size 36 bytes.
#line 1 "ENTRY_10123170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123170(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101231c0; body size 36 bytes.
#line 1 "ENTRY_101231c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101231c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123210; body size 36 bytes.
#line 1 "ENTRY_10123210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123210(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123260; body size 36 bytes.
#line 1 "ENTRY_10123260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123260(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123290; body size 36 bytes.
#line 1 "ENTRY_10123290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123290(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101232c0; body size 36 bytes.
#line 1 "ENTRY_101232c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101232c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101232f0; body size 36 bytes.
#line 1 "ENTRY_101232f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101232f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123340; body size 36 bytes.
#line 1 "ENTRY_10123340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123340(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123370; body size 36 bytes.
#line 1 "ENTRY_10123370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123370(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101233a0; body size 36 bytes.
#line 1 "ENTRY_101233a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101233a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101233d0; body size 36 bytes.
#line 1 "ENTRY_101233d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101233d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123400; body size 36 bytes.
#line 1 "ENTRY_10123400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123400(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123430; body size 36 bytes.
#line 1 "ENTRY_10123430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123430(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123460; body size 36 bytes.
#line 1 "ENTRY_10123460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123460(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101234b0; body size 36 bytes.
#line 1 "ENTRY_101234b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101234b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101234e0; body size 36 bytes.
#line 1 "ENTRY_101234e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101234e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123510; body size 36 bytes.
#line 1 "ENTRY_10123510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123510(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123540; body size 36 bytes.
#line 1 "ENTRY_10123540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123540(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123570; body size 36 bytes.
#line 1 "ENTRY_10123570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123570(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101235a0; body size 36 bytes.
#line 1 "ENTRY_101235a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101235a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101235d0; body size 36 bytes.
#line 1 "ENTRY_101235d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101235d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123600; body size 36 bytes.
#line 1 "ENTRY_10123600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123600(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123630; body size 36 bytes.
#line 1 "ENTRY_10123630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123630(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123660; body size 36 bytes.
#line 1 "ENTRY_10123660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123660(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123690; body size 36 bytes.
#line 1 "ENTRY_10123690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123690(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101236c0; body size 36 bytes.
#line 1 "ENTRY_101236c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101236c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101236f0; body size 36 bytes.
#line 1 "ENTRY_101236f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101236f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123720; body size 36 bytes.
#line 1 "ENTRY_10123720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123720(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123750; body size 36 bytes.
#line 1 "ENTRY_10123750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123750(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123780; body size 36 bytes.
#line 1 "ENTRY_10123780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123780(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101237b0; body size 36 bytes.
#line 1 "ENTRY_101237b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101237b0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101237e0; body size 36 bytes.
#line 1 "ENTRY_101237e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101237e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123810; body size 36 bytes.
#line 1 "ENTRY_10123810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123810(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123840; body size 36 bytes.
#line 1 "ENTRY_10123840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123840(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123870; body size 36 bytes.
#line 1 "ENTRY_10123870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123870(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101238a0; body size 36 bytes.
#line 1 "ENTRY_101238a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101238a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101238d0; body size 36 bytes.
#line 1 "ENTRY_101238d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101238d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123900; body size 36 bytes.
#line 1 "ENTRY_10123900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123900(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123930; body size 36 bytes.
#line 1 "ENTRY_10123930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123930(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123960; body size 36 bytes.
#line 1 "ENTRY_10123960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123960(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123990; body size 36 bytes.
#line 1 "ENTRY_10123990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123990(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101239c0; body size 36 bytes.
#line 1 "ENTRY_101239c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101239c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101239f0; body size 36 bytes.
#line 1 "ENTRY_101239f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101239f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123a20; body size 36 bytes.
#line 1 "ENTRY_10123a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123a20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123a50; body size 36 bytes.
#line 1 "ENTRY_10123a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123a50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123a80; body size 36 bytes.
#line 1 "ENTRY_10123a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123a80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123ad0; body size 36 bytes.
#line 1 "ENTRY_10123ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123ad0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123b00; body size 36 bytes.
#line 1 "ENTRY_10123b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123b00(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123b30; body size 36 bytes.
#line 1 "ENTRY_10123b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123b30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123b60; body size 36 bytes.
#line 1 "ENTRY_10123b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123b60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123b90; body size 36 bytes.
#line 1 "ENTRY_10123b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123b90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123bc0; body size 36 bytes.
#line 1 "ENTRY_10123bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123bc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123bf0; body size 36 bytes.
#line 1 "ENTRY_10123bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123bf0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123c20; body size 36 bytes.
#line 1 "ENTRY_10123c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123c20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123c50; body size 36 bytes.
#line 1 "ENTRY_10123c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123c50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123c80; body size 36 bytes.
#line 1 "ENTRY_10123c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123c80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123cb0; body size 36 bytes.
#line 1 "ENTRY_10123cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123cb0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123ce0; body size 36 bytes.
#line 1 "ENTRY_10123ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123ce0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123d10; body size 36 bytes.
#line 1 "ENTRY_10123d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123d10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123d40; body size 36 bytes.
#line 1 "ENTRY_10123d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123d40(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123d70; body size 36 bytes.
#line 1 "ENTRY_10123d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123d70(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123da0; body size 36 bytes.
#line 1 "ENTRY_10123da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123da0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123dd0; body size 36 bytes.
#line 1 "ENTRY_10123dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123dd0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123e00; body size 36 bytes.
#line 1 "ENTRY_10123e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123e00(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123e30; body size 36 bytes.
#line 1 "ENTRY_10123e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123e30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123e60; body size 36 bytes.
#line 1 "ENTRY_10123e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123e60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123e90; body size 36 bytes.
#line 1 "ENTRY_10123e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123e90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123ec0; body size 36 bytes.
#line 1 "ENTRY_10123ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123ec0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123ef0; body size 36 bytes.
#line 1 "ENTRY_10123ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123ef0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123f40; body size 36 bytes.
#line 1 "ENTRY_10123f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123f40(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123f90; body size 36 bytes.
#line 1 "ENTRY_10123f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123f90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123fc0; body size 36 bytes.
#line 1 "ENTRY_10123fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123fc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10123ff0; body size 36 bytes.
#line 1 "ENTRY_10123ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10123ff0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124020; body size 36 bytes.
#line 1 "ENTRY_10124020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10124020(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124050; body size 36 bytes.
#line 1 "ENTRY_10124050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10124050(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101240a0; body size 36 bytes.
#line 1 "ENTRY_101240a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101240a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101240d0; body size 36 bytes.
#line 1 "ENTRY_101240d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101240d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124100; body size 36 bytes.
#line 1 "ENTRY_10124100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10124100(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124150; body size 36 bytes.
#line 1 "ENTRY_10124150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10124150(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101241a0; body size 36 bytes.
#line 1 "ENTRY_101241a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101241a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101241d0; body size 36 bytes.
#line 1 "ENTRY_101241d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101241d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124200; body size 36 bytes.
#line 1 "ENTRY_10124200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10124200(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124230; body size 36 bytes.
#line 1 "ENTRY_10124230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10124230(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124260; body size 36 bytes.
#line 1 "ENTRY_10124260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10124260(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124290; body size 36 bytes.
#line 1 "ENTRY_10124290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10124290(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101242c0; body size 36 bytes.
#line 1 "ENTRY_101242c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101242c0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101242f0; body size 76 bytes.
#line 1 "ENTRY_101242f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101242f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(8));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *puVar2 = (undefined4)(*param_2);
    puVar2[1] = param_2[1];
  }
  iVar1 = (int)(*param_1);
  *param_1 = (int)(0);
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,8);
  }
  *param_1 = (int)((int)puVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124350; body size 172 bytes.
#line 1 "ENTRY_10124350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10124350(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_2);
  if (param_1 != (undefined4 *)(param_2)) {
    if (param_1[2] != 0) {
      piVar1 = (int *)(param_1 + 1);
      thunk_FUN_101170a0(piVar1,param_1[1]);
      *(int *)*piVar1 = (int)(*piVar1);
      *(int *)(*piVar1 + 4) = *piVar1;
      param_1[2] = 0;
      param_2 = (undefined4 *)((undefined4 *)*piVar1);
      thunk_FUN_10117950(param_1[3],param_1[4],&param_2);
    }
    *param_1 = (undefined4)(*puVar3);
    uVar2 = (undefined4)(param_1[1]);
    param_1[1] = puVar3[1];
    puVar3[1] = uVar2;
    uVar2 = (undefined4)(param_1[2]);
    param_1[2] = puVar3[2];
    puVar3[2] = uVar2;
    uVar2 = (undefined4)(param_1[3]);
    param_1[3] = puVar3[3];
    puVar3[3] = uVar2;
    uVar2 = (undefined4)(param_1[4]);
    param_1[4] = puVar3[4];
    puVar3[4] = uVar2;
    uVar2 = (undefined4)(param_1[5]);
    param_1[5] = puVar3[5];
    puVar3[5] = uVar2;
    uVar2 = (undefined4)(param_1[6]);
    param_1[6] = puVar3[6];
    puVar3[6] = uVar2;
    uVar2 = (undefined4)(param_1[7]);
    param_1[7] = puVar3[7];
    puVar3[7] = uVar2;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10124430; body size 172 bytes.
#line 1 "ENTRY_10124430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10124430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_2);
  if (param_1 != (undefined4 *)(param_2)) {
    if (param_1[2] != 0) {
      piVar1 = (int *)(param_1 + 1);
      thunk_FUN_101170a0(piVar1,param_1[1]);
      *(int *)*piVar1 = (int)(*piVar1);
      *(int *)(*piVar1 + 4) = *piVar1;
      param_1[2] = 0;
      param_2 = (undefined4 *)((undefined4 *)*piVar1);
      thunk_FUN_10117950(param_1[3],param_1[4],&param_2);
    }
    *param_1 = (undefined4)(*puVar3);
    uVar2 = (undefined4)(param_1[1]);
    param_1[1] = puVar3[1];
    puVar3[1] = uVar2;
    uVar2 = (undefined4)(param_1[2]);
    param_1[2] = puVar3[2];
    puVar3[2] = uVar2;
    uVar2 = (undefined4)(param_1[3]);
    param_1[3] = puVar3[3];
    puVar3[3] = uVar2;
    uVar2 = (undefined4)(param_1[4]);
    param_1[4] = puVar3[4];
    puVar3[4] = uVar2;
    uVar2 = (undefined4)(param_1[5]);
    param_1[5] = puVar3[5];
    puVar3[5] = uVar2;
    uVar2 = (undefined4)(param_1[6]);
    param_1[6] = puVar3[6];
    puVar3[6] = uVar2;
    uVar2 = (undefined4)(param_1[7]);
    param_1[7] = puVar3[7];
    puVar3[7] = uVar2;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10124df0; body size 14 bytes.
#line 1 "ENTRY_10124df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10124df0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10124ea0; body size 3 bytes.
#line 1 "ENTRY_10124ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10124ea0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10124eb0; body size 3 bytes.
#line 1 "ENTRY_10124eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10124eb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10124ec0; body size 3 bytes.
#line 1 "ENTRY_10124ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10124ec0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10124ed0; body size 3 bytes.
#line 1 "ENTRY_10124ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10124ed0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10124f40; body size 6 bytes.
#line 1 "ENTRY_10124f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10124f40(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10124f50; body size 9 bytes.
#line 1 "ENTRY_10124f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10124f50(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10124f60; body size 10 bytes.
#line 1 "ENTRY_10124f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10124f60(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10124f70; body size 33 bytes.
#line 1 "ENTRY_10124f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10124f70(void *param_1,size_t param_2,void *param_3)

{
  memcpy(param_1,param_3,param_2);
  *(undefined1 *)((int)param_1 + param_2) = 0;
  return;
}


// Reference entry 10124fa0; body size 50 bytes.
#line 1 "ENTRY_10124fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10124fa0(void *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  memcpy(param_1,param_2,param_3);
  memcpy((void *)(param_3 + (int)param_1),param_4,param_5);
  *(undefined1 *)((int)(param_3 + (int)param_1) + param_5) = 0;
  return;
}


// Reference entry 10124fe0; body size 16 bytes.
#line 1 "ENTRY_10124fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10124fe0(SCStr *param_1,SCStr *param_2)

{
  ((Stub_SCStr *)(param_1))->op_eq(param_2);
  return;
}


// Reference entry 10125000; body size 12 bytes.
#line 1 "ENTRY_10125000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10125000(SCStr *param_1)

{
  ((Stub_SCStr *)(param_1))->hash();
  return;
}


// Reference entry 10125e40; body size 33 bytes.
#line 1 "ENTRY_10125e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10125e40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10126700; body size 27 bytes.
#line 1 "ENTRY_10126700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10126700(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101296c0; body size 35 bytes.
#line 1 "ENTRY_101296c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101296c0(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = (int)(*param_2 + 0x23);
  iVar1 = (int)(*(int *)(*param_1 + -4));
  if ((*param_1 - iVar1) - 4U < 0x20) {
    *param_1 = (int)(iVar1);
    return;
  }
                    
                    
                    
  _invalid_parameter_noinfo_noreturn();
  return;
}


// Reference entry 101296f0; body size 3 bytes.
#line 1 "ENTRY_101296f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101296f0(void)

{
  return;
}


// Reference entry 10129700; body size 3 bytes.
#line 1 "ENTRY_10129700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10129700(void)

{
  return;
}


// Reference entry 10129710; body size 22 bytes.
#line 1 "ENTRY_10129710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10129710(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0xc));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10129750; body size 5 bytes.
#line 1 "ENTRY_10129750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = (void *)(malloc(param_1));
    if (pvVar2 != (void *)0x0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
    }
    iVar1 = (int)(_callnewh(param_1));
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    pvVar2 = (void *)((void *)thunk_FUN_1148c928());
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
  }
  pvVar2 = (void *)((void *)FUN_1148c94c());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
}


// Reference entry 10129880; body size 52 bytes.
#line 1 "ENTRY_10129880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10129880(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  param_2 = (uint)(param_2 | 0xf);
  uVar2 = (uint)(*(uint *)(param_1 + 0x14));
  uVar1 = (uint)(0x7fffffff);
  if (param_2 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x7fffffff);
    }
    uVar2 = (uint)((uVar2 >> 1) + uVar2);
    uVar1 = (uint)(param_2);
    if (param_2 < uVar2) {
      uVar1 = (uint)(uVar2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 101298d0; body size 51 bytes.
#line 1 "ENTRY_101298d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_101298d0(uint param_1,uint param_2,uint param_3)

{
  param_1 = (uint)(param_1 | 0xf);
  if (param_1 <= param_3) {
    if (param_2 <= param_3 - (param_2 >> 1)) {
      param_2 = (uint)((param_2 >> 1) + param_2);
      if (param_1 < param_2) {
        param_1 = (uint)(param_2);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_3);
}


// Reference entry 10129910; body size 13 bytes.
#line 1 "ENTRY_10129910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10129910(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 - 1U | 1);
  iVar1 = (int)(0x1f);
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + 1);
}


// Reference entry 10129920; body size 20 bytes.
#line 1 "ENTRY_10129920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10129920(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x15555555) {
    return;
  }
                    
  ((Stub_std *)("unordered_map/set too long"))->_Xlength_error();
}


// Reference entry 10129940; body size 66 bytes.
#line 1 "ENTRY_10129940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10129940(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 101299a0; body size 101 bytes.
#line 1 "ENTRY_101299a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101299a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Dst;
  uint uVar5;
  
  uVar1 = (uint)(param_2[4]);
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)((undefined4 *)*param_2);
  }
  if (uVar1 < 0x10) {
    uVar2 = (undefined4)(param_2[1]);
    uVar3 = (undefined4)(param_2[2]);
    uVar4 = (undefined4)(param_2[3]);
    *param_1 = (undefined4)(*param_2);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar1;
    param_1[5] = 0xf;
    return;
  }
  uVar5 = (uint)(uVar1 | 0xf);
  if (0x7fffffff < uVar5) {
    uVar5 = (uint)(0x7fffffff);
  }
  _Dst = (void *)((void *)thunk_FUN_1012cab0(uVar5 + 1));
  *param_1 = (undefined4)(_Dst);
  memcpy(_Dst,param_2,uVar1 + 1);
  param_1[4] = uVar1;
  param_1[5] = uVar5;
  return;
}


// Reference entry 10129ad0; body size 5 bytes.
#line 1 "ENTRY_10129ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10129ad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129ae0; body size 11 bytes.
#line 1 "ENTRY_10129ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10129ae0(uint param_1)

{
  int iVar1;
  
  iVar1 = (int)(0x1f);
  if ((param_1 | 1) != 0) {
    for (; (param_1 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 10129d10; body size 3 bytes.
#line 1 "ENTRY_10129d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129d20; body size 3 bytes.
#line 1 "ENTRY_10129d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129d30; body size 3 bytes.
#line 1 "ENTRY_10129d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129d40; body size 3 bytes.
#line 1 "ENTRY_10129d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129d50; body size 3 bytes.
#line 1 "ENTRY_10129d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129d60; body size 3 bytes.
#line 1 "ENTRY_10129d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129d70; body size 3 bytes.
#line 1 "ENTRY_10129d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129d80; body size 3 bytes.
#line 1 "ENTRY_10129d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129d90; body size 3 bytes.
#line 1 "ENTRY_10129d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129d90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129da0; body size 3 bytes.
#line 1 "ENTRY_10129da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129da0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129db0; body size 4 bytes.
#line 1 "ENTRY_10129db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10129db0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 10129dc0; body size 3 bytes.
#line 1 "ENTRY_10129dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129dc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129dd0; body size 3 bytes.
#line 1 "ENTRY_10129dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129dd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129de0; body size 3 bytes.
#line 1 "ENTRY_10129de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129de0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129df0; body size 3 bytes.
#line 1 "ENTRY_10129df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129df0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129e80; body size 5 bytes.
#line 1 "ENTRY_10129e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10129e80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129e90; body size 8 bytes.
#line 1 "ENTRY_10129e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10129e90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(0xf < *(uint *)(param_1 + 0x14));
}


// Reference entry 10129ea0; body size 13 bytes.
#line 1 "ENTRY_10129ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10129ea0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10129eb0; body size 3 bytes.
#line 1 "ENTRY_10129eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129eb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129ec0; body size 3 bytes.
#line 1 "ENTRY_10129ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10129ec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10129ed0; body size 23 bytes.
#line 1 "ENTRY_10129ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10129ed0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  return;
}


// Reference entry 10129f60; body size 162 bytes.
#line 1 "ENTRY_10129f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10129f60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puStack_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)(param_1 + 1);
    puStack_4 = (undefined4 *)(param_1);
    thunk_FUN_101170a0(piVar1,param_1[1]);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    param_1[2] = 0;
    puStack_4 = (undefined4 *)((undefined4 *)*piVar1);
    thunk_FUN_10117950(param_1[3],param_1[4],&puStack_4);
  }
  *param_1 = (undefined4)(*param_2);
  uVar2 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  uVar2 = (undefined4)(param_1[2]);
  param_1[2] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = (undefined4)(param_1[3]);
  param_1[3] = param_2[3];
  param_2[3] = uVar2;
  uVar2 = (undefined4)(param_1[4]);
  param_1[4] = param_2[4];
  param_2[4] = uVar2;
  uVar2 = (undefined4)(param_1[5]);
  param_1[5] = param_2[5];
  param_2[5] = uVar2;
  uVar2 = (undefined4)(param_1[6]);
  param_1[6] = param_2[6];
  param_2[6] = uVar2;
  uVar2 = (undefined4)(param_1[7]);
  param_1[7] = param_2[7];
  param_2[7] = uVar2;
  return;
}


// Reference entry 1012a030; body size 12 bytes.
#line 1 "ENTRY_1012a030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1012a030(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)*param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1012a040; body size 12 bytes.
#line 1 "ENTRY_1012a040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1012a040(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)*param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1012a050; body size 3 bytes.
#line 1 "ENTRY_1012a050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a050(void)

{
  return;
}


// Reference entry 1012a060; body size 3 bytes.
#line 1 "ENTRY_1012a060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a060(void)

{
  return;
}


// Reference entry 1012a070; body size 3 bytes.
#line 1 "ENTRY_1012a070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a070(void)

{
  return;
}


// Reference entry 1012a130; body size 11 bytes.
#line 1 "ENTRY_1012a130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1012a130(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1012a140; body size 6 bytes.
#line 1 "ENTRY_1012a140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1012a140(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1012a150; body size 3 bytes.
#line 1 "ENTRY_1012a150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a150(void)

{
  return;
}


// Reference entry 1012a160; body size 3 bytes.
#line 1 "ENTRY_1012a160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a160(void)

{
  return;
}


// Reference entry 1012a170; body size 97 bytes.
#line 1 "ENTRY_1012a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a170(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  return;
}


// Reference entry 1012a1f0; body size 45 bytes.
#line 1 "ENTRY_1012a1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = (undefined4)(param_1[2]);
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}


// Reference entry 1012a230; body size 33 bytes.
#line 1 "ENTRY_1012a230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a230(undefined4 *param_2)
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


// Reference entry 1012a3c0; body size 18 bytes.
#line 1 "ENTRY_1012a3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1012a3c0(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 1012a3e0; body size 14 bytes.
#line 1 "ENTRY_1012a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a3e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 1012a400; body size 14 bytes.
#line 1 "ENTRY_1012a400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a400(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 1012a420; body size 13 bytes.
#line 1 "ENTRY_1012a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1012a430; body size 13 bytes.
#line 1 "ENTRY_1012a430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1012a440; body size 12 bytes.
#line 1 "ENTRY_1012a440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a440(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1012a450; body size 12 bytes.
#line 1 "ENTRY_1012a450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a450(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1012a460; body size 11 bytes.
#line 1 "ENTRY_1012a460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a460(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1012a470; body size 11 bytes.
#line 1 "ENTRY_1012a470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1012a470(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1012a480; body size 43 bytes.
#line 1 "ENTRY_1012a480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012a480(int param_1,int param_2,int param_3)

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
  *(int **)(param_1 + 4) = piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)(param_2 + 4) = piVar3;
  return;
}


// Reference entry 1012cb20; body size 90 bytes.
#line 1 "ENTRY_1012cb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1012cb20(uint param_1)

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


// Reference entry 1012cba0; body size 87 bytes.
#line 1 "ENTRY_1012cba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1012cba0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
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


// Reference entry 1012cc10; body size 330 bytes.
#line 1 "ENTRY_1012cc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1012cc10(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  size_t _Size;
  uint uVar2;
  void *_Src;
  undefined4 *puVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  void *pvVar6;
  char *pcVar7;
  uint _Size_00;
  
  pcVar7 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar7);
    pcVar7 = (char *)(pcVar7 + 1);
  } while (cVar1 != '\0');
  _Size = (size_t)(param_1[4]);
  _Size_00 = (uint)((int)pcVar7 - (int)(param_2 + 1));
  uVar2 = (uint)(param_1[5]);
  if (_Size_00 <= uVar2 - _Size) {
    param_1[4] = _Size_00 + _Size;
    puVar3 = (undefined4 *)(param_1);
    if (0xf < uVar2) {
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }
    memmove((void *)((int)puVar3 + _Size),param_2,_Size_00);
    *(undefined1 *)((int)((int)puVar3 + _Size) + _Size_00) = 0;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  if (0x7fffffff - _Size < _Size_00) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar5 = (uint)(_Size_00 + _Size | 0xf);
  if (uVar5 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar5 = (uint)(0x7fffffff);
    }
    else {
      uVar4 = (uint)((uVar2 >> 1) + uVar2);
      if (uVar5 < uVar4) {
        uVar5 = (uint)(uVar4);
      }
    }
  }
  else {
    uVar5 = (uint)(0x7fffffff);
  }
  _Dst = (void *)((void *)thunk_FUN_1012cab0(uVar5 + 1));
  param_1[5] = uVar5;
  pvVar6 = (void *)((void *)((int)_Dst + _Size));
  param_1[4] = _Size_00 + _Size;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memcpy(pvVar6,param_2,_Size_00);
    *(undefined1 *)((int)pvVar6 + _Size_00) = 0;
    *param_1 = (undefined4)(_Dst);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,_Size);
  memcpy(pvVar6,param_2,_Size_00);
  uVar5 = (uint)(uVar2 + 1);
  *(undefined1 *)(_Size_00 + (int)pvVar6) = 0;
  pvVar6 = (void *)(_Src);
  if (0xfff < uVar5) {
    pvVar6 = (void *)(*(void **)((int)_Src + -4));
    uVar5 = (uint)(uVar2 + 0x24);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar6))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar6,uVar5);
  *param_1 = (undefined4)(_Dst);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1012d0f0; body size 13 bytes.
#line 1 "ENTRY_1012d0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1012d0f0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = (undefined1)(*param_2);
  return;
}


// Reference entry 1012d100; body size 39 bytes.
#line 1 "ENTRY_1012d100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1012d100(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


// Reference entry 1012d300; body size 4 bytes.
#line 1 "ENTRY_1012d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1012d300(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 1012da90; body size 68 bytes.
#line 1 "ENTRY_1012da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1012da90(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_101170a0(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10117950(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 1012ddb0; body size 25 bytes.
#line 1 "ENTRY_1012ddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1012ddb0(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(param_1);
}


// Reference entry 101307c0; body size 57 bytes.
#line 1 "ENTRY_101307c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101307c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0xc);
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


// Reference entry 10130860; body size 60 bytes.
#line 1 "ENTRY_10130860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10130860(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0xc);
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


// Reference entry 101308b0; body size 61 bytes.
#line 1 "ENTRY_101308b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101308b0(int param_1,int param_2)

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


// Reference entry 10130960; body size 9 bytes.
#line 1 "ENTRY_10130960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130960(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130970; body size 9 bytes.
#line 1 "ENTRY_10130970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130970(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130980; body size 9 bytes.
#line 1 "ENTRY_10130980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130980(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130990; body size 9 bytes.
#line 1 "ENTRY_10130990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130990(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101309a0; body size 9 bytes.
#line 1 "ENTRY_101309a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101309b0; body size 9 bytes.
#line 1 "ENTRY_101309b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101309c0; body size 9 bytes.
#line 1 "ENTRY_101309c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101309d0; body size 9 bytes.
#line 1 "ENTRY_101309d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101309e0; body size 9 bytes.
#line 1 "ENTRY_101309e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101309f0; body size 9 bytes.
#line 1 "ENTRY_101309f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101309f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a00; body size 9 bytes.
#line 1 "ENTRY_10130a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a10; body size 9 bytes.
#line 1 "ENTRY_10130a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a20; body size 9 bytes.
#line 1 "ENTRY_10130a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a30; body size 9 bytes.
#line 1 "ENTRY_10130a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a40; body size 9 bytes.
#line 1 "ENTRY_10130a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a50; body size 9 bytes.
#line 1 "ENTRY_10130a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a60; body size 9 bytes.
#line 1 "ENTRY_10130a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a70; body size 9 bytes.
#line 1 "ENTRY_10130a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a80; body size 9 bytes.
#line 1 "ENTRY_10130a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130a90; body size 9 bytes.
#line 1 "ENTRY_10130a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130a90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130aa0; body size 9 bytes.
#line 1 "ENTRY_10130aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130aa0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ab0; body size 9 bytes.
#line 1 "ENTRY_10130ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ab0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ac0; body size 9 bytes.
#line 1 "ENTRY_10130ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ad0; body size 9 bytes.
#line 1 "ENTRY_10130ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ad0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ae0; body size 9 bytes.
#line 1 "ENTRY_10130ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ae0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130af0; body size 9 bytes.
#line 1 "ENTRY_10130af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130af0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b00; body size 9 bytes.
#line 1 "ENTRY_10130b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b10; body size 9 bytes.
#line 1 "ENTRY_10130b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b20; body size 9 bytes.
#line 1 "ENTRY_10130b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b30; body size 9 bytes.
#line 1 "ENTRY_10130b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b40; body size 9 bytes.
#line 1 "ENTRY_10130b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b50; body size 9 bytes.
#line 1 "ENTRY_10130b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b60; body size 9 bytes.
#line 1 "ENTRY_10130b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b70; body size 9 bytes.
#line 1 "ENTRY_10130b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b80; body size 9 bytes.
#line 1 "ENTRY_10130b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130b90; body size 9 bytes.
#line 1 "ENTRY_10130b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130b90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ba0; body size 9 bytes.
#line 1 "ENTRY_10130ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ba0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130bb0; body size 9 bytes.
#line 1 "ENTRY_10130bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130bb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130bc0; body size 9 bytes.
#line 1 "ENTRY_10130bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130bc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130bd0; body size 9 bytes.
#line 1 "ENTRY_10130bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130bd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130be0; body size 9 bytes.
#line 1 "ENTRY_10130be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130be0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130bf0; body size 9 bytes.
#line 1 "ENTRY_10130bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130bf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c00; body size 9 bytes.
#line 1 "ENTRY_10130c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c10; body size 9 bytes.
#line 1 "ENTRY_10130c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c20; body size 9 bytes.
#line 1 "ENTRY_10130c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c30; body size 9 bytes.
#line 1 "ENTRY_10130c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c40; body size 9 bytes.
#line 1 "ENTRY_10130c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c50; body size 9 bytes.
#line 1 "ENTRY_10130c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c60; body size 9 bytes.
#line 1 "ENTRY_10130c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c70; body size 9 bytes.
#line 1 "ENTRY_10130c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c80; body size 9 bytes.
#line 1 "ENTRY_10130c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130c90; body size 9 bytes.
#line 1 "ENTRY_10130c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130c90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ca0; body size 9 bytes.
#line 1 "ENTRY_10130ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ca0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130cb0; body size 9 bytes.
#line 1 "ENTRY_10130cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130cb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130cc0; body size 9 bytes.
#line 1 "ENTRY_10130cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130cc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130cd0; body size 9 bytes.
#line 1 "ENTRY_10130cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130cd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ce0; body size 9 bytes.
#line 1 "ENTRY_10130ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ce0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130cf0; body size 9 bytes.
#line 1 "ENTRY_10130cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130cf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d00; body size 9 bytes.
#line 1 "ENTRY_10130d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d10; body size 9 bytes.
#line 1 "ENTRY_10130d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d20; body size 9 bytes.
#line 1 "ENTRY_10130d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d30; body size 9 bytes.
#line 1 "ENTRY_10130d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d40; body size 9 bytes.
#line 1 "ENTRY_10130d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d50; body size 9 bytes.
#line 1 "ENTRY_10130d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d60; body size 9 bytes.
#line 1 "ENTRY_10130d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d70; body size 9 bytes.
#line 1 "ENTRY_10130d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d80; body size 9 bytes.
#line 1 "ENTRY_10130d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130d90; body size 9 bytes.
#line 1 "ENTRY_10130d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130d90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130da0; body size 9 bytes.
#line 1 "ENTRY_10130da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130da0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130db0; body size 9 bytes.
#line 1 "ENTRY_10130db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130db0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130dc0; body size 9 bytes.
#line 1 "ENTRY_10130dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130dc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130dd0; body size 9 bytes.
#line 1 "ENTRY_10130dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130dd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130de0; body size 9 bytes.
#line 1 "ENTRY_10130de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130de0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130df0; body size 9 bytes.
#line 1 "ENTRY_10130df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130df0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e00; body size 9 bytes.
#line 1 "ENTRY_10130e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e10; body size 9 bytes.
#line 1 "ENTRY_10130e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e20; body size 9 bytes.
#line 1 "ENTRY_10130e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e30; body size 9 bytes.
#line 1 "ENTRY_10130e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e40; body size 9 bytes.
#line 1 "ENTRY_10130e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e50; body size 9 bytes.
#line 1 "ENTRY_10130e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e60; body size 9 bytes.
#line 1 "ENTRY_10130e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e70; body size 9 bytes.
#line 1 "ENTRY_10130e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e80; body size 9 bytes.
#line 1 "ENTRY_10130e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130e90; body size 9 bytes.
#line 1 "ENTRY_10130e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130e90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ea0; body size 9 bytes.
#line 1 "ENTRY_10130ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ea0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130eb0; body size 9 bytes.
#line 1 "ENTRY_10130eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130eb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ec0; body size 9 bytes.
#line 1 "ENTRY_10130ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ec0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ed0; body size 9 bytes.
#line 1 "ENTRY_10130ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ed0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ee0; body size 9 bytes.
#line 1 "ENTRY_10130ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ee0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ef0; body size 9 bytes.
#line 1 "ENTRY_10130ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ef0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f00; body size 9 bytes.
#line 1 "ENTRY_10130f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f10; body size 9 bytes.
#line 1 "ENTRY_10130f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f20; body size 9 bytes.
#line 1 "ENTRY_10130f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f30; body size 9 bytes.
#line 1 "ENTRY_10130f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f40; body size 9 bytes.
#line 1 "ENTRY_10130f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f50; body size 9 bytes.
#line 1 "ENTRY_10130f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f60; body size 9 bytes.
#line 1 "ENTRY_10130f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f70; body size 9 bytes.
#line 1 "ENTRY_10130f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f80; body size 9 bytes.
#line 1 "ENTRY_10130f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130f90; body size 9 bytes.
#line 1 "ENTRY_10130f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130f90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130fa0; body size 9 bytes.
#line 1 "ENTRY_10130fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fa0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130fb0; body size 9 bytes.
#line 1 "ENTRY_10130fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130fc0; body size 9 bytes.
#line 1 "ENTRY_10130fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130fd0; body size 9 bytes.
#line 1 "ENTRY_10130fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130fe0; body size 9 bytes.
#line 1 "ENTRY_10130fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130fe0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10130ff0; body size 9 bytes.
#line 1 "ENTRY_10130ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10130ff0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131000; body size 9 bytes.
#line 1 "ENTRY_10131000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131000(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131010; body size 9 bytes.
#line 1 "ENTRY_10131010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131010(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131020; body size 9 bytes.
#line 1 "ENTRY_10131020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131020(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131030; body size 9 bytes.
#line 1 "ENTRY_10131030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131030(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131040; body size 9 bytes.
#line 1 "ENTRY_10131040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131040(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131050; body size 9 bytes.
#line 1 "ENTRY_10131050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131050(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131060; body size 9 bytes.
#line 1 "ENTRY_10131060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131060(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131070; body size 9 bytes.
#line 1 "ENTRY_10131070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131070(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131080; body size 9 bytes.
#line 1 "ENTRY_10131080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131080(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131090; body size 9 bytes.
#line 1 "ENTRY_10131090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131090(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101310a0; body size 9 bytes.
#line 1 "ENTRY_101310a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101310b0; body size 9 bytes.
#line 1 "ENTRY_101310b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101310c0; body size 9 bytes.
#line 1 "ENTRY_101310c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101310d0; body size 9 bytes.
#line 1 "ENTRY_101310d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101310e0; body size 9 bytes.
#line 1 "ENTRY_101310e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101310f0; body size 9 bytes.
#line 1 "ENTRY_101310f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101310f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131100; body size 9 bytes.
#line 1 "ENTRY_10131100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131100(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131110; body size 9 bytes.
#line 1 "ENTRY_10131110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131110(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131120; body size 9 bytes.
#line 1 "ENTRY_10131120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131120(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131130; body size 9 bytes.
#line 1 "ENTRY_10131130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131130(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131140; body size 9 bytes.
#line 1 "ENTRY_10131140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131140(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131150; body size 9 bytes.
#line 1 "ENTRY_10131150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131150(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131160; body size 9 bytes.
#line 1 "ENTRY_10131160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131160(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131170; body size 9 bytes.
#line 1 "ENTRY_10131170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131170(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131180; body size 9 bytes.
#line 1 "ENTRY_10131180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131180(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131190; body size 9 bytes.
#line 1 "ENTRY_10131190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131190(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101311a0; body size 9 bytes.
#line 1 "ENTRY_101311a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101311b0; body size 9 bytes.
#line 1 "ENTRY_101311b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101311c0; body size 9 bytes.
#line 1 "ENTRY_101311c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101311d0; body size 9 bytes.
#line 1 "ENTRY_101311d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101311e0; body size 9 bytes.
#line 1 "ENTRY_101311e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101311f0; body size 9 bytes.
#line 1 "ENTRY_101311f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101311f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131200; body size 9 bytes.
#line 1 "ENTRY_10131200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131200(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131210; body size 9 bytes.
#line 1 "ENTRY_10131210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131210(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10131220; body size 9 bytes.
#line 1 "ENTRY_10131220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10131220(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10139370; body size 6 bytes.
#line 1 "ENTRY_10139370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10139370(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINowPlaying");
}


// Reference entry 10139380; body size 6 bytes.
#line 1 "ENTRY_10139380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10139380(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCISystem");
}


// Reference entry 10139390; body size 6 bytes.
#line 1 "ENTRY_10139390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10139390(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIZoneGroupMgr");
}


// Reference entry 1013a500; body size 17 bytes.
#line 1 "ENTRY_1013a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1013a500(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(param_1 + 1);
  do {
    cVar2 = (char)(*param_1);
    param_1 = (char *)(param_1 + 1);
  } while (cVar2 != '\0');
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((int)param_1 - (int)pcVar1);
}


// Reference entry 1013a810; body size 6 bytes.
#line 1 "ENTRY_1013a810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a810(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7fffffff);
}


// Reference entry 1013a820; body size 3 bytes.
#line 1 "ENTRY_1013a820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_1013a820(float *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)*param_1);
}


// Reference entry 1013a830; body size 4 bytes.
#line 1 "ENTRY_1013a830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a830(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
}


// Reference entry 1013a840; body size 6 bytes.
#line 1 "ENTRY_1013a840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a840(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x15555555);
}


// Reference entry 1013a850; body size 6 bytes.
#line 1 "ENTRY_1013a850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a850(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 1013a860; body size 6 bytes.
#line 1 "ENTRY_1013a860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a860(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 1013a870; body size 6 bytes.
#line 1 "ENTRY_1013a870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a870(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7fffffff);
}


// Reference entry 1013a880; body size 6 bytes.
#line 1 "ENTRY_1013a880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1013a880(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x15555555);
}


// Reference entry 1013a890; body size 25 bytes.
#line 1 "ENTRY_1013a890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1013a890(void *param_1,void *param_2,size_t param_3)

{
  memmove(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(param_1);
}


// Reference entry 1013b570; body size 3 bytes.
#line 1 "ENTRY_1013b570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1013b570(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1013b580; body size 3 bytes.
#line 1 "ENTRY_1013b580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1013b580(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1013b590; body size 3 bytes.
#line 1 "ENTRY_1013b590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1013b590(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1013f540; body size 28 bytes.
#line 1 "ENTRY_1013f540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f540(undefined4 *param_1)

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


// Reference entry 1013f570; body size 28 bytes.
#line 1 "ENTRY_1013f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f570(undefined4 *param_1)

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


// Reference entry 1013f5a0; body size 28 bytes.
#line 1 "ENTRY_1013f5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f5a0(undefined4 *param_1)

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


// Reference entry 1013f5d0; body size 20 bytes.
#line 1 "ENTRY_1013f5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f5d0(int *param_1)

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


// Reference entry 1013f5f0; body size 20 bytes.
#line 1 "ENTRY_1013f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f5f0(int *param_1)

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


// Reference entry 1013f610; body size 20 bytes.
#line 1 "ENTRY_1013f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1013f610(int *param_1)

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


// Reference entry 101446d0; body size 5 bytes.
#line 1 "ENTRY_101446d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101446d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101446e0; body size 5 bytes.
#line 1 "ENTRY_101446e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101446e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10145ca0; body size 9 bytes.
#line 1 "ENTRY_10145ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10145ca0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10146880; body size 94 bytes.
#line 1 "ENTRY_10146880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146880(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  return;
}


// Reference entry 10146900; body size 10 bytes.
#line 1 "ENTRY_10146900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146900(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 10146910; body size 199 bytes.
#line 1 "ENTRY_10146910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146910(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  *(undefined4 *)(param_1 + 0x40) = param_15;
  *(undefined4 *)(param_1 + 0x44) = param_16;
  *(undefined4 *)(param_1 + 0x48) = param_17;
  *(undefined4 *)(param_1 + 0x4c) = param_18;
  *(undefined4 *)(param_1 + 0x50) = param_19;
  *(undefined4 *)(param_1 + 0x54) = param_20;
  *(undefined4 *)(param_1 + 0x58) = param_21;
  *(undefined4 *)(param_1 + 0x5c) = param_22;
  *(undefined4 *)(param_1 + 0x60) = param_23;
  *(undefined4 *)(param_1 + 100) = param_24;
  *(undefined4 *)(param_1 + 0x68) = param_25;
  *(undefined4 *)(param_1 + 0x6c) = param_26;
  *(undefined4 *)(param_1 + 0x70) = param_27;
  *(undefined4 *)(param_1 + 0x74) = param_28;
  *(undefined4 *)(param_1 + 0x78) = param_29;
  return;
}


// Reference entry 10146a10; body size 10 bytes.
#line 1 "ENTRY_10146a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146a10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 10146a20; body size 10 bytes.
#line 1 "ENTRY_10146a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146a20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 10146a30; body size 17 bytes.
#line 1 "ENTRY_10146a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146a30(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// Reference entry 10146a50; body size 66 bytes.
#line 1 "ENTRY_10146a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146a50(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  return;
}


// Reference entry 10146ab0; body size 31 bytes.
#line 1 "ENTRY_10146ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}


// Reference entry 10146ae0; body size 45 bytes.
#line 1 "ENTRY_10146ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146ae0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  return;
}


// Reference entry 10146b20; body size 94 bytes.
#line 1 "ENTRY_10146b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146b20(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  return;
}


// Reference entry 10146ba0; body size 59 bytes.
#line 1 "ENTRY_10146ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146ba0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  return;
}


// Reference entry 10146bf0; body size 408 bytes.
#line 1 "ENTRY_10146bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146bf0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
            undefined4 param_30,undefined4 param_31,undefined4 param_32,undefined4 param_33,
            undefined4 param_34,undefined4 param_35,undefined4 param_36,undefined4 param_37,
            undefined4 param_38,undefined4 param_39,undefined4 param_40,undefined4 param_41,
            undefined4 param_42,undefined4 param_43,undefined4 param_44,undefined4 param_45,
            undefined4 param_46)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  *(undefined4 *)(param_1 + 0x40) = param_15;
  *(undefined4 *)(param_1 + 0x44) = param_16;
  *(undefined4 *)(param_1 + 0x48) = param_17;
  *(undefined4 *)(param_1 + 0x4c) = param_18;
  *(undefined4 *)(param_1 + 0x50) = param_19;
  *(undefined4 *)(param_1 + 0x54) = param_20;
  *(undefined4 *)(param_1 + 0x58) = param_21;
  *(undefined4 *)(param_1 + 0x5c) = param_22;
  *(undefined4 *)(param_1 + 0x60) = param_23;
  *(undefined4 *)(param_1 + 100) = param_24;
  *(undefined4 *)(param_1 + 0x68) = param_25;
  *(undefined4 *)(param_1 + 0x6c) = param_26;
  *(undefined4 *)(param_1 + 0x70) = param_27;
  *(undefined4 *)(param_1 + 0x74) = param_28;
  *(undefined4 *)(param_1 + 0x78) = param_29;
  *(undefined4 *)(param_1 + 0x7c) = param_30;
  *(undefined4 *)(param_1 + 0x80) = param_31;
  *(undefined4 *)(param_1 + 0x84) = param_32;
  *(undefined4 *)(param_1 + 0x88) = param_33;
  *(undefined4 *)(param_1 + 0x8c) = param_34;
  *(undefined4 *)(param_1 + 0x90) = param_35;
  *(undefined4 *)(param_1 + 0x94) = param_36;
  *(undefined4 *)(param_1 + 0x98) = param_37;
  *(undefined4 *)(param_1 + 0x9c) = param_38;
  *(undefined4 *)(param_1 + 0xa0) = param_39;
  *(undefined4 *)(param_1 + 0xa4) = param_40;
  *(undefined4 *)(param_1 + 0xa8) = param_41;
  *(undefined4 *)(param_1 + 0xac) = param_42;
  *(undefined4 *)(param_1 + 0xb0) = param_43;
  *(undefined4 *)(param_1 + 0xb4) = param_44;
  *(undefined4 *)(param_1 + 0xb8) = param_45;
  *(undefined4 *)(param_1 + 0xbc) = param_46;
  return;
}


// Reference entry 10146df0; body size 38 bytes.
#line 1 "ENTRY_10146df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146df0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  return;
}


// Reference entry 10146e20; body size 17 bytes.
#line 1 "ENTRY_10146e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146e20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// Reference entry 10146e40; body size 31 bytes.
#line 1 "ENTRY_10146e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146e40(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}


// Reference entry 10146e70; body size 101 bytes.
#line 1 "ENTRY_10146e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146e70(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  *(undefined4 *)(param_1 + 0x40) = param_15;
  return;
}


// Reference entry 10146ef0; body size 17 bytes.
#line 1 "ENTRY_10146ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146ef0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// Reference entry 10146f10; body size 122 bytes.
#line 1 "ENTRY_10146f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146f10(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  *(undefined4 *)(param_1 + 0x40) = param_15;
  *(undefined4 *)(param_1 + 0x44) = param_16;
  *(undefined4 *)(param_1 + 0x48) = param_17;
  *(undefined4 *)(param_1 + 0x4c) = param_18;
  return;
}


// Reference entry 10146fb0; body size 10 bytes.
#line 1 "ENTRY_10146fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146fb0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 10146fc0; body size 17 bytes.
#line 1 "ENTRY_10146fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146fc0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// Reference entry 10146fe0; body size 17 bytes.
#line 1 "ENTRY_10146fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10146fe0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// Reference entry 10147000; body size 59 bytes.
#line 1 "ENTRY_10147000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147000(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  return;
}


// Reference entry 10147050; body size 38 bytes.
#line 1 "ENTRY_10147050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147050(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  return;
}


// Reference entry 10147080; body size 10 bytes.
#line 1 "ENTRY_10147080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147080(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 10147090; body size 52 bytes.
#line 1 "ENTRY_10147090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147090(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  return;
}


// Reference entry 101470e0; body size 115 bytes.
#line 1 "ENTRY_101470e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101470e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  *(undefined4 *)(param_1 + 0x40) = param_15;
  *(undefined4 *)(param_1 + 0x44) = param_16;
  *(undefined4 *)(param_1 + 0x48) = param_17;
  return;
}


// Reference entry 10147170; body size 31 bytes.
#line 1 "ENTRY_10147170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147170(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}


// Reference entry 101471a0; body size 31 bytes.
#line 1 "ENTRY_101471a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101471a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}


// Reference entry 101471d0; body size 31 bytes.
#line 1 "ENTRY_101471d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101471d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}


// Reference entry 10147200; body size 45 bytes.
#line 1 "ENTRY_10147200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147200(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  return;
}


// Reference entry 10147240; body size 38 bytes.
#line 1 "ENTRY_10147240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147240(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  return;
}


// Reference entry 10147270; body size 31 bytes.
#line 1 "ENTRY_10147270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}


// Reference entry 101472a0; body size 17 bytes.
#line 1 "ENTRY_101472a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101472a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// Reference entry 101472c0; body size 10 bytes.
#line 1 "ENTRY_101472c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101472c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 101472d0; body size 45 bytes.
#line 1 "ENTRY_101472d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101472d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  return;
}


// Reference entry 10147310; body size 10 bytes.
#line 1 "ENTRY_10147310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147310(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 10147320; body size 31 bytes.
#line 1 "ENTRY_10147320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147320(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  return;
}


// Reference entry 10147350; body size 94 bytes.
#line 1 "ENTRY_10147350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147350(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  return;
}


// Reference entry 101473d0; body size 31 bytes.
#line 1 "ENTRY_101473d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101473d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}


// Reference entry 10147400; body size 80 bytes.
#line 1 "ENTRY_10147400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147400(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  return;
}


// Reference entry 10147470; body size 17 bytes.
#line 1 "ENTRY_10147470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147470(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}


// Reference entry 10147490; body size 10 bytes.
#line 1 "ENTRY_10147490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147490(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 101474a0; body size 73 bytes.
#line 1 "ENTRY_101474a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101474a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  return;
}


// Reference entry 10147500; body size 45 bytes.
#line 1 "ENTRY_10147500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147500(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  return;
}


// Reference entry 10147540; body size 24 bytes.
#line 1 "ENTRY_10147540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147540(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}


// Reference entry 10147560; body size 45 bytes.
#line 1 "ENTRY_10147560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147560(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  return;
}


// Reference entry 101475a0; body size 38 bytes.
#line 1 "ENTRY_101475a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101475a0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  return;
}


// Reference entry 101475d0; body size 10 bytes.
#line 1 "ENTRY_101475d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101475d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// Reference entry 101475e0; body size 31 bytes.
#line 1 "ENTRY_101475e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101475e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  return;
}


// Reference entry 10147610; body size 73 bytes.
#line 1 "ENTRY_10147610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147610(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  return;
}


// Reference entry 10147670; body size 38 bytes.
#line 1 "ENTRY_10147670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147670(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  return;
}


// Reference entry 101476a0; body size 24 bytes.
#line 1 "ENTRY_101476a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101476a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}


// Reference entry 101476c0; body size 38 bytes.
#line 1 "ENTRY_101476c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101476c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  return;
}


// Reference entry 101476f0; body size 45 bytes.
#line 1 "ENTRY_101476f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101476f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  return;
}


// Reference entry 10147730; body size 115 bytes.
#line 1 "ENTRY_10147730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147730(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  *(undefined4 *)(param_1 + 0x2c) = param_10;
  *(undefined4 *)(param_1 + 0x30) = param_11;
  *(undefined4 *)(param_1 + 0x34) = param_12;
  *(undefined4 *)(param_1 + 0x38) = param_13;
  *(undefined4 *)(param_1 + 0x3c) = param_14;
  *(undefined4 *)(param_1 + 0x40) = param_15;
  *(undefined4 *)(param_1 + 0x44) = param_16;
  *(undefined4 *)(param_1 + 0x48) = param_17;
  return;
}


// Reference entry 101477c0; body size 10 bytes.
#line 1 "ENTRY_101477c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101477c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// Reference entry 101477d0; body size 10 bytes.
#line 1 "ENTRY_101477d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101477d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// Reference entry 101477e0; body size 17 bytes.
#line 1 "ENTRY_101477e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101477e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}


// Reference entry 10147800; body size 17 bytes.
#line 1 "ENTRY_10147800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147800(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}


// Reference entry 10147820; body size 10 bytes.
#line 1 "ENTRY_10147820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147820(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// Reference entry 10147830; body size 10 bytes.
#line 1 "ENTRY_10147830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147830(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// Reference entry 10147840; body size 10 bytes.
#line 1 "ENTRY_10147840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147840(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// Reference entry 10147850; body size 10 bytes.
#line 1 "ENTRY_10147850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147850(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// Reference entry 10147860; body size 150 bytes.
#line 1 "ENTRY_10147860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147860(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  *(undefined4 *)(param_1 + 0x20) = param_8;
  *(undefined4 *)(param_1 + 0x24) = param_9;
  *(undefined4 *)(param_1 + 0x28) = param_10;
  *(undefined4 *)(param_1 + 0x2c) = param_11;
  *(undefined4 *)(param_1 + 0x30) = param_12;
  *(undefined4 *)(param_1 + 0x34) = param_13;
  *(undefined4 *)(param_1 + 0x38) = param_14;
  *(undefined4 *)(param_1 + 0x3c) = param_15;
  *(undefined4 *)(param_1 + 0x40) = param_16;
  *(undefined4 *)(param_1 + 0x44) = param_17;
  *(undefined4 *)(param_1 + 0x48) = param_18;
  *(undefined4 *)(param_1 + 0x4c) = param_19;
  *(undefined4 *)(param_1 + 0x50) = param_20;
  *(undefined4 *)(param_1 + 0x54) = param_21;
  *(undefined4 *)(param_1 + 0x58) = param_22;
  return;
}


// Reference entry 10147920; body size 17 bytes.
#line 1 "ENTRY_10147920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10147920(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}


// Reference entry 10147980; body size 92 bytes.
#line 1 "ENTRY_10147980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147980(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


// Reference entry 10147a00; body size 8 bytes.
#line 1 "ENTRY_10147a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147a00(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10147a10; body size 197 bytes.
#line 1 "ENTRY_10147a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147a10(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


// Reference entry 10147b10; body size 8 bytes.
#line 1 "ENTRY_10147b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147b10(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10147b20; body size 8 bytes.
#line 1 "ENTRY_10147b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147b20(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10147b30; body size 15 bytes.
#line 1 "ENTRY_10147b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147b30(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 10147b50; body size 64 bytes.
#line 1 "ENTRY_10147b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147b50(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


// Reference entry 10147ba0; body size 29 bytes.
#line 1 "ENTRY_10147ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147ba0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 10147bd0; body size 43 bytes.
#line 1 "ENTRY_10147bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147bd0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// Reference entry 10147c10; body size 92 bytes.
#line 1 "ENTRY_10147c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147c10(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


// Reference entry 10147c90; body size 57 bytes.
#line 1 "ENTRY_10147c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147c90(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// Reference entry 10147ce0; body size 364 bytes.
#line 1 "ENTRY_10147ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147ce0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}


// Reference entry 10147eb0; body size 36 bytes.
#line 1 "ENTRY_10147eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147eb0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// Reference entry 10147ee0; body size 15 bytes.
#line 1 "ENTRY_10147ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147ee0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 10147f00; body size 29 bytes.
#line 1 "ENTRY_10147f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147f00(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 10147f30; body size 99 bytes.
#line 1 "ENTRY_10147f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147f30(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


// Reference entry 10147fb0; body size 15 bytes.
#line 1 "ENTRY_10147fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147fb0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 10147fd0; body size 120 bytes.
#line 1 "ENTRY_10147fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10147fd0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}


// Reference entry 10148070; body size 8 bytes.
#line 1 "ENTRY_10148070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148070(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10148080; body size 15 bytes.
#line 1 "ENTRY_10148080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148080(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 101480a0; body size 15 bytes.
#line 1 "ENTRY_101480a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101480a0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 101480c0; body size 57 bytes.
#line 1 "ENTRY_101480c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101480c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// Reference entry 10148110; body size 36 bytes.
#line 1 "ENTRY_10148110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148110(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// Reference entry 10148140; body size 8 bytes.
#line 1 "ENTRY_10148140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148140(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10148150; body size 50 bytes.
#line 1 "ENTRY_10148150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148150(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


// Reference entry 10148190; body size 113 bytes.
#line 1 "ENTRY_10148190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148190(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


// Reference entry 10148220; body size 29 bytes.
#line 1 "ENTRY_10148220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148220(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 10148250; body size 29 bytes.
#line 1 "ENTRY_10148250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148250(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 10148280; body size 29 bytes.
#line 1 "ENTRY_10148280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148280(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 101482b0; body size 43 bytes.
#line 1 "ENTRY_101482b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101482b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// Reference entry 101482f0; body size 36 bytes.
#line 1 "ENTRY_101482f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101482f0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// Reference entry 10148320; body size 29 bytes.
#line 1 "ENTRY_10148320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148320(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 10148350; body size 15 bytes.
#line 1 "ENTRY_10148350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148350(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 10148370; body size 8 bytes.
#line 1 "ENTRY_10148370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148370(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10148380; body size 43 bytes.
#line 1 "ENTRY_10148380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148380(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// Reference entry 101483c0; body size 8 bytes.
#line 1 "ENTRY_101483c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101483c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 101483d0; body size 29 bytes.
#line 1 "ENTRY_101483d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101483d0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// Reference entry 10148400; body size 92 bytes.
#line 1 "ENTRY_10148400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148400(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


// Reference entry 10148480; body size 29 bytes.
#line 1 "ENTRY_10148480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148480(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 101484b0; body size 78 bytes.
#line 1 "ENTRY_101484b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101484b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


// Reference entry 10148520; body size 15 bytes.
#line 1 "ENTRY_10148520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148520(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 10148540; body size 8 bytes.
#line 1 "ENTRY_10148540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148540(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10148550; body size 71 bytes.
#line 1 "ENTRY_10148550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148550(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// Reference entry 101485b0; body size 43 bytes.
#line 1 "ENTRY_101485b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101485b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// Reference entry 101485f0; body size 22 bytes.
#line 1 "ENTRY_101485f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101485f0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// Reference entry 10148610; body size 43 bytes.
#line 1 "ENTRY_10148610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148610(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// Reference entry 10148650; body size 36 bytes.
#line 1 "ENTRY_10148650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148650(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// Reference entry 10148680; body size 8 bytes.
#line 1 "ENTRY_10148680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148680(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 10148690; body size 29 bytes.
#line 1 "ENTRY_10148690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148690(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 101486c0; body size 71 bytes.
#line 1 "ENTRY_101486c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101486c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// Reference entry 10148720; body size 36 bytes.
#line 1 "ENTRY_10148720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148720(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 10148750; body size 22 bytes.
#line 1 "ENTRY_10148750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148750(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// Reference entry 10148770; body size 36 bytes.
#line 1 "ENTRY_10148770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148770(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// Reference entry 101487a0; body size 43 bytes.
#line 1 "ENTRY_101487a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101487a0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// Reference entry 101487e0; body size 113 bytes.
#line 1 "ENTRY_101487e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101487e0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


// Reference entry 10148870; body size 8 bytes.
#line 1 "ENTRY_10148870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148870(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// Reference entry 10148880; body size 8 bytes.
#line 1 "ENTRY_10148880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148880(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// Reference entry 10148890; body size 15 bytes.
#line 1 "ENTRY_10148890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148890(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 101488b0; body size 15 bytes.
#line 1 "ENTRY_101488b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101488b0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 101488d0; body size 8 bytes.
#line 1 "ENTRY_101488d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101488d0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// Reference entry 101488e0; body size 8 bytes.
#line 1 "ENTRY_101488e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101488e0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// Reference entry 101488f0; body size 8 bytes.
#line 1 "ENTRY_101488f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101488f0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// Reference entry 10148900; body size 8 bytes.
#line 1 "ENTRY_10148900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148900(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// Reference entry 10148910; body size 148 bytes.
#line 1 "ENTRY_10148910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10148910(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


// Reference entry 101489d0; body size 15 bytes.
#line 1 "ENTRY_101489d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101489d0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// Reference entry 101489f0; body size 9 bytes.
#line 1 "ENTRY_101489f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101489f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101a1e90; body size 6 bytes.
#line 1 "ENTRY_101a1e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a1e90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fe);
}


// Reference entry 101a1fd0; body size 38 bytes.
#line 1 "ENTRY_101a1fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 * __fastcall FUN_101a1fd0(undefined2 *param_1)

{
  *(undefined4 *)(param_1 + 0x1fe) = 0;
  *param_1 = (undefined2)(0);
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x202) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 *)(param_1);
}


// Reference entry 101a2020; body size 7 bytes.
#line 1 "ENTRY_101a2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a2020(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x404));
}


// Reference entry 101a21c0; body size 25 bytes.
#line 1 "ENTRY_101a21c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a21c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a21e0; body size 33 bytes.
#line 1 "ENTRY_101a21e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101a21e0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 101a22d0; body size 46 bytes.
#line 1 "ENTRY_101a22d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a22d0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  **(int **)(param_1 + 4) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 101a2310; body size 46 bytes.
#line 1 "ENTRY_101a2310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a2310(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  **(int **)(param_1 + 4) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 101a2350; body size 46 bytes.
#line 1 "ENTRY_101a2350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a2350(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  **(int **)(param_1 + 4) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 101a2670; body size 7 bytes.
#line 1 "ENTRY_101a2670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2670(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a2680; body size 5 bytes.
#line 1 "ENTRY_101a2680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2680(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a2810; body size 35 bytes.
#line 1 "ENTRY_101a2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a2810(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101a2840; body size 35 bytes.
#line 1 "ENTRY_101a2840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a2840(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101a2870; body size 35 bytes.
#line 1 "ENTRY_101a2870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a2870(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101a29b0; body size 15 bytes.
#line 1 "ENTRY_101a29b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a29b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101a29d0; body size 5 bytes.
#line 1 "ENTRY_101a29d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a29d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a29e0; body size 5 bytes.
#line 1 "ENTRY_101a29e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a29e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a29f0; body size 5 bytes.
#line 1 "ENTRY_101a29f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a29f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a2a00; body size 5 bytes.
#line 1 "ENTRY_101a2a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a2a10; body size 16 bytes.
#line 1 "ENTRY_101a2a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_101a2a10(int *param_1,int *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = (int *)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101a2a30; body size 5 bytes.
#line 1 "ENTRY_101a2a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2a30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a2a40; body size 5 bytes.
#line 1 "ENTRY_101a2a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a2a40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a2a50; body size 21 bytes.
#line 1 "ENTRY_101a2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101a2a50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a2a70; body size 25 bytes.
#line 1 "ENTRY_101a2a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101a2a70(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a2a90; body size 23 bytes.
#line 1 "ENTRY_101a2a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a2a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a2ab0; body size 49 bytes.
#line 1 "ENTRY_101a2ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101a2ab0(undefined4 *param_2)
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


// Reference entry 101a2af0; body size 23 bytes.
#line 1 "ENTRY_101a2af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a2af0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a3250; body size 31 bytes.
#line 1 "ENTRY_101a3250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_101a3250(uint param_1)

{
  uint uVar1;
  
  if (0xffff < param_1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_1);
  }
  uVar1 = (uint)(1);
  if (1 < param_1) {
    do {
      uVar1 = (uint)(uVar1 * 2);
    } while (uVar1 < param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 101a3280; body size 15 bytes.
#line 1 "ENTRY_101a3280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * FUN_101a3280(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 101a32a0; body size 49 bytes.
#line 1 "ENTRY_101a32a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_101a32a0(uint param_2)
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


// Reference entry 101a3390; body size 3 bytes.
#line 1 "ENTRY_101a3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a3390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a33a0; body size 3 bytes.
#line 1 "ENTRY_101a33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a33a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a33b0; body size 3 bytes.
#line 1 "ENTRY_101a33b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a33b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a33c0; body size 3 bytes.
#line 1 "ENTRY_101a33c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a33c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a33d0; body size 3 bytes.
#line 1 "ENTRY_101a33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a33d0(void)

{
  return;
}


// Reference entry 101a33e0; body size 6 bytes.
#line 1 "ENTRY_101a33e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a33e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 101a36e0; body size 3 bytes.
#line 1 "ENTRY_101a36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a36e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a36f0; body size 4 bytes.
#line 1 "ENTRY_101a36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a36f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 101a3740; body size 24 bytes.
#line 1 "ENTRY_101a3740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a3740(int *param_1)

{
  undefined4 uVar1;
  
  if (0xfffe < *param_1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffff);
  }
  uVar1 = (undefined4)(thunk_FUN_1123fce0(param_1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101a3b20; body size 12 bytes.
#line 1 "ENTRY_101a3b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a3b20(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)((undefined4 *)*param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a3b30; body size 9 bytes.
#line 1 "ENTRY_101a3b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a3b30(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 101a3b50; body size 4 bytes.
#line 1 "ENTRY_101a3b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a3b50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 101a3b60; body size 30 bytes.
#line 1 "ENTRY_101a3b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a3b60(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  thunk_FUN_113cfb70(param_1 + 0x10,*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 101a3cb0; body size 4 bytes.
#line 1 "ENTRY_101a3cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a3cb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 101a4230; body size 8 bytes.
#line 1 "ENTRY_101a4230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101a4230(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 101a4750; body size 18 bytes.
#line 1 "ENTRY_101a4750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a4750(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 101a4770; body size 3 bytes.
#line 1 "ENTRY_101a4770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a4770(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a4780; body size 8 bytes.
#line 1 "ENTRY_101a4780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a4780(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -0x10);
}


// Reference entry 101a4c40; body size 17 bytes.
#line 1 "ENTRY_101a4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a4c40(undefined4 *param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)((char *)*param_1);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 101a4c60; body size 17 bytes.
#line 1 "ENTRY_101a4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a4c60(undefined4 *param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)((char *)*param_1);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
}


// Reference entry 101a4c80; body size 4 bytes.
#line 1 "ENTRY_101a4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a4c80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 101a4d00; body size 10 bytes.
#line 1 "ENTRY_101a4d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a4d00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// Reference entry 101a4d10; body size 32 bytes.
#line 1 "ENTRY_101a4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a4d10(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 == 0) {
    pcVar2 = (char *)((char *)(param_1 + 0x10));
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
    iVar3 = (int)((int)pcVar2 - (param_1 + 0x11));
    *(int *)(param_1 + 4) = iVar3;
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
}


// Reference entry 101a4e60; body size 6 bytes.
#line 1 "ENTRY_101a4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a4e60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 101a4e70; body size 6 bytes.
#line 1 "ENTRY_101a4e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a4e70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 101a5290; body size 168 bytes.
#line 1 "ENTRY_101a5290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a5290(char *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  
  if (((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    if (param_3 == '\0') {
      pcVar5 = (char *)(param_1);
      do {
        cVar2 = (char)(*pcVar5);
        pcVar5 = (char *)(pcVar5 + 1);
      } while (cVar2 != '\0');
      uVar3 = (uint)((int)pcVar5 - (int)(param_1 + 1));
      pcVar5 = (char *)(param_2);
      do {
        cVar2 = (char)(*pcVar5);
        pcVar5 = (char *)(pcVar5 + 1);
      } while (cVar2 != '\0');
      uVar4 = (uint)((int)pcVar5 - (int)(param_2 + 1));
    }
    else {
      uVar3 = (uint)(thunk_FUN_11069bc0(param_1));
      uVar4 = (uint)(thunk_FUN_11069bc0(param_2));
    }
    if (uVar4 <= uVar3) {
      pcVar5 = (char *)(strstr(param_1,param_2));
      if (pcVar5 != (char *)0x0) {
        if (param_3 != '\0') {
          iVar6 = (int)(thunk_FUN_11069bc0(pcVar5));
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(uVar3 - iVar6);
        }
        pcVar1 = (char *)(pcVar5 + 1);
        do {
          cVar2 = (char)(*pcVar5);
          pcVar5 = (char *)(pcVar5 + 1);
        } while (cVar2 != '\0');
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(uVar3 - ((int)pcVar5 - (int)pcVar1));
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-1);
}


// Reference entry 101a5700; body size 4 bytes.
#line 1 "ENTRY_101a5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a5700(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 101a5d20; body size 13 bytes.
#line 1 "ENTRY_101a5d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_101a5d20(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)((undefined1 *)*param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 101a5d30; body size 5 bytes.
#line 1 "ENTRY_101a5d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __cdecl strchr(char *_Str,int _Val)

{
  char *pcVar1;
  
                    
                    
  pcVar1 = (char *)(strchr(_Str,_Val));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar1);
}


// Reference entry 101a64a0; body size 5 bytes.
#line 1 "ENTRY_101a64a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * __cdecl strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  
                    
                    
  pcVar1 = (char *)(strstr(_Str,_SubStr));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(pcVar1);
}


// Reference entry 101a6c90; body size 46 bytes.
#line 1 "ENTRY_101a6c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a6c90(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(0,0,param_1,0,param_2));
  iVar2 = (int)(__stdio_common_vsprintf_p(*puVar1 | 2,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 101a6cd0; body size 48 bytes.
#line 1 "ENTRY_101a6cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a6cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(0,0,param_1,param_2,param_3));
  iVar2 = (int)(__stdio_common_vsprintf_p(*puVar1 | 2,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 101a6d10; body size 46 bytes.
#line 1 "ENTRY_101a6d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a6d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,param_4));
  iVar2 = (int)(__stdio_common_vsprintf_p(*puVar1,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 101a6d50; body size 48 bytes.
#line 1 "ENTRY_101a6d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a6d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(param_1,param_2,param_3,param_4,param_5));
  iVar2 = (int)(__stdio_common_vsprintf_p(*puVar1,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 101a6d90; body size 25 bytes.
#line 1 "ENTRY_101a6d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a6d90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a6db0; body size 25 bytes.
#line 1 "ENTRY_101a6db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a6db0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a6dd0; body size 22 bytes.
#line 1 "ENTRY_101a6dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101a6dd0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a6df0; body size 26 bytes.
#line 1 "ENTRY_101a6df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101a6df0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101a6e10; body size 25 bytes.
#line 1 "ENTRY_101a6e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101a6e10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a6e50; body size 18 bytes.
#line 1 "ENTRY_101a6e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_101a6e50(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 < *param_2);
}


// Reference entry 101a6e70; body size 3 bytes.
#line 1 "ENTRY_101a6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a6e70(void)

{
  return;
}


// Reference entry 101a6e80; body size 28 bytes.
#line 1 "ENTRY_101a6e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a6e80(void *param_1,int param_2,int param_3)

{
  memmove((void *)(param_3 - (param_2 - (int)param_1)),param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 101a6eb0; body size 33 bytes.
#line 1 "ENTRY_101a6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a6eb0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 101a6ee0; body size 33 bytes.
#line 1 "ENTRY_101a6ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a6ee0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 101a6f10; body size 3 bytes.
#line 1 "ENTRY_101a6f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a6f10(void)

{
  return;
}


// Reference entry 101a6f20; body size 3 bytes.
#line 1 "ENTRY_101a6f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a6f20(void)

{
  return;
}


// Reference entry 101a6f30; body size 18 bytes.
#line 1 "ENTRY_101a6f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a6f30(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 101a6f50; body size 18 bytes.
#line 1 "ENTRY_101a6f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a6f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 101a72d0; body size 7 bytes.
#line 1 "ENTRY_101a72d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a72d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a72e0; body size 7 bytes.
#line 1 "ENTRY_101a72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a72e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a72f0; body size 7 bytes.
#line 1 "ENTRY_101a72f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a72f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a7300; body size 7 bytes.
#line 1 "ENTRY_101a7300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a7300(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a76b0; body size 133 bytes.
#line 1 "ENTRY_101a76b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a76b0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  
  puVar3 = (undefined4 *)(param_1);
  if (param_1 != (undefined4 *)(param_2)) {
    while (puVar3 = puVar3 + 1, puVar3 != (undefined4 *)(param_2)) {
      uVar1 = (undefined4)(*puVar3);
      cVar4 = (char)((*param_3)(uVar1,*param_1));
      if (cVar4 == '\0') {
        cVar4 = (char)((*param_3)(uVar1,puVar3[-1]));
        puVar2 = (undefined4 *)(puVar3);
        while (cVar4 != '\0') {
          *puVar2 = (undefined4)(puVar2[-1]);
          cVar4 = (char)((*param_3)(uVar1,puVar2[-2]));
          puVar2 = (undefined4 *)(puVar2 + -1);
        }
        *puVar2 = (undefined4)(uVar1);
      }
      else {
        memmove((void *)((int)puVar3 + (4 - ((int)puVar3 - (int)param_1))),param_1,
                (int)puVar3 - (int)param_1);
        *param_1 = (undefined4)(uVar1);
      }
    }
  }
  return;
}


// Reference entry 101a7760; body size 108 bytes.
#line 1 "ENTRY_101a7760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_101a7760(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == (int *)(param_2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
  }
  piVar4 = (int *)(param_1 + 1);
  if (piVar4 != (int *)(param_2)) {
    do {
      iVar1 = (int)(*piVar4);
      if (iVar1 < *param_1) {
        memmove((void *)((int)piVar4 + (4 - ((int)piVar4 - (int)param_1))),param_1,
                (int)piVar4 - (int)param_1);
        *param_1 = (int)(iVar1);
      }
      else {
        iVar2 = (int)(piVar4[-1]);
        piVar3 = (int *)(piVar4);
        while (iVar1 < iVar2) {
          *piVar3 = (int)(iVar2);
          iVar2 = (int)(piVar3[-2]);
          piVar3 = (int *)(piVar3 + -1);
        }
        *piVar3 = (int)(iVar1);
      }
      piVar4 = (int *)(piVar4 + 1);
    } while (piVar4 != (int *)(param_2));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 101a77f0; body size 229 bytes.
#line 1 "ENTRY_101a77f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a77f0(int param_1,int param_2,code *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (uint)(param_2 - param_1 >> 2);
  iVar6 = (int)(param_2 - param_1 >> 3);
  if (0 < iVar6) {
    iVar5 = (int)((int)(uVar4 - 1) >> 1);
    do {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + -4 + iVar6 * 4));
      iVar6 = (int)(iVar6 + -1);
      iVar2 = (int)(iVar6);
      while (iVar2 < iVar5) {
        iVar7 = (int)(iVar2 * 2 + 2);
        cVar3 = (char)((*param_3)(*(undefined4 *)(param_1 + iVar7 * 4),
                           *(undefined4 *)(param_1 + 4 + iVar2 * 8)));
        if (cVar3 != '\0') {
          iVar7 = (int)(iVar2 * 2 + 1);
        }
        *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
        iVar2 = (int)(iVar7);
      }
      if ((iVar2 == iVar5) && ((uVar4 & 1) == 0)) {
        *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + uVar4 * 4);
        iVar2 = (int)(uVar4 - 1);
      }
      while (iVar6 < iVar2) {
        iVar7 = (int)(iVar2 + -1 >> 1);
        cVar3 = (char)((*param_3)(*(undefined4 *)(param_1 + iVar7 * 4),uVar1));
        if (cVar3 == '\0') break;
        *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
        iVar2 = (int)(iVar7);
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = uVar1;
    } while (0 < iVar6);
  }
  return;
}


// Reference entry 101a7910; body size 149 bytes.
#line 1 "ENTRY_101a7910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a7910(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (uint)(param_2 - param_1 >> 2);
  iVar7 = (int)(param_2 - param_1 >> 3);
  if (0 < iVar7) {
    iVar6 = (int)((int)(uVar5 - 1) >> 1);
    do {
      iVar2 = (int)(*(int *)(param_1 + -4 + iVar7 * 4));
      iVar7 = (int)(iVar7 + -1);
      iVar1 = (int)(iVar7);
      while (iVar1 < iVar6) {
        iVar3 = (int)(iVar1 * 2 + 2);
        if (*(int *)(param_1 + 8 + iVar1 * 8) < *(int *)(param_1 + -4 + iVar3 * 4)) {
          iVar3 = (int)(iVar1 * 2 + 1);
        }
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
        iVar1 = (int)(iVar3);
      }
      if ((iVar1 == iVar6) && ((uVar5 & 1) == 0)) {
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + uVar5 * 4);
        iVar1 = (int)(uVar5 - 1);
      }
      while (iVar7 < iVar1) {
        iVar4 = (int)(iVar1 + -1 >> 1);
        iVar3 = (int)(*(int *)(param_1 + iVar4 * 4));
        if (iVar2 <= iVar3) break;
        *(int *)(param_1 + iVar1 * 4) = iVar3;
        iVar1 = (int)(iVar4);
      }
      *(int *)(param_1 + iVar1 * 4) = iVar2;
    } while (0 < iVar7);
  }
  return;
}


// Reference entry 101a79d0; body size 90 bytes.
#line 1 "ENTRY_101a79d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a79d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)((*param_4)(*param_2,*param_1));
  if (cVar2 != '\0') {
    uVar1 = (undefined4)(*param_2);
    *param_2 = (undefined4)(*param_1);
    *param_1 = (undefined4)(uVar1);
  }
  cVar2 = (char)((*param_4)(*param_3,*param_2));
  if (cVar2 != '\0') {
    uVar1 = (undefined4)(*param_3);
    *param_3 = (undefined4)(*param_2);
    *param_2 = (undefined4)(uVar1);
    cVar2 = (char)((*param_4)(uVar1,*param_1));
    if (cVar2 != '\0') {
      uVar1 = (undefined4)(*param_2);
      *param_2 = (undefined4)(*param_1);
      *param_1 = (undefined4)(uVar1);
    }
  }
  return;
}


// Reference entry 101a7a40; body size 51 bytes.
#line 1 "ENTRY_101a7a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a7a40(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 < *param_1) {
    *param_2 = (int)(*param_1);
    *param_1 = (int)(iVar2);
    iVar2 = (int)(*param_2);
  }
  iVar1 = (int)(*param_3);
  if (iVar1 < iVar2) {
    *param_3 = (int)(iVar2);
    *param_2 = (int)(iVar1);
    if (iVar1 < *param_1) {
      *param_2 = (int)(*param_1);
      *param_1 = (int)(iVar1);
    }
  }
  return;
}


// Reference entry 101a7a80; body size 28 bytes.
#line 1 "ENTRY_101a7a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a7a80(void *param_1,int param_2,int param_3)

{
  memmove((void *)(param_3 - (param_2 - (int)param_1)),param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 101a7ab0; body size 33 bytes.
#line 1 "ENTRY_101a7ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a7ab0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 101a7ae0; body size 8 bytes.
#line 1 "ENTRY_101a7ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a7ae0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 101a7f10; body size 5 bytes.
#line 1 "ENTRY_101a7f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a7f10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a7f20; body size 5 bytes.
#line 1 "ENTRY_101a7f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_101a7f20(undefined1 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(param_1);
}


// Reference entry 101a80e0; body size 42 bytes.
#line 1 "ENTRY_101a80e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a80e0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 code *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = (undefined4)(*param_1);
  uVar2 = (uint)(param_2 - (int)param_1 >> 2);
  iVar4 = (int)(0);
  iVar3 = (int)((int)(uVar2 - 1) >> 1);
  iVar5 = (int)(iVar4);
  if (0 < iVar3) {
    do {
      iVar4 = (int)(iVar5 * 2 + 2);
      cVar1 = (char)((*param_5)(param_1[iVar4],param_1[iVar5 * 2 + 1]));
      if (cVar1 != '\0') {
        iVar4 = (int)(iVar5 * 2 + 1);
      }
      param_1[iVar5] = param_1[iVar4];
      iVar5 = (int)(iVar4);
    } while (iVar4 < iVar3);
  }
  if ((iVar4 == iVar3) && ((uVar2 & 1) == 0)) {
    param_1[iVar4] = param_1[uVar2 - 1];
    iVar4 = (int)(uVar2 - 1);
  }
  if (iVar4 < 1) {
    param_1[iVar4] = *param_4;
    return;
  }
  do {
    iVar5 = (int)(iVar4 + -1 >> 1);
    cVar1 = (char)((*param_5)(param_1[iVar5],*param_4));
    if (cVar1 == '\0') break;
    param_1[iVar4] = param_1[iVar5];
    iVar4 = (int)(iVar5);
  } while (0 < iVar5);
  param_1[iVar4] = *param_4;
  return;
}


// Reference entry 101a8120; body size 42 bytes.
#line 1 "ENTRY_101a8120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8120(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = (undefined4)(*param_1);
  uVar2 = (uint)(param_2 - (int)param_1 >> 2);
  iVar4 = (int)(0);
  iVar5 = (int)((int)(uVar2 - 1) >> 1);
  iVar3 = (int)(iVar4);
  if (0 < iVar5) {
    do {
      iVar1 = (int)(iVar3 * 2);
      iVar4 = (int)(iVar1 + 2);
      if ((int)param_1[iVar3 * 2 + 2] < (int)param_1[iVar1 + 1]) {
        iVar4 = (int)(iVar1 + 1);
      }
      param_1[iVar3] = param_1[iVar4];
      iVar3 = (int)(iVar4);
    } while (iVar4 < iVar5);
  }
  if ((iVar4 == iVar5) && ((uVar2 & 1) == 0)) {
    param_1[iVar4] = param_1[uVar2 - 1];
    iVar4 = (int)(uVar2 - 1);
  }
  if (iVar4 < 1) {
    param_1[iVar4] = *param_4;
    return;
  }
  do {
    iVar3 = (int)(iVar4 + -1 >> 1);
    if (*param_4 <= (int)param_1[iVar3]) break;
    param_1[iVar4] = param_1[iVar3];
    iVar4 = (int)(iVar3);
  } while (0 < iVar3);
  param_1[iVar4] = *param_4;
  return;
}


// Reference entry 101a8160; body size 61 bytes.
#line 1 "ENTRY_101a8160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8160(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (7 < (int)(param_2 - (int)param_1 & 0xfffffffcU)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + -4));
    puVar2 = (undefined4 *)((undefined4 *)(param_2 + -4));
    *puVar2 = (undefined4)(*param_1);
    param_2 = (int)(uVar1);
    thunk_FUN_101a7f30(param_1,0,(int)puVar2 - (int)param_1 >> 2,&param_2,param_3);
  }
  return;
}


// Reference entry 101a81b0; body size 61 bytes.
#line 1 "ENTRY_101a81b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a81b0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (7 < (int)(param_2 - (int)param_1 & 0xfffffffcU)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + -4));
    puVar2 = (undefined4 *)((undefined4 *)(param_2 + -4));
    *puVar2 = (undefined4)(*param_1);
    param_2 = (int)(uVar1);
    thunk_FUN_101a8030(param_1,0,(int)puVar2 - (int)param_1 >> 2,&param_2,param_3);
  }
  return;
}


// Reference entry 101a8200; body size 8 bytes.
#line 1 "ENTRY_101a8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101a8200(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + -4);
}


// Reference entry 101a8210; body size 87 bytes.
#line 1 "ENTRY_101a8210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8210(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar2 = (int)(param_2 + -1 >> 1);
    cVar1 = (char)((*param_5)(*(undefined4 *)(param_1 + iVar2 * 4),*param_4));
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = (int)(iVar2);
  } while (param_3 < iVar2);
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  return;
}


// Reference entry 101a8280; body size 68 bytes.
#line 1 "ENTRY_101a8280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8280(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar2 = (int)(param_2 + -1 >> 1);
    iVar1 = (int)(*(int *)(param_1 + iVar2 * 4));
    if (*param_4 <= iVar1) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = (int)(iVar2);
  } while (param_3 < iVar2);
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}


// Reference entry 101a82e0; body size 5 bytes.
#line 1 "ENTRY_101a82e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a82e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a82f0; body size 13 bytes.
#line 1 "ENTRY_101a82f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a82f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101a8300; body size 13 bytes.
#line 1 "ENTRY_101a8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8300(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101a8310; body size 87 bytes.
#line 1 "ENTRY_101a8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8310(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (undefined4)(param_3);
  for (uVar2 = (uint)(param_2 - (int)param_1); 7 < (int)(uVar2 & 0xfffffffc); uVar2 = uVar2 - 4) {
    param_2 = (int)(*(undefined4 *)((int)param_1 + (uVar2 - 4)));
    *(undefined4 *)((int)param_1 + (uVar2 - 4)) = *param_1;
    thunk_FUN_101a7f30(param_1,0,(int)(uVar2 - 4) >> 2,&param_2,uVar1);
  }
  return;
}


// Reference entry 101a8380; body size 87 bytes.
#line 1 "ENTRY_101a8380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8380(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (undefined4)(param_3);
  for (uVar2 = (uint)(param_2 - (int)param_1); 7 < (int)(uVar2 & 0xfffffffc); uVar2 = uVar2 - 4) {
    param_2 = (int)(*(undefined4 *)((int)param_1 + (uVar2 - 4)));
    *(undefined4 *)((int)param_1 + (uVar2 - 4)) = *param_1;
    thunk_FUN_101a8030(param_1,0,(int)(uVar2 - 4) >> 2,&param_2,uVar1);
  }
  return;
}


// Reference entry 101a8970; body size 5 bytes.
#line 1 "ENTRY_101a8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8980; body size 5 bytes.
#line 1 "ENTRY_101a8980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8990; body size 36 bytes.
#line 1 "ENTRY_101a8990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101a8990(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 101a89c0; body size 36 bytes.
#line 1 "ENTRY_101a89c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101a89c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 101a89f0; body size 5 bytes.
#line 1 "ENTRY_101a89f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a89f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8a00; body size 13 bytes.
#line 1 "ENTRY_101a8a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8a00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 101a8a10; body size 13 bytes.
#line 1 "ENTRY_101a8a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8a10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 101a8a20; body size 3 bytes.
#line 1 "ENTRY_101a8a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8a20(void)

{
  return;
}


// Reference entry 101a8a30; body size 36 bytes.
#line 1 "ENTRY_101a8a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a8a30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_101a6f70(puVar1,param_2);
  return;
}


// Reference entry 101a8a60; body size 36 bytes.
#line 1 "ENTRY_101a8a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a8a60(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_101a7120(puVar1,param_2);
  return;
}


// Reference entry 101a8a90; body size 5 bytes.
#line 1 "ENTRY_101a8a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8a90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8aa0; body size 5 bytes.
#line 1 "ENTRY_101a8aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8aa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8ab0; body size 5 bytes.
#line 1 "ENTRY_101a8ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8ab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8ac0; body size 5 bytes.
#line 1 "ENTRY_101a8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8ac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8ad0; body size 5 bytes.
#line 1 "ENTRY_101a8ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8ad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8ae0; body size 6 bytes.
#line 1 "ENTRY_101a8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101a8ae0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIIntArray");
}


// Reference entry 101a8af0; body size 6 bytes.
#line 1 "ENTRY_101a8af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101a8af0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIObj");
}


// Reference entry 101a8b00; body size 19 bytes.
#line 1 "ENTRY_101a8b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8b00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 101a8b20; body size 5 bytes.
#line 1 "ENTRY_101a8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101a8b20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8b30; body size 35 bytes.
#line 1 "ENTRY_101a8b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8b30(int param_1,int param_2)

{
  thunk_FUN_101a8700(param_1,param_2,param_2 - param_1 >> 2,0);
  return;
}


// Reference entry 101a8b60; body size 31 bytes.
#line 1 "ENTRY_101a8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8b60(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_101a83f0(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return;
}


// Reference entry 101a8b90; body size 31 bytes.
#line 1 "ENTRY_101a8b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8b90(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_101a8700(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return;
}


// Reference entry 101a8bc0; body size 19 bytes.
#line 1 "ENTRY_101a8bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8bc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 101a8be0; body size 95 bytes.
#line 1 "ENTRY_101a8be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8be0(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_2 != (int *)(param_3)) && (param_2 + 1 != param_3)) {
    piVar3 = (int *)(param_2 + 1);
    iVar4 = (int)(*param_2);
    do {
      iVar1 = (int)(*piVar3);
      piVar2 = (int *)(piVar3 + 1);
      if (iVar4 == iVar1) {
        for (; piVar2 != (int *)(param_3); piVar2 = piVar2 + 1) {
          if (*param_2 != *piVar2) {
            param_2 = (int *)(param_2 + 1);
            *param_2 = (int)(*piVar2);
          }
        }
        *param_1 = (undefined4)(param_2 + 1);
        return;
      }
      param_2 = (int *)(piVar3);
      piVar3 = (int *)(piVar2);
      iVar4 = (int)(iVar1);
    } while (piVar2 != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_3);
  return;
}


// Reference entry 101a8c60; body size 95 bytes.
#line 1 "ENTRY_101a8c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a8c60(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_2 != (int *)(param_3)) && (param_2 + 1 != param_3)) {
    piVar3 = (int *)(param_2 + 1);
    iVar4 = (int)(*param_2);
    do {
      iVar1 = (int)(*piVar3);
      piVar2 = (int *)(piVar3 + 1);
      if (iVar4 == iVar1) {
        for (; piVar2 != (int *)(param_3); piVar2 = piVar2 + 1) {
          if (*param_2 != *piVar2) {
            param_2 = (int *)(param_2 + 1);
            *param_2 = (int)(*piVar2);
          }
        }
        *param_1 = (undefined4)(param_2 + 1);
        return;
      }
      param_2 = (int *)(piVar3);
      piVar3 = (int *)(piVar2);
      iVar4 = (int)(iVar1);
    } while (piVar2 != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_3);
  return;
}


// Reference entry 101a8ce0; body size 54 bytes.
#line 1 "ENTRY_101a8ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8ce0(undefined4 *param_1)

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


// Reference entry 101a8d30; body size 27 bytes.
#line 1 "ENTRY_101a8d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8d30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8d60; body size 27 bytes.
#line 1 "ENTRY_101a8d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8e10; body size 11 bytes.
#line 1 "ENTRY_101a8e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101a8e10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8e20; body size 11 bytes.
#line 1 "ENTRY_101a8e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101a8e20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8e30; body size 23 bytes.
#line 1 "ENTRY_101a8e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8e30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8e50; body size 23 bytes.
#line 1 "ENTRY_101a8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8e50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8e70; body size 3 bytes.
#line 1 "ENTRY_101a8e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a8e70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8e80; body size 3 bytes.
#line 1 "ENTRY_101a8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a8e80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a8e90; body size 23 bytes.
#line 1 "ENTRY_101a8e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8e90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8eb0; body size 23 bytes.
#line 1 "ENTRY_101a8eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8ed0; body size 9 bytes.
#line 1 "ENTRY_101a8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIIntArray_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8ee0; body size 54 bytes.
#line 1 "ENTRY_101a8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101a8ee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&Ext_SCIntArray_vftable);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a8fc0; body size 19 bytes.
#line 1 "ENTRY_101a8fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a8fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 101a9280; body size 7 bytes.
#line 1 "ENTRY_101a9280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a9280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 101a9320; body size 12 bytes.
#line 1 "ENTRY_101a9320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_101a9320(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 101a9340; body size 3 bytes.
#line 1 "ENTRY_101a9340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9340(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a9350; body size 7 bytes.
#line 1 "ENTRY_101a9350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_101a9350(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 101a9360; body size 3 bytes.
#line 1 "ENTRY_101a9360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9360(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a9370; body size 3 bytes.
#line 1 "ENTRY_101a9370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9370(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a9380; body size 18 bytes.
#line 1 "ENTRY_101a9380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a9380(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 101a93a0; body size 14 bytes.
#line 1 "ENTRY_101a93a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101a93a0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101a93c0; body size 14 bytes.
#line 1 "ENTRY_101a93c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101a93c0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101a9780; body size 49 bytes.
#line 1 "ENTRY_101a9780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_101a9780(uint param_2)
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


// Reference entry 101a97c0; body size 49 bytes.
#line 1 "ENTRY_101a97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_101a97c0(uint param_2)
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


// Reference entry 101a98e0; body size 3 bytes.
#line 1 "ENTRY_101a98e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a98e0(void)

{
  return;
}


// Reference entry 101a98f0; body size 3 bytes.
#line 1 "ENTRY_101a98f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a98f0(void)

{
  return;
}


// Reference entry 101a9900; body size 3 bytes.
#line 1 "ENTRY_101a9900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a9910; body size 3 bytes.
#line 1 "ENTRY_101a9910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a9920; body size 3 bytes.
#line 1 "ENTRY_101a9920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a9930; body size 3 bytes.
#line 1 "ENTRY_101a9930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a9940; body size 3 bytes.
#line 1 "ENTRY_101a9940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a9950; body size 3 bytes.
#line 1 "ENTRY_101a9950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a9960; body size 3 bytes.
#line 1 "ENTRY_101a9960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a9970; body size 3 bytes.
#line 1 "ENTRY_101a9970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101a9980; body size 3 bytes.
#line 1 "ENTRY_101a9980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a9980(void)

{
  return;
}


// Reference entry 101a9990; body size 3 bytes.
#line 1 "ENTRY_101a9990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a9990(void)

{
  return;
}


// Reference entry 101a99a0; body size 9 bytes.
#line 1 "ENTRY_101a99a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a99a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 101a9a90; body size 38 bytes.
#line 1 "ENTRY_101a9a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_101a9a90(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 101a9ac0; body size 38 bytes.
#line 1 "ENTRY_101a9ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_101a9ac0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 101a9af0; body size 27 bytes.
#line 1 "ENTRY_101a9af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a9af0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 101a9b20; body size 27 bytes.
#line 1 "ENTRY_101a9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a9b20(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 101a9b50; body size 27 bytes.
#line 1 "ENTRY_101a9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101a9b50(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 101a9b80; body size 27 bytes.
#line 1 "ENTRY_101a9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101a9b80(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 101a9bb0; body size 3 bytes.
#line 1 "ENTRY_101a9bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9bb0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101a9bc0; body size 3 bytes.
#line 1 "ENTRY_101a9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101a9bc0(void)

{
  return;
}


// Reference entry 101a9cf0; body size 39 bytes.
#line 1 "ENTRY_101a9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a9cf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    return;
  }
  thunk_FUN_101a7120(puVar1,param_2);
  return;
}


// Reference entry 101a9d50; body size 11 bytes.
#line 1 "ENTRY_101a9d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101a9d50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 101a9d60; body size 9 bytes.
#line 1 "ENTRY_101a9d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a9d60(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 101a9d70; body size 9 bytes.
#line 1 "ENTRY_101a9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101a9d70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 101a9d80; body size 7 bytes.
#line 1 "ENTRY_101a9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a9d80(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}


// Reference entry 101a9d90; body size 6 bytes.
#line 1 "ENTRY_101a9d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a9d90(undefined4 *param_1)

{
  param_1[1] = *param_1;
  return;
}


// Reference entry 101a9da0; body size 6 bytes.
#line 1 "ENTRY_101a9da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101a9da0(undefined4 *param_1)

{
  param_1[1] = *param_1;
  return;
}


// Reference entry 101a9ed0; body size 96 bytes.
#line 1 "ENTRY_101a9ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_101a9ed0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x14));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&Ext_SCIObjImpl_vftable);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&Ext_SCIntArray_vftable);
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101a9f50; body size 61 bytes.
#line 1 "ENTRY_101a9f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101a9f50(int param_1,int param_2)

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


// Reference entry 101a9fa0; body size 61 bytes.
#line 1 "ENTRY_101a9fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_101a9fa0(int param_1,int param_2)

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


// Reference entry 101a9ff0; body size 9 bytes.
#line 1 "ENTRY_101a9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101a9ff0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101aa000; body size 12 bytes.
#line 1 "ENTRY_101aa000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101aa000(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101aa010; body size 51 bytes.
#line 1 "ENTRY_101aa010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101aa010(undefined4 *param_2,void *param_3,void *param_4)
{
  int param_1 = (int )this;
  size_t _Size;
  
  if (param_3 != (void *)(param_4)) {
    _Size = (size_t)(*(int *)(param_1 + 4) - (int)param_4);
    memmove(param_3,param_4,_Size);
    *(size_t *)(param_1 + 4) = (int)param_3 + _Size;
  }
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 101aa050; body size 42 bytes.
#line 1 "ENTRY_101aa050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101aa050(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(void *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 101aa0c0; body size 6 bytes.
#line 1 "ENTRY_101aa0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101aa0c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIIntArray");
}


// Reference entry 101aa0d0; body size 6 bytes.
#line 1 "ENTRY_101aa0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101aa0d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIObj");
}


// Reference entry 101aa0e0; body size 6 bytes.
#line 1 "ENTRY_101aa0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101aa0e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 101aa0f0; body size 6 bytes.
#line 1 "ENTRY_101aa0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101aa0f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 101aa100; body size 6 bytes.
#line 1 "ENTRY_101aa100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101aa100(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 101aa110; body size 6 bytes.
#line 1 "ENTRY_101aa110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101aa110(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 101aa120; body size 3 bytes.
#line 1 "ENTRY_101aa120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101aa120(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101aa130; body size 36 bytes.
#line 1 "ENTRY_101aa130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101aa130(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_101a6f70(puVar1,param_2);
  return;
}


// Reference entry 101aa160; body size 36 bytes.
#line 1 "ENTRY_101aa160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101aa160(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_101a7120(puVar1,param_2);
  return;
}


// Reference entry 101aa3d0; body size 28 bytes.
#line 1 "ENTRY_101aa3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aa3d0(undefined4 *param_1)

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


// Reference entry 101aa400; body size 28 bytes.
#line 1 "ENTRY_101aa400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aa400(undefined4 *param_1)

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


// Reference entry 101aa520; body size 9 bytes.
#line 1 "ENTRY_101aa520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_101aa520(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 101aa5a0; body size 25 bytes.
#line 1 "ENTRY_101aa5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aa5a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aa670; body size 25 bytes.
#line 1 "ENTRY_101aa670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aa670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aa690; body size 25 bytes.
#line 1 "ENTRY_101aa690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aa690(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aa6b0; body size 18 bytes.
#line 1 "ENTRY_101aa6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aa6b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aa6d0; body size 5 bytes.
#line 1 "ENTRY_101aa6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101aa6d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101aa6e0; body size 5 bytes.
#line 1 "ENTRY_101aa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101aa6e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101aa6f0; body size 5 bytes.
#line 1 "ENTRY_101aa6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101aa6f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101aa700; body size 22 bytes.
#line 1 "ENTRY_101aa700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101aa700(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aa890; body size 26 bytes.
#line 1 "ENTRY_101aa890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101aa890(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101aa8b0; body size 25 bytes.
#line 1 "ENTRY_101aa8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101aa8b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aa8d0; body size 91 bytes.
#line 1 "ENTRY_101aa8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101aa8d0(int *param_2)
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


// Reference entry 101aa950; body size 26 bytes.
#line 1 "ENTRY_101aa950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101aa950(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 101aaae0; body size 83 bytes.
#line 1 "ENTRY_101aaae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101aaae0(int *param_2)
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


// Reference entry 101aad70; body size 5 bytes.
#line 1 "ENTRY_101aad70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101aad70(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = (int)(0x1505);
  pcVar3 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar3 = (char *)((char *)*param_1);
  }
  cVar1 = (char)(*pcVar3);
  while (cVar1 != 0) {
    pcVar3 = (char *)(pcVar3 + 1);
    iVar2 = (int)(tolower((int)cVar1));
    iVar4 = (int)(iVar4 * 0x21 + iVar2);
    cVar1 = (char)(*pcVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 101aad80; body size 24 bytes.
#line 1 "ENTRY_101aad80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_101aad80(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a31e0(param_1,param_2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 == '\0');
}


// Reference entry 101aada0; body size 3 bytes.
#line 1 "ENTRY_101aada0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101aada0(void)

{
  return;
}


// Reference entry 101aadb0; body size 3 bytes.
#line 1 "ENTRY_101aadb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101aadb0(void)

{
  return;
}


// Reference entry 101ab370; body size 64 bytes.
#line 1 "ENTRY_101ab370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_101ab370(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_3);
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  piVar3 = (int *)(*(int **)(param_1 + 8));
  piVar4 = (int *)(*(int **)(param_3 + 4));
  *(int **)(iVar2 + 4) = piVar4;
  *piVar4 = (int)(iVar2);
  *piVar3 = (int)(param_3);
  *(int **)(param_3 + 4) = piVar3;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 101ab3c0; body size 13 bytes.
#line 1 "ENTRY_101ab3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab3c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ab3d0; body size 13 bytes.
#line 1 "ENTRY_101ab3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab3d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ab3e0; body size 13 bytes.
#line 1 "ENTRY_101ab3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab3e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ab3f0; body size 13 bytes.
#line 1 "ENTRY_101ab3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab3f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 101ab400; body size 33 bytes.
#line 1 "ENTRY_101ab400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101ab400(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 101ab430; body size 3 bytes.
#line 1 "ENTRY_101ab430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab430(void)

{
  return;
}


// Reference entry 101ab440; body size 3 bytes.
#line 1 "ENTRY_101ab440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab440(void)

{
  return;
}


// Reference entry 101ab450; body size 3 bytes.
#line 1 "ENTRY_101ab450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab450(void)

{
  return;
}


// Reference entry 101ab460; body size 18 bytes.
#line 1 "ENTRY_101ab460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101ab460(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 101ab480; body size 18 bytes.
#line 1 "ENTRY_101ab480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101ab480(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 101ab7e0; body size 15 bytes.
#line 1 "ENTRY_101ab7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab7e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 101ab8a0; body size 22 bytes.
#line 1 "ENTRY_101ab8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101ab8a0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0xccccccd) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0x14);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 101ab8c0; body size 5 bytes.
#line 1 "ENTRY_101ab8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab8c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab8d0; body size 7 bytes.
#line 1 "ENTRY_101ab8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab8d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101ab8e0; body size 7 bytes.
#line 1 "ENTRY_101ab8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab8e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 101ab8f0; body size 5 bytes.
#line 1 "ENTRY_101ab8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab8f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab900; body size 3 bytes.
#line 1 "ENTRY_101ab900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab900(void)

{
  return;
}


// Reference entry 101ab910; body size 3 bytes.
#line 1 "ENTRY_101ab910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ab910(void)

{
  return;
}


// Reference entry 101ab920; body size 5 bytes.
#line 1 "ENTRY_101ab920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab930; body size 36 bytes.
#line 1 "ENTRY_101ab930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_101ab930(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 101ab960; body size 5 bytes.
#line 1 "ENTRY_101ab960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab970; body size 5 bytes.
#line 1 "ENTRY_101ab970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab980; body size 5 bytes.
#line 1 "ENTRY_101ab980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab990; body size 5 bytes.
#line 1 "ENTRY_101ab990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab9a0; body size 5 bytes.
#line 1 "ENTRY_101ab9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab9a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab9b0; body size 5 bytes.
#line 1 "ENTRY_101ab9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab9b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab9c0; body size 5 bytes.
#line 1 "ENTRY_101ab9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab9c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101ab9d0; body size 5 bytes.
#line 1 "ENTRY_101ab9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101ab9d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101aba10; body size 13 bytes.
#line 1 "ENTRY_101aba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101aba10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 101abaa0; body size 3 bytes.
#line 1 "ENTRY_101abaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101abaa0(void)

{
  return;
}


// Reference entry 101abd50; body size 36 bytes.
#line 1 "ENTRY_101abd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_101abd50(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_101ab4a0(puVar1,param_2);
  return;
}


// Reference entry 101abd80; body size 15 bytes.
#line 1 "ENTRY_101abd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abd80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101abda0; body size 15 bytes.
#line 1 "ENTRY_101abda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abda0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101abdc0; body size 15 bytes.
#line 1 "ENTRY_101abdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abdc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 101abe60; body size 5 bytes.
#line 1 "ENTRY_101abe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abe60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abe70; body size 5 bytes.
#line 1 "ENTRY_101abe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abe70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abe80; body size 5 bytes.
#line 1 "ENTRY_101abe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abe80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abe90; body size 5 bytes.
#line 1 "ENTRY_101abe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abe90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abea0; body size 5 bytes.
#line 1 "ENTRY_101abea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abeb0; body size 5 bytes.
#line 1 "ENTRY_101abeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abeb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abec0; body size 5 bytes.
#line 1 "ENTRY_101abec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abed0; body size 5 bytes.
#line 1 "ENTRY_101abed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abed0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abee0; body size 5 bytes.
#line 1 "ENTRY_101abee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101abee0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101abef0; body size 6 bytes.
#line 1 "ENTRY_101abef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abef0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIAbilityDelegate");
}


// Reference entry 101abf00; body size 6 bytes.
#line 1 "ENTRY_101abf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf00(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIAbilityListener");
}


// Reference entry 101abf10; body size 6 bytes.
#line 1 "ENTRY_101abf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIActionDelegate");
}


// Reference entry 101abf20; body size 6 bytes.
#line 1 "ENTRY_101abf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIDebug");
}


// Reference entry 101abf30; body size 6 bytes.
#line 1 "ENTRY_101abf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIEnumerable");
}


// Reference entry 101abf40; body size 6 bytes.
#line 1 "ENTRY_101abf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf40(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIEventSink");
}


// Reference entry 101abf50; body size 6 bytes.
#line 1 "ENTRY_101abf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCILibrary");
}


// Reference entry 101abf60; body size 6 bytes.
#line 1 "ENTRY_101abf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCILibraryTests");
}


// Reference entry 101abf70; body size 6 bytes.
#line 1 "ENTRY_101abf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINetworkManagement");
}


// Reference entry 101abf80; body size 6 bytes.
#line 1 "ENTRY_101abf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101abf80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpFactory");
}


// Reference entry 101ac200; body size 30 bytes.
#line 1 "ENTRY_101ac200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101ac200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 101ac320; body size 27 bytes.
#line 1 "ENTRY_101ac320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ac320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac350; body size 21 bytes.
#line 1 "ENTRY_101ac350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101ac350(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac370; body size 27 bytes.
#line 1 "ENTRY_101ac370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ac370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac550; body size 16 bytes.
#line 1 "ENTRY_101ac550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ac550(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac570; body size 16 bytes.
#line 1 "ENTRY_101ac570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ac570(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac980; body size 9 bytes.
#line 1 "ENTRY_101ac980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ac980(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac9b0; body size 18 bytes.
#line 1 "ENTRY_101ac9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101ac9b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac9d0; body size 11 bytes.
#line 1 "ENTRY_101ac9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101ac9d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac9e0; body size 11 bytes.
#line 1 "ENTRY_101ac9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101ac9e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ac9f0; body size 18 bytes.
#line 1 "ENTRY_101ac9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101ac9f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aca10; body size 11 bytes.
#line 1 "ENTRY_101aca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101aca10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aca20; body size 11 bytes.
#line 1 "ENTRY_101aca20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101aca20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aca30; body size 16 bytes.
#line 1 "ENTRY_101aca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aca30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aca50; body size 11 bytes.
#line 1 "ENTRY_101aca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101aca50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aca60; body size 14 bytes.
#line 1 "ENTRY_101aca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101aca60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_2;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101aca80; body size 23 bytes.
#line 1 "ENTRY_101aca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101aca80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101acaa0; body size 23 bytes.
#line 1 "ENTRY_101acaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101acaa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101acac0; body size 3 bytes.
#line 1 "ENTRY_101acac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101acac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 101acc70; body size 23 bytes.
#line 1 "ENTRY_101acc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101acc70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101acc90; body size 11 bytes.
#line 1 "ENTRY_101acc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101acc90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_AnacapaLauncherCB_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101acca0; body size 25 bytes.
#line 1 "ENTRY_101acca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101acca0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = param_3;
  param_1[2] = 0xb;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101accc0; body size 25 bytes.
#line 1 "ENTRY_101accc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101accc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[2] = param_3;
  param_1[1] = 10;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101acce0; body size 9 bytes.
#line 1 "ENTRY_101acce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101acce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_RITQHandler_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101accf0; body size 200 bytes.
#line 1 "ENTRY_101accf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101accf0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  puVar2 = (undefined4 *)(param_1 + 0xe);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  iVar1 = (int)(0);
  param_1[2] = (uint)&Ext_SCLoggingHelper_vftable;
  param_1[3] = (uint)&Ext_RITQHandler_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCAbilityManager_vftable);
  param_1[2] = (uint)&Ext_SCAbilityManager_vftable;
  param_1[3] = (uint)&Ext_SCAbilityManager_vftable;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
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
  do {
    *puVar2 = (undefined4)(0);
    puVar2 = (undefined4 *)(puVar2 + 1);
    *(undefined1 *)((int)param_1 + iVar1 + 100) = 0;
    iVar1 = (int)(iVar1 + 1);
  } while (iVar1 < 0xb);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad040; body size 42 bytes.
#line 1 "ENTRY_101ad040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101ad040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&Ext_SCHouseholdEventSinkInternal_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad080; body size 9 bytes.
#line 1 "ENTRY_101ad080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIAbilityListener_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad090; body size 11 bytes.
#line 1 "ENTRY_101ad090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIActionDelegate_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad0a0; body size 11 bytes.
#line 1 "ENTRY_101ad0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIDebug_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad0b0; body size 11 bytes.
#line 1 "ENTRY_101ad0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIEnumerable_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad0c0; body size 11 bytes.
#line 1 "ENTRY_101ad0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILibrary_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad0d0; body size 9 bytes.
#line 1 "ENTRY_101ad0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCILibrary_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad0e0; body size 11 bytes.
#line 1 "ENTRY_101ad0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad0e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad990; body size 9 bytes.
#line 1 "ENTRY_101ad990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ad990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCLoggingHelper_vftable);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ad9e0; body size 11 bytes.
#line 1 "ENTRY_101ad9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_101ad9e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 101ada00; body size 19 bytes.
#line 1 "ENTRY_101ada00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101ada00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 101aebe0; body size 3 bytes.
#line 1 "ENTRY_101aebe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101aebe0(void)

{
  return;
}


// Reference entry 101aeca0; body size 5 bytes.
#line 1 "ENTRY_101aeca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aeca0(int param_1)

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
  thunk_FUN_101ab700(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 101aefc0; body size 19 bytes.
#line 1 "ENTRY_101aefc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aefc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 101aefe0; body size 7 bytes.
#line 1 "ENTRY_101aefe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101aefe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 101af010; body size 7 bytes.
#line 1 "ENTRY_101af010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_101af010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  return;
}


// Reference entry 101af1b0; body size 15 bytes.
#line 1 "ENTRY_101af1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_101af1b0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 101af1f0; body size 65 bytes.
#line 1 "ENTRY_101af1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af1f0(int *param_2)
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


// Reference entry 101af2c0; body size 65 bytes.
#line 1 "ENTRY_101af2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af2c0(int *param_2)
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


// Reference entry 101af320; body size 65 bytes.
#line 1 "ENTRY_101af320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af320(int *param_2)
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


// Reference entry 101af380; body size 65 bytes.
#line 1 "ENTRY_101af380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af380(int *param_2)
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


// Reference entry 101af3e0; body size 65 bytes.
#line 1 "ENTRY_101af3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af3e0(int *param_2)
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


// Reference entry 101af440; body size 65 bytes.
#line 1 "ENTRY_101af440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af440(int *param_2)
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


// Reference entry 101af580; body size 65 bytes.
#line 1 "ENTRY_101af580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af580(int *param_2)
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


// Reference entry 101af650; body size 65 bytes.
#line 1 "ENTRY_101af650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af650(int *param_2)
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


// Reference entry 101af6b0; body size 65 bytes.
#line 1 "ENTRY_101af6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af6b0(int *param_2)
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


// Reference entry 101af710; body size 65 bytes.
#line 1 "ENTRY_101af710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af710(int *param_2)
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


// Reference entry 101af770; body size 65 bytes.
#line 1 "ENTRY_101af770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af770(int *param_2)
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


// Reference entry 101af7d0; body size 65 bytes.
#line 1 "ENTRY_101af7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af7d0(int *param_2)
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


// Reference entry 101af830; body size 65 bytes.
#line 1 "ENTRY_101af830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af830(int *param_2)
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


// Reference entry 101af890; body size 65 bytes.
#line 1 "ENTRY_101af890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af890(int *param_2)
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


// Reference entry 101af8f0; body size 65 bytes.
#line 1 "ENTRY_101af8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af8f0(int *param_2)
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


// Reference entry 101af950; body size 65 bytes.
#line 1 "ENTRY_101af950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101af950(int *param_2)
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


// Reference entry 101afa20; body size 65 bytes.
#line 1 "ENTRY_101afa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101afa20(int *param_2)
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


// Reference entry 101afa80; body size 65 bytes.
#line 1 "ENTRY_101afa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101afa80(int *param_2)
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


// Reference entry 101afae0; body size 65 bytes.
#line 1 "ENTRY_101afae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101afae0(int *param_2)
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


// Reference entry 101afb40; body size 65 bytes.
#line 1 "ENTRY_101afb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_101afb40(int *param_2)
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


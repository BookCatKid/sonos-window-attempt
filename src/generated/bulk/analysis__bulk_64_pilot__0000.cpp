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
extern int FUN_117e9640(...);
extern int FUN_117eda60(...);
extern int FUN_1183f2c0(...);
extern int FUN_11862560(...);
extern int _CxxThrowException(...);
extern int _atexit(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int ceil(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int setFromUTF16(...);
extern int thunk_FUN_10116b10(...);
extern int thunk_FUN_101170a0(...);
extern int thunk_FUN_10117950(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_10118fc0(...);
extern int thunk_FUN_10129af0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a1ea0(...);
extern int thunk_FUN_101a2000(...);
extern int thunk_FUN_101a2160(...);
extern int thunk_FUN_101da5c0(...);
extern int thunk_FUN_10288030(...);
extern int thunk_FUN_103056e0(...);
extern int thunk_FUN_10310680(...);
extern int thunk_FUN_103d0280(...);
extern int thunk_FUN_10c40d70(...);
extern int thunk_FUN_111d7e60(...);
extern int thunk_FUN_112a7b70(...);
extern int thunk_FUN_112a7ea0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11d33164;
extern int DAT_12126b84;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a0bb4;
extern int DAT_121a0bb8;
extern int DAT_121a0fd4;
extern int DAT_121a0fd8;
extern int DAT_121a1028;
extern int DAT_121a2764;
extern int DAT_121a5544;
extern int DAT_121a6008;
extern int DAT_121a6014;
extern int DAT_122f33e0;
extern int DAT_122f33e8;
extern int DAT_122f33f4;
extern int Ext_SCIAbilityDelegateSwigBase_canEnablePrereq;
extern int Ext_SCIAbilityDelegateSwigBase_canRequestPrereq;
extern int Ext_SCIAbilityDelegateSwigBase_canSuggestPrereq;
extern int Ext_SCIAbilityDelegateSwigBase_enablePrereq;
extern int Ext_SCIAbilityDelegateSwigBase_getIOSControlPanelSwipeDirection;
extern int Ext_SCIAbilityDelegateSwigBase_initialize;
extern int Ext_SCIAbilityDelegateSwigBase_isAlwaysAvailable;
extern int Ext_SCIAbilityDelegateSwigBase_isAlwaysDisallowed;
extern int Ext_SCIAbilityDelegateSwigBase_isPrereq;
extern int Ext_SCIAbilityDelegateSwigBase_requestPrereq;
extern int Ext_SCIAbilityDelegateSwigBase_requireFineLocationPermission;
extern int Ext_SCIAbilityDelegateSwigBase_shutdown;
extern int Ext_SCIAbilityDelegateSwigBase_suggestPrereq;
extern int Ext_SCIActionDelegateSwigBase_asyncActionHasCompleted;
extern int Ext_SCIActionFactorySwigBase_createBrowsePickerAction;
extern int Ext_SCIActionFactorySwigBase_createCustomUIAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayBrowseStackAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayCustomControlAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayDatePickerAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayDualTextInputAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayHelpSheetAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayInfoViewAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayIntegerInputAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayMenuAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayMenuAndTextInputAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayMenuPopupAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayMessagePopupAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayTextInputAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayTextPaneAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayTimePickerAction;
extern int Ext_SCIActionFactorySwigBase_createDisplayWizardAction;
extern int Ext_SCIActionFactorySwigBase_createInlineControllerUpdateAction;
extern int Ext_SCIActionFactorySwigBase_createModalSettingsMenuAction;
extern int Ext_SCIActionFactorySwigBase_createNavigationAction;
extern int Ext_SCIActionFactorySwigBase_createOpenURIAction;
extern int Ext_SCIActionFactorySwigBase_createPopBrowseAction;
extern int Ext_SCIActionFactorySwigBase_createPresentAlarmInterfaceAction;
extern int Ext_SCIActionFactorySwigBase_createPushSCUriAction;
extern int Ext_SCIActionFactorySwigBase_createRunAsyncIOOperationAction;
extern int Ext_SCIActionFactorySwigBase_createRunAsyncIOOperationActionWithMessage;
extern int Ext_SCIActionFactorySwigBase_createScheduleAlarmMonitorAction;
extern int Ext_SCIActionFactorySwigBase_createSummonNewWizAction;
extern int Ext_SCIActionFilterSwigBase_acceptsAction;
extern int Ext_SCIActionSwigBase_perform;
extern int Ext_SCIAutomationDelegateSwigBase_hhidUpdated;
extern int Ext_SCIAutomationDelegateSwigBase_initializeFlutterAutomation;
extern int Ext_SCIBTAccessoryDelegateSwigBase_getConnectedDevices;
extern int Ext_SCIBTAccessoryDelegateSwigBase_isDeviceBonded;
extern int Ext_SCIBTAccessoryDelegateSwigBase_registerListener;
extern int Ext_SCIBTAccessoryDelegateSwigBase_requestOSPairing;
extern int Ext_SCIBTAccessoryDelegateSwigBase_requestPairing;
extern int Ext_SCIBTAccessoryDelegateSwigBase_shutdown;
extern int Ext_SCIBTAccessoryDelegateSwigBase_startDiscoveryScan;
extern int Ext_SCIBTAccessoryDelegateSwigBase_stopDiscoveryScan;
extern int Ext_SCIBTAccessoryDelegateSwigBase_unregisterListener;
extern int Ext_SCIBTClassicConnectionCallbackSwigBase_connectedToDevice;
extern int Ext_SCIBTClassicConnectionCallbackSwigBase_deviceInfoChanged;
extern int Ext_SCIBTClassicConnectionCallbackSwigBase_disconnectedFromDevice;
extern int Ext_SCIBTClassicConnectionCallbackSwigBase_isMobConnected;
extern int Ext_SCIBTClassicConnectionProviderSwigBase_isConnectedToSonosDevice;
extern int Ext_SCIBTClassicConnectionProviderSwigBase_isPlaying;
extern int Ext_SCIBTClassicConnectionProviderSwigBase_setCallback;
extern int Ext_SCIBleDelegateSwigBase_clearPacketQueue;
extern int Ext_SCIBleDelegateSwigBase_getPacketQueueLength;
extern int Ext_SCIBleDelegateSwigBase_queuePacketForSend;
extern int Ext_SCIBleDelegateSwigBase_registerListener;
extern int Ext_SCIBleDelegateSwigBase_sendQueuedPackets;
extern int Ext_SCIBleDelegateSwigBase_setTransferTestPacket;
extern int Ext_SCIBleDelegateSwigBase_shutdown;
extern int Ext_SCIBleDelegateSwigBase_tryConnect;
extern int Ext_SCIBleDelegateSwigBase_tryDisconnect;
extern int Ext_SCIBleDelegateSwigBase_tryFlushTransferTestBurst;
extern int Ext_SCIBleDelegateSwigBase_tryStartScan;
extern int Ext_SCIBleDelegateSwigBase_tryStopScan;
extern int Ext_SCIBleDelegateSwigBase_unregisterListener;
extern int Ext_SCIBlePeripheralDelegateSwigBase_getRequireSecurePairing;
extern int Ext_SCIBlePeripheralDelegateSwigBase_initPeripheral;
extern int Ext_SCIBlePeripheralDelegateSwigBase_registerListener;
extern int Ext_SCIBlePeripheralDelegateSwigBase_setRequireSecurePairing;
extern int Ext_SCIBlePeripheralDelegateSwigBase_shutdown;
extern int Ext_SCIBlePeripheralDelegateSwigBase_tryStartAdvertising;
extern int Ext_SCIBlePeripheralDelegateSwigBase_tryStopAdvertising;
extern int Ext_SCIBlePeripheralDelegateSwigBase_unregisterListener;
extern int Ext_SCIBrowseItemSwigBase_canActOn;
extern int Ext_SCIBrowseItemSwigBase_canPush;
extern int Ext_SCIBrowseItemSwigBase_getActions;
extern int Ext_SCIBrowseItemSwigBase_getAlbumArtType;
extern int Ext_SCIBrowseItemSwigBase_getAttributes;
extern int Ext_SCIBrowseItemSwigBase_getChildDataSource;
extern int Ext_SCIBrowseItemSwigBase_getDurationMillis;
extern int Ext_SCIBrowseItemSwigBase_getExtension;
extern int Ext_SCIBrowseItemSwigBase_getFilteredActions;
extern int Ext_SCIBrowseItemSwigBase_getMoreMenuDataSource;
extern int Ext_SCIBrowseItemSwigBase_getNumberOfAlbumArtURLs;
extern int Ext_SCIBrowseItemSwigBase_getResumeOffsetMillis;
extern int Ext_SCIBrowseItemSwigBase_hasMoreMenu;
extern int Ext_SCIBrowseItemSwigBase_hasOrdinal;
extern int Ext_SCIBrowseItemSwigBase_isBrowseItemTextAvailable;
extern int Ext_SCIBrowseItemSwigBase_isCompletelyPlayed;
extern int Ext_SCIBrowseItemSwigBase_isDataAvailable;
extern int Ext_SCIBrowseItemSwigBase_isLoading;
extern int Ext_SCIBrowseItemSwigBase_isParentOfSearch;
extern int Ext_SCIBrowseItemSwigBase_isPlaying;
extern int Ext_SCIBrowseItemSwigBase_isSecondaryTitleValid;
extern int Ext_SCIBrowseItemSwigBase_isSonosRadio;
extern int Ext_SCIBrowseItemSwigBase_isUnavailable;
extern int Ext_SCIBrowseItemSwigBase_resolveArtworkUrls;
extern int Ext_SCIBrowseItemSwigBase_showExplicitBadge;
extern int Ext_SCIBrowseItemSwigBase_showProgressInfo;
extern int Ext_SCIBrowseItemSwigBase_subscribe;
extern int Ext_SCIBrowseItemSwigBase_unsubscribe;
extern int Ext_SCIChirpDelegateSwigBase_registerListener;
extern int Ext_SCIChirpDelegateSwigBase_shutdown;
extern int Ext_SCIChirpDelegateSwigBase_startChirpReceiving;
extern int Ext_SCIChirpDelegateSwigBase_stopChirpReceiving;
extern int Ext_SCIChirpDelegateSwigBase_unregisterListener;
extern int Ext_SCIClipboardDelegateSwigBase_setClipboardData;
extern int Ext_SCICrashReportProviderSwigBase_enableLogging;
extern int Ext_SCICrashReportProviderSwigBase_setTag;
extern int Ext_SCICrashReportProviderSwigBase_startCrashReporter;
extern int Ext_SCICrashReportProviderSwigBase_updateUser;
extern int Ext_SCICustomSubWizardSwigBase_canClientCancelWizard;
extern int Ext_SCICustomSubWizardSwigBase_canClientTransitionToNextState;
extern int Ext_SCICustomSubWizardSwigBase_canClientTransitionToPreviousState;
extern int Ext_SCICustomSubWizardSwigBase_enter;
extern int Ext_SCICustomSubWizardSwigBase_exit;
extern int Ext_SCICustomSubWizardSwigBase_getNextStateID;
extern int Ext_SCICustomSubWizardSwigBase_getPropertyBag;
extern int Ext_SCICustomSubWizardSwigBase_getStringInput;
extern int Ext_SCICustomSubWizardSwigBase_getWizardComponents;
extern int Ext_SCICustomSubWizardSwigBase_getWizardPageProperties;
extern int Ext_SCICustomSubWizardSwigBase_isStateDone;
extern int Ext_SCICustomSubWizardSwigBase_onSubWizardStateTransition;
extern int Ext_SCICustomSubWizardSwigBase_raiseEvent;
extern int Ext_SCICustomSubWizardSwigBase_skipStateOnBacktracking;
extern int Ext_SCIEventSinkSwigBase_dispatchEvent;
extern int Ext_SCIExperimentManagerProviderSwigBase_getExperiments;
extern int Ext_SCIExperimentManagerProviderSwigBase_getFeatureVariableDouble;
extern int Ext_SCIExperimentManagerProviderSwigBase_getFeatureVariableInteger;
extern int Ext_SCIExperimentManagerProviderSwigBase_getFeatures;
extern int Ext_SCIExperimentManagerProviderSwigBase_getVariations;
extern int Ext_SCIExperimentManagerProviderSwigBase_initialize;
extern int Ext_SCIExperimentManagerProviderSwigBase_isFeatureEnabled;
extern int Ext_SCIExperimentManagerProviderSwigBase_isInitialized;
extern int Ext_SCIExperimentManagerProviderSwigBase_isVariationForced;
extern int Ext_SCIExperimentManagerProviderSwigBase_saveFeaturesJson;
extern int Ext_SCIExperimentManagerProviderSwigBase_saveVariationsJson;
extern int Ext_SCIExperimentManagerProviderSwigBase_setForcedVariation;
extern int Ext_SCIGetAboutSonosStringCBSwigBase_updateGetAboutSonosString;
extern int Ext_SCIGetSonosPlaylistsCBSwigBase_getSonosPlaylistsFailed;
extern int Ext_SCIGetSonosPlaylistsCBSwigBase_getSonosPlaylistsSucceeded;
extern int Ext_SCIHapticDelegateSwigBase_vibrate;
extern int Ext_SCIInAppMessagingProviderSwigBase_addTagToGroup;
extern int Ext_SCIInAppMessagingProviderSwigBase_hasDeviceToken;
extern int Ext_SCIInAppMessagingProviderSwigBase_removeTagFromGroup;
extern int Ext_SCIInAppMessagingProviderSwigBase_updateRegistration;
extern int Ext_SCIInAppPurchaseManagerProviderSwigBase_canMakePurchases;
extern int Ext_SCIInAppPurchaseManagerProviderSwigBase_fetchProducts;
extern int Ext_SCIInAppPurchaseManagerProviderSwigBase_initialize;
extern int Ext_SCIInAppPurchaseManagerProviderSwigBase_purchaseProduct;
extern int Ext_SCIInAppPurchaseManagerProviderSwigBase_shutdown;
extern int Ext_SCILifecycleAppProviderSwigBase_isAppWithSWGenInstalled;
extern int Ext_SCILocalMediaCollectionSwigBase_getAllNodeType;
extern int Ext_SCILocalMediaCollectionSwigBase_getCount;
extern int Ext_SCILocalMediaCollectionSwigBase_getItemAt;
extern int Ext_SCILocalMediaCollectionSwigBase_getItemThumbnailsPresentationType;
extern int Ext_SCILocalMediaCollectionSwigBase_getPresentationType;
extern int Ext_SCILocalMediaCollectionSwigBase_registerMediaCollectionListener;
extern int Ext_SCILocalMusicBrowseItemInfoSwigBase_getArtType;
extern int Ext_SCILocalMusicBrowseItemInfoSwigBase_getByteOffsetForTime;
extern int Ext_SCILocalMusicBrowseItemInfoSwigBase_getDuration;
extern int Ext_SCILocalMusicBrowseItemInfoSwigBase_getItemType;
extern int Ext_SCILocalMusicBrowseItemInfoSwigBase_getTrackNumber;
extern int Ext_SCILocalMusicBrowseItemInfoSwigBase_isContainer;
extern int Ext_SCILocalMusicBrowseItemInfoSwigBase_isPlayable;
extern int Ext_SCILocalMusicSearchableDelegateSwigBase_getCategoryIDs;
extern int Ext_SCILoggingProviderSwigBase_getAppLevel;
extern int Ext_SCILoggingProviderSwigBase_getFlutterLevel;
extern int Ext_SCILoggingProviderSwigBase_setAppLevel;
extern int Ext_SCILoggingProviderSwigBase_setFlutterLevel;
extern int Ext_SCIMdnsDelegateSwigBase_registerListener;
extern int Ext_SCIMdnsDelegateSwigBase_startPlayerDiscovery;
extern int Ext_SCIMdnsDelegateSwigBase_stopPlayerDiscovery;
extern int Ext_SCIMdnsDelegateSwigBase_unregisterListener;
extern int Ext_SCIMusicServerBrowseDelegateSwigBase_getAuthorization;
extern int Ext_SCIMusicServerBrowseDelegateSwigBase_getLocalMediaCollectionForId;
extern int Ext_SCIMusicServerBrowseDelegateSwigBase_getLocalMusicItemInfoForId;
extern int Ext_SCIMusicServerBrowseDelegateSwigBase_getLocalMusicSearchableDelegate;
extern int Ext_SCIMusicServerBrowseDelegateSwigBase_getRootItem;
extern int Ext_SCIMusicServerDelegateSwigBase_fillImageBytes;
extern int Ext_SCIMusicServerDelegateSwigBase_getMusicServerBrowseDelegate;
extern int Ext_SCIMusicServerDelegateSwigBase_onBeginStreaming;
extern int Ext_SCIMusicServerDelegateSwigBase_onEndStreaming;
extern int Ext_SCIMusicServerDelegateSwigBase_openFileDescriptor;
extern int Ext_SCINetstartListenerSwigBase_onDeviceDiscoveryWaiting;
extern int Ext_SCINetstartListenerSwigBase_onJoinComplete;
extern int Ext_SCINetstartListenerSwigBase_onJoinFail;
extern int Ext_SCINetstartListenerSwigBase_onNetParamsAcquired;
extern int Ext_SCINetworkManagementDelegateSwigBase_getNetworkType;
extern int Ext_SCINetworkManagementDelegateSwigBase_refreshSSID;
extern int Ext_SCINewWizDelegateSwigBase_performUpdate;
extern int Ext_SCINfcDelegateSwigBase_registerListener;
extern int Ext_SCINfcDelegateSwigBase_shutdown;
extern int Ext_SCINfcDelegateSwigBase_startScan;
extern int Ext_SCINfcDelegateSwigBase_stopScan;
extern int Ext_SCINfcDelegateSwigBase_unregisterListener;
extern int Ext_SCINfcDelegateSwigBase_updateNfcCardMessage;
extern int Ext_SCIObjImpl_vftable;
extern int Ext_SCIOpCBSwigBase_operationComplete;
extern int Ext_SCIPlatformDateTimeProvider_doesPlatformTimeZoneMatch;
extern int Ext_SCIPlatformDateTimeProvider_getPlatformDateTime;
extern int Ext_SCISavedDataProviderSwigBase_getBoolValue;
extern int Ext_SCISavedDataProviderSwigBase_getDoubleValue;
extern int Ext_SCISavedDataProviderSwigBase_getIntegerValue;
extern int Ext_SCISavedDataProviderSwigBase_registerDefaultBoolValue;
extern int Ext_SCISavedDataProviderSwigBase_registerDefaultIntegerValue;
extern int Ext_SCISavedDataProviderSwigBase_registerDefaultStringValue;
extern int Ext_SCISavedDataProviderSwigBase_remove;
extern int Ext_SCISavedDataProviderSwigBase_setBoolValue;
extern int Ext_SCISavedDataProviderSwigBase_setIntegerValue;
extern int Ext_SCISavedDataProviderSwigBase_setStringValue;
extern int Ext_SCISecureStoreSwigBase_isSecure;
extern int Ext_SCISecureStoreSwigBase_removeBlob;
extern int Ext_SCISecureStoreSwigBase_setBlob;
extern int Ext_SCISecurityContextSwigBase_getEnvironment;
extern int Ext_SCISecurityContextSwigBase_logCertificateData;
extern int Ext_SCISecurityContextSwigBase_setCertificateEnvironment;
extern int Ext_SCISecurityContextSwigBase_setCustomerID;
extern int Ext_SCISecurityContextSwigBase_setHHID;
extern int Ext_SCISecurityContextSwigBase_setSerialNumber;
extern int Ext_SCISecurityContextSwigBase_validateCertificateChain;
extern int Ext_SCISecurityContextSwigBase_validateCertificateData;
extern int Ext_SCIServiceAppInteropSwigBase_getAppInstallState;
extern int Ext_SCIServiceAppInteropSwigBase_openApp;
extern int Ext_SCIStackTraceCaptureDelegateSwigBase_stackTraceCaptured;
extern int Ext_SCIStringInputSwigBase_getMaxNumChars;
extern int Ext_SCIStringInputSwigBase_getRecommendedInputMethodType;
extern int Ext_SCIStringInputSwigBase_getValidationStatus;
extern int Ext_SCIStringInputSwigBase_isLocked;
extern int Ext_SCIStringInputSwigBase_isValid;
extern int Ext_SCIStringInputSwigBase_setString;
extern int Ext_SCITrackInfoSwigBase_getDuration;
extern int Ext_SCIUINotificationsDelegate_notificationsEnabled;
extern int Ext_SCIUINotificationsDelegate_registerLocalNotification;
extern int Ext_SCIUINotificationsDelegate_requestNotificationsPermissions;
extern int Ext_SCIUrbanAirshipDelegateSwigBase_addAndRemoveClientTags;
extern int Ext_SCIUrbanAirshipDelegateSwigBase_addClientTags;
extern int Ext_SCIUrbanAirshipDelegateSwigBase_hasUnreadMessages;
extern int Ext_SCIUrbanAirshipDelegateSwigBase_postCustomEvent;
extern int Ext_SCIUrbanAirshipDelegateSwigBase_registerListener;
extern int Ext_SCIUrbanAirshipDelegateSwigBase_unregisterListener;
extern int Ext_SCIUrlConnectionSwigBase_getCallback;
extern int Ext_SCIUrlConnectionSwigBase_getRequest;
extern int Ext_SCIUrlConnectionSwigBase_serialNum;
extern int Ext_SCIUrlConnectionSwigBase_setResponse;
extern int Ext_SCIUrlConnectionSwigBase_setResult;
extern int Ext_SCIUrlSessionCallbackSwigBase_sessionComplete;
extern int Ext_SCIUrlSessionProviderSwigBase_cancelURLConnection;
extern int Ext_SCIUrlSessionProviderSwigBase_clearCache;
extern int Ext_SCIUrlSessionProviderSwigBase_endURLSession;
extern int Ext_SCIUrlSessionProviderSwigBase_startURLSession;
extern int Ext_SCIVoiceServiceDelegateSwigBase_canDeviceSetupVoice;
extern int Ext_SCIVoiceServiceDelegateSwigBase_registerListener;
extern int Ext_SCIVoiceServiceDelegateSwigBase_startAuthentication;
extern int Ext_SCIVpnDelegateSwigBase_canOpenVPNSettings;
extern int Ext_SCIVpnDelegateSwigBase_openVPNSettings;
extern int Ext_SCIVpnDelegateSwigBase_requestVPN;
extern int Ext_SCIVpnDelegate_canOpenVPNSettings;
extern int Ext_SCIVpnDelegate_getRootObject;
extern int Ext_SCIVpnDelegate_openVPNSettings;
extern int Ext_SCIVpnDelegate_queryInterface;
extern int Ext_SCIVpnDelegate_requestVPN;
extern int Ext_SCIWebsocketCallbackSwigBase_onWebsocketConnected;
extern int Ext_SCIWebsocketCallbackSwigBase_onWebsocketDisconnected;
extern int Ext_SCIWebsocketCallbackSwigBase_onWebsocketError;
extern int Ext_SCIWebsocketCallbackSwigBase_receivedData;
extern int Ext_SCIWebsocketCallbackSwigBase_receivedString;
extern int Ext_SCIWebsocketDelegateSwigBase_connect;
extern int Ext_SCIWebsocketDelegateSwigBase_destroy;
extern int Ext_SCIWebsocketDelegateSwigBase_disconnect;
extern int Ext_SCIWebsocketDelegateSwigBase_setCallback;
extern int Ext_SCIWebsocketDelegateSwigBase_writeData;
extern int Ext_SCIWebsocketDelegateSwigBase_writeString;
extern int Ext_SCIWifiDelegateSwigBase_canConfigureAccessories;
extern int Ext_SCIWifiDelegateSwigBase_canJoinSSIDs;
extern int Ext_SCIWifiDelegateSwigBase_canStartScan;
extern int Ext_SCIWifiDelegateSwigBase_getConnectionOpen;
extern int Ext_SCIWifiDelegateSwigBase_isWifiConnected;
extern int Ext_SCIWifiDelegateSwigBase_joinSSID;
extern int Ext_SCIWifiDelegateSwigBase_launchAccessoryConfiguration;
extern int Ext_SCIWifiDelegateSwigBase_leaveSSID;
extern int Ext_SCIWifiDelegateSwigBase_registerListener;
extern int Ext_SCIWifiDelegateSwigBase_startScan;
extern int Ext_SCIWifiDelegateSwigBase_stopScan;
extern int Ext_SCIWifiDelegateSwigBase_unregisterListener;
extern int Ext_SCLibAssertionFailureCallback_assertionFailed;
extern int Ext_SCLibCallUIThreadCallback_callSCLibOnUIThread;
extern int Ext_SCLibCustomSubWizardCallback_createCustomSubWizard;
extern int Ext_SCLibCustomSubWizardCallback_hasCustomSubWizard;
extern int Ext_SCLibDelegateFactory_getSCLibDelegate;
extern int Ext_SCLibDelegateFactory_hasSCLibDelegate;
extern int Ext_SCLibLogCallback_LogDebugMessage;
extern int Ext_SCLibSonarCallback_canHardwareGainBeSet;
extern int Ext_SCLibSonarCallback_cleanupRecording;
extern int Ext_SCLibSonarCallback_getBitsPerSample;
extern int Ext_SCLibSonarCallback_getChannels;
extern int Ext_SCLibSonarCallback_getHoldStyle;
extern int Ext_SCLibSonarCallback_getSampleRate;
extern int Ext_SCLibSonarCallback_hasLimitedVerticalSpace;
extern int Ext_SCLibSonarCallback_prepareForRecording;
extern int Ext_SCLibSonarCallback_requireInputToChangeHoldStyle;
extern int Ext_SCLibSonarCallback_sonarBegin;
extern int Ext_SCLibSonarCallback_sonarEnd;
extern int Ext_SCLibSonarCallback_startMotionData;
extern int Ext_SCLibSonarCallback_startRawMotionData;
extern int Ext_SCLibSonarCallback_startRecording;
extern int Ext_SCLibSonarCallback_stopMotionData;
extern int Ext_SCLibSonarCallback_stopRawMotionData;
extern int Ext_SCLibSonarCallback_stopRecording;
extern int Ext_SCLibTruncatedStringsCallback_clearTruncatedStrings;
extern int Ext_SCLoggingHelper_vftable;
extern int Ext_SCNewWizManager_vftable;
extern int Ext_SCTestPointManager_vftable;
extern int Ext_SCUrl_vftable;
extern int Ext_Swig_DirectorException_vftable;
extern int Ext_Swig_DirectorPureVirtualException_vftable;
extern int _DAT_121a0fe4;
extern int _DAT_121a600c;
extern int _DAT_121a6010;
extern int _DAT_122f33dc;
extern int _DAT_122f33ec;
extern int _DAT_122f33f0;
extern int _DAT_122f33f8;
extern int g_lSCObjCount;
extern undefined1 LAB_101190d0[];
extern undefined1 LAB_114d9ec5[];
extern undefined1 LAB_114d9f05[];
extern undefined1 LAB_114d9f45[];
extern undefined1 LAB_114d9f70[];
extern undefined1 LAB_114d9fa0[];
extern undefined1 LAB_114da185[];
extern undefined1 LAB_114da34b[];
extern undefined1 LAB_114da400[];
extern undefined1 LAB_114da430[];
extern undefined1 LAB_114da460[];
extern undefined1 LAB_114da490[];
extern undefined1 LAB_114da4c0[];
extern undefined1 LAB_114da4f0[];
extern undefined1 LAB_114dbff0[];
extern undefined1 LAB_114dc0b0[];
extern undefined1 LAB_114dc0e0[];
extern undefined1 LAB_114dcd40[];
extern undefined1 LAB_114dce00[];
extern undefined1 LAB_114ddcbb[];
extern undefined1 LAB_114ddd5b[];
extern undefined1 LAB_114dddbb[];
extern undefined1 LAB_114dde32[];
extern undefined1 LAB_114ddeb2[];
extern undefined1 LAB_114ddf3d[];
extern undefined1 LAB_114ddf9e[];
extern undefined1 LAB_114ddffe[];
extern undefined1 LAB_114de071[];
extern undefined1 LAB_114de11d[];
extern undefined1 LAB_114de1a2[];
extern undefined1 LAB_114de22d[];
extern undefined1 LAB_114de2b8[];
extern undefined1 LAB_114de347[];
extern undefined1 LAB_114de3d7[];
extern undefined1 LAB_114de45d[];
extern undefined1 LAB_114de4d2[];
extern undefined1 LAB_114de55c[];
extern undefined1 LAB_114de5d1[];
extern undefined1 LAB_114de651[];
extern undefined1 LAB_114de6be[];
extern undefined1 LAB_114de73d[];
extern undefined1 LAB_114de7b2[];
extern undefined1 LAB_114de81e[];
extern undefined1 LAB_114de89d[];
extern undefined1 LAB_114de8fe[];
extern undefined1 LAB_114de95e[];
extern undefined1 LAB_114de9dd[];
extern undefined1 LAB_114dea3e[];
extern undefined1 LAB_114deaba[];
extern undefined1 LAB_114deb32[];
extern undefined1 LAB_114deb9e[];
extern undefined1 LAB_114debf0[];
extern undefined1 LAB_114dec48[];
extern undefined1 LAB_114ded0e[];
extern undefined1 LAB_114df060[];
extern undefined1 LAB_114df29e[];
extern undefined1 LAB_114df370[];
extern undefined1 LAB_114df42e[];
extern undefined1 LAB_114df48e[];
extern undefined1 LAB_114df54e[];
extern undefined1 LAB_114df60e[];
extern undefined1 LAB_114dfa20[];
extern undefined1 LAB_114dfa7e[];
extern undefined1 LAB_114dfade[];
extern undefined1 LAB_114dfb43[];
extern undefined1 LAB_114dfba6[];
extern undefined1 LAB_114dfc8e[];
extern undefined1 LAB_114dfcee[];
extern undefined1 LAB_114dff20[];
extern undefined1 LAB_114dff7d[];
extern undefined1 LAB_114dffcd[];
extern undefined1 LAB_114e001d[];
extern undefined1 LAB_114e00ce[];
extern undefined1 LAB_114e014a[];
extern undefined1 LAB_114e01ca[];
extern undefined1 LAB_114e022e[];
extern undefined1 LAB_114e046e[];
extern undefined1 LAB_114e04ce[];
extern undefined1 LAB_114e092e[];
extern undefined1 LAB_114e0b2e[];
extern undefined1 LAB_114e0b8e[];
extern undefined1 LAB_114e0cae[];
extern undefined1 LAB_114e0d0e[];
extern undefined1 LAB_114e0ee0[];
extern undefined1 LAB_114e105e[];
extern undefined1 LAB_114e1412[];
extern undefined1 LAB_114e147e[];
extern undefined1 LAB_114e14de[];
extern undefined1 LAB_114e1530[];
extern undefined1 LAB_114e1580[];
extern undefined1 LAB_114e15d0[];
extern undefined1 LAB_114e162b[];
extern undefined1 LAB_114e1680[];
extern undefined1 LAB_114e16db[];
extern undefined1 LAB_114e173b[];
extern undefined1 LAB_114e1790[];
extern undefined1 LAB_114e17e0[];
extern undefined1 LAB_114e1830[];
extern undefined1 LAB_114e19e8[];
extern undefined1 LAB_114e1a40[];
extern undefined1 LAB_114e1a98[];
extern undefined1 LAB_114e1af0[];
extern undefined1 LAB_114e1b48[];
extern undefined1 LAB_114e1ba0[];
extern undefined1 LAB_114e1c12[];
extern undefined1 LAB_114e1c78[];
extern undefined1 LAB_114e1cd0[];
extern undefined1 LAB_114e1d20[];
extern undefined1 LAB_114e1d70[];
extern undefined1 LAB_114e1dc0[];
extern undefined1 LAB_114e1e1b[];
extern undefined1 LAB_114e3870[];
extern undefined1 LAB_114e38c0[];
extern undefined1 LAB_114e391b[];
extern undefined1 LAB_114e3970[];
extern undefined1 LAB_114e39c8[];
extern undefined1 LAB_114e3a28[];
extern undefined1 LAB_114e3a8b[];
extern undefined1 LAB_114e3ae0[];
extern undefined1 LAB_114e3b38[];
extern undefined1 LAB_114e3b90[];
extern undefined1 LAB_114e3be8[];
extern undefined1 LAB_114e3c40[];
extern undefined1 LAB_114e3ca6[];
extern undefined1 LAB_114e3d08[];
extern undefined1 LAB_114e3d60[];
extern undefined1 LAB_114e3db8[];
extern undefined1 LAB_114e3e10[];
extern undefined1 LAB_114e3e6b[];
extern undefined1 LAB_114e3ecb[];
extern undefined1 LAB_114e3f20[];
extern undefined1 LAB_114e3f78[];
extern undefined1 LAB_114e3fd0[];
extern undefined1 LAB_114e4020[];
extern undefined1 LAB_114e4070[];
extern undefined1 LAB_114e40c0[];
extern undefined1 LAB_114e4170[];
extern undefined1 LAB_114e4390[];
extern undefined1 LAB_114e43f0[];
extern undefined1 LAB_114e4420[];
extern undefined1 LAB_114e4450[];
extern undefined1 LAB_114e44b0[];
extern undefined1 LAB_114e44e0[];
extern undefined1 LAB_114e4510[];
extern undefined1 LAB_114e45d0[];
extern undefined1 LAB_114e4660[];
extern undefined1 LAB_114e4690[];
extern undefined1 LAB_114e46c0[];
extern undefined1 LAB_114e46f0[];
extern undefined1 LAB_114e4720[];
extern undefined1 LAB_114e4750[];
extern undefined1 LAB_114e4780[];
extern undefined1 LAB_114e47b0[];
extern undefined1 LAB_114e47e0[];
extern undefined1 LAB_114e4810[];
extern undefined1 LAB_114e4840[];
extern undefined1 LAB_114e4870[];
extern undefined1 LAB_114e48a0[];
extern undefined1 LAB_114e48d0[];
extern undefined1 LAB_114e4900[];
extern undefined1 LAB_114e4930[];
extern undefined1 LAB_114e4960[];
extern undefined1 LAB_114e4990[];
extern undefined1 LAB_114e49c0[];
extern undefined1 LAB_114e49f0[];
extern undefined1 LAB_114e4a20[];
extern undefined1 LAB_114e4a50[];
extern undefined1 LAB_114e4a80[];
extern undefined1 LAB_114e4ab0[];
extern undefined1 LAB_114e4ae0[];
extern undefined1 LAB_114e4b10[];
extern undefined1 LAB_114e4b40[];
extern undefined1 LAB_114e4b70[];
extern undefined1 LAB_114e4ba0[];
extern undefined1 LAB_114e4bd0[];
extern undefined1 LAB_114e4c00[];
extern undefined1 LAB_114e4c30[];
extern undefined1 LAB_114e4c60[];
extern undefined1 LAB_114e4c90[];
extern undefined1 LAB_114e4cc0[];
extern undefined1 LAB_114e4cf0[];
extern undefined1 LAB_114e4d20[];
extern undefined1 LAB_114e4d50[];
extern undefined1 LAB_114e4d80[];
extern undefined1 LAB_114e4db0[];
extern undefined1 LAB_114e4e10[];
extern undefined1 LAB_114e4e40[];
extern undefined1 LAB_114e4e70[];
extern undefined1 LAB_114e4ea0[];
extern undefined1 LAB_114e4ed0[];
extern undefined1 LAB_114e4f00[];
extern undefined1 LAB_114e4f30[];
extern undefined1 LAB_114e4ff0[];
extern undefined1 LAB_114e5020[];
extern undefined1 LAB_114e5050[];
extern undefined1 LAB_114e5080[];
extern undefined1 LAB_114e50e0[];
extern undefined1 LAB_114e51a0[];
extern undefined1 LAB_114e5260[];
extern undefined1 LAB_114e5290[];
extern undefined1 LAB_114e52c0[];
extern undefined1 LAB_114e52f0[];
extern undefined1 LAB_114e5320[];
extern undefined1 LAB_114e5350[];
extern undefined1 LAB_114e5380[];
extern undefined1 LAB_114e53b0[];
extern undefined1 LAB_114e5470[];
extern undefined1 LAB_114e54a0[];
extern undefined1 LAB_114e54d0[];
extern undefined1 LAB_114e5500[];
extern undefined1 LAB_114e5530[];
extern undefined1 LAB_114e5560[];
extern undefined1 LAB_114e55c0[];
extern undefined1 LAB_114e55f0[];
extern undefined1 LAB_114e5650[];
extern undefined1 LAB_114e5680[];
extern undefined1 LAB_114e56b0[];
extern undefined1 LAB_114e56e0[];
extern undefined1 LAB_114e5710[];
extern undefined1 LAB_114e5740[];
extern undefined1 LAB_114e5770[];
extern undefined1 LAB_114e57a0[];
extern undefined1 LAB_114e5830[];
extern undefined1 LAB_114e5860[];
extern undefined1 LAB_114e5890[];
extern undefined1 LAB_114e58c0[];
extern undefined1 LAB_114e58f0[];
extern undefined1 LAB_114e5920[];
extern undefined1 LAB_114e5950[];
extern undefined1 LAB_114e59b0[];
extern undefined1 LAB_114e59e0[];
extern undefined1 LAB_114e5aa0[];
extern undefined1 LAB_114e5ad0[];
extern undefined1 LAB_114e5b00[];
extern undefined1 LAB_114e5b30[];
extern undefined1 LAB_114e5b60[];
extern undefined1 LAB_114e5b90[];
extern undefined1 LAB_114e5c20[];
extern undefined1 LAB_114e5c50[];
extern undefined1 LAB_114e5d40[];
extern undefined1 LAB_114e5da0[];
extern undefined1 LAB_114e5e00[];
extern undefined1 LAB_114e5e30[];
extern undefined1 LAB_114f8587[];
extern undefined1 LAB_1151a1dd[];
extern undefined1 LAB_11530617[];
extern undefined1 LAB_11531a5a[];
extern undefined1 LAB_115e026c[];
extern undefined1 LAB_116dcdd7[];
extern undefined1 LAB_117065cf[];
extern undefined1 LAB_117c41a9[];
extern int *stack0x00000004;
extern int *stack0xffffffe0;
extern int *stack0xffffffe4;
extern int *stack0xfffffffc;
extern char s_Attempt_to_invoke_pure_virtual_m_1186d2c0[];
extern void *ExceptionList;
typedef void *WARNING;
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAbilityDelegate { char _pad; SCIAbilityDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionDelegate { char _pad; SCIActionDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionFactory { char _pad; SCIActionFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionFilter { char _pad; SCIActionFilter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAutomationDelegate { char _pad; SCIAutomationDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTAccessoryDelegate { char _pad; SCIBTAccessoryDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionCallback { char _pad; SCIBTClassicConnectionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionProvider { char _pad; SCIBTClassicConnectionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBleDelegate { char _pad; SCIBleDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBlePeripheralDelegate { char _pad; SCIBlePeripheralDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIChirpDelegate { char _pad; SCIChirpDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIClipboardDelegate { char _pad; SCIClipboardDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCICrashReportProvider { char _pad; SCICrashReportProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCICustomSubWizard { char _pad; SCICustomSubWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIExperimentManagerProvider { char _pad; SCIExperimentManagerProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIGetAboutSonosStringCB { char _pad; SCIGetAboutSonosStringCB(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIGetSonosPlaylistsCB { char _pad; SCIGetSonosPlaylistsCB(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHapticDelegate { char _pad; SCIHapticDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIInAppMessagingProvider { char _pad; SCIInAppMessagingProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIInAppPurchaseManagerProvider { char _pad; SCIInAppPurchaseManagerProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILifecycleAppProvider { char _pad; SCILifecycleAppProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILocalMediaCollection { char _pad; SCILocalMediaCollection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILocalMusicBrowseItemInfo { char _pad; SCILocalMusicBrowseItemInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILocalMusicSearchableDelegate { char _pad; SCILocalMusicSearchableDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILoggingProvider { char _pad; SCILoggingProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIMdnsDelegate { char _pad; SCIMdnsDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIMusicServerBrowseDelegate { char _pad; SCIMusicServerBrowseDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIMusicServerDelegate { char _pad; SCIMusicServerDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetstartListener { char _pad; SCINetstartListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetworkManagementDelegate { char _pad; SCINetworkManagementDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINewWizDelegate { char _pad; SCINewWizDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINfcDelegate { char _pad; SCINfcDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpCB { char _pad; SCIOpCB(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISavedDataProvider { char _pad; SCISavedDataProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISecureStore { char _pad; SCISecureStore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISecurityContext { char _pad; SCISecurityContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceAppInterop { char _pad; SCIServiceAppInterop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStackTraceCaptureDelegate { char _pad; SCIStackTraceCaptureDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStringInput { char _pad; SCIStringInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISystem { char _pad; SCISystem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCITrackInfo { char _pad; SCITrackInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrbanAirshipDelegate { char _pad; SCIUrbanAirshipDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlConnection { char _pad; SCIUrlConnection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlSessionCallback { char _pad; SCIUrlSessionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlSessionProvider { char _pad; SCIUrlSessionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIVoiceServiceDelegate { char _pad; SCIVoiceServiceDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIVpnDelegate { char _pad; SCIVpnDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWebsocketCallback { char _pad; SCIWebsocketCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWebsocketDelegate { char _pad; SCIWebsocketDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWifiDelegate { char _pad; SCIWifiDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIZoneGroupMgr { char _pad; SCIZoneGroupMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWeakRefMgr { char _pad; SCWeakRefMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stub_SCStr { Stub_SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int SCStr(...); int int_addref(...); int int_allocRep(...); int int_release(...); int op_eq(...); int setFromUTF16(...); };
struct Recovered_Bulk { char _pad; int * __thiscall FUN_101167f0(undefined4 *param_2); int * __thiscall FUN_101168d0(undefined4 *param_2); int * __thiscall FUN_101169f0(undefined4 *param_2); void __thiscall FUN_10117000(int *param_2,SCStr *param_3,uint param_4); undefined4 * __thiscall FUN_10118c40(undefined4 *param_2); void __thiscall FUN_10118fc0(undefined4 param_2); SCStr * __thiscall FUN_10119e10(SCStr *param_2); int * __thiscall FUN_10122560(int *param_2); undefined1 * __thiscall FUN_10124ee0(undefined1 *param_2); int __thiscall FUN_101263e0(byte param_2); int __thiscall FUN_101269f0(byte param_2); void __thiscall FUN_10129550(undefined4 *param_2,undefined4 param_3,undefined4 *param_4); float __thiscall FUN_10129a20(int param_2); void __thiscall FUN_10129ef0(int param_2); void __thiscall FUN_1012a4d0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1012a540(int *param_2); void __thiscall FUN_1012a5c0(int *param_2,int *param_3); void __thiscall FUN_1012a650(int *param_2); void __thiscall FUN_1012b750(undefined4 *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_1012cdb0(void *param_2,uint param_3); void __thiscall FUN_1012cfb0(undefined4 *param_2,undefined4 param_3,undefined4 *param_4); int * __thiscall FUN_1012d130(void *param_2,uint param_3); void __thiscall FUN_1012d250(int *param_2,int *param_3); void __thiscall FUN_1012d550(undefined4 param_2); void __thiscall FUN_1012d5c0(undefined4 param_2); void __thiscall FUN_1012d870(undefined4 param_2); void __thiscall FUN_1012d940(undefined4 param_2); void __thiscall FUN_1012d9b0(int *param_2); void __thiscall FUN_1012dc40(int *param_2,int *param_3); void __thiscall FUN_1012ddd0(undefined4 *param_2,int *param_3,undefined4 *param_4); void __thiscall FUN_1012df20(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1012e040(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_1012e1d0(undefined4 *param_2,int *param_3); void __thiscall FUN_1012e2b0(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_1012e380(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_1012e530(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,undefined4 *param_8,
            undefined4 *param_9,int *param_10); void __thiscall FUN_1012e850(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1012e970(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_1012eb00(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_1012ece0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,int *param_8,undefined4 param_9); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_1012ef60(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined1 param_6,int *param_7,undefined4 param_8,int *param_9,
            undefined4 param_10,undefined4 *param_11); void __thiscall FUN_1012f1f0(undefined4 *param_2,undefined4 *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined1 param_9,
            undefined1 param_10); void __thiscall FUN_1012f3b0(undefined4 *param_2,undefined4 *param_3,undefined4 param_4); void __thiscall FUN_1012f4e0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6); void __thiscall FUN_1012f6e0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); void __thiscall FUN_1012f890(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); void __thiscall FUN_1012fa40(undefined4 *param_2,int *param_3); void __thiscall FUN_1012fb20(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_1012fcb0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1012fdd0(undefined4 *param_2,undefined4 param_3,int *param_4); void __thiscall FUN_1012fec0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_10130050(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_10130120(undefined4 *param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_101301f0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 param_5); void __thiscall FUN_10130380(undefined4 *param_2,int *param_3); void __thiscall FUN_10130460(undefined4 *param_2,int *param_3,undefined1 *param_4); void __thiscall FUN_101305b0(undefined4 *param_2,undefined1 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6); void __thiscall FUN_101306e0(undefined4 *param_2,int *param_3); void __thiscall FUN_10131350(int *param_2,undefined4 *param_3); void __thiscall FUN_10131440(int *param_2); void __thiscall FUN_10131500(undefined1 param_2); void __thiscall FUN_10131560(undefined4 param_2); void __thiscall FUN_10131630(int *param_2); void __thiscall FUN_10131710(int *param_2,int *param_3); void __thiscall FUN_101317a0(int *param_2,undefined1 *param_3); void __thiscall FUN_10131970(undefined4 *param_2); void __thiscall FUN_10132090(undefined4 param_2); void __thiscall FUN_10132430(undefined4 *param_2); void __thiscall FUN_101329e0(undefined4 *param_2); void __thiscall FUN_10132ca0(undefined4 *param_2); void __thiscall FUN_10132e60(undefined4 param_2); void __thiscall FUN_10132ec0(undefined4 *param_2); void __thiscall FUN_10132f80(undefined4 *param_2); void __thiscall FUN_10133170(undefined4 *param_2); void __thiscall FUN_10133310(undefined4 *param_2); void __thiscall FUN_10133cc0(undefined4 *param_2); void __thiscall FUN_10133f40(undefined4 *param_2); void __thiscall FUN_10134000(undefined4 *param_2); void __thiscall FUN_101340d0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); void __thiscall FUN_10134290(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5); void __thiscall FUN_10134660(undefined4 *param_2); void __thiscall FUN_10134720(undefined4 *param_2,int *param_3); void __thiscall FUN_10134d60(undefined4 *param_2); void __thiscall FUN_10135210(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_101353a0(undefined4 *param_2,undefined1 *param_3); void __thiscall FUN_101354d0(undefined4 *param_2,undefined1 *param_3); void __thiscall FUN_10135600(undefined4 *param_2); void __thiscall FUN_10135b30(undefined4 *param_2); void __thiscall FUN_10135bf0(undefined4 *param_2); void __thiscall FUN_101367b0(undefined4 *param_2); void __thiscall FUN_10136c70(undefined4 *param_2); void __thiscall FUN_10136d90(undefined4 *param_2); void __thiscall FUN_101370b0(undefined4 *param_2); void __thiscall FUN_10137860(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_10137e00(undefined4 *param_2); void __thiscall FUN_10138160(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_10138ab0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_10138bd0(undefined4 *param_2); void __thiscall FUN_10138c90(undefined4 *param_2); void __thiscall FUN_10138d50(undefined4 *param_2); void __thiscall FUN_10138fb0(undefined4 param_2); void __thiscall FUN_10139150(int *param_2); void __thiscall FUN_101391d0(undefined4 *param_2); void __thiscall FUN_101393a0(undefined4 param_2); void __thiscall FUN_10139410(undefined4 param_2); void __thiscall FUN_10139480(undefined4 param_2); void __thiscall FUN_101394f0(undefined4 param_2); void __thiscall FUN_101396e0(undefined4 *param_2); void __thiscall FUN_10139830(undefined4 *param_2,undefined4 *param_3,int *param_4); void __thiscall FUN_10139cd0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10139f20(undefined4 *param_2); void __thiscall FUN_1013a060(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1013a200(undefined4 *param_2,undefined4 *param_3,undefined4 param_4); void __thiscall FUN_1013a340(undefined4 *param_2); void __thiscall FUN_1013a420(undefined4 *param_2); void __thiscall FUN_1013a530(undefined4 *param_2); void __thiscall FUN_1013a790(int *param_2); void __thiscall FUN_1013acb0(undefined1 *param_2,undefined4 param_3); void __thiscall FUN_1013ada0(undefined4 param_2); void __thiscall FUN_1013ae00(int *param_2); void __thiscall FUN_1013ae80(int *param_2); void __thiscall FUN_1013af00(int *param_2); void __thiscall FUN_1013af80(undefined4 *param_2,int *param_3); void __thiscall FUN_1013b080(undefined1 *param_2); void __thiscall FUN_1013b230(int *param_2); void __thiscall FUN_1013b2b0(undefined4 *param_2,int *param_3); void __thiscall FUN_1013b3a0(undefined1 *param_2); void __thiscall FUN_1013b490(int *param_2); void __thiscall FUN_1013b5a0(undefined4 *param_2,int *param_3,int *param_4); undefined4 * __thiscall FUN_1013b6b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013b730(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013b7b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013b830(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013b8b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013b930(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013b9b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013ba30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bab0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bb30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bbb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bc30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bcb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bd30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bdb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013be30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013beb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bf30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013bfb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c030(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c0b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c130(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c1b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c230(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c2b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c330(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c3b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c430(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c4b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c530(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c5b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c630(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c6b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c730(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c7b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c830(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c8b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c930(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013c9b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013ca30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013cab0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013cb30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013cbb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013cc30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013ccb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013cd30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013cdb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013ce30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013ceb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013cf30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013cfb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d030(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d0b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d120(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d190(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d200(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d270(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d2e0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d350(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d3c0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d430(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d4a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d510(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d580(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d5f0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d660(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d6d0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d740(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d7b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d820(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d890(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d900(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d970(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013d9e0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013da50(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dac0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013db30(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dba0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dc10(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dc80(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dcf0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013dd60(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013ddd0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013de40(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013deb0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013df20(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013df90(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e000(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e070(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e0e0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e150(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e1c0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e230(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e2a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e310(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e380(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e3f0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e460(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e4d0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e540(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_1013e5b0(undefined4 *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_1013e6d0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e740(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e7b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_1013e820(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_1013e8f0(undefined1 *param_2); void __thiscall FUN_1013e9e0(undefined4 param_2,undefined4 param_3,int *param_4); void __thiscall FUN_1013ea70(undefined4 *param_2,int *param_3); void __thiscall FUN_1013eb60(undefined1 param_2); void __thiscall FUN_1013ebc0(undefined4 *param_2,undefined1 param_3); void __thiscall FUN_1013eca0(undefined4 param_2,undefined8 param_3); void __thiscall FUN_1013ed90(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_1013ee70(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_1013efa0(int *param_2); void __thiscall FUN_1013f020(int *param_2); void __thiscall FUN_1013f0a0(int *param_2); void __thiscall FUN_1013f120(int *param_2); void __thiscall FUN_1013f1a0(int *param_2); void __thiscall FUN_1013f220(int *param_2); void __thiscall FUN_1013f2a0(int *param_2); void __thiscall FUN_1013f320(undefined4 param_2,int *param_3); void __thiscall FUN_1013f3a0(int *param_2); void __thiscall FUN_1013f420(int *param_2,int *param_3); void __thiscall FUN_1013f4c0(int *param_2); void __thiscall FUN_10143df0(undefined4 *param_2); void __thiscall FUN_10143ed0(undefined4 *param_2); void __thiscall FUN_10143fb0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_101440e0(int *param_2); void __thiscall FUN_101441c0(undefined4 *param_2); void __thiscall FUN_101442a0(undefined4 param_2); void __thiscall FUN_101444f0(undefined1 *param_2); void __thiscall FUN_101445e0(undefined1 *param_2); void __thiscall FUN_101447b0(int *param_2); void __thiscall FUN_10144860(undefined4 param_2); void __thiscall FUN_101448c0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_10144a00(undefined4 *param_2,undefined1 param_3); void __thiscall FUN_10144ae0(int *param_2); void __thiscall FUN_10144b60(int *param_2); void __thiscall FUN_10144be0(undefined1 *param_2); void __thiscall FUN_10144cd0(undefined4 *param_2); void __thiscall FUN_10144db0(undefined1 *param_2); void __thiscall FUN_10144ea0(undefined4 param_2,undefined8 param_3); void __thiscall FUN_10144f90(undefined4 param_2); void __thiscall FUN_10144ff0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); void __thiscall FUN_101451a0(undefined1 *param_2); void __thiscall FUN_10145290(undefined4 *param_2,undefined4 param_3); void __thiscall FUN_10145370(undefined1 param_2); void __thiscall FUN_101453d0(int *param_2); void __thiscall FUN_10145450(undefined4 param_2); void __thiscall FUN_101454b0(undefined1 *param_2); void __thiscall FUN_101455a0(undefined4 *param_2); void __thiscall FUN_10145680(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_101457b0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_10145dd0(undefined4 *param_2); void __thiscall FUN_10145eb0(undefined4 param_2,int *param_3); void __thiscall FUN_10145f30(undefined4 param_2); void __thiscall FUN_10145f90(undefined4 param_2); void __thiscall FUN_10146050(undefined4 param_2,int *param_3); void __thiscall FUN_10146130(undefined4 param_2,int *param_3); void __thiscall FUN_101461b0(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 *param_8); void __thiscall FUN_10146340(undefined1 param_2); void __thiscall FUN_101463b0(int *param_2); void __thiscall FUN_10146770(int *param_2,undefined1 param_3); void __thiscall FUN_101467f0(undefined4 param_2); void __thiscall FUN_10148a00(undefined4 *param_2); void __thiscall FUN_10148b40(undefined4 param_2); void __thiscall FUN_10148ba0(undefined4 *param_2); void __thiscall FUN_10148c80(undefined1 param_2); void __thiscall FUN_10148da0(int *param_2); void __thiscall FUN_10148e20(int *param_2); void __thiscall FUN_10148ea0(int *param_2); void __thiscall FUN_10148f20(int *param_2); void __thiscall FUN_10148fa0(int *param_2); void __thiscall FUN_10149020(int *param_2); void __thiscall FUN_101490a0(int *param_2); void __thiscall FUN_10149120(int *param_2); void __thiscall FUN_101491a0(int *param_2); void __thiscall FUN_10149220(undefined4 *param_2); void __thiscall FUN_10149300(undefined4 *param_2); void __thiscall FUN_10149440(int *param_2); void __thiscall FUN_101495b0(int *param_2); void __thiscall FUN_10149630(int *param_2); void __thiscall FUN_101496b0(undefined4 param_2); void __thiscall FUN_101497b0(undefined4 *param_2); };
using namespace std;
void FUN_100ab330(void);
void FUN_100ad880(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100af860(void);
void FUN_100af920(void);
void FUN_100bb6f0(void);
void FUN_100cef50(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100d4c80(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_100e5ed0(void);
void FUN_101170a0(undefined4 param_1,undefined4 *param_2);
void FUN_10117170(undefined4 param_1,int param_2);
void FUN_10117950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_1011be40(undefined4 *param_1);
void __fastcall FUN_1011beb0(undefined4 *param_1);
void __fastcall FUN_1011bf20(undefined4 *param_1);
void __fastcall FUN_1011bf90(int *param_1);
void __fastcall FUN_1011bff0(int *param_1);
void __fastcall FUN_1011c050(int *param_1);
void __fastcall FUN_1011f5e0(int param_1);
void __fastcall FUN_1011f660(int *param_1);
void __fastcall FUN_1011f870(undefined4 *param_1);
void __fastcall FUN_1011ff40(int param_1);
void __fastcall FUN_10120220(undefined4 *param_1);
void __fastcall FUN_10120340(int param_1);
void __fastcall FUN_10122490(int *param_1);
void __fastcall FUN_1012a080(float *param_1);
void __fastcall FUN_1012a2d0(int *param_1);
void * FUN_1012cab0(uint param_1);
void __fastcall FUN_1012d310(int param_1);
void __fastcall FUN_1012d370(int param_1);
void __fastcall FUN_1012d3d0(int param_1);
void __fastcall FUN_1012d430(int param_1);
void __fastcall FUN_1012d490(int param_1);
void __fastcall FUN_1012d4f0(int param_1);
void __fastcall FUN_1012d630(int param_1);
void __fastcall FUN_1012d690(int param_1);
void __fastcall FUN_1012d6f0(int param_1);
void __fastcall FUN_1012d750(int param_1);
void __fastcall FUN_1012d7b0(int param_1);
void __fastcall FUN_1012d810(int param_1);
void __fastcall FUN_1012d8e0(int param_1);
void __fastcall FUN_1012da30(int param_1);
void __fastcall FUN_1012db20(int param_1);
void __fastcall FUN_1012db80(int param_1);
void __fastcall FUN_1012dbe0(int param_1);
void __fastcall FUN_1012dcd0(int param_1);
void __fastcall FUN_10130900(int param_1);
void __fastcall FUN_10131230(int param_1);
void __fastcall FUN_10131290(int param_1);
void __fastcall FUN_101312f0(int param_1);
void __fastcall FUN_101315d0(int param_1);
void __fastcall FUN_101316b0(int param_1);
void __fastcall FUN_101320f0(int param_1);
void __fastcall FUN_101323d0(int param_1);
void __fastcall FUN_10132510(int param_1);
void __fastcall FUN_10132640(int param_1);
void __fastcall FUN_10132ab0(int param_1);
void __fastcall FUN_10132b10(int param_1);
void __fastcall FUN_10133110(int param_1);
void __fastcall FUN_101333d0(int param_1);
void __fastcall FUN_10133440(int param_1);
void __fastcall FUN_10133db0(int param_1);
void __fastcall FUN_10133e10(int param_1);
void __fastcall FUN_10133e70(int param_1);
void __fastcall FUN_10133ee0(int param_1);
void __fastcall FUN_10134800(int param_1);
void __fastcall FUN_10134b00(int param_1);
void __fastcall FUN_10134b60(int param_1);
undefined4 * FUN_10134e40(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_10134f40(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_10135040(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_101352e0(int param_1);
void __fastcall FUN_10135340(int param_1);
void __fastcall FUN_10135790(int param_1);
void __fastcall FUN_10135d80(int param_1);
void __fastcall FUN_10135de0(int param_1);
void __fastcall FUN_10135e40(int param_1);
void __fastcall FUN_101360b0(int param_1);
void __fastcall FUN_10136a70(int param_1);
void __fastcall FUN_10136d30(int param_1);
void __fastcall FUN_10136e50(int param_1);
void __fastcall FUN_10137050(int param_1);
void __fastcall FUN_101377b0(int param_1);
void __fastcall FUN_10137a00(int param_1);
void __fastcall FUN_10137da0(int param_1);
void __fastcall FUN_101385d0(int param_1);
void __fastcall FUN_101388a0(int param_1);
void __fastcall FUN_10138e30(int param_1);
void __fastcall FUN_10138e90(int param_1);
void __fastcall FUN_10138ef0(int param_1);
void __fastcall FUN_10138f50(int param_1);
void __fastcall FUN_10139020(int param_1);
void __fastcall FUN_10139090(int param_1);
void __fastcall FUN_101390f0(int param_1);
void __fastcall FUN_101392b0(int param_1);
void __fastcall FUN_10139310(int param_1);
void __fastcall FUN_10139560(int param_1);
void __fastcall FUN_101395c0(int param_1);
void __fastcall FUN_10139620(int param_1);
void __fastcall FUN_10139680(int param_1);
void __fastcall FUN_101399a0(int param_1);
void __fastcall FUN_10139a00(int param_1);
void __fastcall FUN_10139a60(int param_1);
void __fastcall FUN_10139ac0(int param_1);
void __fastcall FUN_10139b50(int param_1);
void __fastcall FUN_10139bb0(int param_1);
void __fastcall FUN_10139c10(int param_1);
void __fastcall FUN_10139c70(int param_1);
void __fastcall FUN_10139d40(int param_1);
void __fastcall FUN_10139da0(int param_1);
void __fastcall FUN_10139e00(int param_1);
void __fastcall FUN_10139e60(int param_1);
void __fastcall FUN_10139ec0(int param_1);
void __fastcall FUN_1013a000(int param_1);
void __fastcall FUN_1013a1a0(int param_1);
void __fastcall FUN_1013a8b0(int param_1);
void __fastcall FUN_1013aad0(int param_1);
void __fastcall FUN_1013ab30(int param_1);
void __fastcall FUN_1013ab90(int param_1);
void __fastcall FUN_1013abf0(int param_1);
void __fastcall FUN_1013ac50(int param_1);
void __fastcall FUN_1013b170(int param_1);
void __fastcall FUN_1013b1d0(int param_1);
void __fastcall FUN_1013e890(int param_1);
void __fastcall FUN_10144160(int param_1);
void __fastcall FUN_10144310(int param_1);
void __fastcall FUN_10144370(int param_1);
void __fastcall FUN_101443d0(int param_1);
void __fastcall FUN_10144430(int param_1);
void __fastcall FUN_10144490(int param_1);
void __fastcall FUN_101446f0(int param_1);
void __fastcall FUN_10144750(int param_1);
void __fastcall FUN_101458e0(int param_1);
void __fastcall FUN_10145940(int param_1);
void __fastcall FUN_101459a0(int param_1);
void __fastcall FUN_10145a00(int param_1);
void __fastcall FUN_10145a60(int param_1);
void __fastcall FUN_10145ac0(int param_1);
void __fastcall FUN_10145b20(int param_1);
void __fastcall FUN_10145b80(int param_1);
void __fastcall FUN_10145be0(int param_1);
void __fastcall FUN_10145c40(int param_1);
void __fastcall FUN_10145cb0(int param_1);
void __fastcall FUN_10145d10(int param_1);
void __fastcall FUN_10145d70(int param_1);
void __fastcall FUN_10145ff0(int param_1);
void __fastcall FUN_101460d0(int param_1);
void __fastcall FUN_101462e0(int param_1);
void __fastcall FUN_10146430(int param_1);
void __fastcall FUN_10146490(int param_1);
void __fastcall FUN_101464f0(int param_1);
void __fastcall FUN_10146550(int param_1);
void __fastcall FUN_101465b0(int param_1);
void __fastcall FUN_10146610(int param_1);
void __fastcall FUN_10146670(int param_1);
void __fastcall FUN_101466d0(int param_1);
void __fastcall FUN_10148ae0(int param_1);
void __fastcall FUN_10148ce0(int param_1);
void __fastcall FUN_10148d40(int param_1);
void __fastcall FUN_101493e0(int param_1);
void __fastcall FUN_10149740(int param_1);
void __stdcall FUN_1014cce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14);
undefined4
__stdcall FUN_1014cf50(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            ushort *param_6,undefined4 param_7,undefined4 param_8);
undefined4 FUN_1014d210(int *param_1);
undefined4 FUN_1014d2b0(int *param_1);
undefined4 FUN_1014d350(int *param_1);
undefined4 FUN_1014d4e0(void);
void __stdcall FUN_1014d5a0(int *param_1,ushort *param_2);
undefined4 FUN_1014d690(int *param_1);
SCStr * __stdcall FUN_1014dac0(int *param_1);
void __stdcall FUN_1014de40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                 undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                 undefined4 param_29);
undefined4 __stdcall FUN_1014df80(int *param_1,undefined4 param_2,ushort *param_3);
undefined4 __stdcall FUN_1014e030(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_1014e120(int *param_1,undefined4 param_2);
undefined4 FUN_1014e1c0(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014e260(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined4
__stdcall FUN_1014e350(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,undefined4 param_9);
undefined4 __stdcall FUN_1014e520(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1014e5d0(int *param_1,ushort *param_2,ushort *param_3);
undefined4
__stdcall FUN_1014e6c0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7);
undefined4
__stdcall FUN_1014e7f0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined4
__stdcall FUN_1014e950(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            ushort *param_10);
undefined4
__stdcall FUN_1014eac0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,ushort *param_7,int param_8,int param_9);
undefined4 __stdcall FUN_1014ebd0(int *param_1,ushort *param_2,undefined4 param_3);
undefined4
__stdcall FUN_1014ec80(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5);
undefined4 __stdcall FUN_1014eda0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined4 __stdcall FUN_1014ee90(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined4 FUN_1014ef80(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014f020(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_1014f110(int *param_1,ushort *param_2);
undefined4 FUN_1014f1c0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __stdcall FUN_1014f260(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_1014f350(int *param_1,undefined4 param_2);
undefined4 FUN_1014f3f0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __stdcall FUN_1014f490(int *param_1,ushort *param_2,ushort *param_3,int param_4);
undefined4 FUN_1014f580(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014f620(int *param_1,undefined4 param_2,ushort *param_3);
undefined4
__stdcall FUN_1014f6e0(int *param_1,int param_2,ushort *param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_1014f7a0(int *param_1,undefined4 param_2);
undefined4 FUN_1014f8d0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_1014f980(int *param_1);
undefined4 FUN_1014fa30(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014fae0(int *param_1,ushort *param_2);
undefined4 FUN_1014fc20(int *param_1,int *param_2);
undefined4 FUN_1014fce0(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1014fd90(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1014fe80(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_1014ffb0(int *param_1,undefined4 param_2);
undefined4 FUN_10150050(int *param_1,undefined4 param_2);
undefined4 FUN_101500f0(int *param_1);
undefined4 FUN_101501a0(int *param_1);
undefined4 FUN_10150330(int *param_1,undefined4 param_2);
undefined4 FUN_101503d0(int *param_1);
undefined4 FUN_10150470(int *param_1);
undefined4 FUN_10150510(int *param_1,undefined4 param_2);
undefined4 FUN_101505b0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10150690(int *param_1,undefined4 param_2);
undefined4 FUN_101507c0(int *param_1);
undefined4 FUN_10150b50(int *param_1);
undefined4 FUN_10150bf0(int *param_1);
undefined4 FUN_10150c90(int *param_1);
undefined4 FUN_10150d30(int *param_1);
undefined4 FUN_10150ec0(int *param_1);
undefined4 FUN_10151280(int *param_1);
undefined4 FUN_10151670(int *param_1);
void __stdcall FUN_10151790(int *param_1,ushort *param_2);
void __stdcall FUN_101519e0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
void __stdcall FUN_10151ac0(int *param_1,ushort *param_2);
void __stdcall FUN_10151b50(int *param_1);
void __stdcall FUN_10151bd0(int *param_1,int param_2,ushort *param_3);
void __stdcall FUN_10151c60(int *param_1,int param_2);
undefined4 __stdcall FUN_10151d10(int *param_1,undefined4 param_2,ushort *param_3,ushort *param_4);
void __stdcall FUN_10152180(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
void __stdcall FUN_10152240(int *param_1,ushort *param_2);
void __stdcall FUN_101522c0(int *param_1,ushort *param_2);
void __stdcall FUN_10152340(int *param_1,ushort *param_2);
void __stdcall FUN_101524a0(int *param_1,undefined4 param_2,ushort *param_3);
void __stdcall FUN_10152530(int *param_1,undefined4 param_2,ushort *param_3,undefined4 param_4);
undefined1 __stdcall FUN_101527d0(int *param_1,ushort *param_2,undefined4 param_3,int param_4);
undefined1 __stdcall FUN_10152870(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_10152bc0(int *param_1,int *param_2);
undefined4 FUN_10152c70(int *param_1);
undefined4 FUN_10152d10(int *param_1);
undefined4 __stdcall FUN_10152db0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10152e60(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined1 __stdcall FUN_10152f30(int *param_1,ushort *param_2,int param_3);
undefined1 __stdcall FUN_10152fd0(int *param_1,ushort *param_2);
undefined4 FUN_10153070(int *param_1);
void __stdcall FUN_10153330(int *param_1,ushort *param_2);
undefined4 FUN_101533d0(int *param_1,undefined4 param_2);
undefined4 FUN_101534a0(int *param_1,undefined4 param_2);
undefined4 FUN_10153540(int *param_1);
undefined4 FUN_101535e0(int *param_1,undefined4 param_2);
undefined4 FUN_10153680(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10153720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 __stdcall FUN_101538c0(int *param_1,ushort *param_2,undefined4 param_3);
SCStr * __stdcall FUN_101539f0(int *param_1);
void __stdcall FUN_101541e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10);
undefined4 FUN_10154270(int *param_1);
undefined1 __stdcall FUN_10154310(int *param_1,ushort *param_2);
void __stdcall FUN_101543d0(int *param_1,ushort *param_2);
void __stdcall FUN_101544d0(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_10154560(int *param_1,ushort *param_2,ushort *param_3,int param_4);
void __stdcall FUN_10154630(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined1 __stdcall FUN_10154a20(int *param_1,ushort *param_2,ushort *param_3);
undefined1 __stdcall FUN_10154af0(int *param_1,ushort *param_2);
SCStr * __stdcall FUN_101550e0(int *param_1);
void __stdcall FUN_10155360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14);
void __stdcall FUN_101554f0(int *param_1,ushort *param_2);
void __stdcall FUN_101557a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9);
void __stdcall FUN_101558b0(int *param_1,ushort *param_2);
void __stdcall FUN_101559c0(int *param_1,ushort *param_2);
// Reference entry 100ab330; body size 137 bytes.
#line 1 "ENTRY_100ab330"

void FUN_100ab330(void)

{
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114f8587);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((Stub_SCStr *)((SCStr *)&DAT_121a07b0))->int_release();
  DAT_121a07b0 = (int)(local_14);
  ((Stub_SCStr *)((SCStr *)&DAT_121a07b0))->int_addref();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  DAT_121a07b4 = (int)(0);
  _atexit(FUN_117e9640);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 100ad880; body size 291 bytes.
#line 1 "ENTRY_100ad880"

void FUN_100ad880(void)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151a1dd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(0x2c));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&Ext_SCIObjImpl_vftable);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)(uint)&Ext_SCLoggingHelper_vftable;
    *piVar2 = (int)((int)(uint)&Ext_SCNewWizManager_vftable);
    piVar2[2] = (int)(uint)&Ext_SCNewWizManager_vftable;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    local_8 = (undefined4)(4);
    piVar2[8] = 0;
    piVar2[9] = 0;
    pvVar3 = (void *)(operator_new(0x14));
    *(void **)pvVar3 = (void *)(pvVar3);
    *(void **)((int)pvVar3 + 4) = pvVar3;
    *(void **)((int)pvVar3 + 8) = pvVar3;
    *(undefined2 *)((int)pvVar3 + 0xc) = 0x101;
    piVar2[8] = (int)pvVar3;
    piVar2[10] = 0;
  }
  local_8 = (undefined4)(0xffffffff);
  DAT_121a0bb8 = (int)((int *)0x0);
  DAT_121a0bb4 = (int)(piVar2);
  if (piVar2 != (int *)0x0) {
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_10288030) {
      piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
    }
    DAT_121a0bb8 = (int)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  _atexit(FUN_117eda60);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 100af860; body size 115 bytes.
#line 1 "ENTRY_100af860"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100af860(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11530617);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if ((DAT_121a0fd4 == 0) && (DAT_121a0fd8 == '\0')) {
    pvVar2 = (void *)(operator_new(0xfc));
    local_8 = (undefined4)(0);
    if (pvVar2 == (void *)0x0) {
      DAT_121a0fd4 = (int)(0);
    }
    else {
      DAT_121a0fd4 = (int)(thunk_FUN_103056e0(uVar1,pvVar2));
    }
  }
  _DAT_121a0fe4 = (int)(DAT_121a0fd4);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 100af920; body size 248 bytes.
#line 1 "ENTRY_100af920"

void FUN_100af920(void)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11531a5a);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x50));
  local_8 = (undefined4)(0);
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)((int)pvVar2 + 0x30) = 0;
    *(undefined4 *)((int)pvVar2 + 0x34) = 0;
    *(undefined4 *)((int)pvVar2 + 0x38) = 0;
    pvVar3 = (void *)(operator_new(0x4c));
    *(void **)pvVar3 = (void *)(pvVar3);
    *(void **)((int)pvVar3 + 4) = pvVar3;
    *(void **)((int)pvVar2 + 0x34) = pvVar3;
    *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x40) = 0;
    *(undefined4 *)((int)pvVar2 + 0x44) = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    *(undefined4 *)((int)pvVar2 + 0x48) = 7;
    *(undefined4 *)((int)pvVar2 + 0x4c) = 8;
    *(undefined4 *)((int)pvVar2 + 0x30) = 0x3f800000;
    thunk_FUN_10310680(0x10,*(undefined4 *)((int)pvVar2 + 0x34));
    thunk_FUN_112a7ea0(pvVar2,"SCWeakRefMgr",uVar1);
    thunk_FUN_112a7b70((int)pvVar2 + 8,"SCWeakRefMgr");
    DAT_121a1028 = (int)(pvVar2);
    ExceptionList = (void *)(local_10);
    return;
  }
  DAT_121a1028 = (int)((void *)0x0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 100bb6f0; body size 158 bytes.
#line 1 "ENTRY_100bb6f0"

void FUN_100bb6f0(void)

{
  undefined4 *puVar1;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115e026c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x70));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    ((Stub_SCStr *)(local_14))->int_allocRep("root");
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_103d0280(local_14);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    ((Stub_SCStr *)(local_14))->int_release();
    *puVar1 = (undefined4)((uint)&Ext_SCTestPointManager_vftable);
    DAT_121a2764 = (int)(puVar1);
    ExceptionList = (void *)(local_10);
    return;
  }
  DAT_121a2764 = (int)((undefined4 *)0x0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 100cef50; body size 114 bytes.
#line 1 "ENTRY_100cef50"

void FUN_100cef50(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116dcdd7);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x80));
  local_8 = (undefined4)(0);
  if (pvVar2 != (void *)0x0) {
    DAT_121a5544 = (int)(thunk_FUN_10c40d70(uVar1,pvVar2));
    ExceptionList = (void *)(local_10);
    return;
  }
  DAT_121a5544 = (int)(0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 100d4c80; body size 118 bytes.
#line 1 "ENTRY_100d4c80"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d4c80(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117065cf);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)((SCStr *)&DAT_121a6008))->int_allocRep("x-sonos-scuri://musiclibrary");
  local_8 = (undefined4)(0);
  _DAT_121a600c = (int)(0x2a1);
  _DAT_121a6010 = (int)(1);
  ((Stub_SCStr *)((SCStr *)&DAT_121a6014))->int_allocRep("");
  _atexit(FUN_1183f2c0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 100e5ed0; body size 193 bytes.
#line 1 "ENTRY_100e5ed0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e5ed0(void)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117c41a9);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  pvVar1 = (void *)(operator_new(0x18ab));
  if (pvVar1 != (void *)0x0) {
    DAT_122f33e0 = (int)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void **)(DAT_122f33e0 - 4) = pvVar1;
    *(uint *)DAT_122f33e0 = (int)(DAT_122f33e0);
    *(uint *)(DAT_122f33e0 + 4) = DAT_122f33e0;
    DAT_122f33e8 = (int)(0);
    _DAT_122f33ec = (int)(0);
    _DAT_122f33f0 = (int)(0);
    local_8 = (undefined4)(1);
    DAT_122f33f4 = (int)(7);
    _DAT_122f33f8 = (int)(8);
    _DAT_122f33dc = (int)(0x3f800000);
    thunk_FUN_111d7e60(0x10,DAT_122f33e0);
    _atexit(FUN_11862560);
    ExceptionList = (void *)(local_10);
    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 101167f0; body size 169 bytes.
#line 1 "ENTRY_101167f0"

int * __thiscall Recovered_Bulk::FUN_101167f0(undefined4 *param_2)
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
  puStack_c = (undefined1 *)(LAB_114d9ec5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCIZoneGroupMgr");
    local_8 = (undefined4)(0);
    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2,uVar3));
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


// Reference entry 101168d0; body size 169 bytes.
#line 1 "ENTRY_101168d0"

int * __thiscall Recovered_Bulk::FUN_101168d0(undefined4 *param_2)
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
  puStack_c = (undefined1 *)(LAB_114d9f05);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCISystem");
    local_8 = (undefined4)(0);
    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2,uVar3));
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


// Reference entry 101169f0; body size 169 bytes.
#line 1 "ENTRY_101169f0"

int * __thiscall Recovered_Bulk::FUN_101169f0(undefined4 *param_2)
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
  puStack_c = (undefined1 *)(LAB_114d9f45);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlaying");
    local_8 = (undefined4)(0);
    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2,uVar3));
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


// Reference entry 10117000; body size 124 bytes.
#line 1 "ENTRY_10117000"

void __thiscall Recovered_Bulk::FUN_10117000(int *param_2,SCStr *param_3,uint param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  param_4 = (uint)(*(uint *)(param_1 + 0x18) & param_4);
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8));
  if (piVar1 == *(int **)(param_1 + 4)) {
    *param_2 = (int)((int)*(int **)(param_1 + 4));
    param_2[1] = 0;
    return;
  }
  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + param_4 * 8));
  bVar4 = (bool)(((Stub_SCStr *)(param_3))->op_eq((SCStr *)(piVar1 + 2)));
  while( true ) {
    if (bVar4) {
      iVar3 = (int)(*piVar1);
      param_2[1] = (int)piVar1;
      *param_2 = (int)(iVar3);
      return;
    }
    if (piVar1 == (int *)(piVar2)) break;
    piVar1 = (int *)((int *)piVar1[1]);
    bVar4 = (bool)(((Stub_SCStr *)(param_3))->op_eq((SCStr *)(piVar1 + 2)));
  }
  *param_2 = (int)((int)piVar1);
  param_2[1] = 0;
  return;
}


// Reference entry 101170a0; body size 130 bytes.
#line 1 "ENTRY_101170a0"

void FUN_101170a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = (void *)(ExceptionList);
  puStack_c = (undefined1 *)(LAB_114d9f70);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    local_8 = (undefined4)(0);
    ((Stub_SCStr *)((SCStr *)(puVar2 + 2)))->int_release();
    puVar2[2] = 0;
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(puVar2,0xc,uVar3);
    puVar2 = (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10117170; body size 89 bytes.
#line 1 "ENTRY_10117170"

void FUN_10117170(undefined4 param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114d9fa0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_2 + 8)))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  thunk_FUN_1148a50e(param_2,0xc,uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10117950; body size 95 bytes.
#line 1 "ENTRY_10117950"

void FUN_10117950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10118c40; body size 121 bytes.
#line 1 "ENTRY_10118c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10118c40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Dst;
  uint uVar5;
  
  param_1[4] = 0;
  param_1[5] = 0;
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
    return (undefined4 *)(param_1);
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
  return (undefined4 *)(param_1);
}


// Reference entry 10118fc0; body size 325 bytes.
#line 1 "ENTRY_10118fc0"

void __thiscall Recovered_Bulk::FUN_10118fc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  char *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114da185);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar3);
  local_2c[0] = (char *)thunk_FUN_1012cab0(0x30);
  uVar2 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 12));
  uVar1 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 8));
  uVar4 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 4));
  local_1c = (undefined4)(0x26);
  local_18 = (uint)(0x2f);
  *(undefined4 *)local_2c[0] = *(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 0);
  *(undefined4 *)(local_2c[0] + 4) = uVar4;
  *(undefined4 *)(local_2c[0] + 8) = uVar1;
  *(undefined4 *)(local_2c[0] + 0xc) = uVar2;
  uVar2 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 28));
  uVar1 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 24));
  uVar4 = (undefined4)(*(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 20));
  *(undefined4 *)(local_2c[0] + 0x10) = *(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 16);
  *(undefined4 *)(local_2c[0] + 0x14) = uVar4;
  *(undefined4 *)(local_2c[0] + 0x18) = uVar1;
  *(undefined4 *)(local_2c[0] + 0x1c) = uVar2;
  *(undefined4 *)(local_2c[0] + 0x20) = *(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 32);
  *(undefined2 *)(local_2c[0] + 0x24) = *(uint *)((char *)&s_Attempt_to_invoke_pure_virtual_m_1186d2c0 + 36);
  local_2c[0][0x26] = '\0';
  local_8 = (undefined4)(0);
  uVar4 = (undefined4)(thunk_FUN_10116b10(local_44,local_2c,param_2,uVar3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *param_1 = (undefined4)((uint)&Ext_Swig_DirectorException_vftable);
  thunk_FUN_10118c40(uVar4);
  if (0xf < local_30) {
    uVar6 = (uint)(local_30 + 1);
    uVar3 = (uint)(local_44[0]);
    if (0xfff < uVar6) {
      uVar3 = (uint)(*(uint *)(local_44[0] - 4));
      uVar6 = (uint)(local_30 + 0x24);
      if (0x1f < (local_44[0] - uVar3) - 4) goto LAB_101190d0;
    }
    thunk_FUN_1148a50e(uVar3,uVar6);
  }
  local_34 = (undefined4)(0);
  local_30 = (uint)(0xf);
  local_44[0] = local_44[0] & 0xffffff00;
  if (0xf < local_18) {
    uVar3 = (uint)(local_18 + 1);
    pcVar5 = (char *)(local_2c[0]);
    if (0xfff < uVar3) {
      pcVar5 = (char *)(*(char **)(local_2c[0] + -4));
      uVar3 = (uint)(local_18 + 0x24);
      if ((char *)0x1f < local_2c[0] + (-4 - (int)pcVar5)) {
LAB_101190d0:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar5,uVar3);
  }
  *param_1 = (undefined4)((uint)&Ext_Swig_DirectorPureVirtualException_vftable);
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10119e10; body size 934 bytes.
#line 1 "ENTRY_10119e10"

SCStr * __thiscall Recovered_Bulk::FUN_10119e10(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114da34b);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)(param_1))->SCStr(param_2);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)(param_1 + 4))->SCStr(param_2 + 4);
  param_1[8] = param_2[8];
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((Stub_SCStr *)(param_1 + 0xc))->SCStr(param_2 + 0xc);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((Stub_SCStr *)(param_1 + 0x10))->SCStr(param_2 + 0x10);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)(param_1 + 0x14))->SCStr(param_2 + 0x14);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)(param_1 + 0x18))->SCStr(param_2 + 0x18);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((Stub_SCStr *)(param_1 + 0x1c))->SCStr(param_2 + 0x1c);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((Stub_SCStr *)(param_1 + 0x20))->SCStr(param_2 + 0x20);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((Stub_SCStr *)(param_1 + 0x24))->SCStr(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  piVar1 = (int *)(*(int **)(param_2 + 0x2c));
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *(int **)(param_1 + 0x2c) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((Stub_SCStr *)(param_1 + 0x30))->SCStr(param_2 + 0x30);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((Stub_SCStr *)(param_1 + 0x34))->SCStr(param_2 + 0x34);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((Stub_SCStr *)(param_1 + 0x38))->SCStr(param_2 + 0x38);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((Stub_SCStr *)(param_1 + 0x3c))->SCStr(param_2 + 0x3c);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((Stub_SCStr *)(param_1 + 0x40))->SCStr(param_2 + 0x40);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  ((Stub_SCStr *)(param_1 + 0x44))->SCStr(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((Stub_SCStr *)(param_1 + 0x4c))->SCStr(param_2 + 0x4c);
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  piVar1 = (int *)(*(int **)(param_2 + 0x9c));
  *(int **)(param_1 + 0x9c) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  piVar1 = (int *)(*(int **)(param_2 + 0xa4));
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  *(int **)(param_1 + 0xa4) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  ((Stub_SCStr *)(param_1 + 0xd8))->SCStr(param_2 + 0xd8);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  ((Stub_SCStr *)(param_1 + 0xdc))->SCStr(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  param_1[0xec] = param_2[0xec];
  param_1[0xed] = param_2[0xed];
  param_1[0xee] = param_2[0xee];
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  piVar1 = (int *)(*(int **)(param_2 + 0xf4));
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  *(int **)(param_1 + 0xf4) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  piVar1 = (int *)(*(int **)(param_2 + 0xfc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  *(int **)(param_1 + 0xfc) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  piVar1 = (int *)(*(int **)(param_2 + 0x104));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
  *(int **)(param_1 + 0x104) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_1);
}


// Reference entry 1011be40; body size 76 bytes.
#line 1 "ENTRY_1011be40"

void __fastcall FUN_1011be40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114da400);
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


// Reference entry 1011beb0; body size 76 bytes.
#line 1 "ENTRY_1011beb0"

void __fastcall FUN_1011beb0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114da430);
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


// Reference entry 1011bf20; body size 76 bytes.
#line 1 "ENTRY_1011bf20"

void __fastcall FUN_1011bf20(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114da460);
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


// Reference entry 1011bf90; body size 68 bytes.
#line 1 "ENTRY_1011bf90"

void __fastcall FUN_1011bf90(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114da490);
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


// Reference entry 1011bff0; body size 68 bytes.
#line 1 "ENTRY_1011bff0"

void __fastcall FUN_1011bff0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114da4c0);
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


// Reference entry 1011c050; body size 68 bytes.
#line 1 "ENTRY_1011c050"

void __fastcall FUN_1011c050(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114da4f0);
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


// Reference entry 1011f5e0; body size 99 bytes.
#line 1 "ENTRY_1011f5e0"

void __fastcall FUN_1011f5e0(int param_1)

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
  thunk_FUN_101170a0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0xc);
  return;
}


// Reference entry 1011f660; body size 77 bytes.
#line 1 "ENTRY_1011f660"

void __fastcall FUN_1011f660(int *param_1)

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


// Reference entry 1011f870; body size 83 bytes.
#line 1 "ENTRY_1011f870"

void __fastcall FUN_1011f870(undefined4 *param_1)

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


// Reference entry 1011ff40; body size 99 bytes.
#line 1 "ENTRY_1011ff40"

void __fastcall FUN_1011ff40(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dbff0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10120220; body size 226 bytes.
#line 1 "ENTRY_10120220"

void __fastcall FUN_10120220(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dc0b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCUrl_vftable);
  piVar1 = (int *)((int *)param_1[8]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  local_8 = (undefined4)(4);
  ((Stub_SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(6);
  ((Stub_SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10120340; body size 119 bytes.
#line 1 "ENTRY_10120340"

void __fastcall FUN_10120340(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dc0e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x38));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x30));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10122490; body size 72 bytes.
#line 1 "ENTRY_10122490"

void __fastcall FUN_10122490(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    local_4 = (int *)(param_1);
    thunk_FUN_101170a0(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_10117950(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10122560; body size 65 bytes.
#line 1 "ENTRY_10122560"

int * __thiscall Recovered_Bulk::FUN_10122560(int *param_2)
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


// Reference entry 10124ee0; body size 65 bytes.
#line 1 "ENTRY_10124ee0"

undefined1 * __thiscall Recovered_Bulk::FUN_10124ee0(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar3 = (char *)((char *)*param_1);
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (undefined1)(0);
  pcVar2 = (char *)(pcVar3);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  return (undefined1 *)(param_2);
}


// Reference entry 101263e0; body size 120 bytes.
#line 1 "ENTRY_101263e0"

int __thiscall Recovered_Bulk::FUN_101263e0(byte param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dcd40);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 101269f0; body size 140 bytes.
#line 1 "ENTRY_101269f0"

int __thiscall Recovered_Bulk::FUN_101269f0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dce00);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0x38));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x30));
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10129550; body size 245 bytes.
#line 1 "ENTRY_10129550"

void __thiscall Recovered_Bulk::FUN_10129550(undefined4 *param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114ddcbb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 8))(uVar2,param_3,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibLogCallback_LogDebugMessage");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10129a20; body size 136 bytes.
#line 1 "ENTRY_10129a20"

float __thiscall Recovered_Bulk::FUN_10129a20(int param_2)
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


// Reference entry 10129ef0; body size 87 bytes.
#line 1 "ENTRY_10129ef0"

void __thiscall Recovered_Bulk::FUN_10129ef0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 1012a080; body size 133 bytes.
#line 1 "ENTRY_1012a080"

void __fastcall FUN_1012a080(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10129af0();
  return;
}


// Reference entry 1012a2d0; body size 77 bytes.
#line 1 "ENTRY_1012a2d0"

void __fastcall FUN_1012a2d0(int *param_1)

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


// Reference entry 1012a4d0; body size 77 bytes.
#line 1 "ENTRY_1012a4d0"

void __thiscall Recovered_Bulk::FUN_1012a4d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIOpCBSwigBase_operationComplete");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012a540; body size 99 bytes.
#line 1 "ENTRY_1012a540"

void __thiscall Recovered_Bulk::FUN_1012a540(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFilterSwigBase_acceptsAction");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012a5c0; body size 111 bytes.
#line 1 "ENTRY_1012a5c0"

void __thiscall Recovered_Bulk::FUN_1012a5c0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrbanAirshipDelegateSwigBase_addAndRemoveClientTags");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012a650; body size 94 bytes.
#line 1 "ENTRY_1012a650"

void __thiscall Recovered_Bulk::FUN_1012a650(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrbanAirshipDelegateSwigBase_addClientTags");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012b750; body size 242 bytes.
#line 1 "ENTRY_1012b750"

void __thiscall Recovered_Bulk::FUN_1012b750(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114ddd5b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppMessagingProviderSwigBase_addTagToGroup");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012cab0; body size 77 bytes.
#line 1 "ENTRY_1012cab0"

void * FUN_1012cab0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
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
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1012cdb0; body size 328 bytes.
#line 1 "ENTRY_1012cdb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1012cdb0(void *param_2,uint param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  size_t _Size;
  void *_Src;
  undefined4 *puVar2;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  void *pvVar5;
  
  uVar1 = (uint)(param_1[5]);
  _Size = (size_t)(param_1[4]);
  if (param_3 <= uVar1 - _Size) {
    param_1[4] = param_3 + _Size;
    puVar2 = (undefined4 *)(param_1);
    if (0xf < uVar1) {
      puVar2 = (undefined4 *)((undefined4 *)*param_1);
    }
    memmove((void *)((int)puVar2 + _Size),param_2,param_3);
    *(undefined1 *)((int)((int)puVar2 + _Size) + param_3) = 0;
    return (undefined4 *)(param_1);
  }
  if (0x7fffffff - _Size < param_3) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar4 = (uint)(param_3 + _Size | 0xf);
  if (uVar4 < 0x80000000) {
    if (0x7fffffff - (uVar1 >> 1) < uVar1) {
      uVar4 = (uint)(0x7fffffff);
    }
    else {
      uVar3 = (uint)((uVar1 >> 1) + uVar1);
      if (uVar4 < uVar3) {
        uVar4 = (uint)(uVar3);
      }
    }
  }
  else {
    uVar4 = (uint)(0x7fffffff);
  }
  _Dst = (void *)((void *)thunk_FUN_1012cab0(uVar4 + 1));
  param_1[5] = uVar4;
  param_1[4] = param_3 + _Size;
  pvVar5 = (void *)((void *)((int)_Dst + _Size));
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memcpy(pvVar5,param_2,param_3);
    *(undefined1 *)((int)pvVar5 + param_3) = 0;
    *param_1 = (undefined4)(_Dst);
    return (undefined4 *)(param_1);
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,_Size);
  memcpy(pvVar5,param_2,param_3);
  uVar4 = (uint)(uVar1 + 1);
  *(undefined1 *)((int)pvVar5 + param_3) = 0;
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
  return (undefined4 *)(param_1);
}


// Reference entry 1012cfb0; body size 245 bytes.
#line 1 "ENTRY_1012cfb0"

void __thiscall Recovered_Bulk::FUN_1012cfb0(undefined4 *param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114dddbb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 8))(uVar2,param_3,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibAssertionFailureCallback_assertionFailed");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d130; body size 227 bytes.
#line 1 "ENTRY_1012d130"

int * __thiscall Recovered_Bulk::FUN_1012d130(void *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  int *_Dst_00;
  uint uVar5;
  
  uVar2 = (uint)(param_1[5]);
  if (param_3 <= uVar2) {
    _Dst_00 = (int *)(param_1);
    if (0xf < uVar2) {
      _Dst_00 = (int *)((int *)*param_1);
    }
    param_1[4] = param_3;
    memmove(_Dst_00,param_2,param_3);
    *(undefined1 *)((int)_Dst_00 + param_3) = 0;
    return (int *)(param_1);
  }
  if (0x7fffffff < param_3) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar5 = (uint)(param_3 | 0xf);
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
  param_1[4] = param_3;
  param_1[5] = uVar5;
  memcpy(_Dst,param_2,param_3);
  *(undefined1 *)((int)_Dst + param_3) = 0;
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
  return (int *)(param_1);
}


// Reference entry 1012d250; body size 111 bytes.
#line 1 "ENTRY_1012d250"

void __thiscall Recovered_Bulk::FUN_1012d250(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionDelegateSwigBase_asyncActionHasCompleted");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d310; body size 67 bytes.
#line 1 "ENTRY_1012d310"

void __fastcall FUN_1012d310(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibCallUIThreadCallback_callSCLibOnUIThread");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d370; body size 72 bytes.
#line 1 "ENTRY_1012d370"

void __fastcall FUN_1012d370(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_canActOn");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d3d0; body size 72 bytes.
#line 1 "ENTRY_1012d3d0"

void __fastcall FUN_1012d3d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_canClientCancelWizard");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d430; body size 72 bytes.
#line 1 "ENTRY_1012d430"

void __fastcall FUN_1012d430(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_canClientTransitionToNextState");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d490; body size 72 bytes.
#line 1 "ENTRY_1012d490"

void __fastcall FUN_1012d490(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_canClientTransitionToPreviousState");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d4f0; body size 72 bytes.
#line 1 "ENTRY_1012d4f0"

void __fastcall FUN_1012d4f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_canConfigureAccessories");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d550; body size 78 bytes.
#line 1 "ENTRY_1012d550"

void __thiscall Recovered_Bulk::FUN_1012d550(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVoiceServiceDelegateSwigBase_canDeviceSetupVoice");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d5c0; body size 78 bytes.
#line 1 "ENTRY_1012d5c0"

void __thiscall Recovered_Bulk::FUN_1012d5c0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_canEnablePrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d630; body size 72 bytes.
#line 1 "ENTRY_1012d630"

void __fastcall FUN_1012d630(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_canHardwareGainBeSet");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d690; body size 72 bytes.
#line 1 "ENTRY_1012d690"

void __fastcall FUN_1012d690(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_canJoinSSIDs");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d6f0; body size 72 bytes.
#line 1 "ENTRY_1012d6f0"

void __fastcall FUN_1012d6f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppPurchaseManagerProviderSwigBase_canMakePurchases");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d750; body size 72 bytes.
#line 1 "ENTRY_1012d750"

void __fastcall FUN_1012d750(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVpnDelegate_canOpenVPNSettings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d7b0; body size 72 bytes.
#line 1 "ENTRY_1012d7b0"

void __fastcall FUN_1012d7b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVpnDelegateSwigBase_canOpenVPNSettings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d810; body size 72 bytes.
#line 1 "ENTRY_1012d810"

void __fastcall FUN_1012d810(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_canPush");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d870; body size 78 bytes.
#line 1 "ENTRY_1012d870"

void __thiscall Recovered_Bulk::FUN_1012d870(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_canRequestPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d8e0; body size 72 bytes.
#line 1 "ENTRY_1012d8e0"

void __fastcall FUN_1012d8e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_canStartScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d940; body size 78 bytes.
#line 1 "ENTRY_1012d940"

void __thiscall Recovered_Bulk::FUN_1012d940(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_canSuggestPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012d9b0; body size 94 bytes.
#line 1 "ENTRY_1012d9b0"

void __thiscall Recovered_Bulk::FUN_1012d9b0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlSessionProviderSwigBase_cancelURLConnection");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012da30; body size 67 bytes.
#line 1 "ENTRY_1012da30"

void __fastcall FUN_1012da30(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_cleanupRecording");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012db20; body size 67 bytes.
#line 1 "ENTRY_1012db20"

void __fastcall FUN_1012db20(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlSessionProviderSwigBase_clearCache");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012db80; body size 67 bytes.
#line 1 "ENTRY_1012db80"

void __fastcall FUN_1012db80(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_clearPacketQueue");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012dbe0; body size 67 bytes.
#line 1 "ENTRY_1012dbe0"

void __fastcall FUN_1012dbe0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibTruncatedStringsCallback_clearTruncatedStrings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012dc40; body size 111 bytes.
#line 1 "ENTRY_1012dc40"

void __thiscall Recovered_Bulk::FUN_1012dc40(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketDelegateSwigBase_connect");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012dcd0; body size 67 bytes.
#line 1 "ENTRY_1012dcd0"

void __fastcall FUN_1012dcd0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTClassicConnectionCallbackSwigBase_connectedToDevice");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012ddd0; body size 257 bytes.
#line 1 "ENTRY_1012ddd0"

void __thiscall Recovered_Bulk::FUN_1012ddd0(undefined4 *param_2,int *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dde32);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(1);
    uVar1 = (undefined4)(thunk_FUN_101a2160());
    piVar2 = (int *)((int *)(**(code **)(param_1 + 0x2c))(param_3,uVar1));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createBrowsePickerAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012df20; body size 228 bytes.
#line 1 "ENTRY_1012df20"

void __thiscall Recovered_Bulk::FUN_1012df20(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114ddeb2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0xc))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibCustomSubWizardCallback_createCustomSubWizard");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012e040; body size 311 bytes.
#line 1 "ENTRY_1012e040"

void __thiscall Recovered_Bulk::FUN_1012e040(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114ddf3d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x5c))(uVar2,uVar3));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createCustomUIAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012e1d0; body size 177 bytes.
#line 1 "ENTRY_1012e1d0"

void __thiscall Recovered_Bulk::FUN_1012e1d0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114ddf9e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x28));
  local_8 = (undefined4)(0);
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x28));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayBrowseStackAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012e2b0; body size 156 bytes.
#line 1 "ENTRY_1012e2b0"

void __thiscall Recovered_Bulk::FUN_1012e2b0(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114ddffe);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x50))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayCustomControlAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012e380; body size 337 bytes.
#line 1 "ENTRY_1012e380"

void __thiscall Recovered_Bulk::FUN_1012e380(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  void *local_840;
  undefined1 *puStack_83c;
  undefined4 local_838;
  undefined1 local_834 [2064];
  undefined1 local_24 [28];
  uint local_8;
  
  puStack_83c = (undefined1 *)(LAB_114de071);
  local_840 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_834);
  ExceptionList = (void *)(&local_840);
  *param_2 = (undefined4)(0);
  local_838 = (undefined4)(0);
  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x54) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_838 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x54))(uVar2,uVar3,param_5));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_840);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayDatePickerAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012e530; body size 638 bytes.
#line 1 "ENTRY_1012e530"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_1012e530(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,undefined4 *param_8,
            undefined4 *param_9,int *param_10)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  void *local_1860;
  undefined1 *puStack_185c;
  undefined4 local_1858;
  undefined1 local_1854 [6192];
  undefined1 local_24 [28];
  uint local_8;
  
  puStack_185c = (undefined1 *)(LAB_114de11d);
  local_1860 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_1854);
  ExceptionList = (void *)(&local_1860);
  *param_2 = (undefined4)(0);
  local_1858 = (undefined4)(0);
  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x44) != 0) {
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar9);
    local_1858 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar9);
    *(unsigned char *)((char *)&local_1858 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar9);
    *(unsigned char *)((char *)&local_1858 + 0) = 3;
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_6 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_6);
    }
    thunk_FUN_101a1ea0(puVar9);
    local_1858 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1858 + 1)) << 8 | (uint)(4)));
    uVar5 = (undefined4)(thunk_FUN_101a2160());
    if (param_7 != (int *)0x0) {
      (**(code **)(*param_7 + 4))();
    }
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_8 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_8);
    }
    thunk_FUN_101a1ea0(puVar9);
    *(unsigned char *)((char *)&local_1858 + 0) = 5;
    uVar6 = (undefined4)(thunk_FUN_101a2160());
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_9 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)((undefined1 *)*param_9);
    }
    thunk_FUN_101a1ea0(puVar9);
    local_1858 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1858 + 1)) << 8 | (uint)(6)));
    uVar7 = (undefined4)(thunk_FUN_101a2160());
    if (param_10 != (int *)0x0) {
      (**(code **)(*param_10 + 4))();
    }
    piVar8 = (int *)((int *)(**(code **)(param_1 + 0x44))
                              (uVar2,uVar3,uVar4,uVar5,param_7,uVar6,uVar7,param_10));
    *param_2 = (undefined4)(piVar8);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_1860);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayDualTextInputAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012e850; body size 228 bytes.
#line 1 "ENTRY_1012e850"

void __thiscall Recovered_Bulk::FUN_1012e850(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de1a2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x74) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x74))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayHelpSheetAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012e970; body size 311 bytes.
#line 1 "ENTRY_1012e970"

void __thiscall Recovered_Bulk::FUN_1012e970(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de22d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x24))(uVar2,uVar3));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayInfoViewAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012eb00; body size 383 bytes.
#line 1 "ENTRY_1012eb00"

void __thiscall Recovered_Bulk::FUN_1012eb00(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de2b8);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar6);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar6);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    piVar5 = (int *)((int *)(**(code **)(param_1 + 0x48))(uVar2,uVar3,uVar4,param_6,param_7,param_8));
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayIntegerInputAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012ece0; body size 502 bytes.
#line 1 "ENTRY_1012ece0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_1012ece0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7,int *param_8,undefined4 param_9)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  void *local_1050;
  undefined1 *puStack_104c;
  undefined4 local_1048;
  undefined1 local_1044 [4128];
  undefined1 local_24 [28];
  uint local_8;
  
  puStack_104c = (undefined1 *)(LAB_114de347);
  local_1050 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_1044);
  ExceptionList = (void *)(&local_1050);
  *param_2 = (undefined4)(0);
  local_1048 = (undefined4)(0);
  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar7);
    local_1048 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar7);
    *(unsigned char *)((char *)&local_1048 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar7);
    *(unsigned char *)((char *)&local_1048 + 0) = 3;
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_6 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_6);
    }
    thunk_FUN_101a1ea0(puVar7);
    local_1048 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1048 + 1)) << 8 | (uint)(4)));
    uVar5 = (undefined4)(thunk_FUN_101a2160());
    if (param_7 != (int *)0x0) {
      (**(code **)(*param_7 + 4))();
    }
    if (param_8 != (int *)0x0) {
      (**(code **)(*param_8 + 4))();
    }
    piVar6 = (int *)((int *)(**(code **)(param_1 + 0x38))(uVar2,uVar3,uVar4,uVar5,param_7,param_8,param_9));
    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_1050);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayMenuAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012ef60; body size 521 bytes.
#line 1 "ENTRY_1012ef60"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_1012ef60(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined1 param_6,int *param_7,undefined4 param_8,int *param_9,
            undefined4 param_10,undefined4 *param_11)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  void *local_1050;
  undefined1 *puStack_104c;
  undefined4 local_1048;
  undefined1 local_1044 [4128];
  undefined1 local_24 [28];
  uint local_8;
  
  puStack_104c = (undefined1 *)(LAB_114de3d7);
  local_1050 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_1044);
  ExceptionList = (void *)(&local_1050);
  *param_2 = (undefined4)(0);
  local_1048 = (undefined4)(0);
  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar7);
    local_1048 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar7);
    *(unsigned char *)((char *)&local_1048 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar7);
    local_1048 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1048 + 1)) << 8 | (uint)(3)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    if (param_7 != (int *)0x0) {
      (**(code **)(*param_7 + 4))();
    }
    if (param_9 != (int *)0x0) {
      (**(code **)(*param_9 + 4))();
    }
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_11 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*param_11);
    }
    thunk_FUN_101a1ea0(puVar7);
    local_1048 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_1048 + 1)) << 8 | (uint)(4)));
    uVar5 = (undefined4)(thunk_FUN_101a2160());
    piVar6 = (int *)((int *)(**(code **)(param_1 + 0x3c))
                              (uVar2,uVar3,uVar4,param_6,param_7,param_8,param_9,param_10,uVar5));
    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_1050);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayMenuAndTextInputAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012f1f0; body size 347 bytes.
#line 1 "ENTRY_1012f1f0"

void __thiscall Recovered_Bulk::FUN_1012f1f0(undefined4 *param_2,undefined4 *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined1 param_9,
            undefined1 param_10)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de45d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))();
    }
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_8 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_8);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x18))
                              (uVar2,param_4,param_5,param_6,param_7,uVar3,param_9,param_10));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayMenuPopupAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012f3b0; body size 231 bytes.
#line 1 "ENTRY_1012f3b0"

void __thiscall Recovered_Bulk::FUN_1012f3b0(undefined4 *param_2,undefined4 *param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de4d2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x1c))(uVar2,param_4));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayMessagePopupAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012f4e0; body size 402 bytes.
#line 1 "ENTRY_1012f4e0"

void __thiscall Recovered_Bulk::FUN_1012f4e0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  void *local_c48;
  undefined1 *puStack_c44;
  undefined4 local_c40;
  undefined1 local_c3c [3096];
  undefined1 local_24 [28];
  uint local_8;
  
  puStack_c44 = (undefined1 *)(LAB_114de55c);
  local_c48 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_c3c);
  ExceptionList = (void *)(&local_c48);
  *param_2 = (undefined4)(0);
  local_c40 = (undefined4)(0);
  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar6);
    local_c40 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar6);
    *(unsigned char *)((char *)&local_c40 + 0) = 2;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_5);
    }
    thunk_FUN_101a1ea0(puVar6);
    local_c40 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_c40 + 1)) << 8 | (uint)(3)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    if (param_6 != (int *)0x0) {
      (**(code **)(*param_6 + 4))();
    }
    piVar5 = (int *)((int *)(**(code **)(param_1 + 0x40))(uVar2,uVar3,uVar4,param_6));
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_c48);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayTextInputAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012f6e0; body size 337 bytes.
#line 1 "ENTRY_1012f6e0"

void __thiscall Recovered_Bulk::FUN_1012f6e0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  void *local_840;
  undefined1 *puStack_83c;
  undefined4 local_838;
  undefined1 local_834 [2064];
  undefined1 local_24 [28];
  uint local_8;
  
  puStack_83c = (undefined1 *)(LAB_114de5d1);
  local_840 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_834);
  ExceptionList = (void *)(&local_840);
  *param_2 = (undefined4)(0);
  local_838 = (undefined4)(0);
  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x4c) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_838 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x4c))(uVar2,uVar3,param_5));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_840);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayTextPaneAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012f890; body size 337 bytes.
#line 1 "ENTRY_1012f890"

void __thiscall Recovered_Bulk::FUN_1012f890(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  void *local_840;
  undefined1 *puStack_83c;
  undefined4 local_838;
  undefined1 local_834 [2064];
  undefined1 local_24 [28];
  uint local_8;
  
  puStack_83c = (undefined1 *)(LAB_114de651);
  local_840 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_834);
  ExceptionList = (void *)(&local_840);
  *param_2 = (undefined4)(0);
  local_838 = (undefined4)(0);
  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x58) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_838 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_838 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x58))(uVar2,uVar3,param_5));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_840);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayTimePickerAction");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012fa40; body size 177 bytes.
#line 1 "ENTRY_1012fa40"

void __thiscall Recovered_Bulk::FUN_1012fa40(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de6be);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x34));
  local_8 = (undefined4)(0);
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x34));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createDisplayWizardAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012fb20; body size 311 bytes.
#line 1 "ENTRY_1012fb20"

void __thiscall Recovered_Bulk::FUN_1012fb20(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de73d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x70) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x70))(uVar2,uVar3));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createInlineControllerUpdateAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012fcb0; body size 228 bytes.
#line 1 "ENTRY_1012fcb0"

void __thiscall Recovered_Bulk::FUN_1012fcb0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de7b2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x78) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x78))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createModalSettingsMenuAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012fdd0; body size 180 bytes.
#line 1 "ENTRY_1012fdd0"

void __thiscall Recovered_Bulk::FUN_1012fdd0(undefined4 *param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de81e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (pcVar1 != (code *)0x0) {
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3,param_4));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createNavigationAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1012fec0; body size 311 bytes.
#line 1 "ENTRY_1012fec0"

void __thiscall Recovered_Bulk::FUN_1012fec0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de89d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x6c) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x6c))(uVar2,uVar3));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createOpenURIAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10130050; body size 156 bytes.
#line 1 "ENTRY_10130050"

void __thiscall Recovered_Bulk::FUN_10130050(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de8fe);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x68))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createPopBrowseAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10130120; body size 159 bytes.
#line 1 "ENTRY_10130120"

void __thiscall Recovered_Bulk::FUN_10130120(undefined4 *param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de95e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (*(code **)(param_1 + 100) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 100))(param_3,param_4,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createPresentAlarmInterfaceAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101301f0; body size 318 bytes.
#line 1 "ENTRY_101301f0"

void __thiscall Recovered_Bulk::FUN_101301f0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 param_5)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114de9dd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar4 = (int *)((int *)(**(code **)(param_1 + 0x20))(uVar2,uVar3,param_5));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createPushSCUriAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10130380; body size 177 bytes.
#line 1 "ENTRY_10130380"

void __thiscall Recovered_Bulk::FUN_10130380(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dea3e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  local_8 = (undefined4)(0);
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createRunAsyncIOOperationAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10130460; body size 259 bytes.
#line 1 "ENTRY_10130460"

void __thiscall Recovered_Bulk::FUN_10130460(undefined4 *param_2,int *param_3,undefined1 *param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114deaba);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  *param_2 = (undefined4)(0);
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_4 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_4);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar1 = (undefined4)(thunk_FUN_101a2160());
    piVar2 = (int *)((int *)(**(code **)(param_1 + 0x14))(param_3,uVar1));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    thunk_FUN_101a2000();
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)((SCStr *)&param_4))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createRunAsyncIOOperationActionWithMessage");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101305b0; body size 241 bytes.
#line 1 "ENTRY_101305b0"

void __thiscall Recovered_Bulk::FUN_101305b0(undefined4 *param_2,undefined1 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114deb32);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x60))(param_3,uVar2,param_5,param_6));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createScheduleAlarmMonitorAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101306e0; body size 177 bytes.
#line 1 "ENTRY_101306e0"

void __thiscall Recovered_Bulk::FUN_101306e0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114deb9e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x30));
  local_8 = (undefined4)(0);
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x30));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionFactorySwigBase_createSummonNewWizAction");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10130900; body size 67 bytes.
#line 1 "ENTRY_10130900"

void __fastcall FUN_10130900(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketDelegateSwigBase_destroy");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131230; body size 67 bytes.
#line 1 "ENTRY_10131230"

void __fastcall FUN_10131230(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTClassicConnectionCallbackSwigBase_deviceInfoChanged");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131290; body size 67 bytes.
#line 1 "ENTRY_10131290"

void __fastcall FUN_10131290(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketDelegateSwigBase_disconnect");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101312f0; body size 67 bytes.
#line 1 "ENTRY_101312f0"

void __fastcall FUN_101312f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTClassicConnectionCallbackSwigBase_disconnectedFromDevice");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131350; body size 188 bytes.
#line 1 "ENTRY_10131350"

void __thiscall Recovered_Bulk::FUN_10131350(int *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114debf0);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(local_14);
    }
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar2);
    local_8 = (undefined4)(0);
    uVar1 = (undefined4)(thunk_FUN_101a2160());
    (**(code **)(param_1 + 0xc))(param_2,uVar1);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIEventSinkSwigBase_dispatchEvent");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131440; body size 99 bytes.
#line 1 "ENTRY_10131440"

void __thiscall Recovered_Bulk::FUN_10131440(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 8));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 8));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIPlatformDateTimeProvider_doesPlatformTimeZoneMatch");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131500; body size 75 bytes.
#line 1 "ENTRY_10131500"

void __thiscall Recovered_Bulk::FUN_10131500(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICrashReportProviderSwigBase_enableLogging");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131560; body size 78 bytes.
#line 1 "ENTRY_10131560"

void __thiscall Recovered_Bulk::FUN_10131560(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_enablePrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101315d0; body size 67 bytes.
#line 1 "ENTRY_101315d0"

void __fastcall FUN_101315d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlSessionProviderSwigBase_endURLSession");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131630; body size 94 bytes.
#line 1 "ENTRY_10131630"

void __thiscall Recovered_Bulk::FUN_10131630(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_enter");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101316b0; body size 67 bytes.
#line 1 "ENTRY_101316b0"

void __fastcall FUN_101316b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_exit");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131710; body size 111 bytes.
#line 1 "ENTRY_10131710"

void __thiscall Recovered_Bulk::FUN_10131710(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0x14))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppPurchaseManagerProviderSwigBase_fetchProducts");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101317a0; body size 203 bytes.
#line 1 "ENTRY_101317a0"

void __thiscall Recovered_Bulk::FUN_101317a0(int *param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dec48);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (*(int *)(param_1 + 0x10) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(local_14);
    }
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (param_3 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(param_3);
    }
    thunk_FUN_101a1ea0(puVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar1 = (undefined4)(thunk_FUN_101a2160());
    (**(code **)(param_1 + 0x10))(param_2,uVar1);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerDelegateSwigBase_fillImageBytes");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10131970; body size 153 bytes.
#line 1 "ENTRY_10131970"

void __thiscall Recovered_Bulk::FUN_10131970(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114ded0e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x28))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getActions");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132090; body size 76 bytes.
#line 1 "ENTRY_10132090"

void __thiscall Recovered_Bulk::FUN_10132090(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getAlbumArtType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101320f0; body size 70 bytes.
#line 1 "ENTRY_101320f0"

void __fastcall FUN_101320f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x84) != (code *)0x0) {
    (**(code **)(param_1 + 0x84))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getAlbumArtType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101323d0; body size 67 bytes.
#line 1 "ENTRY_101323d0"

void __fastcall FUN_101323d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMediaCollectionSwigBase_getAllNodeType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132430; body size 173 bytes.
#line 1 "ENTRY_10132430"

void __thiscall Recovered_Bulk::FUN_10132430(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114df060);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIServiceAppInteropSwigBase_getAppInstallState");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132510; body size 67 bytes.
#line 1 "ENTRY_10132510"

void __fastcall FUN_10132510(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILoggingProviderSwigBase_getAppLevel");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132640; body size 67 bytes.
#line 1 "ENTRY_10132640"

void __fastcall FUN_10132640(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMusicBrowseItemInfoSwigBase_getArtType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101329e0; body size 156 bytes.
#line 1 "ENTRY_101329e0"

void __thiscall Recovered_Bulk::FUN_101329e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114df29e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x90))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getAttributes");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132ab0; body size 67 bytes.
#line 1 "ENTRY_10132ab0"

void __fastcall FUN_10132ab0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerBrowseDelegateSwigBase_getAuthorization");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132b10; body size 67 bytes.
#line 1 "ENTRY_10132b10"

void __fastcall FUN_10132b10(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_getBitsPerSample");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132ca0; body size 176 bytes.
#line 1 "ENTRY_10132ca0"

void __thiscall Recovered_Bulk::FUN_10132ca0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114df370);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_getBoolValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132e60; body size 73 bytes.
#line 1 "ENTRY_10132e60"

void __thiscall Recovered_Bulk::FUN_10132e60(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    (**(code **)(param_1 + 0x48))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMusicBrowseItemInfoSwigBase_getByteOffsetForTime");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132ec0; body size 153 bytes.
#line 1 "ENTRY_10132ec0"

void __thiscall Recovered_Bulk::FUN_10132ec0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114df42e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x10))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlConnectionSwigBase_getCallback");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10132f80; body size 153 bytes.
#line 1 "ENTRY_10132f80"

void __thiscall Recovered_Bulk::FUN_10132f80(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114df48e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMusicSearchableDelegateSwigBase_getCategoryIDs");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133110; body size 67 bytes.
#line 1 "ENTRY_10133110"

void __fastcall FUN_10133110(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_getChannels");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133170; body size 156 bytes.
#line 1 "ENTRY_10133170"

void __thiscall Recovered_Bulk::FUN_10133170(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114df54e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xa8))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getChildDataSource");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133310; body size 153 bytes.
#line 1 "ENTRY_10133310"

void __thiscall Recovered_Bulk::FUN_10133310(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114df60e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_getConnectedDevices");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101333d0; body size 72 bytes.
#line 1 "ENTRY_101333d0"

void __fastcall FUN_101333d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_getConnectionOpen");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133440; body size 67 bytes.
#line 1 "ENTRY_10133440"

void __fastcall FUN_10133440(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMediaCollectionSwigBase_getCount");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133cc0; body size 181 bytes.
#line 1 "ENTRY_10133cc0"

void __thiscall Recovered_Bulk::FUN_10133cc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114dfa20);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x24))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_getDoubleValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133db0; body size 67 bytes.
#line 1 "ENTRY_10133db0"

void __fastcall FUN_10133db0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMusicBrowseItemInfoSwigBase_getDuration");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133e10; body size 67 bytes.
#line 1 "ENTRY_10133e10"

void __fastcall FUN_10133e10(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCITrackInfoSwigBase_getDuration");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133e70; body size 67 bytes.
#line 1 "ENTRY_10133e70"

void __fastcall FUN_10133e70(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x7c) != (code *)0x0) {
    (**(code **)(param_1 + 0x7c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getDurationMillis");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133ee0; body size 67 bytes.
#line 1 "ENTRY_10133ee0"

void __fastcall FUN_10133ee0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecurityContextSwigBase_getEnvironment");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10133f40; body size 153 bytes.
#line 1 "ENTRY_10133f40"

void __thiscall Recovered_Bulk::FUN_10133f40(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dfa7e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x2c))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_getExperiments");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134000; body size 156 bytes.
#line 1 "ENTRY_10134000"

void __thiscall Recovered_Bulk::FUN_10134000(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dfade);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xbc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xbc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getExtension");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101340d0; body size 351 bytes.
#line 1 "ENTRY_101340d0"

void __thiscall Recovered_Bulk::FUN_101340d0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  void *local_c48;
  undefined1 *puStack_c44;
  undefined4 local_c40;
  undefined1 local_c3c [3096];
  undefined1 local_24 [28];
  uint local_8;
  
  local_c40 = (undefined4)(0xffffffff);
  puStack_c44 = (undefined1 *)(LAB_114dfb43);
  local_c48 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)local_c3c);
  ExceptionList = (void *)(&local_c48);
  local_8 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_c40 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    *(unsigned char *)((char *)&local_c40 + 0) = 1;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_c40 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_c40 + 1)) << 8 | (uint)(2)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    (**(code **)(param_1 + 0x20))(uVar2,uVar3,uVar4,param_5);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_c48);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_getFeatureVariableDouble");
                    
  _CxxThrowException(local_24,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134290; body size 346 bytes.
#line 1 "ENTRY_10134290"

void __thiscall Recovered_Bulk::FUN_10134290(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114dfba6);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 4))();
    }
    (**(code **)(param_1 + 0x1c))(uVar2,uVar3,uVar4,param_5);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_getFeatureVariableInteger");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134660; body size 153 bytes.
#line 1 "ENTRY_10134660"

void __thiscall Recovered_Bulk::FUN_10134660(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dfc8e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x28))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_getFeatures");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134720; body size 177 bytes.
#line 1 "ENTRY_10134720"

void __thiscall Recovered_Bulk::FUN_10134720(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114dfcee);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  pcVar1 = (code *)(*(code **)(param_1 + 0x2c));
  local_8 = (undefined4)(0);
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
      pcVar1 = (code *)(*(code **)(param_1 + 0x2c));
    }
    piVar2 = (int *)((int *)(*pcVar1)(param_3));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getFilteredActions");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134800; body size 67 bytes.
#line 1 "ENTRY_10134800"

void __fastcall FUN_10134800(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILoggingProviderSwigBase_getFlutterLevel");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134b00; body size 67 bytes.
#line 1 "ENTRY_10134b00"

void __fastcall FUN_10134b00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    (**(code **)(param_1 + 0x48))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_getHoldStyle");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134b60; body size 67 bytes.
#line 1 "ENTRY_10134b60"

void __fastcall FUN_10134b60(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_getIOSControlPanelSwipeDirection");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134d60; body size 173 bytes.
#line 1 "ENTRY_10134d60"

void __thiscall Recovered_Bulk::FUN_10134d60(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114dff20);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_getIntegerValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10134e40; body size 194 bytes.
#line 1 "ENTRY_10134e40"

undefined4 * FUN_10134e40(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114dff7d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (undefined4 *)0x0) {
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlaying");
    local_8 = (undefined4)(0);
    puVar2 = (undefined4 *)((undefined4 *)(**(code **)*puVar2)(&local_18,&param_2));
    piVar3 = (int *)((int *)*puVar2);
    *puVar2 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_14 = (int *)(piVar3);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);
  }
  local_8 = (undefined4)(4);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10134f40; body size 194 bytes.
#line 1 "ENTRY_10134f40"

undefined4 * FUN_10134f40(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114dffcd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (undefined4 *)0x0) {
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCISystem");
    local_8 = (undefined4)(0);
    puVar2 = (undefined4 *)((undefined4 *)(**(code **)*puVar2)(&local_18,&param_2));
    piVar3 = (int *)((int *)*puVar2);
    *puVar2 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_14 = (int *)(piVar3);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);
  }
  local_8 = (undefined4)(4);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10135040; body size 194 bytes.
#line 1 "ENTRY_10135040"

undefined4 * FUN_10135040(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e001d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  if (param_2 != (undefined4 *)0x0) {
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCIZoneGroupMgr");
    local_8 = (undefined4)(0);
    puVar2 = (undefined4 *)((undefined4 *)(**(code **)*puVar2)(&local_18,&param_2));
    piVar3 = (int *)((int *)*puVar2);
    *puVar2 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_14 = (int *)(piVar3);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);
  }
  local_8 = (undefined4)(4);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10135210; body size 156 bytes.
#line 1 "ENTRY_10135210"

void __thiscall Recovered_Bulk::FUN_10135210(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e00ce);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x10))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMediaCollectionSwigBase_getItemAt");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101352e0; body size 67 bytes.
#line 1 "ENTRY_101352e0"

void __fastcall FUN_101352e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMediaCollectionSwigBase_getItemThumbnailsPresentationType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135340; body size 67 bytes.
#line 1 "ENTRY_10135340"

void __fastcall FUN_10135340(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMusicBrowseItemInfoSwigBase_getItemType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101353a0; body size 238 bytes.
#line 1 "ENTRY_101353a0"

void __thiscall Recovered_Bulk::FUN_101353a0(undefined4 *param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e014a);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  *param_2 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if (param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x14))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerBrowseDelegateSwigBase_getLocalMediaCollectionForId");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101354d0; body size 238 bytes.
#line 1 "ENTRY_101354d0"

void __thiscall Recovered_Bulk::FUN_101354d0(undefined4 *param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e01ca);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  *param_2 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if (param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x10))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerBrowseDelegateSwigBase_getLocalMusicItemInfoForId");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135600; body size 153 bytes.
#line 1 "ENTRY_10135600"

void __thiscall Recovered_Bulk::FUN_10135600(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e022e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x20))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerBrowseDelegateSwigBase_getLocalMusicSearchableDelegate");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135790; body size 67 bytes.
#line 1 "ENTRY_10135790"

void __fastcall FUN_10135790(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIStringInputSwigBase_getMaxNumChars");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135b30; body size 153 bytes.
#line 1 "ENTRY_10135b30"

void __thiscall Recovered_Bulk::FUN_10135b30(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e046e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x20))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getMoreMenuDataSource");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135bf0; body size 153 bytes.
#line 1 "ENTRY_10135bf0"

void __thiscall Recovered_Bulk::FUN_10135bf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e04ce);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x1c))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerDelegateSwigBase_getMusicServerBrowseDelegate");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135d80; body size 67 bytes.
#line 1 "ENTRY_10135d80"

void __fastcall FUN_10135d80(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINetworkManagementDelegateSwigBase_getNetworkType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135de0; body size 67 bytes.
#line 1 "ENTRY_10135de0"

void __fastcall FUN_10135de0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_getNextStateID");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10135e40; body size 67 bytes.
#line 1 "ENTRY_10135e40"

void __fastcall FUN_10135e40(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getNumberOfAlbumArtURLs");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101360b0; body size 67 bytes.
#line 1 "ENTRY_101360b0"

void __fastcall FUN_101360b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_getPacketQueueLength");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101367b0; body size 153 bytes.
#line 1 "ENTRY_101367b0"

void __thiscall Recovered_Bulk::FUN_101367b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e092e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIPlatformDateTimeProvider_getPlatformDateTime");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10136a70; body size 67 bytes.
#line 1 "ENTRY_10136a70"

void __fastcall FUN_10136a70(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMediaCollectionSwigBase_getPresentationType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10136c70; body size 153 bytes.
#line 1 "ENTRY_10136c70"

void __thiscall Recovered_Bulk::FUN_10136c70(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e0b2e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x30))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_getPropertyBag");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10136d30; body size 67 bytes.
#line 1 "ENTRY_10136d30"

void __fastcall FUN_10136d30(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIStringInputSwigBase_getRecommendedInputMethodType");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10136d90; body size 153 bytes.
#line 1 "ENTRY_10136d90"

void __thiscall Recovered_Bulk::FUN_10136d90(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e0b8e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlConnectionSwigBase_getRequest");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10136e50; body size 72 bytes.
#line 1 "ENTRY_10136e50"

void __fastcall FUN_10136e50(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBlePeripheralDelegateSwigBase_getRequireSecurePairing");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137050; body size 70 bytes.
#line 1 "ENTRY_10137050"

void __fastcall FUN_10137050(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
    (**(code **)(param_1 + 0x80))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_getResumeOffsetMillis");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101370b0; body size 153 bytes.
#line 1 "ENTRY_101370b0"

void __thiscall Recovered_Bulk::FUN_101370b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e0cae);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x18))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerBrowseDelegateSwigBase_getRootItem");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101377b0; body size 84 bytes.
#line 1 "ENTRY_101377b0"

void __fastcall FUN_101377b0(int param_1)

{
  int *piVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))());
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVpnDelegate_getRootObject");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137860; body size 156 bytes.
#line 1 "ENTRY_10137860"

void __thiscall Recovered_Bulk::FUN_10137860(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e0d0e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0xc))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibDelegateFactory_getSCLibDelegate");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137a00; body size 67 bytes.
#line 1 "ENTRY_10137a00"

void __fastcall FUN_10137a00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_getSampleRate");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137da0; body size 67 bytes.
#line 1 "ENTRY_10137da0"

void __fastcall FUN_10137da0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIGetSonosPlaylistsCBSwigBase_getSonosPlaylistsFailed");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10137e00; body size 169 bytes.
#line 1 "ENTRY_10137e00"

void __thiscall Recovered_Bulk::FUN_10137e00(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e0ee0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIGetSonosPlaylistsCBSwigBase_getSonosPlaylistsSucceeded");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138160; body size 156 bytes.
#line 1 "ENTRY_10138160"

void __thiscall Recovered_Bulk::FUN_10138160(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e105e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x3c))(param_3,local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_getStringInput");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101385d0; body size 67 bytes.
#line 1 "ENTRY_101385d0"

void __fastcall FUN_101385d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMusicBrowseItemInfoSwigBase_getTrackNumber");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101388a0; body size 67 bytes.
#line 1 "ENTRY_101388a0"

void __fastcall FUN_101388a0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIStringInputSwigBase_getValidationStatus");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138ab0; body size 228 bytes.
#line 1 "ENTRY_10138ab0"

void __thiscall Recovered_Bulk::FUN_10138ab0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e1412);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 0x30))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_getVariations");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138bd0; body size 153 bytes.
#line 1 "ENTRY_10138bd0"

void __thiscall Recovered_Bulk::FUN_10138bd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e147e);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x34))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_getWizardComponents");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138c90; body size 153 bytes.
#line 1 "ENTRY_10138c90"

void __thiscall Recovered_Bulk::FUN_10138c90(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e14de);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  uVar3 = (undefined4)(1);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    puVar2 = (undefined4 *)(param_2);
    piVar1 = (int *)((int *)(**(code **)(param_1 + 0x1c))(local_14));
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28(puVar2,uVar3);
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_getWizardPageProperties");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138d50; body size 176 bytes.
#line 1 "ENTRY_10138d50"

void __thiscall Recovered_Bulk::FUN_10138d50(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1530);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 8))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibCustomSubWizardCallback_hasCustomSubWizard");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138e30; body size 72 bytes.
#line 1 "ENTRY_10138e30"

void __fastcall FUN_10138e30(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppMessagingProviderSwigBase_hasDeviceToken");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138e90; body size 72 bytes.
#line 1 "ENTRY_10138e90"

void __fastcall FUN_10138e90(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x54) != (code *)0x0) {
    (**(code **)(param_1 + 0x54))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_hasLimitedVerticalSpace");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138ef0; body size 72 bytes.
#line 1 "ENTRY_10138ef0"

void __fastcall FUN_10138ef0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_hasMoreMenu");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138f50; body size 72 bytes.
#line 1 "ENTRY_10138f50"

void __fastcall FUN_10138f50(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x6c) != (code *)0x0) {
    (**(code **)(param_1 + 0x6c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_hasOrdinal");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10138fb0; body size 78 bytes.
#line 1 "ENTRY_10138fb0"

void __thiscall Recovered_Bulk::FUN_10138fb0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibDelegateFactory_hasSCLibDelegate");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139020; body size 72 bytes.
#line 1 "ENTRY_10139020"

void __fastcall FUN_10139020(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrbanAirshipDelegateSwigBase_hasUnreadMessages");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139090; body size 67 bytes.
#line 1 "ENTRY_10139090"

void __fastcall FUN_10139090(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAutomationDelegateSwigBase_hhidUpdated");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101390f0; body size 67 bytes.
#line 1 "ENTRY_101390f0"

void __fastcall FUN_101390f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBlePeripheralDelegateSwigBase_initPeripheral");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139150; body size 94 bytes.
#line 1 "ENTRY_10139150"

void __thiscall Recovered_Bulk::FUN_10139150(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x38));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x38));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_initialize");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101391d0; body size 169 bytes.
#line 1 "ENTRY_101391d0"

void __thiscall Recovered_Bulk::FUN_101391d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1580);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_initialize");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101392b0; body size 67 bytes.
#line 1 "ENTRY_101392b0"

void __fastcall FUN_101392b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppPurchaseManagerProviderSwigBase_initialize");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139310; body size 67 bytes.
#line 1 "ENTRY_10139310"

void __fastcall FUN_10139310(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAutomationDelegateSwigBase_initializeFlutterAutomation");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101393a0; body size 78 bytes.
#line 1 "ENTRY_101393a0"

void __thiscall Recovered_Bulk::FUN_101393a0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_isAlwaysAvailable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139410; body size 78 bytes.
#line 1 "ENTRY_10139410"

void __thiscall Recovered_Bulk::FUN_10139410(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_isAlwaysDisallowed");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139480; body size 78 bytes.
#line 1 "ENTRY_10139480"

void __thiscall Recovered_Bulk::FUN_10139480(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILifecycleAppProviderSwigBase_isAppWithSWGenInstalled");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101394f0; body size 78 bytes.
#line 1 "ENTRY_101394f0"

void __thiscall Recovered_Bulk::FUN_101394f0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isBrowseItemTextAvailable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139560; body size 72 bytes.
#line 1 "ENTRY_10139560"

void __fastcall FUN_10139560(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isCompletelyPlayed");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101395c0; body size 72 bytes.
#line 1 "ENTRY_101395c0"

void __fastcall FUN_101395c0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTClassicConnectionProviderSwigBase_isConnectedToSonosDevice");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139620; body size 72 bytes.
#line 1 "ENTRY_10139620"

void __fastcall FUN_10139620(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMusicBrowseItemInfoSwigBase_isContainer");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139680; body size 75 bytes.
#line 1 "ENTRY_10139680"

void __fastcall FUN_10139680(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
    (**(code **)(param_1 + 0x98))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isDataAvailable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101396e0; body size 176 bytes.
#line 1 "ENTRY_101396e0"

void __thiscall Recovered_Bulk::FUN_101396e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e15d0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_isDeviceBonded");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139830; body size 275 bytes.
#line 1 "ENTRY_10139830"

void __thiscall Recovered_Bulk::FUN_10139830(undefined4 *param_2,undefined4 *param_3,int *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e162b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))();
    }
    (**(code **)(param_1 + 0x14))(uVar2,uVar3,param_4);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_isFeatureEnabled");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101399a0; body size 72 bytes.
#line 1 "ENTRY_101399a0"

void __fastcall FUN_101399a0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_isInitialized");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139a00; body size 75 bytes.
#line 1 "ENTRY_10139a00"

void __fastcall FUN_10139a00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
    (**(code **)(param_1 + 0xb0))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isLoading");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139a60; body size 72 bytes.
#line 1 "ENTRY_10139a60"

void __fastcall FUN_10139a60(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIStringInputSwigBase_isLocked");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139ac0; body size 72 bytes.
#line 1 "ENTRY_10139ac0"

void __fastcall FUN_10139ac0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTClassicConnectionCallbackSwigBase_isMobConnected");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139b50; body size 75 bytes.
#line 1 "ENTRY_10139b50"

void __fastcall FUN_10139b50(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x94) != (code *)0x0) {
    (**(code **)(param_1 + 0x94))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isParentOfSearch");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139bb0; body size 72 bytes.
#line 1 "ENTRY_10139bb0"

void __fastcall FUN_10139bb0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMusicBrowseItemInfoSwigBase_isPlayable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139c10; body size 72 bytes.
#line 1 "ENTRY_10139c10"

void __fastcall FUN_10139c10(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTClassicConnectionProviderSwigBase_isPlaying");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139c70; body size 75 bytes.
#line 1 "ENTRY_10139c70"

void __fastcall FUN_10139c70(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x9c) != (code *)0x0) {
    (**(code **)(param_1 + 0x9c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isPlaying");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139cd0; body size 82 bytes.
#line 1 "ENTRY_10139cd0"

void __thiscall Recovered_Bulk::FUN_10139cd0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_isPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139d40; body size 72 bytes.
#line 1 "ENTRY_10139d40"

void __fastcall FUN_10139d40(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isSecondaryTitleValid");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139da0; body size 72 bytes.
#line 1 "ENTRY_10139da0"

void __fastcall FUN_10139da0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecureStoreSwigBase_isSecure");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139e00; body size 75 bytes.
#line 1 "ENTRY_10139e00"

void __fastcall FUN_10139e00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
    (**(code **)(param_1 + 0xb8))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isSonosRadio");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139e60; body size 72 bytes.
#line 1 "ENTRY_10139e60"

void __fastcall FUN_10139e60(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_isStateDone");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139ec0; body size 75 bytes.
#line 1 "ENTRY_10139ec0"

void __fastcall FUN_10139ec0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xa4) != (code *)0x0) {
    (**(code **)(param_1 + 0xa4))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_isUnavailable");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10139f20; body size 176 bytes.
#line 1 "ENTRY_10139f20"

void __thiscall Recovered_Bulk::FUN_10139f20(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1680);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x28))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIStringInputSwigBase_isValid");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a000; body size 72 bytes.
#line 1 "ENTRY_1013a000"

void __fastcall FUN_1013a000(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIStringInputSwigBase_isValid");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a060; body size 249 bytes.
#line 1 "ENTRY_1013a060"

void __thiscall Recovered_Bulk::FUN_1013a060(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e16db);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x38))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_isVariationForced");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a1a0; body size 72 bytes.
#line 1 "ENTRY_1013a1a0"

void __fastcall FUN_1013a1a0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_isWifiConnected");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a200; body size 245 bytes.
#line 1 "ENTRY_1013a200"

void __thiscall Recovered_Bulk::FUN_1013a200(undefined4 *param_2,undefined4 *param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e173b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2,uVar3,param_4);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_joinSSID");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a340; body size 169 bytes.
#line 1 "ENTRY_1013a340"

void __thiscall Recovered_Bulk::FUN_1013a340(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1790);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x48))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_launchAccessoryConfiguration");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a420; body size 169 bytes.
#line 1 "ENTRY_1013a420"

void __thiscall Recovered_Bulk::FUN_1013a420(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e17e0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_leaveSSID");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a530; body size 153 bytes.
#line 1 "ENTRY_1013a530"

void __thiscall Recovered_Bulk::FUN_1013a530(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1830);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2);
    thunk_FUN_101a2000();
  }
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1013a790; body size 94 bytes.
#line 1 "ENTRY_1013a790"

void __thiscall Recovered_Bulk::FUN_1013a790(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x34));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x34));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecurityContextSwigBase_logCertificateData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013a8b0; body size 72 bytes.
#line 1 "ENTRY_1013a8b0"

void __fastcall FUN_1013a8b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUINotificationsDelegate_notificationsEnabled");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013aad0; body size 67 bytes.
#line 1 "ENTRY_1013aad0"

void __fastcall FUN_1013aad0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerDelegateSwigBase_onBeginStreaming");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ab30; body size 67 bytes.
#line 1 "ENTRY_1013ab30"

void __fastcall FUN_1013ab30(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINetstartListenerSwigBase_onDeviceDiscoveryWaiting");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ab90; body size 67 bytes.
#line 1 "ENTRY_1013ab90"

void __fastcall FUN_1013ab90(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerDelegateSwigBase_onEndStreaming");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013abf0; body size 67 bytes.
#line 1 "ENTRY_1013abf0"

void __fastcall FUN_1013abf0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINetstartListenerSwigBase_onJoinComplete");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ac50; body size 67 bytes.
#line 1 "ENTRY_1013ac50"

void __fastcall FUN_1013ac50(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINetstartListenerSwigBase_onJoinFail");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013acb0; body size 189 bytes.
#line 1 "ENTRY_1013acb0"

void __thiscall Recovered_Bulk::FUN_1013acb0(undefined1 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e19e8);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2,param_3);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINetstartListenerSwigBase_onNetParamsAcquired");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ada0; body size 73 bytes.
#line 1 "ENTRY_1013ada0"

void __thiscall Recovered_Bulk::FUN_1013ada0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_onSubWizardStateTransition");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ae00; body size 94 bytes.
#line 1 "ENTRY_1013ae00"

void __thiscall Recovered_Bulk::FUN_1013ae00(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x14));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x14));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketCallbackSwigBase_onWebsocketConnected");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ae80; body size 94 bytes.
#line 1 "ENTRY_1013ae80"

void __thiscall Recovered_Bulk::FUN_1013ae80(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketCallbackSwigBase_onWebsocketDisconnected");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013af00; body size 94 bytes.
#line 1 "ENTRY_1013af00"

void __thiscall Recovered_Bulk::FUN_1013af00(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketCallbackSwigBase_onWebsocketError");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013af80; body size 197 bytes.
#line 1 "ENTRY_1013af80"

void __thiscall Recovered_Bulk::FUN_1013af80(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1a40);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0x10))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIServiceAppInteropSwigBase_openApp");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b080; body size 190 bytes.
#line 1 "ENTRY_1013b080"

void __thiscall Recovered_Bulk::FUN_1013b080(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e1a98);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMusicServerDelegateSwigBase_openFileDescriptor");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b170; body size 67 bytes.
#line 1 "ENTRY_1013b170"

void __fastcall FUN_1013b170(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVpnDelegate_openVPNSettings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b1d0; body size 67 bytes.
#line 1 "ENTRY_1013b1d0"

void __fastcall FUN_1013b1d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVpnDelegateSwigBase_openVPNSettings");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b230; body size 94 bytes.
#line 1 "ENTRY_1013b230"

void __thiscall Recovered_Bulk::FUN_1013b230(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIActionSwigBase_perform");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b2b0; body size 190 bytes.
#line 1 "ENTRY_1013b2b0"

void __thiscall Recovered_Bulk::FUN_1013b2b0(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1af0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINewWizDelegateSwigBase_performUpdate");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b3a0; body size 186 bytes.
#line 1 "ENTRY_1013b3a0"

void __thiscall Recovered_Bulk::FUN_1013b3a0(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e1b48);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrbanAirshipDelegateSwigBase_postCustomEvent");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b490; body size 94 bytes.
#line 1 "ENTRY_1013b490"

void __thiscall Recovered_Bulk::FUN_1013b490(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_prepareForRecording");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b5a0; body size 214 bytes.
#line 1 "ENTRY_1013b5a0"

void __thiscall Recovered_Bulk::FUN_1013b5a0(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1ba0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))();
    }
    (**(code **)(param_1 + 0x18))(uVar2,param_3,param_4);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppPurchaseManagerProviderSwigBase_purchaseProduct");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013b6b0; body size 103 bytes.
#line 1 "ENTRY_1013b6b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013b6b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIAbilityDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013b730; body size 103 bytes.
#line 1 "ENTRY_1013b730"

undefined4 * __thiscall Recovered_Bulk::FUN_1013b730(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIActionDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013b7b0; body size 103 bytes.
#line 1 "ENTRY_1013b7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013b7b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIActionFactory"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013b830; body size 103 bytes.
#line 1 "ENTRY_1013b830"

undefined4 * __thiscall Recovered_Bulk::FUN_1013b830(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIActionFilter"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013b8b0; body size 103 bytes.
#line 1 "ENTRY_1013b8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013b8b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIAction"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013b930; body size 103 bytes.
#line 1 "ENTRY_1013b930"

undefined4 * __thiscall Recovered_Bulk::FUN_1013b930(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIAutomationDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013b9b0; body size 103 bytes.
#line 1 "ENTRY_1013b9b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013b9b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBTAccessoryDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013ba30; body size 103 bytes.
#line 1 "ENTRY_1013ba30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013ba30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBTClassicConnectionCallback"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bab0; body size 103 bytes.
#line 1 "ENTRY_1013bab0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bab0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBTClassicConnectionProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bb30; body size 103 bytes.
#line 1 "ENTRY_1013bb30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bb30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBleDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bbb0; body size 103 bytes.
#line 1 "ENTRY_1013bbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bbb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBlePeripheralDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bc30; body size 103 bytes.
#line 1 "ENTRY_1013bc30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bc30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBrowseItem"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bcb0; body size 103 bytes.
#line 1 "ENTRY_1013bcb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bcb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIChirpDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bd30; body size 103 bytes.
#line 1 "ENTRY_1013bd30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bd30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIClipboardDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bdb0; body size 103 bytes.
#line 1 "ENTRY_1013bdb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bdb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCICrashReportProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013be30; body size 103 bytes.
#line 1 "ENTRY_1013be30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013be30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCICustomSubWizard"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013beb0; body size 103 bytes.
#line 1 "ENTRY_1013beb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013beb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bf30; body size 103 bytes.
#line 1 "ENTRY_1013bf30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bf30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIExperimentManagerProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013bfb0; body size 103 bytes.
#line 1 "ENTRY_1013bfb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013bfb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIGetAboutSonosStringCB"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c030; body size 103 bytes.
#line 1 "ENTRY_1013c030"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c030(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIGetSonosPlaylistsCB"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c0b0; body size 103 bytes.
#line 1 "ENTRY_1013c0b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c0b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIHapticDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c130; body size 103 bytes.
#line 1 "ENTRY_1013c130"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c130(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIInAppMessagingProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c1b0; body size 103 bytes.
#line 1 "ENTRY_1013c1b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c1b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIInAppPurchaseManagerProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c230; body size 103 bytes.
#line 1 "ENTRY_1013c230"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c230(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILifecycleAppProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c2b0; body size 103 bytes.
#line 1 "ENTRY_1013c2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c2b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILocalMediaCollection"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c330; body size 103 bytes.
#line 1 "ENTRY_1013c330"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c330(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILocalMusicBrowseItemInfo"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c3b0; body size 103 bytes.
#line 1 "ENTRY_1013c3b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c3b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILocalMusicSearchableDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c430; body size 103 bytes.
#line 1 "ENTRY_1013c430"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c430(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILoggingProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c4b0; body size 103 bytes.
#line 1 "ENTRY_1013c4b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c4b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIMdnsDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c530; body size 103 bytes.
#line 1 "ENTRY_1013c530"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c530(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIMusicServerBrowseDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c5b0; body size 103 bytes.
#line 1 "ENTRY_1013c5b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c5b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIMusicServerDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c630; body size 103 bytes.
#line 1 "ENTRY_1013c630"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c630(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINetstartListener"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c6b0; body size 103 bytes.
#line 1 "ENTRY_1013c6b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c6b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINetworkManagementDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c730; body size 103 bytes.
#line 1 "ENTRY_1013c730"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c730(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINewWizDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c7b0; body size 103 bytes.
#line 1 "ENTRY_1013c7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c7b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINfcDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c830; body size 103 bytes.
#line 1 "ENTRY_1013c830"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c830(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOpCB"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c8b0; body size 103 bytes.
#line 1 "ENTRY_1013c8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c8b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCISavedDataProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c930; body size 103 bytes.
#line 1 "ENTRY_1013c930"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c930(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCISecureStore"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013c9b0; body size 103 bytes.
#line 1 "ENTRY_1013c9b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013c9b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCISecurityContext"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013ca30; body size 103 bytes.
#line 1 "ENTRY_1013ca30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013ca30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIServiceAppInterop"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013cab0; body size 103 bytes.
#line 1 "ENTRY_1013cab0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013cab0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIStackTraceCaptureDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013cb30; body size 103 bytes.
#line 1 "ENTRY_1013cb30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013cb30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIStringInput"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013cbb0; body size 103 bytes.
#line 1 "ENTRY_1013cbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013cbb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCITrackInfo"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013cc30; body size 103 bytes.
#line 1 "ENTRY_1013cc30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013cc30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIUrbanAirshipDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013ccb0; body size 103 bytes.
#line 1 "ENTRY_1013ccb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013ccb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIUrlConnection"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013cd30; body size 103 bytes.
#line 1 "ENTRY_1013cd30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013cd30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIUrlSessionCallback"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013cdb0; body size 103 bytes.
#line 1 "ENTRY_1013cdb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013cdb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIUrlSessionProvider"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013ce30; body size 103 bytes.
#line 1 "ENTRY_1013ce30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013ce30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIVoiceServiceDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013ceb0; body size 103 bytes.
#line 1 "ENTRY_1013ceb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013ceb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIVpnDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013cf30; body size 103 bytes.
#line 1 "ENTRY_1013cf30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013cf30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIWebsocketCallback"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013cfb0; body size 103 bytes.
#line 1 "ENTRY_1013cfb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013cfb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIWebsocketDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013d030; body size 103 bytes.
#line 1 "ENTRY_1013d030"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d030(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIWifiDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1013d0b0; body size 79 bytes.
#line 1 "ENTRY_1013d0b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d0b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIAbilityDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d120; body size 79 bytes.
#line 1 "ENTRY_1013d120"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d120(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIActionDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d190; body size 79 bytes.
#line 1 "ENTRY_1013d190"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d190(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIActionFactory"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d200; body size 79 bytes.
#line 1 "ENTRY_1013d200"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d200(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIActionFilter"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d270; body size 79 bytes.
#line 1 "ENTRY_1013d270"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d270(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIAction"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d2e0; body size 79 bytes.
#line 1 "ENTRY_1013d2e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d2e0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIAutomationDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d350; body size 79 bytes.
#line 1 "ENTRY_1013d350"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d350(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBTAccessoryDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d3c0; body size 79 bytes.
#line 1 "ENTRY_1013d3c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d3c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBTClassicConnectionCallback"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d430; body size 79 bytes.
#line 1 "ENTRY_1013d430"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d430(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBTClassicConnectionProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d4a0; body size 79 bytes.
#line 1 "ENTRY_1013d4a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d4a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBleDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d510; body size 79 bytes.
#line 1 "ENTRY_1013d510"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d510(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBlePeripheralDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d580; body size 79 bytes.
#line 1 "ENTRY_1013d580"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d580(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBrowseItem"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d5f0; body size 79 bytes.
#line 1 "ENTRY_1013d5f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d5f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIChirpDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d660; body size 79 bytes.
#line 1 "ENTRY_1013d660"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d660(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIClipboardDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d6d0; body size 79 bytes.
#line 1 "ENTRY_1013d6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d6d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCICrashReportProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d740; body size 79 bytes.
#line 1 "ENTRY_1013d740"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d740(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCICustomSubWizard"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d7b0; body size 79 bytes.
#line 1 "ENTRY_1013d7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d7b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d820; body size 79 bytes.
#line 1 "ENTRY_1013d820"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d820(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIExperimentManagerProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d890; body size 79 bytes.
#line 1 "ENTRY_1013d890"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d890(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIGetAboutSonosStringCB"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d900; body size 79 bytes.
#line 1 "ENTRY_1013d900"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d900(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIGetSonosPlaylistsCB"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d970; body size 79 bytes.
#line 1 "ENTRY_1013d970"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d970(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIHapticDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013d9e0; body size 79 bytes.
#line 1 "ENTRY_1013d9e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013d9e0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIInAppMessagingProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013da50; body size 79 bytes.
#line 1 "ENTRY_1013da50"

undefined4 * __thiscall Recovered_Bulk::FUN_1013da50(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIInAppPurchaseManagerProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dac0; body size 79 bytes.
#line 1 "ENTRY_1013dac0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dac0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILifecycleAppProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013db30; body size 79 bytes.
#line 1 "ENTRY_1013db30"

undefined4 * __thiscall Recovered_Bulk::FUN_1013db30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILocalMediaCollection"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dba0; body size 79 bytes.
#line 1 "ENTRY_1013dba0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dba0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILocalMusicBrowseItemInfo"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dc10; body size 79 bytes.
#line 1 "ENTRY_1013dc10"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dc10(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILocalMusicSearchableDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dc80; body size 79 bytes.
#line 1 "ENTRY_1013dc80"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dc80(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCILoggingProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dcf0; body size 79 bytes.
#line 1 "ENTRY_1013dcf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dcf0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIMdnsDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013dd60; body size 79 bytes.
#line 1 "ENTRY_1013dd60"

undefined4 * __thiscall Recovered_Bulk::FUN_1013dd60(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIMusicServerBrowseDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013ddd0; body size 79 bytes.
#line 1 "ENTRY_1013ddd0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013ddd0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIMusicServerDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013de40; body size 79 bytes.
#line 1 "ENTRY_1013de40"

undefined4 * __thiscall Recovered_Bulk::FUN_1013de40(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINetstartListener"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013deb0; body size 79 bytes.
#line 1 "ENTRY_1013deb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013deb0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINetworkManagementDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013df20; body size 79 bytes.
#line 1 "ENTRY_1013df20"

undefined4 * __thiscall Recovered_Bulk::FUN_1013df20(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINewWizDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013df90; body size 79 bytes.
#line 1 "ENTRY_1013df90"

undefined4 * __thiscall Recovered_Bulk::FUN_1013df90(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINfcDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e000; body size 79 bytes.
#line 1 "ENTRY_1013e000"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e000(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOpCB"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e070; body size 79 bytes.
#line 1 "ENTRY_1013e070"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e070(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCISavedDataProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e0e0; body size 79 bytes.
#line 1 "ENTRY_1013e0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e0e0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCISecureStore"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e150; body size 79 bytes.
#line 1 "ENTRY_1013e150"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e150(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCISecurityContext"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e1c0; body size 79 bytes.
#line 1 "ENTRY_1013e1c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e1c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIServiceAppInterop"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e230; body size 79 bytes.
#line 1 "ENTRY_1013e230"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e230(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIStackTraceCaptureDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e2a0; body size 79 bytes.
#line 1 "ENTRY_1013e2a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e2a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIStringInput"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e310; body size 79 bytes.
#line 1 "ENTRY_1013e310"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e310(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCITrackInfo"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e380; body size 79 bytes.
#line 1 "ENTRY_1013e380"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e380(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIUrbanAirshipDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e3f0; body size 79 bytes.
#line 1 "ENTRY_1013e3f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e3f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIUrlConnection"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e460; body size 79 bytes.
#line 1 "ENTRY_1013e460"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e460(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIUrlSessionCallback"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e4d0; body size 79 bytes.
#line 1 "ENTRY_1013e4d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e4d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIUrlSessionProvider"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e540; body size 79 bytes.
#line 1 "ENTRY_1013e540"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e540(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIVoiceServiceDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e5b0; body size 228 bytes.
#line 1 "ENTRY_1013e5b0"

void __thiscall Recovered_Bulk::FUN_1013e5b0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e1c12);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(1);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    piVar3 = (int *)((int *)(**(code **)(param_1 + 8))(uVar2));
    *param_2 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVpnDelegate_queryInterface");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013e6d0; body size 79 bytes.
#line 1 "ENTRY_1013e6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e6d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIVpnDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e740; body size 79 bytes.
#line 1 "ENTRY_1013e740"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e740(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIWebsocketCallback"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e7b0; body size 79 bytes.
#line 1 "ENTRY_1013e7b0"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e7b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIWebsocketDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e820; body size 79 bytes.
#line 1 "ENTRY_1013e820"

undefined4 * __thiscall Recovered_Bulk::FUN_1013e820(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIWifiDelegate"));
  if (!bVar1) {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1013e890; body size 74 bytes.
#line 1 "ENTRY_1013e890"

void __fastcall FUN_1013e890(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(&stack0x00000004);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_queuePacketForSend");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013e8f0; body size 186 bytes.
#line 1 "ENTRY_1013e8f0"

void __thiscall Recovered_Bulk::FUN_1013e8f0(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e1c78);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x38))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_raiseEvent");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013e9e0; body size 104 bytes.
#line 1 "ENTRY_1013e9e0"

void __thiscall Recovered_Bulk::FUN_1013e9e0(undefined4 param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  code *pcVar2;
  undefined1 local_20 [28];
  uint local_4;
  
  piVar1 = (int *)(param_4);
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar2 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar2 != (code *)0x0) {
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 4))();
      pcVar2 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar2)(&param_2,piVar1);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketCallbackSwigBase_receivedData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ea70; body size 190 bytes.
#line 1 "ENTRY_1013ea70"

void __thiscall Recovered_Bulk::FUN_1013ea70(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1cd0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0xc))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketCallbackSwigBase_receivedString");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013eb60; body size 75 bytes.
#line 1 "ENTRY_1013eb60"

void __thiscall Recovered_Bulk::FUN_1013eb60(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINetworkManagementDelegateSwigBase_refreshSSID");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ebc0; body size 174 bytes.
#line 1 "ENTRY_1013ebc0"

void __thiscall Recovered_Bulk::FUN_1013ebc0(undefined4 *param_2,undefined1 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1d20);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_registerDefaultBoolValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013eca0; body size 182 bytes.
#line 1 "ENTRY_1013eca0"

void __thiscall Recovered_Bulk::FUN_1013eca0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1d70);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_101a1ea0();
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x2c))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0();
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ed90; body size 172 bytes.
#line 1 "ENTRY_1013ed90"

void __thiscall Recovered_Bulk::FUN_1013ed90(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1dc0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x20))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_registerDefaultIntegerValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013ee70; body size 242 bytes.
#line 1 "ENTRY_1013ee70"

void __thiscall Recovered_Bulk::FUN_1013ee70(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e1e1b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x38))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_registerDefaultStringValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013efa0; body size 99 bytes.
#line 1 "ENTRY_1013efa0"

void __thiscall Recovered_Bulk::FUN_1013efa0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x24));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x24));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f020; body size 99 bytes.
#line 1 "ENTRY_1013f020"

void __thiscall Recovered_Bulk::FUN_1013f020(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x34));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x34));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f0a0; body size 99 bytes.
#line 1 "ENTRY_1013f0a0"

void __thiscall Recovered_Bulk::FUN_1013f0a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBlePeripheralDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f120; body size 99 bytes.
#line 1 "ENTRY_1013f120"

void __thiscall Recovered_Bulk::FUN_1013f120(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x14));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x14));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIChirpDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f1a0; body size 99 bytes.
#line 1 "ENTRY_1013f1a0"

void __thiscall Recovered_Bulk::FUN_1013f1a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x14));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x14));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMdnsDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f220; body size 99 bytes.
#line 1 "ENTRY_1013f220"

void __thiscall Recovered_Bulk::FUN_1013f220(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINfcDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f2a0; body size 99 bytes.
#line 1 "ENTRY_1013f2a0"

void __thiscall Recovered_Bulk::FUN_1013f2a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrbanAirshipDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f320; body size 98 bytes.
#line 1 "ENTRY_1013f320"

void __thiscall Recovered_Bulk::FUN_1013f320(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVoiceServiceDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f3a0; body size 99 bytes.
#line 1 "ENTRY_1013f3a0"

void __thiscall Recovered_Bulk::FUN_1013f3a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_registerListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f420; body size 116 bytes.
#line 1 "ENTRY_1013f420"

void __thiscall Recovered_Bulk::FUN_1013f420(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(int *)(param_1 + 0x10) != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    (**(code **)(param_1 + 0x10))(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUINotificationsDelegate_registerLocalNotification");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1013f4c0; body size 94 bytes.
#line 1 "ENTRY_1013f4c0"

void __thiscall Recovered_Bulk::FUN_1013f4c0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILocalMediaCollectionSwigBase_registerMediaCollectionListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10143df0; body size 169 bytes.
#line 1 "ENTRY_10143df0"

void __thiscall Recovered_Bulk::FUN_10143df0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3870);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x3c))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_remove");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10143ed0; body size 176 bytes.
#line 1 "ENTRY_10143ed0"

void __thiscall Recovered_Bulk::FUN_10143ed0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e38c0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecureStoreSwigBase_removeBlob");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10143fb0; body size 242 bytes.
#line 1 "ENTRY_10143fb0"

void __thiscall Recovered_Bulk::FUN_10143fb0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e391b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x1c))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppMessagingProviderSwigBase_removeTagFromGroup");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101440e0; body size 94 bytes.
#line 1 "ENTRY_101440e0"

void __thiscall Recovered_Bulk::FUN_101440e0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 8));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 8));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUINotificationsDelegate_requestNotificationsPermissions");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144160; body size 67 bytes.
#line 1 "ENTRY_10144160"

void __fastcall FUN_10144160(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_requestOSPairing");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101441c0; body size 169 bytes.
#line 1 "ENTRY_101441c0"

void __thiscall Recovered_Bulk::FUN_101441c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3970);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x1c))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_requestPairing");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101442a0; body size 78 bytes.
#line 1 "ENTRY_101442a0"

void __thiscall Recovered_Bulk::FUN_101442a0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_requestPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144310; body size 72 bytes.
#line 1 "ENTRY_10144310"

void __fastcall FUN_10144310(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVpnDelegate_requestVPN");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144370; body size 72 bytes.
#line 1 "ENTRY_10144370"

void __fastcall FUN_10144370(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVpnDelegateSwigBase_requestVPN");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101443d0; body size 72 bytes.
#line 1 "ENTRY_101443d0"

void __fastcall FUN_101443d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    (**(code **)(param_1 + 0x34))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_requireFineLocationPermission");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144430; body size 72 bytes.
#line 1 "ENTRY_10144430"

void __fastcall FUN_10144430(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x4c) != (code *)0x0) {
    (**(code **)(param_1 + 0x4c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_requireInputToChangeHoldStyle");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144490; body size 72 bytes.
#line 1 "ENTRY_10144490"

void __fastcall FUN_10144490(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    (**(code **)(param_1 + 0x68))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_resolveArtworkUrls");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101444f0; body size 186 bytes.
#line 1 "ENTRY_101444f0"

void __thiscall Recovered_Bulk::FUN_101444f0(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e39c8);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x4c) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x4c))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_saveFeaturesJson");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101445e0; body size 186 bytes.
#line 1 "ENTRY_101445e0"

void __thiscall Recovered_Bulk::FUN_101445e0(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e3a28);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x44) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x44))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_saveVariationsJson");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101446f0; body size 67 bytes.
#line 1 "ENTRY_101446f0"

void __fastcall FUN_101446f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_sendQueuedPackets");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144750; body size 67 bytes.
#line 1 "ENTRY_10144750"

void __fastcall FUN_10144750(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlConnectionSwigBase_serialNum");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101447b0; body size 94 bytes.
#line 1 "ENTRY_101447b0"

void __thiscall Recovered_Bulk::FUN_101447b0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlSessionCallbackSwigBase_sessionComplete");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144860; body size 73 bytes.
#line 1 "ENTRY_10144860"

void __thiscall Recovered_Bulk::FUN_10144860(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILoggingProviderSwigBase_setAppLevel");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101448c0; body size 249 bytes.
#line 1 "ENTRY_101448c0"

void __thiscall Recovered_Bulk::FUN_101448c0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3a8b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecureStoreSwigBase_setBlob");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144a00; body size 174 bytes.
#line 1 "ENTRY_10144a00"

void __thiscall Recovered_Bulk::FUN_10144a00(undefined4 *param_2,undefined1 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3ae0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_setBoolValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144ae0; body size 94 bytes.
#line 1 "ENTRY_10144ae0"

void __thiscall Recovered_Bulk::FUN_10144ae0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTClassicConnectionProviderSwigBase_setCallback");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144b60; body size 94 bytes.
#line 1 "ENTRY_10144b60"

void __thiscall Recovered_Bulk::FUN_10144b60(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketDelegateSwigBase_setCallback");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144be0; body size 186 bytes.
#line 1 "ENTRY_10144be0"

void __thiscall Recovered_Bulk::FUN_10144be0(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e3b38);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x28))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecurityContextSwigBase_setCertificateEnvironment");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144cd0; body size 169 bytes.
#line 1 "ENTRY_10144cd0"

void __thiscall Recovered_Bulk::FUN_10144cd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3b90);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIClipboardDelegateSwigBase_setClipboardData");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144db0; body size 186 bytes.
#line 1 "ENTRY_10144db0"

void __thiscall Recovered_Bulk::FUN_10144db0(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e3be8);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecurityContextSwigBase_setCustomerID");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144ea0; body size 182 bytes.
#line 1 "ENTRY_10144ea0"

void __thiscall Recovered_Bulk::FUN_10144ea0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3c40);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x28) != 0) {
    thunk_FUN_101a1ea0();
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x28))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0();
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144f90; body size 73 bytes.
#line 1 "ENTRY_10144f90"

void __thiscall Recovered_Bulk::FUN_10144f90(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCILoggingProviderSwigBase_setFlutterLevel");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10144ff0; body size 307 bytes.
#line 1 "ENTRY_10144ff0"

void __thiscall Recovered_Bulk::FUN_10144ff0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3ca6);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x34) != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)*param_4);
    }
    thunk_FUN_101a1ea0(puVar5);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar4 = (undefined4)(thunk_FUN_101a2160());
    (**(code **)(param_1 + 0x34))(uVar2,uVar3,uVar4);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIExperimentManagerProviderSwigBase_setForcedVariation");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101451a0; body size 186 bytes.
#line 1 "ENTRY_101451a0"

void __thiscall Recovered_Bulk::FUN_101451a0(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e3d08);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecurityContextSwigBase_setHHID");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145290; body size 172 bytes.
#line 1 "ENTRY_10145290"

void __thiscall Recovered_Bulk::FUN_10145290(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3d60);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x1c))(uVar2,param_3);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_setIntegerValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145370; body size 75 bytes.
#line 1 "ENTRY_10145370"

void __thiscall Recovered_Bulk::FUN_10145370(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBlePeripheralDelegateSwigBase_setRequireSecurePairing");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101453d0; body size 94 bytes.
#line 1 "ENTRY_101453d0"

void __thiscall Recovered_Bulk::FUN_101453d0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlConnectionSwigBase_setResponse");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145450; body size 73 bytes.
#line 1 "ENTRY_10145450"

void __thiscall Recovered_Bulk::FUN_10145450(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlConnectionSwigBase_setResult");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101454b0; body size 186 bytes.
#line 1 "ENTRY_101454b0"

void __thiscall Recovered_Bulk::FUN_101454b0(undefined1 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e3db8);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x20))(uVar2);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecurityContextSwigBase_setSerialNumber");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101455a0; body size 169 bytes.
#line 1 "ENTRY_101455a0"

void __thiscall Recovered_Bulk::FUN_101455a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3e10);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIStringInputSwigBase_setString");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145680; body size 242 bytes.
#line 1 "ENTRY_10145680"

void __thiscall Recovered_Bulk::FUN_10145680(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3e6b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x34) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x34))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISavedDataProviderSwigBase_setStringValue");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101457b0; body size 242 bytes.
#line 1 "ENTRY_101457b0"

void __thiscall Recovered_Bulk::FUN_101457b0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3ecb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_3);
    }
    thunk_FUN_101a1ea0(puVar4);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar3 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2,uVar3);
    thunk_FUN_101a2000();
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICrashReportProviderSwigBase_setTag");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101458e0; body size 74 bytes.
#line 1 "ENTRY_101458e0"

void __fastcall FUN_101458e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(&stack0x00000004);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_setTransferTestPacket");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145940; body size 75 bytes.
#line 1 "ENTRY_10145940"

void __fastcall FUN_10145940(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
    (**(code **)(param_1 + 0xa0))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_showExplicitBadge");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101459a0; body size 72 bytes.
#line 1 "ENTRY_101459a0"

void __fastcall FUN_101459a0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x74) != (code *)0x0) {
    (**(code **)(param_1 + 0x74))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_showProgressInfo");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145a00; body size 67 bytes.
#line 1 "ENTRY_10145a00"

void __fastcall FUN_10145a00(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145a60; body size 67 bytes.
#line 1 "ENTRY_10145a60"

void __fastcall FUN_10145a60(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145ac0; body size 67 bytes.
#line 1 "ENTRY_10145ac0"

void __fastcall FUN_10145ac0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145b20; body size 67 bytes.
#line 1 "ENTRY_10145b20"

void __fastcall FUN_10145b20(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBlePeripheralDelegateSwigBase_shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145b80; body size 67 bytes.
#line 1 "ENTRY_10145b80"

void __fastcall FUN_10145b80(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIChirpDelegateSwigBase_shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145be0; body size 67 bytes.
#line 1 "ENTRY_10145be0"

void __fastcall FUN_10145be0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppPurchaseManagerProviderSwigBase_shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145c40; body size 67 bytes.
#line 1 "ENTRY_10145c40"

void __fastcall FUN_10145c40(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINfcDelegateSwigBase_shutdown");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145cb0; body size 72 bytes.
#line 1 "ENTRY_10145cb0"

void __fastcall FUN_10145cb0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICustomSubWizardSwigBase_skipStateOnBacktracking");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145d10; body size 67 bytes.
#line 1 "ENTRY_10145d10"

void __fastcall FUN_10145d10(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_sonarBegin");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145d70; body size 67 bytes.
#line 1 "ENTRY_10145d70"

void __fastcall FUN_10145d70(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_sonarEnd");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145dd0; body size 169 bytes.
#line 1 "ENTRY_10145dd0"

void __thiscall Recovered_Bulk::FUN_10145dd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3f20);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIStackTraceCaptureDelegateSwigBase_stackTraceCaptured");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145eb0; body size 98 bytes.
#line 1 "ENTRY_10145eb0"

void __thiscall Recovered_Bulk::FUN_10145eb0(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIVoiceServiceDelegateSwigBase_startAuthentication");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145f30; body size 73 bytes.
#line 1 "ENTRY_10145f30"

void __thiscall Recovered_Bulk::FUN_10145f30(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIChirpDelegateSwigBase_startChirpReceiving");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145f90; body size 73 bytes.
#line 1 "ENTRY_10145f90"

void __thiscall Recovered_Bulk::FUN_10145f90(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICrashReportProviderSwigBase_startCrashReporter");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10145ff0; body size 72 bytes.
#line 1 "ENTRY_10145ff0"

void __fastcall FUN_10145ff0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_startDiscoveryScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146050; body size 98 bytes.
#line 1 "ENTRY_10146050"

void __thiscall Recovered_Bulk::FUN_10146050(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_startMotionData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101460d0; body size 67 bytes.
#line 1 "ENTRY_101460d0"

void __fastcall FUN_101460d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMdnsDelegateSwigBase_startPlayerDiscovery");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146130; body size 98 bytes.
#line 1 "ENTRY_10146130"

void __thiscall Recovered_Bulk::FUN_10146130(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x28));
  if (pcVar1 != (code *)0x0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x28));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_startRawMotionData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101461b0; body size 234 bytes.
#line 1 "ENTRY_101461b0"

void __thiscall Recovered_Bulk::FUN_101461b0(undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 *param_8)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_114e3f78);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(local_14);
    }
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (param_8 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(param_8);
    }
    thunk_FUN_101a1ea0(puVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar1 = (undefined4)(thunk_FUN_101a2160());
    (**(code **)(param_1 + 0x14))(param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
    thunk_FUN_101a2000();
    local_8 = (undefined4)(2);
    ((Stub_SCStr *)((SCStr *)&param_8))->int_release();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_startRecording");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101462e0; body size 67 bytes.
#line 1 "ENTRY_101462e0"

void __fastcall FUN_101462e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINfcDelegateSwigBase_startScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146340; body size 80 bytes.
#line 1 "ENTRY_10146340"

void __thiscall Recovered_Bulk::FUN_10146340(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_startScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101463b0; body size 94 bytes.
#line 1 "ENTRY_101463b0"

void __thiscall Recovered_Bulk::FUN_101463b0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrlSessionProviderSwigBase_startURLSession");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146430; body size 67 bytes.
#line 1 "ENTRY_10146430"

void __fastcall FUN_10146430(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIChirpDelegateSwigBase_stopChirpReceiving");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146490; body size 72 bytes.
#line 1 "ENTRY_10146490"

void __fastcall FUN_10146490(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_stopDiscoveryScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101464f0; body size 67 bytes.
#line 1 "ENTRY_101464f0"

void __fastcall FUN_101464f0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_stopMotionData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146550; body size 67 bytes.
#line 1 "ENTRY_10146550"

void __fastcall FUN_10146550(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMdnsDelegateSwigBase_stopPlayerDiscovery");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101465b0; body size 67 bytes.
#line 1 "ENTRY_101465b0"

void __fastcall FUN_101465b0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_stopRawMotionData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146610; body size 67 bytes.
#line 1 "ENTRY_10146610"

void __fastcall FUN_10146610(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCLibSonarCallback_stopRecording");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146670; body size 67 bytes.
#line 1 "ENTRY_10146670"

void __fastcall FUN_10146670(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINfcDelegateSwigBase_stopScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101466d0; body size 67 bytes.
#line 1 "ENTRY_101466d0"

void __fastcall FUN_101466d0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_stopScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10146770; body size 100 bytes.
#line 1 "ENTRY_10146770"

void __thiscall Recovered_Bulk::FUN_10146770(int *param_2,undefined1 param_3)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0xc));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0xc));
    }
    (*pcVar1)(param_2,param_3);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_subscribe");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101467f0; body size 78 bytes.
#line 1 "ENTRY_101467f0"

void __thiscall Recovered_Bulk::FUN_101467f0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    (**(code **)(param_1 + 0x24))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIAbilityDelegateSwigBase_suggestPrereq");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148a00; body size 169 bytes.
#line 1 "ENTRY_10148a00"

void __thiscall Recovered_Bulk::FUN_10148a00(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e3fd0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_tryConnect");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148ae0; body size 67 bytes.
#line 1 "ENTRY_10148ae0"

void __fastcall FUN_10148ae0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_tryDisconnect");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148b40; body size 73 bytes.
#line 1 "ENTRY_10148b40"

void __thiscall Recovered_Bulk::FUN_10148b40(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
    (**(code **)(param_1 + 0x2c))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_tryFlushTransferTestBurst");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148ba0; body size 169 bytes.
#line 1 "ENTRY_10148ba0"

void __thiscall Recovered_Bulk::FUN_10148ba0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4020);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x10))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBlePeripheralDelegateSwigBase_tryStartAdvertising");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148c80; body size 75 bytes.
#line 1 "ENTRY_10148c80"

void __thiscall Recovered_Bulk::FUN_10148c80(undefined1 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_tryStartScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148ce0; body size 67 bytes.
#line 1 "ENTRY_10148ce0"

void __fastcall FUN_10148ce0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBlePeripheralDelegateSwigBase_tryStopAdvertising");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148d40; body size 67 bytes.
#line 1 "ENTRY_10148d40"

void __fastcall FUN_10148d40(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_tryStopScan");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148da0; body size 99 bytes.
#line 1 "ENTRY_10148da0"

void __thiscall Recovered_Bulk::FUN_10148da0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x28));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x28));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBTAccessoryDelegateSwigBase_unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148e20; body size 99 bytes.
#line 1 "ENTRY_10148e20"

void __thiscall Recovered_Bulk::FUN_10148e20(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x38));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x38));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBleDelegateSwigBase_unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148ea0; body size 99 bytes.
#line 1 "ENTRY_10148ea0"

void __thiscall Recovered_Bulk::FUN_10148ea0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x24));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x24));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBlePeripheralDelegateSwigBase_unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148f20; body size 99 bytes.
#line 1 "ENTRY_10148f20"

void __thiscall Recovered_Bulk::FUN_10148f20(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIChirpDelegateSwigBase_unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10148fa0; body size 99 bytes.
#line 1 "ENTRY_10148fa0"

void __thiscall Recovered_Bulk::FUN_10148fa0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x18));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x18));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIMdnsDelegateSwigBase_unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149020; body size 99 bytes.
#line 1 "ENTRY_10149020"

void __thiscall Recovered_Bulk::FUN_10149020(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x1c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINfcDelegateSwigBase_unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101490a0; body size 99 bytes.
#line 1 "ENTRY_101490a0"

void __thiscall Recovered_Bulk::FUN_101490a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIUrbanAirshipDelegateSwigBase_unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149120; body size 99 bytes.
#line 1 "ENTRY_10149120"

void __thiscall Recovered_Bulk::FUN_10149120(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x20));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x20));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWifiDelegateSwigBase_unregisterListener");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101491a0; body size 94 bytes.
#line 1 "ENTRY_101491a0"

void __thiscall Recovered_Bulk::FUN_101491a0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIBrowseItemSwigBase_unsubscribe");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149220; body size 169 bytes.
#line 1 "ENTRY_10149220"

void __thiscall Recovered_Bulk::FUN_10149220(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4070);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0xc))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIGetAboutSonosStringCBSwigBase_updateGetAboutSonosString");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149300; body size 169 bytes.
#line 1 "ENTRY_10149300"

void __thiscall Recovered_Bulk::FUN_10149300(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e40c0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x14))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCINfcDelegateSwigBase_updateNfcCardMessage");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101493e0; body size 67 bytes.
#line 1 "ENTRY_101493e0"

void __fastcall FUN_101493e0(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIInAppMessagingProviderSwigBase_updateRegistration");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149440; body size 94 bytes.
#line 1 "ENTRY_10149440"

void __thiscall Recovered_Bulk::FUN_10149440(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x10));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x10));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCICrashReportProviderSwigBase_updateUser");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101495b0; body size 99 bytes.
#line 1 "ENTRY_101495b0"

void __thiscall Recovered_Bulk::FUN_101495b0(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x30));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x30));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecurityContextSwigBase_validateCertificateChain");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149630; body size 99 bytes.
#line 1 "ENTRY_10149630"

void __thiscall Recovered_Bulk::FUN_10149630(int *param_2)
{
  int param_1 = (int )this;
  code *pcVar1;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  pcVar1 = (code *)(*(code **)(param_1 + 0x2c));
  if (pcVar1 != (code *)0x0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))();
      pcVar1 = (code *)(*(code **)(param_1 + 0x2c));
    }
    (*pcVar1)(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCISecurityContextSwigBase_validateCertificateData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101496b0; body size 78 bytes.
#line 1 "ENTRY_101496b0"

void __thiscall Recovered_Bulk::FUN_101496b0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIHapticDelegateSwigBase_vibrate");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 10149740; body size 79 bytes.
#line 1 "ENTRY_10149740"

void __fastcall FUN_10149740(int param_1)

{
  undefined1 local_20 [28];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_20);
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(&stack0x00000004);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketDelegateSwigBase_writeData");
                    
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 101497b0; body size 169 bytes.
#line 1 "ENTRY_101497b0"

void __thiscall Recovered_Bulk::FUN_101497b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4170);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(uVar1);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    thunk_FUN_101a1ea0(puVar3);
    local_8 = (undefined4)(0);
    uVar2 = (undefined4)(thunk_FUN_101a2160(uVar1));
    (**(code **)(param_1 + 0x18))(uVar2);
    thunk_FUN_101a2000();
    ExceptionList = (void *)(local_10);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("(uint)&Ext_SCIWebsocketDelegateSwigBase_writeString");
                    
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1014cce0; body size 102 bytes.
#line 1 "ENTRY_1014cce0"

void __stdcall FUN_1014cce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  if (param_1 != 0) {
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
  }
  return;
}


// Reference entry 1014cf50; body size 316 bytes.
#line 1 "ENTRY_1014cf50"

undefined4
__stdcall FUN_1014cf50(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            ushort *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4390);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_20 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_20))->setFromUTF16(param_2);
  local_1c = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_3);
  local_18 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_18))->setFromUTF16(param_4);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_5);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_6);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))
                     (&param_3,&local_20,&local_1c,&local_18,&local_14,&param_2,param_7,param_8));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  local_8 = (undefined4)(4);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(0);
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014d210; body size 114 bytes.
#line 1 "ENTRY_1014d210"

undefined4 FUN_1014d210(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e43f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014d2b0; body size 114 bytes.
#line 1 "ENTRY_1014d2b0"

undefined4 FUN_1014d2b0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4420);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014d350; body size 114 bytes.
#line 1 "ENTRY_1014d350"

undefined4 FUN_1014d350(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4450);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014d4e0; body size 111 bytes.
#line 1 "ENTRY_1014d4e0"

undefined4 FUN_1014d4e0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e44b0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da5c0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014d5a0; body size 97 bytes.
#line 1 "ENTRY_1014d5a0"

void __stdcall FUN_1014d5a0(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e44e0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x24))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1014d690; body size 114 bytes.
#line 1 "ENTRY_1014d690"

undefined4 FUN_1014d690(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4510);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014dac0; body size 257 bytes.
#line 1 "ENTRY_1014dac0"

SCStr * __stdcall FUN_1014dac0(int *param_1)

{
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e45d0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_1c = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_addref();
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  local_18 = (undefined4)(0);
  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x24))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = 0;
  local_8 = (undefined4)(0xffffffff);
  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((Stub_SCStr *)(pSVar2))->SCStr((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  ExceptionList = (void *)(local_10);
  return (SCStr *)(pSVar2);
}


// Reference entry 1014de40; body size 211 bytes.
#line 1 "ENTRY_1014de40"

void __stdcall FUN_1014de40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                 undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                 undefined4 param_29)

{
  if (param_1 != 0) {
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
  }
  return;
}


// Reference entry 1014df80; body size 135 bytes.
#line 1 "ENTRY_1014df80"

undefined4 __stdcall FUN_1014df80(int *param_1,undefined4 param_2,ushort *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4660);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_3,param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e030; body size 176 bytes.
#line 1 "ENTRY_1014e030"

undefined4 __stdcall FUN_1014e030(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4690);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 100))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e120; body size 117 bytes.
#line 1 "ENTRY_1014e120"

undefined4 FUN_1014e120(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e46c0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e1c0; body size 117 bytes.
#line 1 "ENTRY_1014e1c0"

undefined4 FUN_1014e1c0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e46f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e260; body size 179 bytes.
#line 1 "ENTRY_1014e260"

undefined4 __stdcall FUN_1014e260(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4720);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x5c))(&param_3,&local_14,&param_2,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e350; body size 360 bytes.
#line 1 "ENTRY_1014e350"

undefined4
__stdcall FUN_1014e350(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4750);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_24 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_24))->setFromUTF16(param_2);
  local_20 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_20))->setFromUTF16(param_3);
  local_1c = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_4);
  local_18 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_18))->setFromUTF16(param_5);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_7);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_8);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x4c))
                     (&param_3,&local_24,&local_20,&local_1c,&local_18,param_6,&local_14,&param_2,
                      param_9));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  local_8 = (undefined4)(4);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(0);
  local_8 = (undefined4)(5);
  ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
  local_20 = (undefined4)(0);
  local_8 = (undefined4)(6);
  ((Stub_SCStr *)((SCStr *)&local_24))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e520; body size 132 bytes.
#line 1 "ENTRY_1014e520"

undefined4 __stdcall FUN_1014e520(int *param_1,ushort *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4780);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x7c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e5d0; body size 176 bytes.
#line 1 "ENTRY_1014e5d0"

undefined4 __stdcall FUN_1014e5d0(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e47b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x2c))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e6c0; body size 231 bytes.
#line 1 "ENTRY_1014e6c0"

undefined4
__stdcall FUN_1014e6c0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e47e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_18 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))
                     (&param_3,&local_18,&local_14,&param_2,param_5,param_6,param_7,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e7f0; body size 275 bytes.
#line 1 "ENTRY_1014e7f0"

undefined4
__stdcall FUN_1014e7f0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4810);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_1c = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_2);
  local_18 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_18))->setFromUTF16(param_3);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_4);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_5);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))
                     (&param_3,&local_1c,&local_18,&local_14,&param_2,param_6,param_7,param_8,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  local_8 = (undefined4)(4);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014e950; body size 289 bytes.
#line 1 "ENTRY_1014e950"

undefined4
__stdcall FUN_1014e950(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            ushort *param_10)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4840);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_1c = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_2);
  local_18 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_18))->setFromUTF16(param_3);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_4);
  param_3 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_3 + 1)) << 8 | (uint)(param_5 != 0)));
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_10);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))
                     (&param_4,&local_1c,&local_18,&local_14,param_3,param_6,param_7,param_8,param_9
                      ,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_4 != (ushort *)0x0) {
    (**(code **)(*(int *)param_4 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  local_8 = (undefined4)(4);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014eac0; body size 210 bytes.
#line 1 "ENTRY_1014eac0"

undefined4
__stdcall FUN_1014eac0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,ushort *param_7,int param_8,int param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4870);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_7);
  param_8 = (int)(((uint)(*(unsigned short *)((char *)&param_8 + 1)) << 8 | (uint)(param_8 != 0)));
  param_7 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_7 + 1)) << 8 | (uint)(param_9 != 0)));
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))
                     (&param_7,&local_14,param_3,param_4,param_5,param_6,&param_2,param_8,param_7,
                      uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_7 != (ushort *)0x0) {
    (**(code **)(*(int *)param_7 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014ebd0; body size 135 bytes.
#line 1 "ENTRY_1014ebd0"

undefined4 __stdcall FUN_1014ebd0(int *param_1,ushort *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e48a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x24))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014ec80; body size 225 bytes.
#line 1 "ENTRY_1014ec80"

undefined4
__stdcall FUN_1014ec80(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e48d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_18 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x48))(&param_3,&local_18,&local_14,&param_2,param_5,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014eda0; body size 179 bytes.
#line 1 "ENTRY_1014eda0"

undefined4 __stdcall FUN_1014eda0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4900);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x54))(&param_3,&local_14,&param_2,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014ee90; body size 179 bytes.
#line 1 "ENTRY_1014ee90"

undefined4 __stdcall FUN_1014ee90(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4930);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x60))(&param_3,&local_14,&param_2,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014ef80; body size 117 bytes.
#line 1 "ENTRY_1014ef80"

undefined4 FUN_1014ef80(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4960);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f020; body size 176 bytes.
#line 1 "ENTRY_1014f020"

undefined4 __stdcall FUN_1014f020(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4990);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x78))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f110; body size 135 bytes.
#line 1 "ENTRY_1014f110"

undefined4 __stdcall FUN_1014f110(int *param_1,ushort *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e49c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x80))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f1c0; body size 120 bytes.
#line 1 "ENTRY_1014f1c0"

undefined4 FUN_1014f1c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e49f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&param_1,param_2,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f260; body size 176 bytes.
#line 1 "ENTRY_1014f260"

undefined4 __stdcall FUN_1014f260(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4a20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x74))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f350; body size 117 bytes.
#line 1 "ENTRY_1014f350"

undefined4 FUN_1014f350(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4a50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x70))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f3f0; body size 120 bytes.
#line 1 "ENTRY_1014f3f0"

undefined4 FUN_1014f3f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4a80);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x6c))
                     (&param_1,param_2,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f490; body size 187 bytes.
#line 1 "ENTRY_1014f490"

undefined4 __stdcall FUN_1014f490(int *param_1,ushort *param_2,ushort *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4ab0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  param_3 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_3 + 1)) << 8 | (uint)(param_4 != 0)));
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))(&param_3,&local_14,&param_2,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f580; body size 117 bytes.
#line 1 "ENTRY_1014f580"

undefined4 FUN_1014f580(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4ae0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f620; body size 143 bytes.
#line 1 "ENTRY_1014f620"

undefined4 __stdcall FUN_1014f620(int *param_1,undefined4 param_2,ushort *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4b10);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((Stub_SCStr *)((SCStr *)&stack0xffffffe0))->SCStr((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_3,param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f6e0; body size 149 bytes.
#line 1 "ENTRY_1014f6e0"

undefined4
__stdcall FUN_1014f6e0(int *param_1,int param_2,ushort *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4b40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar4 = (bool)(param_2 != 0);
  param_2 = (int)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x68))(&param_3,bVar4,&param_2,param_4,param_5,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f7a0; body size 117 bytes.
#line 1 "ENTRY_1014f7a0"

undefined4 FUN_1014f7a0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4b70);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f8d0; body size 120 bytes.
#line 1 "ENTRY_1014f8d0"

undefined4 FUN_1014f8d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4ba0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&param_1,param_2,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014f980; body size 114 bytes.
#line 1 "ENTRY_1014f980"

undefined4 FUN_1014f980(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4bd0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014fa30; body size 117 bytes.
#line 1 "ENTRY_1014fa30"

undefined4 FUN_1014fa30(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4c00);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014fae0; body size 132 bytes.
#line 1 "ENTRY_1014fae0"

undefined4 __stdcall FUN_1014fae0(int *param_1,ushort *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4c30);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014fc20; body size 125 bytes.
#line 1 "ENTRY_1014fc20"

undefined4 FUN_1014fc20(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4c60);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_2,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014fce0; body size 117 bytes.
#line 1 "ENTRY_1014fce0"

undefined4 FUN_1014fce0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4c90);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014fd90; body size 132 bytes.
#line 1 "ENTRY_1014fd90"

undefined4 __stdcall FUN_1014fd90(int *param_1,ushort *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4cc0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014fe80; body size 135 bytes.
#line 1 "ENTRY_1014fe80"

undefined4 __stdcall FUN_1014fe80(int *param_1,ushort *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4cf0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 1014ffb0; body size 117 bytes.
#line 1 "ENTRY_1014ffb0"

undefined4 FUN_1014ffb0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4d20);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150050; body size 117 bytes.
#line 1 "ENTRY_10150050"

undefined4 FUN_10150050(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4d50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101500f0; body size 114 bytes.
#line 1 "ENTRY_101500f0"

undefined4 FUN_101500f0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4d80);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101501a0; body size 114 bytes.
#line 1 "ENTRY_101501a0"

undefined4 FUN_101501a0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4db0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150330; body size 117 bytes.
#line 1 "ENTRY_10150330"

undefined4 FUN_10150330(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4e10);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101503d0; body size 114 bytes.
#line 1 "ENTRY_101503d0"

undefined4 FUN_101503d0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4e40);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150470; body size 114 bytes.
#line 1 "ENTRY_10150470"

undefined4 FUN_10150470(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4e70);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x60))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150510; body size 117 bytes.
#line 1 "ENTRY_10150510"

undefined4 FUN_10150510(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4ea0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101505b0; body size 120 bytes.
#line 1 "ENTRY_101505b0"

undefined4 FUN_101505b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4ed0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x54))
                     (&param_1,param_2,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150690; body size 117 bytes.
#line 1 "ENTRY_10150690"

undefined4 FUN_10150690(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4f00);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101507c0; body size 114 bytes.
#line 1 "ENTRY_101507c0"

undefined4 FUN_101507c0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4f30);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150b50; body size 117 bytes.
#line 1 "ENTRY_10150b50"

undefined4 FUN_10150b50(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e4ff0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x94))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150bf0; body size 114 bytes.
#line 1 "ENTRY_10150bf0"

undefined4 FUN_10150bf0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5020);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150c90; body size 114 bytes.
#line 1 "ENTRY_10150c90"

undefined4 FUN_10150c90(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5050);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150d30; body size 114 bytes.
#line 1 "ENTRY_10150d30"

undefined4 FUN_10150d30(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5080);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10150ec0; body size 114 bytes.
#line 1 "ENTRY_10150ec0"

undefined4 FUN_10150ec0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e50e0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10151280; body size 114 bytes.
#line 1 "ENTRY_10151280"

undefined4 FUN_10151280(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e51a0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10151670; body size 114 bytes.
#line 1 "ENTRY_10151670"

undefined4 FUN_10151670(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5260);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10151790; body size 97 bytes.
#line 1 "ENTRY_10151790"

void __stdcall FUN_10151790(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5290);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x4c))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 101519e0; body size 144 bytes.
#line 1 "ENTRY_101519e0"

void __stdcall FUN_101519e0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e52c0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x14))(&local_14,&param_2,param_4,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10151ac0; body size 100 bytes.
#line 1 "ENTRY_10151ac0"

void __stdcall FUN_10151ac0(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e52f0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x80))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10151b50; body size 95 bytes.
#line 1 "ENTRY_10151b50"

void __stdcall FUN_10151b50(int *param_1)

{
  uint uVar1;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5320);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((Stub_SCStr *)(local_14))->int_allocRep("");
  (**(code **)(*param_1 + 0x80))(local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10151bd0; body size 108 bytes.
#line 1 "ENTRY_10151bd0"

void __stdcall FUN_10151bd0(int *param_1,int param_2,ushort *param_3)

{
  uint uVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5350);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar2 = (bool)(param_2 != 0);
  param_2 = (int)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x7c))(bVar2,&param_2,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10151c60; body size 103 bytes.
#line 1 "ENTRY_10151c60"

void __stdcall FUN_10151c60(int *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5380);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar2 = (bool)(param_2 != 0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("");
  (**(code **)(*param_1 + 0x7c))(bVar2,&param_2,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10151d10; body size 150 bytes.
#line 1 "ENTRY_10151d10"

undefined4 __stdcall FUN_10151d10(int *param_1,undefined4 param_2,ushort *param_3,ushort *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e53b0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_3 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_3))->setFromUTF16(param_4);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x28))(param_2,&local_14,&param_3,uVar1));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  param_3 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar2);
}


// Reference entry 10152180; body size 144 bytes.
#line 1 "ENTRY_10152180"

void __stdcall FUN_10152180(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5470);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x18))(&local_14,&param_2,param_4,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10152240; body size 97 bytes.
#line 1 "ENTRY_10152240"

void __stdcall FUN_10152240(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e54a0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x50))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 101522c0; body size 97 bytes.
#line 1 "ENTRY_101522c0"

void __stdcall FUN_101522c0(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e54d0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x68))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10152340; body size 97 bytes.
#line 1 "ENTRY_10152340"

void __stdcall FUN_10152340(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5500);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x70))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 101524a0; body size 100 bytes.
#line 1 "ENTRY_101524a0"

void __stdcall FUN_101524a0(int *param_1,undefined4 param_2,ushort *param_3)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5530);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x34))(param_2,&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10152530; body size 103 bytes.
#line 1 "ENTRY_10152530"

void __stdcall FUN_10152530(int *param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5560);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x30))(param_2,&local_14,param_4,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 101527d0; body size 120 bytes.
#line 1 "ENTRY_101527d0"

undefined1 __stdcall FUN_101527d0(int *param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e55c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,param_3,param_4 != 0,uVar2));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10152870; body size 111 bytes.
#line 1 "ENTRY_10152870"

undefined1 __stdcall FUN_10152870(int *param_1,ushort *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e55f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,param_3,0,uVar2));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10152bc0; body size 125 bytes.
#line 1 "ENTRY_10152bc0"

undefined4 FUN_10152bc0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5650);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_2,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10152c70; body size 116 bytes.
#line 1 "ENTRY_10152c70"

undefined4 FUN_10152c70(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5680);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10152d10; body size 114 bytes.
#line 1 "ENTRY_10152d10"

undefined4 FUN_10152d10(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e56b0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10152db0; body size 132 bytes.
#line 1 "ENTRY_10152db0"

undefined4 __stdcall FUN_10152db0(int *param_1,ushort *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e56e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x18))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10152e60; body size 153 bytes.
#line 1 "ENTRY_10152e60"

undefined1 __stdcall FUN_10152e60(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5710);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x28))(&local_14,&param_2,param_4,uVar2));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10152f30; body size 117 bytes.
#line 1 "ENTRY_10152f30"

undefined1 __stdcall FUN_10152f30(int *param_1,ushort *param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5740);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x24))(&local_14,param_3 != 0,uVar2));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10152fd0; body size 108 bytes.
#line 1 "ENTRY_10152fd0"

undefined1 __stdcall FUN_10152fd0(int *param_1,ushort *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5770);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x24))(&local_14,0,uVar2));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10153070; body size 114 bytes.
#line 1 "ENTRY_10153070"

undefined4 FUN_10153070(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e57a0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10153330; body size 105 bytes.
#line 1 "ENTRY_10153330"

void __stdcall FUN_10153330(int *param_1,ushort *param_2)

{
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5830);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((Stub_SCStr *)((SCStr *)&stack0xffffffe4))->SCStr((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x18))();
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 101533d0; body size 117 bytes.
#line 1 "ENTRY_101533d0"

undefined4 FUN_101533d0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5860);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101534a0; body size 117 bytes.
#line 1 "ENTRY_101534a0"

undefined4 FUN_101534a0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5890);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10153540; body size 114 bytes.
#line 1 "ENTRY_10153540"

undefined4 FUN_10153540(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e58c0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101535e0; body size 117 bytes.
#line 1 "ENTRY_101535e0"

undefined4 FUN_101535e0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e58f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10153680; body size 123 bytes.
#line 1 "ENTRY_10153680"

undefined4 FUN_10153680(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5920);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&param_1,param_2,param_3,param_4,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10153720; body size 123 bytes.
#line 1 "ENTRY_10153720"

undefined4 FUN_10153720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5950);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))
                     (&param_1,param_2,param_3,param_4,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101538c0; body size 143 bytes.
#line 1 "ENTRY_101538c0"

undefined4 __stdcall FUN_101538c0(int *param_1,ushort *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e59b0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  uStack_24 = (undefined4)(0x101538f6);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((Stub_SCStr *)((SCStr *)&uStack_24))->SCStr((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x14))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 101539f0; body size 257 bytes.
#line 1 "ENTRY_101539f0"

SCStr * __stdcall FUN_101539f0(int *param_1)

{
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e59e0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_1c = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_addref();
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  local_18 = (undefined4)(0);
  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x40))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = 0;
  local_8 = (undefined4)(0xffffffff);
  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((Stub_SCStr *)(pSVar2))->SCStr((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  ExceptionList = (void *)(local_10);
  return (SCStr *)(pSVar2);
}


// Reference entry 101541e0; body size 74 bytes.
#line 1 "ENTRY_101541e0"

void __stdcall FUN_101541e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
    *(undefined4 *)(param_1 + 0x2c) = param_10;
  }
  return;
}


// Reference entry 10154270; body size 114 bytes.
#line 1 "ENTRY_10154270"

undefined4 FUN_10154270(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5aa0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar1);
}


// Reference entry 10154310; body size 106 bytes.
#line 1 "ENTRY_10154310"

undefined1 __stdcall FUN_10154310(int *param_1,ushort *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5ad0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x18))(&local_14,uVar2));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 101543d0; body size 97 bytes.
#line 1 "ENTRY_101543d0"

void __stdcall FUN_101543d0(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5b00);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x24))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 101544d0; body size 100 bytes.
#line 1 "ENTRY_101544d0"

void __stdcall FUN_101544d0(int *param_1,ushort *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5b30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,param_3,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10154560; body size 152 bytes.
#line 1 "ENTRY_10154560"

void __stdcall FUN_10154560(int *param_1,ushort *param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5b60);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  param_3 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_3 + 1)) << 8 | (uint)(param_4 != 0)));
  (**(code **)(*param_1 + 0x1c))(&local_14,&param_2,param_3,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10154630; body size 144 bytes.
#line 1 "ENTRY_10154630"

void __stdcall FUN_10154630(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5b90);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x20))(&local_14,&param_2,param_4,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10154a20; body size 150 bytes.
#line 1 "ENTRY_10154a20"

undefined1 __stdcall FUN_10154a20(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5c20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((Stub_SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,&param_2,uVar2));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10154af0; body size 139 bytes.
#line 1 "ENTRY_10154af0"

undefined1 __stdcall FUN_10154af0(int *param_1,ushort *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5c50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep((char *)0x0);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,&param_2,uVar2));
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 101550e0; body size 257 bytes.
#line 1 "ENTRY_101550e0"

SCStr * __stdcall FUN_101550e0(int *param_1)

{
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5d40);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_1c = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_addref();
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_8 = (undefined4)(0xffffffff);
  local_18 = (undefined4)(0);
  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x18))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = 0;
  local_8 = (undefined4)(0xffffffff);
  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((Stub_SCStr *)(pSVar2))->SCStr((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  ExceptionList = (void *)(local_10);
  return (SCStr *)(pSVar2);
}


// Reference entry 10155360; body size 102 bytes.
#line 1 "ENTRY_10155360"

void __stdcall FUN_10155360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  if (param_1 != 0) {
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
  }
  return;
}


// Reference entry 101554f0; body size 97 bytes.
#line 1 "ENTRY_101554f0"

void __stdcall FUN_101554f0(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5da0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x1c))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 101557a0; body size 67 bytes.
#line 1 "ENTRY_101557a0"

void __stdcall FUN_101557a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = param_9;
  }
  return;
}


// Reference entry 101558b0; body size 97 bytes.
#line 1 "ENTRY_101558b0"

void __stdcall FUN_101558b0(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5e00);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x18))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 101559c0; body size 100 bytes.
#line 1 "ENTRY_101559c0"

void __stdcall FUN_101559c0(int *param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_114e5e30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0xc4))(&local_14,uVar1);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


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
extern int FUN_1006aac8(...);
extern int FUN_10091f7e(...);
extern int __allrem(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int _unlink(...);
extern __declspec(dllimport) int ceil(...);
extern int createPresentAlarmInterfaceAction(...);
extern int createPropertyBag(...);
extern int createSCDisplayMenuPopupAction(...);
extern int createSCNullAsyncOperation(...);
extern int createSCStringArray(...);
extern int failed(...);
extern __declspec(dllimport) int fclose(...);
extern int getCurrentThreadID(...);
extern int getMainThreadID(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int int_release(...);
extern __declspec(dllimport) int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011a340(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101a9bd0(...);
extern int thunk_FUN_101a9c10(...);
extern int thunk_FUN_101aa810(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101b6c00(...);
extern int thunk_FUN_101b8020(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101bbd90(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da240(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101dcfc0(...);
extern int thunk_FUN_101e0900(...);
extern int thunk_FUN_101f4930(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_101fb480(...);
extern int thunk_FUN_101fc140(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_102aab80(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_102be180(...);
extern int thunk_FUN_102cb990(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_102e2d60(...);
extern int thunk_FUN_102e4c30(...);
extern int thunk_FUN_102e9720(...);
extern int thunk_FUN_102ec850(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10314cc0(...);
extern int thunk_FUN_1031f140(...);
extern int thunk_FUN_103230a0(...);
extern int thunk_FUN_1033cdf0(...);
extern int thunk_FUN_10342c60(...);
extern int thunk_FUN_10342f40(...);
extern int thunk_FUN_10342f60(...);
extern int thunk_FUN_103434a0(...);
extern int thunk_FUN_1034cdd0(...);
extern int thunk_FUN_1034d8f0(...);
extern int thunk_FUN_1034e150(...);
extern int thunk_FUN_1034e440(...);
extern int thunk_FUN_1034e450(...);
extern int thunk_FUN_1034e4a0(...);
extern int thunk_FUN_10352990(...);
extern int thunk_FUN_10355870(...);
extern int thunk_FUN_1037b6f0(...);
extern int thunk_FUN_1037bed0(...);
extern int thunk_FUN_103cda00(...);
extern int thunk_FUN_103cdb40(...);
extern int thunk_FUN_103d5ff0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_10413900(...);
extern int thunk_FUN_10475400(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104deb40(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105b52c0(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_105ef430(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105feb30(...);
extern int thunk_FUN_10605020(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106e7280(...);
extern int thunk_FUN_1083e550(...);
extern int thunk_FUN_10973080(...);
extern int thunk_FUN_10974e10(...);
extern int thunk_FUN_10a7cf20(...);
extern int thunk_FUN_10a7d640(...);
extern int thunk_FUN_10ab3f60(...);
extern int thunk_FUN_10ab4440(...);
extern int thunk_FUN_10b09a30(...);
extern int thunk_FUN_10b148e0(...);
extern int thunk_FUN_10b1a4d0(...);
extern int thunk_FUN_10b32ec0(...);
extern int thunk_FUN_10b41ed0(...);
extern int thunk_FUN_10b50380(...);
extern int thunk_FUN_10b585d0(...);
extern int thunk_FUN_10b589f0(...);
extern int thunk_FUN_10b72a70(...);
extern int thunk_FUN_10b773f0(...);
extern int thunk_FUN_10b81ab0(...);
extern int thunk_FUN_10b870f0(...);
extern int thunk_FUN_10b88380(...);
extern int thunk_FUN_10b8e960(...);
extern int thunk_FUN_10b8f4a0(...);
extern int thunk_FUN_10b8f670(...);
extern int thunk_FUN_10b91100(...);
extern int thunk_FUN_10b91160(...);
extern int thunk_FUN_10b913e0(...);
extern int thunk_FUN_10b92d90(...);
extern int thunk_FUN_10b95ba0(...);
extern int thunk_FUN_10b95c20(...);
extern int thunk_FUN_10b95cf0(...);
extern int thunk_FUN_10b95f10(...);
extern int thunk_FUN_10b96760(...);
extern int thunk_FUN_10b97ee0(...);
extern int thunk_FUN_10b98980(...);
extern int thunk_FUN_10b98c90(...);
extern int thunk_FUN_10b98d60(...);
extern int thunk_FUN_10b9a480(...);
extern int thunk_FUN_10b9a5a0(...);
extern int thunk_FUN_10b9a9d0(...);
extern int thunk_FUN_10b9ab90(...);
extern int thunk_FUN_10b9e0c0(...);
extern int thunk_FUN_10ba31f0(...);
extern int thunk_FUN_10ba3340(...);
extern int thunk_FUN_10ba5d90(...);
extern int thunk_FUN_10ba6fd0(...);
extern int thunk_FUN_10ba98c0(...);
extern int thunk_FUN_10ba9b50(...);
extern int thunk_FUN_10baa360(...);
extern int thunk_FUN_10baa640(...);
extern int thunk_FUN_10baa760(...);
extern int thunk_FUN_10bac4a0(...);
extern int thunk_FUN_10bb4c10(...);
extern int thunk_FUN_10bb5620(...);
extern int thunk_FUN_10bba8f0(...);
extern int thunk_FUN_10bbe760(...);
extern int thunk_FUN_10bc1a20(...);
extern int thunk_FUN_10bc3d30(...);
extern int thunk_FUN_10bc4680(...);
extern int thunk_FUN_10bc7df0(...);
extern int thunk_FUN_10bc8860(...);
extern int thunk_FUN_10bc8b30(...);
extern int thunk_FUN_10bca220(...);
extern int thunk_FUN_10bcd900(...);
extern int thunk_FUN_10bcee70(...);
extern int thunk_FUN_10bceec0(...);
extern int thunk_FUN_10bcef80(...);
extern int thunk_FUN_10bcf040(...);
extern int thunk_FUN_10bcf100(...);
extern int thunk_FUN_10bcf160(...);
extern int thunk_FUN_10bcf230(...);
extern int thunk_FUN_10bcf300(...);
extern int thunk_FUN_10bcf3d0(...);
extern int thunk_FUN_10bcf420(...);
extern int thunk_FUN_10bcf4e0(...);
extern int thunk_FUN_10bcf810(...);
extern int thunk_FUN_10bd7130(...);
extern int thunk_FUN_10bd9ba0(...);
extern int thunk_FUN_10bda480(...);
extern int thunk_FUN_10bdb900(...);
extern int thunk_FUN_10bdc920(...);
extern int thunk_FUN_10bdcfa0(...);
extern int thunk_FUN_10bdcfb0(...);
extern int thunk_FUN_10bdcfd0(...);
extern int thunk_FUN_10bf11c0(...);
extern int thunk_FUN_10bf11e0(...);
extern int thunk_FUN_10c94600(...);
extern int thunk_FUN_10c96590(...);
extern int thunk_FUN_10c98c80(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf3780(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10da4c60(...);
extern int thunk_FUN_10dd0610(...);
extern int thunk_FUN_10deee60(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10defac0(...);
extern int thunk_FUN_10defb40(...);
extern int thunk_FUN_10df7cf0(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfd3a0(...);
extern int thunk_FUN_10dfda60(...);
extern int thunk_FUN_10eae0a0(...);
extern int thunk_FUN_10eae0f0(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eae150(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebb850(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebc060(...);
extern int thunk_FUN_10ebc110(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10f408f0(...);
extern int thunk_FUN_10f41d60(...);
extern int thunk_FUN_10f43e90(...);
extern int thunk_FUN_10f49ce0(...);
extern int thunk_FUN_10f56a40(...);
extern int thunk_FUN_10f777c0(...);
extern int thunk_FUN_10f7b130(...);
extern int thunk_FUN_10f7b5a0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_11081b20(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110a3340(...);
extern int thunk_FUN_110c4430(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_110d3140(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_110da760(...);
extern int thunk_FUN_110da7a0(...);
extern int thunk_FUN_110da8b0(...);
extern int thunk_FUN_110db210(...);
extern int thunk_FUN_110db280(...);
extern int thunk_FUN_110dbc10(...);
extern int thunk_FUN_11111570(...);
extern int thunk_FUN_11112450(...);
extern int thunk_FUN_11115a00(...);
extern int thunk_FUN_11119f10(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_1112c2a0(...);
extern int thunk_FUN_11138710(...);
extern int thunk_FUN_11138b60(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a5820(...);
extern int thunk_FUN_111a5a30(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_1124a3e0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11250160(...);
extern int thunk_FUN_112501c0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_1125cbd0(...);
extern int thunk_FUN_1125ce60(...);
extern int thunk_FUN_1125cf40(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11262300(...);
extern int thunk_FUN_11262320(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145aba0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145cb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int utf8_find(...);
extern int utf8_substr(...);
extern int DAT_0000449c;
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_118876d0;
extern int DAT_118d39d4;
extern int DAT_11906480;
extern int DAT_11907e20;
extern int DAT_11910258;
extern int DAT_12119ca8;
extern int DAT_12126b84;
extern int DAT_121a4ca4;
extern int DAT_121a4d64;
extern int DAT_121a4d78;
extern int DAT_122e8a30;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAsyncAAGetIOOp;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDeviceDeleteAIOOp;
extern int ghidra_vftable_RDeviceDeleteRequest;
extern int ghidra_vftable_RDeviceGetAIOOp;
extern int ghidra_vftable_RDeviceOpRequest;
extern int ghidra_vftable_RDevicePostAIOOp;
extern int ghidra_vftable_RDevicePostRequest;
extern int ghidra_vftable_RDevicePutAIOOp;
extern int ghidra_vftable_RDevicePutRequest;
extern int ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPutNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
extern int ghidra_vftable_RUpnpDPExitConfigModeAIOOp;
extern int ghidra_vftable_RUpnpSPEditAccountPasswordXAIOOp;
extern int ghidra_vftable_RUpnpSPRemoveAccountAIOOp;
extern int ghidra_vftable_RUpnpSPReplaceAccountXAIOOp;
extern int ghidra_vftable_SCAlarmDeleteActionDescriptor;
extern int ghidra_vftable_SCArtworkCache;
extern int ghidra_vftable_SCArtworkCacheManager;
extern int ghidra_vftable_SCBTClassicConnectionCallback;
extern int ghidra_vftable_SCBTClassicConnectionManager;
extern int ghidra_vftable_SCBrowseService;
extern int ghidra_vftable_SCChirpManager;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCDiscoveryHistoryStore;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCEventSinkDelegate;
extern int ghidra_vftable_SCEventSubscriptionImpl;
extern int ghidra_vftable_SCExampleDownloadOp;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCLegacyJoinExistingWizard;
extern int ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardCompleteState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardConnectingState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardIntroState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardSetupNotAllowedState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardSuccessState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardTimeoutState;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCLogoArtworkCache;
extern int ghidra_vftable_SCNetworkManagement;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpReplaceAccountX;
extern int ghidra_vftable_SCOperationsFakeOpPage;
extern int ghidra_vftable_SCOperationsFaultyOpPage;
extern int ghidra_vftable_SCOperationsInstantExitPage;
extern int ghidra_vftable_SCOperationsIntroPage;
extern int ghidra_vftable_SCOperationsWhackAMolePage;
extern int ghidra_vftable_SCOperationsWizard;
extern int ghidra_vftable_SCRiveDemoAnimationTransitionFirstPage;
extern int ghidra_vftable_SCRiveDemoAnimationTransitionSecondPage;
extern int ghidra_vftable_SCRiveDemoBasicAnimationDurationSetPage;
extern int ghidra_vftable_SCRiveDemoBasicAnimationPage;
extern int ghidra_vftable_SCRiveDemoCanvasOnlyLayoutPage;
extern int ghidra_vftable_SCRiveDemoSelectionPage;
extern int ghidra_vftable_SCRiveDemoStateMachineBoolPage;
extern int ghidra_vftable_SCRiveDemoStateMachineNumberPage;
extern int ghidra_vftable_SCRiveDemoStateMachineTransitionFirstPage;
extern int ghidra_vftable_SCRiveDemoStateMachineTransitionSecondPage;
extern int ghidra_vftable_SCRiveDemoStateMachineTriggerPage;
extern int ghidra_vftable_SCRiveDemoWizard;
extern int ghidra_vftable_SCScrobblingService;
extern int ghidra_vftable_SCServiceAccount;
extern int ghidra_vftable_SCServiceAppInteropActionDescriptor;
extern int ghidra_vftable_SCSettingsReplicator;
extern int ghidra_vftable_SCSettingsReplicatorAutoplayRoom;
extern int ghidra_vftable_SCSettingsReplicatorAutoplayVolume;
extern int ghidra_vftable_SCSettingsReplicatorIRRepeater;
extern int ghidra_vftable_SCSettingsReplicatorIRSignalLight;
extern int ghidra_vftable_SCSettingsReplicatorIncludeGroupedRooms;
extern int ghidra_vftable_SCSettingsReplicatorSourceLevel;
extern int ghidra_vftable_SCSettingsReplicatorSourceName;
extern int ghidra_vftable_SCSettingsReplicatorStatusLight;
extern int ghidra_vftable_SCSettingsReplicatorTVAutoplay;
extern int ghidra_vftable_SCSettingsReplicatorTouchControls;
extern int ghidra_vftable_SCSettingsReplicatorTrueplayEnabled;
extern int ghidra_vftable_SCSettingsReplicatorUngroupOnAutoplay;
extern int ghidra_vftable_SCSettingsReplicatorUseAutoplayVolume;
extern int ghidra_vftable_SCSimpleMessagingService;
extern int ghidra_vftable_SCSlideshowDonePage;
extern int ghidra_vftable_SCSlideshowIntroPage;
extern int ghidra_vftable_SCSlideshowProductPage;
extern int ghidra_vftable_SCSlideshowWizard;
extern int ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsFailurePage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithoutSurroundsPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedOutdoorPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedPrimaryTrueplayPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayWithPrimaryFailurePage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage;
extern int ghidra_vftable_SCSonanceDetectionWizardErrorPage;
extern int ghidra_vftable_SCSonanceDetectionWizardIntroPage;
extern int ghidra_vftable_SCSpeedyFastTransitionPage;
extern int ghidra_vftable_SCSpeedyFasterTransitionPage;
extern int ghidra_vftable_SCSpeedyFastestTransitionPage;
extern int ghidra_vftable_SCSpeedyIntroPage;
extern int ghidra_vftable_SCSpeedyQueuedTransitionsFirstPage;
extern int ghidra_vftable_SCSpeedyQueuedTransitionsFourthPage;
extern int ghidra_vftable_SCSpeedyQueuedTransitionsSecondPage;
extern int ghidra_vftable_SCSpeedyQueuedTransitionsThirdPage;
extern int ghidra_vftable_SCSpeedyWizard;
extern int ghidra_vftable_SCStringArray;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSuperBasicOmitSubwiz;
extern int ghidra_vftable_SCSuperBasicSubwiz;
extern int ghidra_vftable_SCSuperGhostSubwiz;
extern int ghidra_vftable_SCSuperIntroPage;
extern int ghidra_vftable_SCSuperOutroPage;
extern int ghidra_vftable_SCSuperTransparentSubwiz;
extern int ghidra_vftable_SCSuperWizard;
extern int ghidra_vftable_SCSwfObjDDListener;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCSwfObjMSDiscoveryInternalListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCTimingIntroPage;
extern int ghidra_vftable_SCTimingSpinnerPage;
extern int ghidra_vftable_SCTimingStopwatchPage;
extern int ghidra_vftable_SCTimingWizard;
extern int ghidra_vftable_SCToggleScrobbleDescriptor;
extern int ghidra_vftable_SCTransparentBasicSubwiz;
extern int ghidra_vftable_SCTransparentWizard;
extern int ghidra_vftable_SCVideoDemoSelectionPage;
extern int ghidra_vftable_SCVideoDemoStaggeringTestAPage;
extern int ghidra_vftable_SCVideoDemoStaggeringTestBPage;
extern int ghidra_vftable_SCVideoDemoStaggeringTestCPage;
extern int ghidra_vftable_SCVideoDemoTest1APage;
extern int ghidra_vftable_SCVideoDemoTest1BPage;
extern int ghidra_vftable_SCVideoDemoTest1CPage;
extern int ghidra_vftable_SCVideoDemoTest1DPage;
extern int ghidra_vftable_SCVideoDemoTest2APage;
extern int ghidra_vftable_SCVideoDemoTest2BPage;
extern int ghidra_vftable_SCVideoDemoTest2CPage;
extern int ghidra_vftable_SCVideoDemoTest3APage;
extern int ghidra_vftable_SCVideoDemoTest3BPage;
extern int ghidra_vftable_SCVideoDemoTimingsTestProductSelectionPage;
extern int ghidra_vftable_SCVideoDemoTimingsTestVideoSequencePage;
extern int ghidra_vftable_SCVideoDemoWizard;
extern int ghidra_vftable_SCWeaklyOwnedObjectManager;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWrappedCBOp;
extern int ghidra_vftable_SCZoneGroup;
extern int ghidra_vftable_SwfWrappedHelper;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_stack_0000002c;
extern int in_stack_00000038;
extern undefined1 LAB_10b36cd0[];
extern undefined1 LAB_10b41bdf[];
extern undefined1 LAB_10b41d8e[];
extern undefined1 LAB_10b537cf[];
extern undefined1 LAB_10b5397f[];
extern undefined1 LAB_10b53b2f[];
extern undefined1 LAB_10b53cdf[];
extern undefined1 LAB_10b53e8f[];
extern undefined1 LAB_10b7c9af[];
extern undefined1 LAB_10b7ed26[];
extern undefined1 LAB_10b8022f[];
extern undefined1 LAB_10b8e396[];
extern undefined1 LAB_10b8e39c[];
extern undefined1 LAB_10bb3b74[];
extern undefined1 LAB_10bbdd16[];
extern undefined1 LAB_10bbdd1c[];
extern undefined1 LAB_10bc212a[];
extern undefined1 LAB_10bc2248[];
extern undefined1 LAB_10bc3ad6[];
extern undefined1 LAB_10bc3adc[];
extern undefined1 LAB_10bc77de[];
extern undefined1 LAB_10bc7cad[];
extern undefined1 LAB_10bc99a6[];
extern undefined1 LAB_10bc99ac[];
extern undefined1 LAB_10bc9de0[];
extern undefined1 LAB_10bce106[];
extern undefined1 LAB_10bce10c[];
extern undefined1 LAB_10bce2b6[];
extern undefined1 LAB_10bce2bc[];
extern undefined1 LAB_10bce8bf[];
extern undefined1 LAB_10bce8c5[];
extern undefined1 LAB_116a9420[];
extern undefined1 LAB_116a9cdd[];
extern undefined1 LAB_116a9d35[];
extern undefined1 LAB_116a9d95[];
extern undefined1 LAB_116a9e4d[];
extern undefined1 LAB_116aa0fd[];
extern undefined1 LAB_116aa18d[];
extern undefined1 LAB_116aa3da[];
extern undefined1 LAB_116aa7cb[];
extern undefined1 LAB_116aa800[];
extern undefined1 LAB_116aa830[];
extern undefined1 LAB_116aa860[];
extern undefined1 LAB_116aa890[];
extern undefined1 LAB_116aa8c0[];
extern undefined1 LAB_116aa997[];
extern undefined1 LAB_116aa9e7[];
extern undefined1 LAB_116aaa37[];
extern undefined1 LAB_116aaa87[];
extern undefined1 LAB_116aaad7[];
extern undefined1 LAB_116aab40[];
extern undefined1 LAB_116ab835[];
extern undefined1 LAB_116ac5a7[];
extern undefined1 LAB_116ac5f7[];
extern undefined1 LAB_116ac647[];
extern undefined1 LAB_116ac697[];
extern undefined1 LAB_116ac6e7[];
extern undefined1 LAB_116ac737[];
extern undefined1 LAB_116ac787[];
extern undefined1 LAB_116ac7d7[];
extern undefined1 LAB_116ac827[];
extern undefined1 LAB_116ac877[];
extern undefined1 LAB_116ac8c7[];
extern undefined1 LAB_116acc40[];
extern undefined1 LAB_116ae167[];
extern undefined1 LAB_116ae1b7[];
extern undefined1 LAB_116ae207[];
extern undefined1 LAB_116ae270[];
extern undefined1 LAB_116aec00[];
extern undefined1 LAB_116aeca0[];
extern undefined1 LAB_116af5d0[];
extern undefined1 LAB_116af600[];
extern undefined1 LAB_116af660[];
extern undefined1 LAB_116af6c0[];
extern undefined1 LAB_116afa76[];
extern undefined1 LAB_116afad4[];
extern undefined1 LAB_116afb52[];
extern undefined1 LAB_116afba7[];
extern undefined1 LAB_116afbf7[];
extern undefined1 LAB_116afc47[];
extern undefined1 LAB_116afc97[];
extern undefined1 LAB_116afce7[];
extern undefined1 LAB_116afd37[];
extern undefined1 LAB_116afd87[];
extern undefined1 LAB_116afdd7[];
extern undefined1 LAB_116afe27[];
extern undefined1 LAB_116afe77[];
extern undefined1 LAB_116afec7[];
extern undefined1 LAB_116aff24[];
extern undefined1 LAB_116aff90[];
extern undefined1 LAB_116b1245[];
extern undefined1 LAB_116b1285[];
extern undefined1 LAB_116b24bd[];
extern undefined1 LAB_116b24fd[];
extern undefined1 LAB_116b2ea7[];
extern undefined1 LAB_116b2ef7[];
extern undefined1 LAB_116b2f47[];
extern undefined1 LAB_116b2f97[];
extern undefined1 LAB_116b2fe7[];
extern undefined1 LAB_116b3037[];
extern undefined1 LAB_116b3087[];
extern undefined1 LAB_116b30d7[];
extern undefined1 LAB_116b3140[];
extern undefined1 LAB_116b3a1d[];
extern undefined1 LAB_116b3aad[];
extern undefined1 LAB_116b3aed[];
extern undefined1 LAB_116b3d90[];
extern undefined1 LAB_116b3df0[];
extern undefined1 LAB_116b3e50[];
extern undefined1 LAB_116b3f70[];
extern undefined1 LAB_116b40f0[];
extern undefined1 LAB_116b4427[];
extern undefined1 LAB_116b4477[];
extern undefined1 LAB_116b44f2[];
extern undefined1 LAB_116b4547[];
extern undefined1 LAB_116b4597[];
extern undefined1 LAB_116b4612[];
extern undefined1 LAB_116b4680[];
extern undefined1 LAB_116b4885[];
extern undefined1 LAB_116b48c5[];
extern undefined1 LAB_116b4905[];
extern undefined1 LAB_116b4945[];
extern undefined1 LAB_116b4985[];
extern undefined1 LAB_116b4f87[];
extern undefined1 LAB_116b4fd7[];
extern undefined1 LAB_116b5027[];
extern undefined1 LAB_116b5090[];
extern undefined1 LAB_116b559d[];
extern undefined1 LAB_116b56a0[];
extern undefined1 LAB_116b5700[];
extern undefined1 LAB_116b5892[];
extern undefined1 LAB_116b5900[];
extern undefined1 LAB_116b7377[];
extern undefined1 LAB_116b73c7[];
extern undefined1 LAB_116b7417[];
extern undefined1 LAB_116b7467[];
extern undefined1 LAB_116b74b7[];
extern undefined1 LAB_116b7507[];
extern undefined1 LAB_116b7557[];
extern undefined1 LAB_116b75a7[];
extern undefined1 LAB_116b75f7[];
extern undefined1 LAB_116b7647[];
extern undefined1 LAB_116b7697[];
extern undefined1 LAB_116b76e7[];
extern undefined1 LAB_116b7737[];
extern undefined1 LAB_116b7787[];
extern undefined1 LAB_116b77d7[];
extern undefined1 LAB_116b7840[];
extern undefined1 LAB_116b916d[];
extern undefined1 LAB_116b91ad[];
extern undefined1 LAB_116b947d[];
extern undefined1 LAB_116b94bd[];
extern undefined1 LAB_116b9680[];
extern undefined1 LAB_116b96b0[];
extern undefined1 LAB_116b96e0[];
extern undefined1 LAB_116b9710[];
extern undefined1 LAB_116b97a0[];
extern undefined1 LAB_116b97d0[];
extern undefined1 LAB_116b9ac4[];
extern undefined1 LAB_116b9b04[];
extern undefined1 LAB_116b9e5d[];
extern undefined1 LAB_116ba01d[];
extern undefined1 LAB_116ba050[];
extern undefined1 LAB_116ba095[];
extern undefined1 LAB_116ba2fd[];
extern undefined1 LAB_116ba345[];
extern undefined1 LAB_116ba38c[];
extern undefined1 LAB_116ba3cd[];
extern undefined1 LAB_116ba41c[];
extern undefined1 LAB_116ba465[];
extern undefined1 LAB_116ba5ad[];
extern undefined1 LAB_116ba66d[];
extern undefined1 LAB_116ba7bd[];
extern undefined1 LAB_116baf1d[];
extern undefined1 LAB_116baf5d[];
extern undefined1 LAB_116bb4ee[];
extern undefined1 LAB_116bbadd[];
extern undefined1 LAB_116bbf6d[];
extern undefined1 LAB_116bc01d[];
extern undefined1 LAB_116bc0d0[];
extern undefined1 LAB_116bc100[];
extern undefined1 LAB_116bc1bd[];
extern undefined1 LAB_116bc21b[];
extern undefined1 LAB_116bc2db[];
extern undefined1 LAB_116bc389[];
extern undefined1 LAB_116bc430[];
extern undefined1 LAB_116bc460[];
extern undefined1 LAB_116bc490[];
extern undefined1 LAB_116bc4c0[];
extern undefined1 LAB_116bc4f0[];
extern undefined1 LAB_116bc520[];
extern undefined1 LAB_116bc550[];
extern undefined1 LAB_116bc580[];
extern undefined1 LAB_116bc5b0[];
extern undefined1 LAB_116bc6d0[];
extern undefined1 LAB_116bc700[];
extern undefined1 LAB_116bc790[];
extern undefined1 LAB_116bc7c0[];
extern undefined1 LAB_116bca45[];
extern undefined1 LAB_116bcb6e[];
extern undefined1 LAB_116bce8e[];
extern undefined1 LAB_116bd5fd[];
extern undefined1 LAB_116bd63d[];
extern undefined1 LAB_116bd67d[];
extern undefined1 LAB_116bd6bd[];
extern undefined1 LAB_116bd6fd[];
extern undefined1 LAB_116bdbcd[];
extern undefined1 LAB_116bdc0d[];
extern undefined1 LAB_116bdc4d[];
extern undefined1 LAB_116bdc8d[];
extern undefined1 LAB_116bdceb[];
extern undefined1 LAB_116bdd4b[];
extern undefined1 LAB_116bddab[];
extern undefined1 LAB_116bde0b[];
extern undefined1 LAB_116be8c0[];
extern undefined1 LAB_116be8f0[];
extern undefined1 LAB_116be920[];
extern undefined1 LAB_116be950[];
extern undefined1 LAB_116be980[];
extern undefined1 LAB_116be9e0[];
extern undefined1 LAB_116bea10[];
extern undefined1 LAB_116bea40[];
extern undefined1 LAB_116bea70[];
extern undefined1 LAB_116beaa0[];
extern undefined1 LAB_116bed5d[];
extern undefined1 LAB_116bf1dd[];
extern undefined1 LAB_116bf51d[];
extern undefined1 LAB_116bf55d[];
extern undefined1 LAB_116bf59d[];
extern undefined1 LAB_116bf5dd[];
extern undefined1 LAB_116bf61d[];
extern undefined1 LAB_116bf65d[];
extern undefined1 LAB_116bf69d[];
extern undefined1 LAB_116bf6dd[];
extern undefined1 LAB_116bfa3d[];
extern undefined1 LAB_116bfb1d[];
extern undefined1 LAB_116bfb5d[];
extern undefined1 LAB_116bfb9d[];
extern undefined1 LAB_116bfbdd[];
extern undefined1 LAB_116bfc1d[];
extern undefined1 LAB_116bfc5d[];
extern undefined1 LAB_116bfc9d[];
extern undefined1 LAB_116bfcdd[];
extern undefined1 LAB_116bfd1d[];
extern undefined1 LAB_116bfd5d[];
extern undefined1 LAB_116bfd9d[];
extern undefined1 LAB_116bfddd[];
extern undefined1 LAB_116bfe1d[];
extern undefined1 LAB_116bfe50[];
extern undefined1 LAB_116bfe80[];
extern undefined1 LAB_116bfeb0[];
extern undefined1 LAB_116bfee0[];
extern undefined1 LAB_116bff10[];
extern undefined1 LAB_116bff40[];
extern undefined1 LAB_116bff70[];
extern undefined1 LAB_116bffa0[];
extern undefined1 LAB_116bffd0[];
extern undefined1 LAB_116c0000[];
extern undefined1 LAB_116c0030[];
extern undefined1 LAB_116c0060[];
extern undefined1 LAB_116c0090[];
extern undefined1 LAB_116c0150[];
extern undefined1 LAB_116c0180[];
extern undefined1 LAB_116c01b0[];
extern undefined1 LAB_116c0210[];
extern undefined1 LAB_116c0240[];
extern undefined1 LAB_116c0270[];
extern undefined1 LAB_116c02a0[];
extern undefined1 LAB_116c02d0[];
extern undefined1 LAB_116c0300[];
extern undefined1 LAB_116c0330[];
extern undefined1 LAB_116c0360[];
extern undefined1 LAB_116c0390[];
extern undefined1 LAB_116c03c0[];
extern undefined1 LAB_116c03f0[];
extern undefined1 LAB_116c0420[];
extern undefined1 LAB_116c0450[];
extern undefined1 LAB_116c0480[];
extern undefined1 LAB_116c04b0[];
extern undefined1 LAB_116c04e0[];
extern undefined1 LAB_116c0510[];
extern undefined1 LAB_116c0540[];
extern undefined1 LAB_116c0570[];
extern undefined1 LAB_116c05a0[];
extern undefined1 LAB_116c05d0[];
extern undefined1 LAB_116c0600[];
extern undefined1 LAB_116c0630[];
extern undefined1 LAB_116c0660[];
extern undefined1 LAB_116c0690[];
extern undefined1 LAB_116c0e94[];
extern undefined1 LAB_116c0f50[];
extern undefined1 LAB_116c0f80[];
extern undefined1 LAB_116c1030[];
extern undefined1 LAB_116c107b[];
extern undefined1 LAB_116c111b[];
extern undefined1 LAB_116c11ad[];
extern undefined1 LAB_116c11fb[];
extern undefined1 LAB_116c14e8[];
extern undefined1 LAB_116c15e0[];
extern undefined1 LAB_116c1610[];
extern undefined1 LAB_116c1640[];
extern undefined1 LAB_116c1670[];
extern undefined1 LAB_116c16a0[];
extern undefined1 LAB_116c16d0[];
extern undefined1 LAB_116c1700[];
extern undefined1 LAB_116c1730[];
extern undefined1 LAB_116c1760[];
extern undefined1 LAB_116c17c0[];
extern undefined1 LAB_116c17f0[];
extern undefined1 LAB_116c1820[];
extern undefined1 LAB_116c1850[];
extern undefined1 LAB_116c1880[];
extern undefined1 LAB_116c1950[];
extern undefined1 LAB_116c1980[];
extern undefined1 LAB_116c1a50[];
extern undefined1 LAB_116c1b3d[];
extern undefined1 LAB_116c1b70[];
extern undefined1 LAB_116c1d54[];
extern undefined1 LAB_116c1e9a[];
extern undefined1 LAB_116c24c0[];
extern undefined1 LAB_116c25bd[];
extern undefined1 LAB_116c2685[];
extern undefined1 LAB_116c26d6[];
extern undefined1 LAB_116c271d[];
extern undefined1 LAB_116c27c5[];
extern undefined1 LAB_116c27fd[];
extern undefined1 LAB_116c283d[];
extern undefined1 LAB_116c287d[];
extern undefined1 LAB_116c28bd[];
extern undefined1 LAB_116c291e[];
extern undefined1 LAB_116c2976[];
extern undefined1 LAB_116c2c7d[];
extern undefined1 LAB_116c2cbd[];
extern undefined1 LAB_116c2d05[];
extern undefined1 LAB_116c2d56[];
extern undefined1 LAB_116c2db6[];
extern undefined1 LAB_116c2e05[];
extern undefined1 LAB_116c2fd0[];
extern undefined1 LAB_116c3000[];
extern undefined1 LAB_116c3030[];
extern undefined1 LAB_116c3060[];
extern undefined1 LAB_116c3090[];
extern undefined1 LAB_116c30c0[];
extern undefined1 LAB_116c3120[];
extern undefined1 LAB_116c31b0[];
extern undefined1 LAB_116c3240[];
extern undefined1 LAB_116c3270[];
extern undefined1 LAB_116c32ad[];
extern undefined1 LAB_116c32ed[];
extern undefined1 LAB_116c3320[];
extern undefined1 LAB_116c3350[];
extern undefined1 LAB_116c3635[];
extern undefined1 LAB_116c36ee[];
extern undefined1 LAB_116c372d[];
extern undefined1 LAB_116c376d[];
extern undefined1 LAB_116c37cf[];
extern undefined1 LAB_116c384c[];
extern undefined1 LAB_116c3ab4[];
extern undefined1 LAB_116c3be4[];
extern undefined1 LAB_116c4155[];
extern undefined1 LAB_116c4225[];
extern undefined1 LAB_116c48d0[];
extern undefined1 LAB_116c4d4d[];
extern undefined1 LAB_116c5070[];
extern undefined1 LAB_116c50a0[];
extern undefined1 LAB_116c51b0[];
extern undefined1 LAB_116c51e0[];
extern undefined1 LAB_116c54bd[];
extern undefined1 LAB_116c5557[];
extern undefined1 LAB_116c55a7[];
extern undefined1 LAB_116c5df4[];
extern undefined1 LAB_116c5e4d[];
extern undefined1 LAB_116c5e9d[];
extern undefined1 LAB_116c5f30[];
extern undefined1 LAB_116c5f75[];
extern undefined1 LAB_116c5fb5[];
extern undefined1 LAB_116c600c[];
extern undefined1 LAB_116c6740[];
extern undefined1 LAB_116c6770[];
extern undefined1 LAB_116c67a0[];
extern undefined1 LAB_116c67d0[];
extern undefined1 LAB_116c6800[];
extern undefined1 LAB_116c6990[];
extern undefined1 LAB_116c6f80[];
extern undefined1 LAB_116c6fb0[];
extern undefined1 LAB_116c7080[];
extern undefined1 LAB_116c70b0[];
extern undefined1 LAB_116c73c0[];
extern undefined1 LAB_116c74a5[];
extern undefined1 LAB_116c753d[];
extern undefined1 LAB_116c7699[];
extern undefined1 LAB_116c79fd[];
extern undefined1 LAB_116c7a4d[];
extern undefined1 LAB_116c7a95[];
extern undefined1 LAB_116c7b00[];
extern undefined1 LAB_116c7b30[];
extern undefined1 LAB_116c7b60[];
extern undefined1 LAB_116c7b90[];
extern undefined1 LAB_116c7bc0[];
extern undefined1 LAB_116c7bf0[];
extern undefined1 LAB_116c7c20[];
extern undefined1 LAB_116c7d60[];
extern undefined1 LAB_116c7dec[];
extern undefined1 LAB_116c7e2d[];
extern undefined1 LAB_116c7ebd[];
extern undefined1 LAB_116c7f0d[];
extern undefined1 LAB_116c7f55[];
extern undefined1 LAB_116c7f95[];
extern undefined1 LAB_116c805d[];
extern undefined1 LAB_116c809d[];
extern undefined1 LAB_116c8160[];
extern undefined1 LAB_116c8190[];
extern undefined1 LAB_116c81c0[];
extern undefined1 LAB_116c81f0[];
extern undefined1 LAB_116c8220[];
extern undefined1 LAB_116c8250[];
extern undefined1 LAB_116c8280[];
extern undefined1 LAB_116c82b0[];
extern undefined1 LAB_116c8355[];
extern undefined1 LAB_116c839d[];
extern undefined1 LAB_116c83e5[];
extern undefined1 LAB_116c841d[];
extern undefined1 LAB_116c8476[];
extern undefined1 LAB_116c85f5[];
extern undefined1 LAB_116c869d[];
extern undefined1 LAB_116c88f0[];
extern undefined1 LAB_116c8d4c[];
extern undefined1 LAB_116c8d80[];
extern undefined1 LAB_116c8ddd[];
extern undefined1 LAB_116c90ad[];
extern undefined1 LAB_116c90fd[];
extern undefined1 LAB_116c9145[];
extern undefined1 LAB_116c93a0[];
extern undefined1 LAB_116c93dd[];
extern undefined1 LAB_116c952d[];
extern undefined1 LAB_116c95a0[];
extern undefined1 LAB_116c95d0[];
extern undefined1 LAB_116c9600[];
extern undefined1 LAB_116c9630[];
extern undefined1 LAB_116c9660[];
extern undefined1 LAB_116c9690[];
extern undefined1 LAB_116c96c0[];
extern undefined1 LAB_116c96f0[];
extern undefined1 LAB_116c9720[];
extern undefined1 LAB_116c9750[];
extern undefined1 LAB_116c9780[];
extern undefined1 LAB_116c97b0[];
extern undefined1 LAB_116c97e0[];
extern undefined1 LAB_116c9810[];
extern undefined1 LAB_116c984d[];
extern int *PTR_s__SONOS_12119d1c;
extern int *stack0x00000004;
extern int *stack0x00000014;
extern int *stack0xffffffcc;
extern int *stack0xffffffd0;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createPresentAlarmInterfaceAction(A...); template<class... A> int createSCDisplayMenuPopupAction(A...); template<class... A> int getCurrentThreadID(A...); template<class... A> int getMainThreadID(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_eq(A...); template<class... A> int utf8_find(A...); template<class... A> int utf8_substr(A...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *BLE;
typedef void *BT;
typedef void *CHN;
typedef void *FOREGROUNDED;
typedef void *LOCK;
typedef void *NFC;
typedef void *NOT;
typedef void *SCDHS;
typedef void *UNLOCK;
typedef void *URL;
typedef void *WARNING;
struct Aborting { char _pad; Aborting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountID { char _pad; AccountID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountKey { char _pad; AccountKey(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountToken { char _pad; AccountToken(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountType { char _pad; AccountType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AccountUDN { char _pad; AccountUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Active { char _pad; Active(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AlarmClock { char _pad; AlarmClock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Already { char _pad; Already(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Attempt { char _pad; Attempt(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CRReceivedDeeplink { char _pad; CRReceivedDeeplink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CannotForceCloseWindowAction { char _pad; CannotForceCloseWindowAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DestroyAlarm { char _pad; DestroyAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Device { char _pad; Device(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Disconnected { char _pad; Disconnected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EditAccountPasswordX { char _pad; EditAccountPasswordX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ExitConfigMode { char _pad; ExitConfigMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewAccountID { char _pad; NewAccountID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewAccountPassword { char _pad; NewAccountPassword(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewAccountUDN { char _pad; NewAccountUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OAuthDeviceID { char _pad; OAuthDeviceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Optimizely { char _pad; Optimizely(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Options { char _pad; Options(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PresentAlarmInterfaceAction { char _pad; PresentAlarmInterfaceAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RemoveAccount { char _pad; RemoveAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ReplaceAccountX { char _pad; ReplaceAccountX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCAlarmManager { char _pad; SCAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCArtworkCacheManager { char _pad; SCArtworkCacheManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCBTClassicConnectionManager { char _pad; SCBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCDirectControlApplication { char _pad; SCDirectControlApplication(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAppSessionManager { char _pad; SCIAppSessionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionCallback { char _pad; SCIBTClassicConnectionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionManager { char _pad; SCIBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionProvider { char _pad; SCIBTClassicConnectionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINfcDelegate { char _pad; SCINfcDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINfcListener { char _pad; SCINfcListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStringArray { char _pad; SCIStringArray(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIVoiceServiceDelegate { char _pad; SCIVoiceServiceDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLib { char _pad; SCLib(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSwfObjMSDiscoveryListener { char _pad; SCSwfObjMSDiscoveryListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ShowOverTopModalWindow { char _pad; ShowOverTopModalWindow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Starting { char _pad; Starting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stopping { char _pad; Stopping(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Successfully { char _pad; Successfully(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SwfObjMSDiscovery { char _pad; SwfObjMSDiscovery(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unable { char _pad; Unable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unsubscribe { char _pad; Unsubscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Waiting { char _pad; Waiting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Will { char _pad; Will(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_10b150f0(undefined4 *param_2); void __thiscall FUN_10b18dd0(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_10b1a690(int *param_2); undefined4 * __thiscall FUN_10b1ba80(int param_2,undefined4 param_3); int * __thiscall FUN_10b1c0b0(int *param_2); undefined4 * __thiscall FUN_10b1c250(byte param_2); undefined4 * __thiscall FUN_10b1c3e0(byte param_2); undefined4 * __thiscall FUN_10b1c4f0(byte param_2); undefined4 * __thiscall FUN_10b1c590(byte param_2); undefined4 * __thiscall FUN_10b1c630(byte param_2); undefined4 * __thiscall FUN_10b1c6d0(byte param_2); undefined4 * __thiscall FUN_10b1c880(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b1c980(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b1ca60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b1cb40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b1cc20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b1cd00(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10b25070(byte param_2); undefined4 * __thiscall FUN_10b252e0(byte param_2); undefined4 * __thiscall FUN_10b25380(byte param_2); undefined4 * __thiscall FUN_10b25420(byte param_2); undefined4 * __thiscall FUN_10b254c0(byte param_2); undefined4 * __thiscall FUN_10b25560(byte param_2); undefined4 * __thiscall FUN_10b25600(byte param_2); undefined4 * __thiscall FUN_10b256a0(byte param_2); undefined4 * __thiscall FUN_10b25740(byte param_2); undefined4 * __thiscall FUN_10b257e0(byte param_2); undefined4 * __thiscall FUN_10b25880(byte param_2); undefined4 * __thiscall FUN_10b25920(byte param_2); undefined4 * __thiscall FUN_10b25b00(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b25be0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b25cc0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b25da0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b25e80(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b25f60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b26040(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b26120(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b26200(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b262e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b263c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b26fc0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10b2f2b0(byte param_2); undefined4 * __thiscall FUN_10b2f3a0(byte param_2); undefined4 * __thiscall FUN_10b2f440(byte param_2); undefined4 * __thiscall FUN_10b2f680(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b2f760(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b2f840(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b2f920(undefined4 param_2,undefined4 param_3,undefined4 param_4); int * __thiscall FUN_10b31cb0(int *param_2); undefined4 * __thiscall FUN_10b32980(undefined4 param_2); undefined4 * __thiscall FUN_10b32b40(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_10b32cb0(undefined4 param_2); undefined4 * __thiscall FUN_10b35700(byte param_2); undefined4 * __thiscall FUN_10b359a0(byte param_2); undefined4 * __thiscall FUN_10b35ad0(byte param_2); undefined4 * __thiscall FUN_10b35d10(byte param_2); undefined4 * __thiscall FUN_10b35ec0(byte param_2); undefined4 * __thiscall FUN_10b35f60(byte param_2); undefined4 * __thiscall FUN_10b36000(byte param_2); undefined4 * __thiscall FUN_10b360a0(byte param_2); undefined4 * __thiscall FUN_10b36140(byte param_2); undefined4 * __thiscall FUN_10b361e0(byte param_2); undefined4 * __thiscall FUN_10b36280(byte param_2); undefined4 * __thiscall FUN_10b36320(byte param_2); undefined4 * __thiscall FUN_10b363c0(byte param_2); undefined4 * __thiscall FUN_10b36460(byte param_2); int * __thiscall FUN_10b36c70(int *param_2); undefined4 * __thiscall FUN_10b36f50(undefined4 *param_2); undefined4 * __thiscall FUN_10b370c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37220(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37370(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37450(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37530(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37610(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b376f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b377d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b378b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37990(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37a70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37b50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b37c30(undefined4 *param_2); undefined4 __thiscall FUN_10b37da0(undefined4 param_2,undefined4 param_3,undefined4 param_4); int __thiscall FUN_10b484e0(undefined4 param_2); void __thiscall FUN_10b48670(int param_2,int *param_3); void __thiscall FUN_10b48780(int param_2,int *param_3); undefined4 * __thiscall FUN_10b4a8b0(byte param_2); undefined4 * __thiscall FUN_10b4aa90(byte param_2); undefined4 * __thiscall FUN_10b4ab30(byte param_2); undefined4 * __thiscall FUN_10b4abd0(byte param_2); undefined4 * __thiscall FUN_10b4ac70(byte param_2); undefined4 * __thiscall FUN_10b4ad10(byte param_2); undefined4 * __thiscall FUN_10b4adb0(byte param_2); undefined4 * __thiscall FUN_10b4ae50(byte param_2); undefined4 * __thiscall FUN_10b4aef0(byte param_2); undefined4 * __thiscall FUN_10b4b170(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b4b250(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b4b330(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b4b410(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b4b4f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b4b5d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b4b6b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b4b790(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b4b870(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10b50380(undefined4 param_2); undefined4 * __thiscall FUN_10b50490(undefined4 param_2); undefined4 * __thiscall FUN_10b505a0(undefined4 param_2); undefined4 * __thiscall FUN_10b50950(undefined4 param_2); undefined4 * __thiscall FUN_10b50e00(undefined4 param_2); undefined4 * __thiscall FUN_10b51b20(byte param_2); undefined4 * __thiscall FUN_10b51ca0(byte param_2); undefined4 * __thiscall FUN_10b51d00(byte param_2); undefined4 * __thiscall FUN_10b51d60(byte param_2); undefined4 * __thiscall FUN_10b51dc0(byte param_2); undefined4 * __thiscall FUN_10b51e60(byte param_2); undefined4 * __thiscall FUN_10b51f00(byte param_2); undefined4 * __thiscall FUN_10b51fa0(byte param_2); undefined4 * __thiscall FUN_10b52040(byte param_2); undefined4 * __thiscall FUN_10b520e0(byte param_2); undefined4 * __thiscall FUN_10b52260(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b52340(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b52420(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b52580(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b52660(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b52740(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b528a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10b55a00(byte param_2); undefined4 * __thiscall FUN_10b55af0(byte param_2); undefined4 * __thiscall FUN_10b55b90(byte param_2); undefined4 * __thiscall FUN_10b55c30(byte param_2); undefined4 * __thiscall FUN_10b55d70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b55e50(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b55f30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b56010(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10b586d0(undefined4 param_2); undefined4 * __thiscall FUN_10b587e0(undefined4 param_2); undefined4 * __thiscall FUN_10b58d30(byte param_2); undefined4 * __thiscall FUN_10b58d90(byte param_2); undefined4 * __thiscall FUN_10b58eb0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b59010(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10b5e6f0(byte param_2); undefined4 * __thiscall FUN_10b5eaa0(byte param_2); undefined4 * __thiscall FUN_10b5eb40(byte param_2); undefined4 * __thiscall FUN_10b5ebe0(byte param_2); undefined4 * __thiscall FUN_10b5ec80(byte param_2); undefined4 * __thiscall FUN_10b5ed20(byte param_2); undefined4 * __thiscall FUN_10b5edc0(byte param_2); undefined4 * __thiscall FUN_10b5ee60(byte param_2); undefined4 * __thiscall FUN_10b5ef00(byte param_2); undefined4 * __thiscall FUN_10b5efa0(byte param_2); undefined4 * __thiscall FUN_10b5f040(byte param_2); undefined4 * __thiscall FUN_10b5f0e0(byte param_2); undefined4 * __thiscall FUN_10b5f180(byte param_2); undefined4 * __thiscall FUN_10b5f220(byte param_2); undefined4 * __thiscall FUN_10b5f2c0(byte param_2); undefined4 * __thiscall FUN_10b5f360(byte param_2); undefined4 * __thiscall FUN_10b5fb10(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b5fbf0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b5fcd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b5fdb0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b5fe90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b5ff70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b60050(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b60130(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b60210(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b602f0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b603d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b604b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b60590(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b60670(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b60750(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b60830(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10b6ca80(undefined4 *param_2,int *param_3,int *param_4); undefined4 * __thiscall FUN_10b6cc40(int param_2); int * __thiscall FUN_10b6da70(int *param_2); void __thiscall FUN_10b6dde0(int *param_2,undefined4 param_3); undefined4 __thiscall FUN_10b6f760(undefined4 param_2); undefined4 __thiscall FUN_10b6ff60(undefined4 param_2); undefined4 * __thiscall FUN_10b70270(undefined4 *param_2); undefined4 * __thiscall FUN_10b702f0(undefined4 *param_2); undefined4 * __thiscall FUN_10b70fc0(undefined4 *param_2,int *param_3,int *param_4); undefined4 * __thiscall FUN_10b71160(undefined4 *param_2); int * __thiscall FUN_10b71270(int *param_2); int * __thiscall FUN_10b71380(int *param_2); int * __thiscall FUN_10b71470(int *param_2); void __thiscall FUN_10b72070(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10b72880(int *param_2); int * __thiscall FUN_10b73270(int *param_2); int * __thiscall FUN_10b75700(int *param_2); int * __thiscall FUN_10b758b0(int *param_2); int * __thiscall FUN_10b76cc0(int *param_2); int * __thiscall FUN_10b76d90(int *param_2); float __thiscall FUN_10b77340(int param_2); void __thiscall FUN_10b77880(int param_2); void __thiscall FUN_10b7ad60(int *param_2); undefined4 * __thiscall FUN_10b7b510(byte param_2); undefined4 * __thiscall FUN_10b7bc50(int param_2); undefined4 * __thiscall FUN_10b7bf50(int param_2); undefined4 * __thiscall FUN_10b7c4a0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); undefined4 * __thiscall FUN_10b7c6a0(int param_2); undefined4 * __thiscall FUN_10b7c8e0(undefined4 param_2); int * __thiscall FUN_10b7d780(int *param_2); undefined4 * __thiscall FUN_10b7e0e0(byte param_2); undefined4 * __thiscall FUN_10b7e260(byte param_2); void __thiscall FUN_10b7e370(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b7eb20(undefined4 *param_2); undefined4 * __thiscall FUN_10b80000(undefined4 *param_2,undefined4 *param_3); int * __thiscall FUN_10b82680(int *param_2); int * __thiscall FUN_10b82790(int *param_2); int * __thiscall FUN_10b828a0(int *param_2); void __thiscall FUN_10b82d00(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10b84420(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10b844a0(undefined4 param_2,undefined4 param_3); int __thiscall FUN_10b84500(undefined4 param_2); undefined4 * __thiscall FUN_10b84980(int param_2); undefined4 * __thiscall FUN_10b84a20(int param_2); undefined4 * __thiscall FUN_10b84ac0(int param_2); undefined4 * __thiscall FUN_10b84b60(int param_2); undefined4 * __thiscall FUN_10b84d40(int param_2); undefined4 * __thiscall FUN_10b84eb0(int param_2); undefined4 * __thiscall FUN_10b85020(int param_2); undefined4 * __thiscall FUN_10b85190(int param_2); undefined4 * __thiscall FUN_10b88ce0(byte param_2); undefined4 * __thiscall FUN_10b88d50(byte param_2); undefined4 * __thiscall FUN_10b88e20(byte param_2); undefined4 * __thiscall FUN_10b88f10(byte param_2); undefined4 * __thiscall FUN_10b88f80(byte param_2); undefined4 * __thiscall FUN_10b89050(byte param_2); undefined4 * __thiscall FUN_10b890c0(byte param_2); void __thiscall FUN_10b89580(int *param_2,undefined4 param_3); void __thiscall FUN_10b89660(int *param_2,undefined4 param_3); void __thiscall FUN_10b89740(int *param_2,undefined4 param_3); void __thiscall FUN_10b89820(int *param_2,undefined4 param_3); void __thiscall FUN_10b899c0(int param_2,int *param_3); int * __thiscall FUN_10b8b660(int *param_2); void __thiscall FUN_10b8d0f0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10b8d220(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10b8d350(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10b8d480(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10b8dd50(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); undefined4 * __thiscall FUN_10b8e250(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10b8e6b0(byte param_2); void __thiscall FUN_10b8e780(int param_2,int param_3,int param_4); int __thiscall FUN_10b8fdc0(int param_2); undefined4 * __thiscall FUN_10b90070(undefined4 param_2); undefined4 * __thiscall FUN_10b900f0(undefined4 param_2); undefined4 * __thiscall FUN_10b90170(undefined4 param_2); undefined4 * __thiscall FUN_10b901f0(undefined4 param_2); undefined4 * __thiscall FUN_10b90270(undefined4 param_2); undefined4 * __thiscall FUN_10b90370(undefined4 param_2); undefined4 * __thiscall FUN_10b903f0(undefined4 param_2); undefined4 * __thiscall FUN_10b90470(undefined4 param_2); undefined4 * __thiscall FUN_10b904f0(undefined4 param_2); undefined4 * __thiscall FUN_10b90570(undefined4 param_2); undefined4 * __thiscall FUN_10b905f0(undefined4 param_2); undefined4 * __thiscall FUN_10b90670(undefined4 param_2); undefined4 * __thiscall FUN_10b906f0(undefined4 param_2); int * __thiscall FUN_10b91ca0(int *param_2); undefined4 * __thiscall FUN_10b91ee0(byte param_2); undefined4 * __thiscall FUN_10b920a0(byte param_2); int __thiscall FUN_10b92120(byte param_2); int __thiscall FUN_10b921d0(byte param_2); int __thiscall FUN_10b922b0(byte param_2); int __thiscall FUN_10b92360(byte param_2); int __thiscall FUN_10b92410(byte param_2); int __thiscall FUN_10b92520(byte param_2); int __thiscall FUN_10b925d0(byte param_2); int __thiscall FUN_10b92680(byte param_2); int __thiscall FUN_10b92730(byte param_2); int __thiscall FUN_10b927e0(byte param_2); int __thiscall FUN_10b92890(byte param_2); int __thiscall FUN_10b92940(byte param_2); int __thiscall FUN_10b929f0(byte param_2); float __thiscall FUN_10b92ce0(int param_2); void __thiscall FUN_10b93150(int param_2); undefined4 * __thiscall FUN_10b952f0(undefined4 *param_2); undefined8 * __thiscall FUN_10b96ee0(undefined8 *param_2); int __thiscall FUN_10b972b0(int param_2); undefined4 * __thiscall FUN_10b97ee0(undefined4 param_2); int * __thiscall FUN_10b99520(int *param_2); int * __thiscall FUN_10b99590(int *param_2); int * __thiscall FUN_10b99600(int *param_2); int * __thiscall FUN_10b99670(int *param_2); int __thiscall FUN_10b99dc0(byte param_2); undefined4 * __thiscall FUN_10b99e80(byte param_2); undefined4 * __thiscall FUN_10b9a1e0(byte param_2); uint __thiscall FUN_10b9a7c0(int param_2); float __thiscall FUN_10b9a870(int param_2); void __thiscall FUN_10b9b0b0(int param_2); void __thiscall FUN_10b9b120(int param_2); int __thiscall FUN_10b9b5d0(int *param_2); undefined4 __thiscall FUN_10b9c500(byte *param_2); undefined4 __thiscall FUN_10b9c660(undefined4 *param_2); int * __thiscall FUN_10b9de60(int *param_2); int __thiscall FUN_10ba09c0(int param_2); int __thiscall FUN_10ba0a40(int param_2); void __thiscall FUN_10ba1870(uint param_2); void __thiscall FUN_10ba19c0(int param_2); undefined4 * __thiscall FUN_10ba1f00(int param_2); int * __thiscall FUN_10ba25b0(int *param_2); undefined4 * __thiscall FUN_10ba2900(undefined4 *param_2,undefined4 *param_3); void __thiscall FUN_10ba2ae0(undefined4 *param_2); int __thiscall FUN_10ba2c50(int param_2,undefined4 param_3); void __thiscall FUN_10ba3020(int *param_2,undefined4 *param_3); void __thiscall FUN_10ba3160(undefined4 param_2); int * __thiscall FUN_10ba3340(int *param_2,int *param_3); int * __thiscall FUN_10ba3a10(int *param_2,int *param_3); undefined4 * __thiscall FUN_10ba3b50(undefined4 *param_2,int *param_3); int __thiscall FUN_10ba5870(int param_2); int __thiscall FUN_10ba58f0(int *param_2); int __thiscall FUN_10ba5960(int param_2); int * __thiscall FUN_10ba5a80(int *param_2); undefined4 * __thiscall FUN_10ba5c40(undefined4 *param_2); undefined4 * __thiscall FUN_10ba5d90(undefined4 *param_2); int * __thiscall FUN_10ba5f20(int *param_2); int * __thiscall FUN_10ba7570(int *param_2); int * __thiscall FUN_10ba75e0(int *param_2); int * __thiscall FUN_10ba7650(int *param_2); int * __thiscall FUN_10ba76c0(int *param_2); int __thiscall FUN_10ba78d0(int *param_2); undefined4 * __thiscall FUN_10ba79e0(int *param_2); undefined4 * __thiscall FUN_10ba7f00(byte param_2); undefined4 * __thiscall FUN_10ba8090(byte param_2); void __thiscall FUN_10ba85b0(int param_2,int param_3,int param_4); void __thiscall FUN_10ba9df0(int param_2); void __thiscall FUN_10ba9e60(int param_2); void __thiscall FUN_10baa100(int *param_2); void __thiscall FUN_10baa170(int *param_2); undefined4 * __thiscall FUN_10baab40(undefined4 *param_2,int *param_3); void __thiscall FUN_10baba30(int *param_2,int *param_3); int * __thiscall FUN_10bac260(int *param_2); int __thiscall FUN_10bac7a0(undefined4 param_2); undefined4 * __thiscall FUN_10baeb40(undefined4 *param_2,undefined4 param_3,int *param_4); void __thiscall FUN_10bb3a30(uint param_2); undefined4 * __thiscall FUN_10bb5460(undefined4 param_2); undefined4 * __thiscall FUN_10bb6290(byte param_2); undefined4 * __thiscall FUN_10bb6430(byte param_2); void __thiscall FUN_10bba780(undefined4 *param_2,int *param_3); void __thiscall FUN_10bbaa30(int *param_2); undefined4 * __thiscall FUN_10bbdbd0(void *param_2,undefined4 *param_3); int * __thiscall FUN_10bbe300(int *param_2); undefined4 * __thiscall FUN_10bbe3e0(byte param_2); void __thiscall FUN_10bbe590(int param_2,int param_3,int param_4); uint __thiscall FUN_10bbf010(int param_2); int __thiscall FUN_10bc0870(byte param_2); undefined4 * __thiscall FUN_10bc0900(byte param_2); void __thiscall FUN_10bc0b70(char param_2); void __thiscall FUN_10bc1490(int param_2); void __thiscall FUN_10bc15b0(int *param_2); void __thiscall FUN_10bc1660(int *param_2); int * __thiscall FUN_10bc3710(int *param_2); int * __thiscall FUN_10bc3840(undefined4 *param_2); undefined4 * __thiscall FUN_10bc3990(void *param_2,undefined4 *param_3); int * __thiscall FUN_10bc41a0(int *param_2); int __thiscall FUN_10bc4290(byte param_2); undefined4 * __thiscall FUN_10bc4340(byte param_2); void __thiscall FUN_10bc44b0(int param_2,int param_3,int param_4); undefined4 __thiscall FUN_10bc4b60(int *param_2); undefined4 * __thiscall FUN_10bc4d60(undefined4 *param_2,SCStr *param_3); uint __thiscall FUN_10bc51d0(int param_2); undefined4 * __thiscall FUN_10bc5270(int param_2); int * __thiscall FUN_10bc5510(int *param_2); int * __thiscall FUN_10bc56c0(int *param_2); int * __thiscall FUN_10bc57f0(undefined4 *param_2); int __thiscall FUN_10bc61b0(int param_2); int __thiscall FUN_10bc6230(int *param_2); int __thiscall FUN_10bc62a0(int param_2); int * __thiscall FUN_10bc6b70(int *param_2); int * __thiscall FUN_10bc6be0(int *param_2); int * __thiscall FUN_10bc6c50(int *param_2); undefined4 * __thiscall FUN_10bc6e10(byte param_2); undefined4 * __thiscall FUN_10bc70b0(byte param_2); SCStr * __thiscall FUN_10bc7a50(SCStr *param_2); SCStr * __thiscall FUN_10bc7b50(SCStr *param_2); void __thiscall FUN_10bc7c30(SCStr *param_2,SCStr *param_3,undefined4 *param_4); undefined4 * __thiscall FUN_10bc90f0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10bc9170(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10bc91f0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10bc9860(void *param_2,undefined4 *param_3); void __thiscall FUN_10bca050(int param_2,int param_3,int param_4); undefined4 * __thiscall FUN_10bcb450(undefined4 *param_2,SCStr *param_3); uint __thiscall FUN_10bcb5c0(int param_2); int * __thiscall FUN_10bcc760(int *param_2); int * __thiscall FUN_10bcc940(int *param_2); int * __thiscall FUN_10bcca70(undefined4 *param_2); void __thiscall FUN_10bccc10(int *param_2,int *param_3); undefined4 * __thiscall FUN_10bcdba0(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_10bcdfc0(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10bce170(void *param_2,undefined4 *param_3); void * __thiscall FUN_10bce670(int param_2,undefined4 param_3); void __thiscall FUN_10bcec60(undefined4 param_2); void __thiscall FUN_10bcee10(undefined4 param_2); undefined4 __thiscall FUN_10bceec0(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10bcef80(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10bcf040(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10bcf160(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10bcf230(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10bcf300(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10bcf420(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10bcf4e0(undefined4 param_2,int *param_3); int * __thiscall FUN_10bcf810(int *param_2,uint *param_3); int * __thiscall FUN_10bcf950(int *param_2,int *param_3); int * __thiscall FUN_10bcf9b0(int *param_2,int *param_3); int * __thiscall FUN_10bcfa10(int *param_2,int *param_3); int * __thiscall FUN_10bcfa70(int *param_2,int *param_3); int * __thiscall FUN_10bcfad0(int *param_2,int *param_3); void __thiscall FUN_10bd01a0(void *param_2,void *param_3,int param_4); int * __thiscall FUN_10bd07b0(int *param_2,uint *param_3); };
using namespace std;
void FUN_10b18fe0(void);
void FUN_10b19130(void);
void FUN_10b19280(void);
void FUN_10b19560(void);
void FUN_10b1a350(void);
void __fastcall FUN_10b1a450(int param_1);
void FUN_10b1a610(void);
undefined4 * __fastcall FUN_10b1acc0(undefined4 *param_1);
void __fastcall FUN_10b1bc80(undefined4 *param_1);
void __fastcall FUN_10b1bd10(undefined4 *param_1);
void __fastcall FUN_10b1bd80(undefined4 *param_1);
void __fastcall FUN_10b1bdf0(undefined4 *param_1);
void FUN_10b21f90(void);
void FUN_10b220f0(undefined4 param_1);
void __fastcall FUN_10b34bc0(int *param_1);
void __fastcall FUN_10b34cd0(undefined4 *param_1);
void __fastcall FUN_10b34f10(undefined4 *param_1);
undefined4 __stdcall FUN_10b41ad0(undefined4 param_1);
undefined4 __stdcall FUN_10b41c80(undefined4 param_1);
void FUN_10b4fa10(void);
void FUN_10b4fbe0(void);
void FUN_10b4fc80(void);
undefined4 __stdcall FUN_10b536c0(undefined4 param_1);
undefined4 __stdcall FUN_10b53870(undefined4 param_1);
undefined4 __stdcall FUN_10b53a20(undefined4 param_1);
undefined4 __stdcall FUN_10b53bd0(undefined4 param_1);
undefined4 __stdcall FUN_10b53d80(undefined4 param_1);
void FUN_10b58460(void);
int * __fastcall FUN_10b5e3f0(int *param_1);
void FUN_10b6bb30(void);
void FUN_10b6bbd0(void);
void __fastcall FUN_10b6d510(undefined4 *param_1);
void __fastcall FUN_10b6d580(undefined4 *param_1);
void __fastcall FUN_10b6d5f0(undefined4 *param_1);
void __fastcall FUN_10b6d660(int *param_1);
void __fastcall FUN_10b6d7a0(int param_1);
void __fastcall FUN_10b6d850(undefined4 *param_1);
void __fastcall FUN_10b6dd80(int param_1);
undefined4 * FUN_10b6e210(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_10b6e2a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10b715a0(int *param_1);
undefined4 __fastcall FUN_10b71bd0(int param_1);
void __fastcall FUN_10b71da0(int param_1);
undefined1 FUN_10b728f0(int *param_1,int *param_2,int *param_3,int *param_4);
int * __fastcall FUN_10b733a0(int *param_1);
int * __fastcall FUN_10b73440(int *param_1);
void __fastcall FUN_10b76c30(int *param_1);
void __fastcall FUN_10b77900(float *param_1);
void __fastcall FUN_10b77ad0(int param_1);
void __fastcall FUN_10b77bc0(int *param_1);
undefined4 * FUN_10b77d30(undefined4 *param_1);
bool __fastcall FUN_10b797f0(int param_1);
void __fastcall FUN_10b7b0b0(int param_1);
void __fastcall FUN_10b7b470(undefined4 *param_1);
void FUN_10b7b5d0(int param_1,undefined1 *param_2);
void __fastcall FUN_10b7cde0(undefined4 *param_1);
void __fastcall FUN_10b7ce50(undefined4 *param_1);
void __fastcall FUN_10b7cec0(undefined4 *param_1);
void __fastcall FUN_10b7cf30(undefined4 *param_1);
void __fastcall FUN_10b7cfa0(undefined4 *param_1);
void __fastcall FUN_10b7d010(undefined4 *param_1);
void __fastcall FUN_10b7d080(undefined4 *param_1);
void __fastcall FUN_10b7d0f0(undefined4 *param_1);
void __fastcall FUN_10b7d160(int *param_1);
void __fastcall FUN_10b7d5b0(undefined4 *param_1);
void __fastcall FUN_10b7d6f0(undefined4 *param_1);
void __fastcall FUN_10b7e310(int param_1);
undefined1 FUN_10b7e6f0(void);
uint __fastcall FUN_10b82a20(int *param_1);
void __fastcall FUN_10b82c50(int param_1);
undefined4 * FUN_10b84840(undefined4 *param_1,char *param_2,undefined4 *param_3);
void __fastcall FUN_10b88040(undefined4 *param_1);
void __fastcall FUN_10b880b0(undefined4 *param_1);
void __fastcall FUN_10b88120(undefined4 *param_1);
void __fastcall FUN_10b88190(undefined4 *param_1);
void __fastcall FUN_10b88250(undefined4 *param_1);
void __fastcall FUN_10b88570(undefined4 *param_1);
void __fastcall FUN_10b88670(undefined4 *param_1);
void __fastcall FUN_10b89400(int param_1);
void __fastcall FUN_10b89460(int param_1);
void __fastcall FUN_10b894c0(int param_1);
void __fastcall FUN_10b89520(int param_1);
void __fastcall FUN_10b8ce70(int param_1);
void __fastcall FUN_10b8cf10(int param_1);
void __fastcall FUN_10b8cfb0(int param_1);
void __fastcall FUN_10b8d050(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10b8e550(int *param_1);
void __fastcall FUN_10b8e5c0(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10b8e860(int *param_1);
void FUN_10b8f4a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int __fastcall FUN_10b90830(undefined4 *param_1);
void __fastcall FUN_10b90960(undefined4 *param_1);
void __fastcall FUN_10b909d0(undefined4 *param_1);
void __fastcall FUN_10b90a40(undefined4 *param_1);
void __fastcall FUN_10b90ab0(undefined4 *param_1);
void __fastcall FUN_10b90b20(undefined4 *param_1);
void __fastcall FUN_10b90b90(undefined4 *param_1);
void __fastcall FUN_10b90c00(undefined4 *param_1);
void __fastcall FUN_10b90c70(undefined4 *param_1);
void __fastcall FUN_10b90ce0(undefined4 *param_1);
void __fastcall FUN_10b90d50(undefined4 *param_1);
void __fastcall FUN_10b90dc0(undefined4 *param_1);
void __fastcall FUN_10b90e30(undefined4 *param_1);
void __fastcall FUN_10b90fe0(int param_1);
void __fastcall FUN_10b91050(int *param_1);
void __fastcall FUN_10b91100(int *param_1);
void __fastcall FUN_10b91160(int *param_1);
void __fastcall FUN_10b91260(undefined4 *param_1);
void __fastcall FUN_10b912c0(int param_1);
void __fastcall FUN_10b91350(int param_1);
void __fastcall FUN_10b91540(int param_1);
void __fastcall FUN_10b915d0(int param_1);
void __fastcall FUN_10b91660(int param_1);
void __fastcall FUN_10b91710(int param_1);
void __fastcall FUN_10b917a0(int param_1);
void __fastcall FUN_10b91830(int param_1);
void __fastcall FUN_10b918c0(int param_1);
void __fastcall FUN_10b91950(int param_1);
void __fastcall FUN_10b919e0(int param_1);
void __fastcall FUN_10b91a70(int param_1);
void __fastcall FUN_10b91b00(int param_1);
void __fastcall FUN_10b91bb0(int *param_1);
void __fastcall FUN_10b931d0(float *param_1);
void __fastcall FUN_10b932c0(int *param_1);
void __fastcall FUN_10b93330(int *param_1);
void __fastcall FUN_10b93600(int *param_1);
void FUN_10b95cf0(undefined4 param_1,undefined4 *param_2);
void FUN_10b95e30(undefined4 param_1,int param_2);
void FUN_10b96620(undefined4 param_1,int param_2);
void FUN_10b966e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10b96760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
ulonglong * __fastcall FUN_10b96930(ulonglong *param_1);
ulonglong * __fastcall FUN_10b97390(ulonglong *param_1);
void __fastcall FUN_10b98450(undefined4 *param_1);
void __fastcall FUN_10b98540(undefined4 *param_1);
void __fastcall FUN_10b985b0(undefined4 *param_1);
void __fastcall FUN_10b98620(undefined4 *param_1);
void __fastcall FUN_10b98690(undefined4 *param_1);
void __fastcall FUN_10b98700(undefined4 *param_1);
void __fastcall FUN_10b98770(undefined4 *param_1);
void __fastcall FUN_10b987e0(undefined4 *param_1);
void __fastcall FUN_10b98850(int *param_1);
void __fastcall FUN_10b98980(int param_1);
void __fastcall FUN_10b98a00(int param_1);
void __fastcall FUN_10b98a70(int *param_1);
void __fastcall FUN_10b98ae0(int *param_1);
void __fastcall FUN_10b98b50(int param_1);
void __fastcall FUN_10b98c90(int *param_1);
void __fastcall FUN_10b98cf0(int param_1);
void __fastcall FUN_10b98d60(int *param_1);
void __fastcall FUN_10b98e50(undefined4 *param_1);
void __fastcall FUN_10b99010(undefined4 *param_1);
void __fastcall FUN_10b9b1d0(int param_1);
void __fastcall FUN_10b9b280(float *param_1);
void __fastcall FUN_10b9b3d0(int *param_1);
void __fastcall FUN_10b9b440(int *param_1);
void __fastcall FUN_10b9b4d0(int *param_1);
void __fastcall FUN_10b9bdf0(int param_1);
void __fastcall FUN_10b9bfd0(int param_1);
void __fastcall FUN_10b9c090(int *param_1);
void __fastcall FUN_10b9c100(int param_1);
void __fastcall FUN_10b9c3b0(int param_1);
void __fastcall FUN_10b9e730(int param_1);
undefined4 *
FUN_10b9e930(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5);
undefined4 * FUN_10ba3520(int param_1);
int __stdcall FUN_10ba3ca0(int param_1,int param_2,int param_3);
int FUN_10ba3d40(int param_1,int param_2,int param_3);
undefined4 * FUN_10ba3dd0(int param_1,int param_2,undefined4 *param_3);
void FUN_10ba4140(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10ba67a0(int *param_1);
int __fastcall FUN_10ba6820(undefined4 *param_1);
void __fastcall FUN_10ba6970(undefined4 *param_1);
void __fastcall FUN_10ba69e0(undefined4 *param_1);
void __fastcall FUN_10ba6a50(undefined4 *param_1);
void __fastcall FUN_10ba6ac0(undefined4 *param_1);
void __fastcall FUN_10ba6b90(undefined4 *param_1);
void __fastcall FUN_10ba6fd0(int param_1);
void __fastcall FUN_10ba74a0(int *param_1);
void __fastcall FUN_10ba7500(int *param_1);
void __fastcall FUN_10ba84c0(undefined4 *param_1);
undefined4 * __fastcall FUN_10ba86d0(int param_1);
void __fastcall FUN_10baa2c0(int *param_1);
undefined4 * __stdcall FUN_10baa360(int param_1,int param_2,undefined4 *param_3);
void FUN_10baa4f0(int param_1,int param_2);
void FUN_10baa580(int param_1,int param_2);
void * FUN_10baa760(uint param_1);
void __fastcall FUN_10baa8f0(int *param_1);
undefined4 __stdcall FUN_10baaa00(undefined4 param_1,int *param_2);
void __stdcall FUN_10baffd0(long param_1,int *param_2);
void __stdcall FUN_10bb2b80(int param_1);
undefined1 FUN_10bb46d0(void);
void __fastcall FUN_10bb5b90(undefined4 *param_1);
void __fastcall FUN_10bb5cf0(undefined4 *param_1);
void __fastcall FUN_10bb7010(int param_1);
undefined4 * __fastcall FUN_10bb7070(int param_1);
undefined4 FUN_10bb70e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __fastcall FUN_10bb72f0(int param_1);
undefined4 __fastcall FUN_10bb74f0(int param_1);
undefined4 * __fastcall FUN_10bb7580(int param_1);
undefined4 * __fastcall FUN_10bb7810(int param_1);
undefined4 * __fastcall FUN_10bb7880(int param_1);
undefined4 * __fastcall FUN_10bb78f0(int param_1);
void __fastcall FUN_10bba8f0(int param_1);
void __stdcall FUN_10bbaea0(int param_1);
void __fastcall FUN_10bbaf50(int param_1);
void __stdcall FUN_10bbb080(undefined4 param_1);
void __fastcall FUN_10bbb160(int param_1);
void __fastcall FUN_10bbb1e0(int param_1);
undefined4 * FUN_10bbbf60(undefined4 *param_1,int param_2);
void __fastcall FUN_10bbe020(undefined4 *param_1);
void __fastcall FUN_10bbe090(undefined4 *param_1);
void __fastcall FUN_10bbe100(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10bbe160(int *param_1);
void __fastcall FUN_10bbe1d0(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10bbe660(int *param_1);
void __fastcall FUN_10bbef60(int param_1);
void __fastcall FUN_10bbf100(undefined4 *param_1);
void __fastcall FUN_10bc0320(undefined4 *param_1);
void __fastcall FUN_10bc03b0(int param_1);
int * __stdcall FUN_10bc1cc0(int *param_1);
void FUN_10bc1fd0(undefined4 param_1,int *param_2);
void FUN_10bc3610(void);
void __fastcall FUN_10bc3e60(undefined4 *param_1);
void __fastcall FUN_10bc3ed0(undefined4 *param_1);
void __fastcall FUN_10bc3f40(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10bc3fa0(int *param_1);
void __fastcall FUN_10bc4010(int param_1);
void __fastcall FUN_10bc4090(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10bc4580(int *param_1);
void __fastcall FUN_10bc4f80(int param_1);
undefined4 __fastcall FUN_10bc4ff0(int param_1);
undefined4 * FUN_10bc59a0(int param_1);
int __fastcall FUN_10bc6540(undefined4 *param_1);
void __fastcall FUN_10bc66b0(undefined4 *param_1);
void __fastcall FUN_10bc6720(undefined4 *param_1);
void __fastcall FUN_10bc6790(undefined4 *param_1);
void __fastcall FUN_10bc6800(int *param_1);
void __fastcall FUN_10bc6990(undefined4 *param_1);
undefined4 * __fastcall FUN_10bc72b0(int param_1);
void __stdcall FUN_10bc73f0(undefined4 *param_1,undefined4 param_2);
void __fastcall FUN_10bc7710(int *param_1);
void __fastcall FUN_10bc7930(int param_1);
void __fastcall FUN_10bc8220(int param_1);
void __fastcall FUN_10bc8860(int *param_1);
void __fastcall FUN_10bc8b30(int param_1);
void __fastcall FUN_10bc9460(int param_1);
void __fastcall FUN_10bc94c0(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10bc9d00(int *param_1);
void __fastcall FUN_10bc9d70(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10bca120(int *param_1);
void __fastcall FUN_10bcaf90(int param_1);
void __stdcall FUN_10bcb150(int param_1);
bool __fastcall FUN_10bcb230(int param_1);
int * FUN_10bcd900(int *param_1,int *param_2,int *param_3);
void FUN_10bcdb00(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10bcf100(undefined4 param_1,int *param_2);
void FUN_10bcfd90(undefined4 param_1,int param_2);
void FUN_10bcfe10(undefined4 param_1,int param_2);
void FUN_10bcfe90(undefined4 param_1,int param_2);
void FUN_10bcff30(undefined4 param_1,int param_2);
void FUN_10bcffb0(undefined4 param_1,int param_2);
void FUN_10bd0030(undefined4 param_1,int param_2);
// Reference entry 10b150f0; body size 106 bytes.
#line 1 "ENTRY_10b150f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b150f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116a9420);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[0xd] = 0;
  local_8 = (undefined4)(0);
  thunk_FUN_105ef430(param_1 + 0x100);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b18dd0; body size 222 bytes.
#line 1 "ENTRY_10b18dd0"

void __thiscall Recovered_Bulk::FUN_10b18dd0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 local_38 [12];
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a9cdd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_18 = (undefined4)(*param_1);
  local_14 = (undefined4 *)(param_3);
  if (param_2 != (undefined4 *)(param_3)) {
    do {
      puVar3 = (undefined8 *)((undefined8 *)thunk_FUN_10b09a30(local_38,local_18,param_2));
      local_2c = (undefined8)(*puVar3);
      local_24 = (undefined4)(*(undefined4 *)(puVar3 + 1));
      if ((char)local_24 == '\0') {
        if (param_1[1] == 0xccccccc) {
                    
          thunk_FUN_101d7220(uVar2);
        }
        uVar1 = (undefined4)(*param_1);
        local_8 = (undefined4)(0);
        local_1c = (undefined4)(0);
        local_20 = (undefined4 *)(param_1);
        puVar4 = (undefined4 *)(operator_new(0x14));
        local_8 = (undefined4)(0xffffffff);
        local_1c = (undefined4)(0);
        puVar4[4] = *param_2;
        *puVar4 = (undefined4)(uVar1);
        puVar4[1] = uVar1;
        puVar4[2] = uVar1;
        *(undefined2 *)(puVar4 + 3) = 0;
        thunk_FUN_106e7280((undefined4)local_2c,*(uint *)((char *)&local_2c + 4),puVar4);
      }
      param_2 = (undefined4 *)(param_2 + 1);
    } while ((undefined4 *)(param_2) != local_14);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b18fe0; body size 261 bytes.
#line 1 "ENTRY_10b18fe0"

void FUN_10b18fe0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a9d35);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10eb41b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_10b1a4d0();
  iVar2 = (int)(thunk_FUN_10eb41b0());
  piVar1 = (int *)(*(int **)(iVar2 + 0x138));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(0);
  local_14 = (int *)((int *)0x0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar4 = (int *)((int *)thunk_FUN_10c94600(&local_14,piVar1));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_10ebc1d0();
  thunk_FUN_10cf3780(piVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(9);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b19130; body size 264 bytes.
#line 1 "ENTRY_10b19130"

void FUN_10b19130(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a9d95);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eb41b0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)(*(int **)(iVar2 + 0x138));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(0);
  local_18[0] = (int *)0x0;
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar4 = (int *)((int *)thunk_FUN_10c94600(local_18,piVar1));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_18[0] != (int *)0x0) {
    (**(code **)(*local_18[0] + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  thunk_FUN_10ebc1d0();
  thunk_FUN_10cf3780(piVar1);
  uVar5 = (undefined4)(2);
  thunk_FUN_10ebc1d0(2);
  thunk_FUN_1083e550(uVar5);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(9);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b19280; body size 81 bytes.
#line 1 "ENTRY_10b19280"

void FUN_10b19280(void)

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
  return;
}


// Reference entry 10b19560; body size 122 bytes.
#line 1 "ENTRY_10b19560"

void FUN_10b19560(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116a9e4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfda60(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("successWait",1000);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b1a350; body size 130 bytes.
#line 1 "ENTRY_10b1a350"

void FUN_10b1a350(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aa0fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    iVar3 = (int)(thunk_FUN_10eb41b0());
    thunk_FUN_10ebb8e0("openApBootWait",*(undefined4 *)(iVar3 + 0x148));
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b1a450; body size 72 bytes.
#line 1 "ENTRY_10b1a450"

void __fastcall FUN_10b1a450(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    cVar1 = (char)(thunk_FUN_1034e4a0(2));
    if (cVar1 != '\0') {
      thunk_FUN_1034cdd0(2);
    }
    if (*(char *)(param_1 + 0x14c) != '\0') {
      uVar2 = (undefined4)(thunk_FUN_1034d8f0());
      thunk_FUN_10b148e0(uVar2);
      thunk_FUN_10f408f0(uVar2);
    }
  }
  return;
}


// Reference entry 10b1a610; body size 97 bytes.
#line 1 "ENTRY_10b1a610"

void FUN_10b1a610(void)

{
  uint uVar1;
  int *in_stack_00000038;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116aa18d);
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


// Reference entry 10b1a690; body size 101 bytes.
#line 1 "ENTRY_10b1a690"

void __thiscall Recovered_Bulk::FUN_10b1a690(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x138)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x13c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x138) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x13c) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  return;
}


// Reference entry 10b1acc0; body size 339 bytes.
#line 1 "ENTRY_10b1acc0"

undefined4 * __fastcall FUN_10b1acc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aa3da);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar3 = (void *)(operator_new(0x6c));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_111c06e0(0xd05));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(1);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCExampleDownloadOp);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCExampleDownloadOp);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b1ba80; body size 298 bytes.
#line 1 "ENTRY_10b1ba80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1ba80(int param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116aa7cb);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrappedCBOp);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWrappedCBOp);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b1bc80; body size 76 bytes.
#line 1 "ENTRY_10b1bc80"

void __fastcall FUN_10b1bc80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aa800);
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


// Reference entry 10b1bd10; body size 83 bytes.
#line 1 "ENTRY_10b1bd10"

void __fastcall FUN_10b1bd10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116aa830);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b1bd80; body size 83 bytes.
#line 1 "ENTRY_10b1bd80"

void __fastcall FUN_10b1bd80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116aa860);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b1bdf0; body size 135 bytes.
#line 1 "ENTRY_10b1bdf0"

void __fastcall FUN_10b1bdf0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116aa890);
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


// Reference entry 10b1c0b0; body size 81 bytes.
#line 1 "ENTRY_10b1c0b0"

int * __thiscall Recovered_Bulk::FUN_10b1c0b0(int *param_2)
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


// Reference entry 10b1c250; body size 68 bytes.
#line 1 "ENTRY_10b1c250"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1c250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b1c3e0; body size 159 bytes.
#line 1 "ENTRY_10b1c3e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1c3e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116aa8c0);
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


// Reference entry 10b1c4f0; body size 68 bytes.
#line 1 "ENTRY_10b1c4f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1c4f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b1c590; body size 68 bytes.
#line 1 "ENTRY_10b1c590"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1c590(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b1c630; body size 68 bytes.
#line 1 "ENTRY_10b1c630"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1c630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b1c6d0; body size 68 bytes.
#line 1 "ENTRY_10b1c6d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1c6d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b1c880; body size 198 bytes.
#line 1 "ENTRY_10b1c880"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1c880(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aa997);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xec));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOperationsFakeOpPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOperationsFakeOpPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOperationsFakeOpPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOperationsFakeOpPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b1c980; body size 168 bytes.
#line 1 "ENTRY_10b1c980"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1c980(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aa9e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOperationsFaultyOpPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOperationsFaultyOpPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOperationsFaultyOpPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOperationsFaultyOpPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b1ca60; body size 168 bytes.
#line 1 "ENTRY_10b1ca60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1ca60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aaa37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOperationsInstantExitPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOperationsInstantExitPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOperationsInstantExitPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOperationsInstantExitPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b1cb40; body size 168 bytes.
#line 1 "ENTRY_10b1cb40"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1cb40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aaa87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOperationsIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCOperationsIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOperationsIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOperationsIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b1cc20; body size 168 bytes.
#line 1 "ENTRY_10b1cc20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1cc20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aaad7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOperationsWhackAMolePage);
    puVar1[4] = (uint)&ghidra_vftable_SCOperationsWhackAMolePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOperationsWhackAMolePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOperationsWhackAMolePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b1cd00; body size 189 bytes.
#line 1 "ENTRY_10b1cd00"

undefined4 * __thiscall Recovered_Bulk::FUN_10b1cd00(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aab40);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOperationsWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCOperationsWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCOperationsWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCOperationsWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b21f90; body size 276 bytes.
#line 1 "ENTRY_10b21f90"

void FUN_10b21f90(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined1 local_74 [28];
  undefined1 local_58 [28];
  undefined1 local_3c [28];
  undefined1 local_20 [28];
  
  local_78 = (undefined4)(0xffffffff);
  puStack_7c = (undefined1 *)(LAB_116ab835);
  local_80 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_80);
  uVar2 = (undefined4)(thunk_FUN_10dfd3a0(DAT_12126b84 ^ (uint)local_74));
  local_78 = (undefined4)(0);
  thunk_FUN_10deee60(uVar2);
  *(unsigned char *)((char *)&local_78 + 0) = 1;
  uVar2 = (undefined4)(thunk_FUN_10df7cf0());
  *(unsigned char *)((char *)&local_78 + 0) = 2;
  thunk_FUN_10dfda60();
  *(unsigned char *)((char *)&local_78 + 0) = 3;
  thunk_FUN_10defac0(local_58,local_20);
  *(unsigned char *)((char *)&local_78 + 0) = 4;
  uVar2 = (undefined4)(thunk_FUN_10defb40(local_3c,uVar2));
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(5)));
  cVar1 = (char)(thunk_FUN_10def490(uVar2));
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  local_78 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("moleWait",0xd05);
  }
  ExceptionList = (void *)(local_80);
  return;
}


// Reference entry 10b220f0; body size 68 bytes.
#line 1 "ENTRY_10b220f0"

void FUN_10b220f0(undefined4 param_1)

{
  __time64_t _Var1;
  longlong lVar2;
  
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0));
  lVar2 = (longlong)(__allrem(_Var1,3,0));
  if (lVar2 == 0) {
    thunk_FUN_101bbd90(param_1,0x1f5);
    return;
  }
  thunk_FUN_101bbd90(param_1,0);
  return;
}


// Reference entry 10b25070; body size 68 bytes.
#line 1 "ENTRY_10b25070"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b252e0; body size 68 bytes.
#line 1 "ENTRY_10b252e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b252e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b25380; body size 68 bytes.
#line 1 "ENTRY_10b25380"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25380(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b25420; body size 68 bytes.
#line 1 "ENTRY_10b25420"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25420(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b254c0; body size 68 bytes.
#line 1 "ENTRY_10b254c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b254c0(byte param_2)
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


// Reference entry 10b25560; body size 68 bytes.
#line 1 "ENTRY_10b25560"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b25600; body size 68 bytes.
#line 1 "ENTRY_10b25600"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b256a0; body size 68 bytes.
#line 1 "ENTRY_10b256a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b256a0(byte param_2)
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


// Reference entry 10b25740; body size 68 bytes.
#line 1 "ENTRY_10b25740"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25740(byte param_2)
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


// Reference entry 10b257e0; body size 68 bytes.
#line 1 "ENTRY_10b257e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b257e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b25880; body size 68 bytes.
#line 1 "ENTRY_10b25880"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b25920; body size 68 bytes.
#line 1 "ENTRY_10b25920"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25920(byte param_2)
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


// Reference entry 10b25b00; body size 168 bytes.
#line 1 "ENTRY_10b25b00"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25b00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac5a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoAnimationTransitionFirstPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoAnimationTransitionFirstPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoAnimationTransitionFirstPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoAnimationTransitionFirstPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b25be0; body size 168 bytes.
#line 1 "ENTRY_10b25be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25be0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac5f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoAnimationTransitionSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoAnimationTransitionSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoAnimationTransitionSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoAnimationTransitionSecondPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b25cc0; body size 168 bytes.
#line 1 "ENTRY_10b25cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25cc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac647);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoBasicAnimationDurationSetPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoBasicAnimationDurationSetPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoBasicAnimationDurationSetPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoBasicAnimationDurationSetPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b25da0; body size 175 bytes.
#line 1 "ENTRY_10b25da0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25da0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac697);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoBasicAnimationPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoBasicAnimationPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoBasicAnimationPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoBasicAnimationPage;
    *(undefined1 *)(puVar1 + 0x38) = 1;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b25e80; body size 168 bytes.
#line 1 "ENTRY_10b25e80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25e80(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac6e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoCanvasOnlyLayoutPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoCanvasOnlyLayoutPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoCanvasOnlyLayoutPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoCanvasOnlyLayoutPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b25f60; body size 168 bytes.
#line 1 "ENTRY_10b25f60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b25f60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac737);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoSelectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b26040; body size 175 bytes.
#line 1 "ENTRY_10b26040"

undefined4 * __thiscall Recovered_Bulk::FUN_10b26040(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac787);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoStateMachineBoolPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoStateMachineBoolPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoStateMachineBoolPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoStateMachineBoolPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b26120; body size 179 bytes.
#line 1 "ENTRY_10b26120"

undefined4 * __thiscall Recovered_Bulk::FUN_10b26120(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac7d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoStateMachineNumberPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoStateMachineNumberPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoStateMachineNumberPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoStateMachineNumberPage;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b26200; body size 168 bytes.
#line 1 "ENTRY_10b26200"

undefined4 * __thiscall Recovered_Bulk::FUN_10b26200(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac827);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoStateMachineTransitionFirstPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTransitionFirstPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTransitionFirstPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTransitionFirstPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b262e0; body size 168 bytes.
#line 1 "ENTRY_10b262e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b262e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac877);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoStateMachineTransitionSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTransitionSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTransitionSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTransitionSecondPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b263c0; body size 175 bytes.
#line 1 "ENTRY_10b263c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b263c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ac8c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoStateMachineTriggerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTriggerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTriggerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoStateMachineTriggerPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b26fc0; body size 206 bytes.
#line 1 "ENTRY_10b26fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b26fc0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116acc40);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCRiveDemoWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCRiveDemoWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCRiveDemoWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCRiveDemoWizard;
    *(undefined1 *)(puVar1 + 0x3a) = 0;
    puVar1[0x3b] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b2f2b0; body size 68 bytes.
#line 1 "ENTRY_10b2f2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b2f2b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b2f3a0; body size 68 bytes.
#line 1 "ENTRY_10b2f3a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b2f3a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b2f440; body size 68 bytes.
#line 1 "ENTRY_10b2f440"

undefined4 * __thiscall Recovered_Bulk::FUN_10b2f440(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b2f680; body size 168 bytes.
#line 1 "ENTRY_10b2f680"

undefined4 * __thiscall Recovered_Bulk::FUN_10b2f680(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ae167);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSlideshowDonePage);
    puVar1[4] = (uint)&ghidra_vftable_SCSlideshowDonePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSlideshowDonePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSlideshowDonePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b2f760; body size 168 bytes.
#line 1 "ENTRY_10b2f760"

undefined4 * __thiscall Recovered_Bulk::FUN_10b2f760(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ae1b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSlideshowIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSlideshowIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSlideshowIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSlideshowIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b2f840; body size 178 bytes.
#line 1 "ENTRY_10b2f840"

undefined4 * __thiscall Recovered_Bulk::FUN_10b2f840(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ae207);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSlideshowProductPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSlideshowProductPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSlideshowProductPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSlideshowProductPage;
    puVar1[0x38] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b2f920; body size 209 bytes.
#line 1 "ENTRY_10b2f920"

undefined4 * __thiscall Recovered_Bulk::FUN_10b2f920(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ae270);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xf0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSlideshowWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCSlideshowWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSlideshowWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSlideshowWizard;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b31cb0; body size 78 bytes.
#line 1 "ENTRY_10b31cb0"

int * __thiscall Recovered_Bulk::FUN_10b31cb0(int *param_2)
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


// Reference entry 10b32980; body size 213 bytes.
#line 1 "ENTRY_10b32980"

undefined4 * __thiscall Recovered_Bulk::FUN_10b32980(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116aec00);
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
      uVar5 = (undefined4)(thunk_FUN_10973080(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10974e10(uVar3));
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


// Reference entry 10b32b40; body size 127 bytes.
#line 1 "ENTRY_10b32b40"

undefined4 * __thiscall Recovered_Bulk::FUN_10b32b40(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","ExitConfigMode",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp;
  return (undefined4 *)(param_1);
}


// Reference entry 10b32cb0; body size 213 bytes.
#line 1 "ENTRY_10b32cb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b32cb0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116aeca0);
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
      uVar5 = (undefined4)(thunk_FUN_10973080(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10974e10(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b34bc0; body size 81 bytes.
#line 1 "ENTRY_10b34bc0"

void __fastcall FUN_10b34bc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116af5d0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b34cd0; body size 83 bytes.
#line 1 "ENTRY_10b34cd0"

void __fastcall FUN_10b34cd0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116af600);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b34f10; body size 261 bytes.
#line 1 "ENTRY_10b34f10"

void __fastcall FUN_10b34f10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116af660);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x3f]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x3d]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x3b]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
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


// Reference entry 10b35700; body size 68 bytes.
#line 1 "ENTRY_10b35700"

undefined4 * __thiscall Recovered_Bulk::FUN_10b35700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b359a0; body size 68 bytes.
#line 1 "ENTRY_10b359a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b359a0(byte param_2)
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


// Reference entry 10b35ad0; body size 68 bytes.
#line 1 "ENTRY_10b35ad0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b35ad0(byte param_2)
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


// Reference entry 10b35d10; body size 285 bytes.
#line 1 "ENTRY_10b35d10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b35d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116af6c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[0x3f]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x3d]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x3b]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x39]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
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


// Reference entry 10b35ec0; body size 68 bytes.
#line 1 "ENTRY_10b35ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b35ec0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b35f60; body size 68 bytes.
#line 1 "ENTRY_10b35f60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b35f60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b36000; body size 68 bytes.
#line 1 "ENTRY_10b36000"

undefined4 * __thiscall Recovered_Bulk::FUN_10b36000(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b360a0; body size 68 bytes.
#line 1 "ENTRY_10b360a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b360a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b36140; body size 68 bytes.
#line 1 "ENTRY_10b36140"

undefined4 * __thiscall Recovered_Bulk::FUN_10b36140(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b361e0; body size 68 bytes.
#line 1 "ENTRY_10b361e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b361e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b36280; body size 68 bytes.
#line 1 "ENTRY_10b36280"

undefined4 * __thiscall Recovered_Bulk::FUN_10b36280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b36320; body size 68 bytes.
#line 1 "ENTRY_10b36320"

undefined4 * __thiscall Recovered_Bulk::FUN_10b36320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b363c0; body size 68 bytes.
#line 1 "ENTRY_10b363c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b363c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b36460; body size 68 bytes.
#line 1 "ENTRY_10b36460"

undefined4 * __thiscall Recovered_Bulk::FUN_10b36460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b36c70; body size 585 bytes.
#line 1 "ENTRY_10b36c70"

int * __thiscall Recovered_Bulk::FUN_10b36c70(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afa76);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  bVar3 = (bool)(false);
  piVar9 = (int *)(param_2);
  if (*(char *)(param_1 + 0xf8) != '\0') {
    piVar9 = (int *)(*(int **)(param_1 + 0x114));
    iVar1 = (int)(*(int *)(param_1 + 0x110));
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    bVar3 = (bool)(true);
    if (iVar1 != 0) {
      bVar2 = (bool)(true);
      goto LAB_10b36cd0;
    }
  }
  bVar2 = (bool)(false);
LAB_10b36cd0:
  if (bVar3) {
    local_8 = (undefined4)(0);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
  }
  if (bVar2) {
    piVar9 = (int *)(*(int **)(param_1 + 0x114));
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))();
    }
    local_8 = (undefined4)(1);
    piVar4 = (int *)((int *)thunk_FUN_10c96590(&local_14));
    iVar1 = (int)(*(int *)(*piVar4 + 0x2c));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (((local_14 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(local_14 + 1), iVar5 == 0))
       && (local_14 != (undefined4 *)0x0)) {
      (**(code **)*local_14)(1);
    }
    local_8 = (undefined4)(3);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    if (iVar1 != 0) {
      puVar6 = (undefined4 *)(operator_new(0xd7d0));
      local_8 = (undefined4)(4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        uVar7 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x48))());
        uVar14 = (undefined4)(0);
        uVar13 = (undefined4)(0);
        uVar12 = (undefined4)(2000);
        uVar11 = (undefined4)(2000);
        uVar8 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x50))
                          (2000,2000,0,0));
        thunk_FUN_111c0760(uVar7,"urn:schemas-upnp-org:service:DeviceProperties:1","ExitConfigMode",
                           uVar8,uVar11,uVar12,uVar13,uVar14);
        *puVar6 = (undefined4)((uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp);
        puVar6[0x18] = (uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp;
        puVar6[0x11b] = (uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp;
      }
      local_8 = (undefined4)(0xffffffff);
      piVar9 = (int *)((int *)thunk_FUN_1124ffa0("Options",0));
      (**(code **)(*piVar9 + 0xc))(&DAT_1186d2ee);
      pvVar10 = (void *)(operator_new(0x48));
      local_8 = (undefined4)(5);
      if (pvVar10 == (void *)0x0) {
        piVar9 = (int *)((int *)0x0);
      }
      else {
        piVar9 = (int *)((int *)thunk_FUN_101b94f0(puVar6));
      }
      piVar4 = (int *)((int *)0x0);
      local_8 = (undefined4)(0xffffffff);
      if (piVar9 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar9 + 0xc))());
        (**(code **)(*piVar4 + 4))();
      }
      local_8 = (undefined4)(6);
      *param_2 = (int)((int)piVar9);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))();
      }
      local_8 = (undefined4)(7);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
  }
  *param_2 = (int)(0);
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b36f50; body size 285 bytes.
#line 1 "ENTRY_10b36f50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b36f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  void *pvVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afad4);
  local_10 = (void *)(ExceptionList);
  if ((*(char *)(param_1 + 0xf8) != '\0') && (*(char *)(param_1 + 0xfa) != '\0')) {
    uStack_38 = (undefined4)(0x10b36f9b);
    ExceptionList = (void *)(&local_10);
    pvVar1 = (void *)(operator_new(0x48));
    local_8 = (int)(0);
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      uStack_38 = (undefined4)(extraout_ECX);
      thunk_FUN_10c98c80(&uStack_38);
      thunk_FUN_10b41ed0(&stack0xffffffcc);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      thunk_FUN_10c98c80(&uStack_38);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar2 = (int *)((int *)thunk_FUN_10b870f0());
    }
    piVar3 = (int *)((int *)0x0);
    local_8 = (int)(0xffffffff);
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      (**(code **)(*piVar3 + 4))();
    }
    local_8 = (int)(2);
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    local_8 = (int)(3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10b370c0; body size 276 bytes.
#line 1 "ENTRY_10b370c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b370c0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116afb52);
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
        uVar7 = (undefined4)(thunk_FUN_10973080(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10974e10(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionQuickTuneSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b37220; body size 259 bytes.
#line 1 "ENTRY_10b37220"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37220(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afba7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0x104));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectPage;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
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


// Reference entry 10b37370; body size 168 bytes.
#line 1 "ENTRY_10b37370"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37370(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afbf7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsFailurePage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsFailurePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsFailurePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsFailurePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b37450; body size 168 bytes.
#line 1 "ENTRY_10b37450"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37450(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afc47);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b37530; body size 168 bytes.
#line 1 "ENTRY_10b37530"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37530(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afc97);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithoutSurroundsPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithoutSurroundsPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithoutSurroundsPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithoutSurroundsPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b37610; body size 168 bytes.
#line 1 "ENTRY_10b37610"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37610(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afce7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedOutdoorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedOutdoorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedOutdoorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedOutdoorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b376f0; body size 168 bytes.
#line 1 "ENTRY_10b376f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b376f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afd37);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedPrimaryTrueplayPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedPrimaryTrueplayPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedPrimaryTrueplayPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedPrimaryTrueplayPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b377d0; body size 168 bytes.
#line 1 "ENTRY_10b377d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b377d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afd87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b378b0; body size 168 bytes.
#line 1 "ENTRY_10b378b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b378b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afdd7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayWithPrimaryFailurePage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayWithPrimaryFailurePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayWithPrimaryFailurePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayWithPrimaryFailurePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b37990; body size 168 bytes.
#line 1 "ENTRY_10b37990"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37990(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afe27);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b37a70; body size 168 bytes.
#line 1 "ENTRY_10b37a70"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37a70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afe77);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardErrorPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardErrorPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardErrorPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardErrorPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b37b50; body size 168 bytes.
#line 1 "ENTRY_10b37b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37b50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116afec7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionWizardIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSonanceDetectionWizardIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSonanceDetectionWizardIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSonanceDetectionWizardIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b37c30; body size 285 bytes.
#line 1 "ENTRY_10b37c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10b37c30(undefined4 *param_2)
{
  int param_1 = (int )this;
  void *pvVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  undefined4 uStack_38;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aff24);
  local_10 = (void *)(ExceptionList);
  if ((*(char *)(param_1 + 0xf8) != '\0') && (*(char *)(param_1 + 0xfb) != '\0')) {
    uStack_38 = (undefined4)(0x10b37c7b);
    ExceptionList = (void *)(&local_10);
    pvVar1 = (void *)(operator_new(0x48));
    local_8 = (int)(0);
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      uStack_38 = (undefined4)(extraout_ECX);
      thunk_FUN_10c98c80(&uStack_38);
      thunk_FUN_10b41ed0(&stack0xffffffcc);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      thunk_FUN_10c98c80(&uStack_38);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar2 = (int *)((int *)thunk_FUN_10b870f0());
    }
    piVar3 = (int *)((int *)0x0);
    local_8 = (int)(0xffffffff);
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      (**(code **)(*piVar3 + 4))();
    }
    local_8 = (int)(2);
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    local_8 = (int)(3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10b37da0; body size 154 bytes.
#line 1 "ENTRY_10b37da0"

undefined4 __thiscall Recovered_Bulk::FUN_10b37da0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116aff90);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  pvVar1 = (void *)(operator_new(0x120));
  local_8 = (undefined4)(0);
  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar2 = (undefined4)(thunk_FUN_10b32ec0(uVar2));
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 10b41ad0; body size 345 bytes.
#line 1 "ENTRY_10b41ad0"

undefined4 __stdcall FUN_10b41ad0(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116b1245);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4ca4);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b41bdf;
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
LAB_10b41bdf:
                    
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


// Reference entry 10b41c80; body size 344 bytes.
#line 1 "ENTRY_10b41c80"

undefined4 __stdcall FUN_10b41c80(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116b1285);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b41d8e;
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
LAB_10b41d8e:
                    
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


// Reference entry 10b484e0; body size 104 bytes.
#line 1 "ENTRY_10b484e0"

int __thiscall Recovered_Bulk::FUN_10b484e0(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0(&DAT_11906480,0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Options",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  uVar3 = (undefined4)(0x400);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("State");
  thunk_FUN_112503c0(iVar2,uVar3);
  return (int)(param_1);
}


// Reference entry 10b48670; body size 168 bytes.
#line 1 "ENTRY_10b48670"

void __thiscall Recovered_Bulk::FUN_10b48670(int param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116b24bd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_2 != *(int *)(param_1 + 0x100)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0x100) = param_2;
    *(int **)(param_1 + 0x104) = param_3;
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


// Reference entry 10b48780; body size 168 bytes.
#line 1 "ENTRY_10b48780"

void __thiscall Recovered_Bulk::FUN_10b48780(int param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116b24fd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_2 != *(int *)(param_1 + 0x108)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0x108) = param_2;
    *(int **)(param_1 + 0x10c) = param_3;
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


// Reference entry 10b4a8b0; body size 68 bytes.
#line 1 "ENTRY_10b4a8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4a8b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b4aa90; body size 68 bytes.
#line 1 "ENTRY_10b4aa90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4aa90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b4ab30; body size 68 bytes.
#line 1 "ENTRY_10b4ab30"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4ab30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b4abd0; body size 68 bytes.
#line 1 "ENTRY_10b4abd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4abd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b4ac70; body size 68 bytes.
#line 1 "ENTRY_10b4ac70"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4ac70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b4ad10; body size 68 bytes.
#line 1 "ENTRY_10b4ad10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4ad10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b4adb0; body size 68 bytes.
#line 1 "ENTRY_10b4adb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4adb0(byte param_2)
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


// Reference entry 10b4ae50; body size 68 bytes.
#line 1 "ENTRY_10b4ae50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4ae50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b4aef0; body size 68 bytes.
#line 1 "ENTRY_10b4aef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4aef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b4b170; body size 168 bytes.
#line 1 "ENTRY_10b4b170"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b170(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b2ea7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyFastTransitionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyFastTransitionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyFastTransitionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyFastTransitionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4b250; body size 168 bytes.
#line 1 "ENTRY_10b4b250"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b250(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b2ef7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyFasterTransitionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyFasterTransitionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyFasterTransitionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyFasterTransitionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4b330; body size 168 bytes.
#line 1 "ENTRY_10b4b330"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b330(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b2f47);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyFastestTransitionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyFastestTransitionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyFastestTransitionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyFastestTransitionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4b410; body size 168 bytes.
#line 1 "ENTRY_10b4b410"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b410(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b2f97);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4b4f0; body size 168 bytes.
#line 1 "ENTRY_10b4b4f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b4f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b2fe7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyQueuedTransitionsFirstPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsFirstPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsFirstPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsFirstPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4b5d0; body size 178 bytes.
#line 1 "ENTRY_10b4b5d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b5d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b3037);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyQueuedTransitionsFourthPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsFourthPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsFourthPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsFourthPage;
    puVar1[0x38] = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4b6b0; body size 168 bytes.
#line 1 "ENTRY_10b4b6b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b6b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b3087);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyQueuedTransitionsSecondPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsSecondPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsSecondPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsSecondPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4b790; body size 168 bytes.
#line 1 "ENTRY_10b4b790"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b790(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b30d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyQueuedTransitionsThirdPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsThirdPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsThirdPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyQueuedTransitionsThirdPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4b870; body size 189 bytes.
#line 1 "ENTRY_10b4b870"

undefined4 * __thiscall Recovered_Bulk::FUN_10b4b870(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b3140);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSpeedyWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCSpeedyWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSpeedyWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSpeedyWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b4fa10; body size 122 bytes.
#line 1 "ENTRY_10b4fa10"

void FUN_10b4fa10(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b3a1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0(&DAT_11907e20,500);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b4fbe0; body size 119 bytes.
#line 1 "ENTRY_10b4fbe0"

void FUN_10b4fbe0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b3aad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0(&DAT_11907e20,100);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b4fc80; body size 119 bytes.
#line 1 "ENTRY_10b4fc80"

void FUN_10b4fc80(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b3aed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0(&DAT_11907e20,0);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b50380; body size 213 bytes.
#line 1 "ENTRY_10b50380"

undefined4 * __thiscall Recovered_Bulk::FUN_10b50380(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116b3d90);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xe8));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a7cf20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a7d640(uVar3));
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


// Reference entry 10b50490; body size 213 bytes.
#line 1 "ENTRY_10b50490"

undefined4 * __thiscall Recovered_Bulk::FUN_10b50490(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116b3df0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xec));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10ab3f60(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10ab4440(uVar3));
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


// Reference entry 10b505a0; body size 213 bytes.
#line 1 "ENTRY_10b505a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b505a0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116b3e50);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xe8));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10b585d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10b589f0(uVar3));
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


// Reference entry 10b50950; body size 213 bytes.
#line 1 "ENTRY_10b50950"

undefined4 * __thiscall Recovered_Bulk::FUN_10b50950(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116b3f70);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xec));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10ab3f60(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10ab4440(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSuperGhostSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSuperGhostSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSuperGhostSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSuperGhostSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b50e00; body size 213 bytes.
#line 1 "ENTRY_10b50e00"

undefined4 * __thiscall Recovered_Bulk::FUN_10b50e00(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116b40f0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xe8));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10b585d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10b589f0(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSuperTransparentSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCSuperTransparentSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCSuperTransparentSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCSuperTransparentSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b51b20; body size 68 bytes.
#line 1 "ENTRY_10b51b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b51b20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b51ca0; body size 68 bytes.
#line 1 "ENTRY_10b51ca0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b51ca0(byte param_2)
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


// Reference entry 10b51d00; body size 68 bytes.
#line 1 "ENTRY_10b51d00"

undefined4 * __thiscall Recovered_Bulk::FUN_10b51d00(byte param_2)
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


// Reference entry 10b51d60; body size 68 bytes.
#line 1 "ENTRY_10b51d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b51d60(byte param_2)
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


// Reference entry 10b51dc0; body size 68 bytes.
#line 1 "ENTRY_10b51dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b51dc0(byte param_2)
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


// Reference entry 10b51e60; body size 68 bytes.
#line 1 "ENTRY_10b51e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b51e60(byte param_2)
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


// Reference entry 10b51f00; body size 68 bytes.
#line 1 "ENTRY_10b51f00"

undefined4 * __thiscall Recovered_Bulk::FUN_10b51f00(byte param_2)
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


// Reference entry 10b51fa0; body size 68 bytes.
#line 1 "ENTRY_10b51fa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b51fa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b52040; body size 68 bytes.
#line 1 "ENTRY_10b52040"

undefined4 * __thiscall Recovered_Bulk::FUN_10b52040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b520e0; body size 68 bytes.
#line 1 "ENTRY_10b520e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b520e0(byte param_2)
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


// Reference entry 10b52260; body size 168 bytes.
#line 1 "ENTRY_10b52260"

undefined4 * __thiscall Recovered_Bulk::FUN_10b52260(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b4427);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10b50380(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSuperBasicOmitSubwiz);
    puVar1[4] = (uint)&ghidra_vftable_SCSuperBasicOmitSubwiz;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSuperBasicOmitSubwiz;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSuperBasicOmitSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b52340; body size 168 bytes.
#line 1 "ENTRY_10b52340"

undefined4 * __thiscall Recovered_Bulk::FUN_10b52340(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b4477);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10b50380(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSuperBasicSubwiz);
    puVar1[4] = (uint)&ghidra_vftable_SCSuperBasicSubwiz;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSuperBasicSubwiz;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSuperBasicSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b52420; body size 276 bytes.
#line 1 "ENTRY_10b52420"

undefined4 * __thiscall Recovered_Bulk::FUN_10b52420(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116b44f2);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xec));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10ab3f60(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10ab4440(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSuperGhostSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSuperGhostSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSuperGhostSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSuperGhostSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b52580; body size 168 bytes.
#line 1 "ENTRY_10b52580"

undefined4 * __thiscall Recovered_Bulk::FUN_10b52580(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b4547);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSuperIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSuperIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSuperIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSuperIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b52660; body size 168 bytes.
#line 1 "ENTRY_10b52660"

undefined4 * __thiscall Recovered_Bulk::FUN_10b52660(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b4597);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSuperOutroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCSuperOutroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSuperOutroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSuperOutroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b52740; body size 276 bytes.
#line 1 "ENTRY_10b52740"

undefined4 * __thiscall Recovered_Bulk::FUN_10b52740(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116b4612);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xe8));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10b585d0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10b589f0(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSuperTransparentSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCSuperTransparentSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCSuperTransparentSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCSuperTransparentSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b528a0; body size 189 bytes.
#line 1 "ENTRY_10b528a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b528a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b4680);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSuperWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCSuperWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCSuperWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCSuperWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b536c0; body size 345 bytes.
#line 1 "ENTRY_10b536c0"

undefined4 __stdcall FUN_10b536c0(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116b4885);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4d64);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b537cf;
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
LAB_10b537cf:
                    
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


// Reference entry 10b53870; body size 345 bytes.
#line 1 "ENTRY_10b53870"

undefined4 __stdcall FUN_10b53870(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116b48c5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4d78);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b5397f;
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
LAB_10b5397f:
                    
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


// Reference entry 10b53a20; body size 345 bytes.
#line 1 "ENTRY_10b53a20"

undefined4 __stdcall FUN_10b53a20(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116b4905);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4d78);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b53b2f;
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
LAB_10b53b2f:
                    
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


// Reference entry 10b53bd0; body size 345 bytes.
#line 1 "ENTRY_10b53bd0"

undefined4 __stdcall FUN_10b53bd0(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116b4945);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4d78);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b53cdf;
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
LAB_10b53cdf:
                    
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


// Reference entry 10b53d80; body size 345 bytes.
#line 1 "ENTRY_10b53d80"

undefined4 __stdcall FUN_10b53d80(undefined4 param_1)

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
  puStack_c = (undefined1 *)(LAB_116b4985);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(DAT_121a4d78);
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
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) goto LAB_10b53e8f;
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
LAB_10b53e8f:
                    
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


// Reference entry 10b55a00; body size 68 bytes.
#line 1 "ENTRY_10b55a00"

undefined4 * __thiscall Recovered_Bulk::FUN_10b55a00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b55af0; body size 68 bytes.
#line 1 "ENTRY_10b55af0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b55af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b55b90; body size 68 bytes.
#line 1 "ENTRY_10b55b90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b55b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b55c30; body size 68 bytes.
#line 1 "ENTRY_10b55c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10b55c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b55d70; body size 168 bytes.
#line 1 "ENTRY_10b55d70"

undefined4 * __thiscall Recovered_Bulk::FUN_10b55d70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b4f87);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTimingIntroPage);
    puVar1[4] = (uint)&ghidra_vftable_SCTimingIntroPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCTimingIntroPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCTimingIntroPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b55e50; body size 168 bytes.
#line 1 "ENTRY_10b55e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b55e50(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b4fd7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTimingSpinnerPage);
    puVar1[4] = (uint)&ghidra_vftable_SCTimingSpinnerPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCTimingSpinnerPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCTimingSpinnerPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b55f30; body size 168 bytes.
#line 1 "ENTRY_10b55f30"

undefined4 * __thiscall Recovered_Bulk::FUN_10b55f30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b5027);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTimingStopwatchPage);
    puVar1[4] = (uint)&ghidra_vftable_SCTimingStopwatchPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCTimingStopwatchPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCTimingStopwatchPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b56010; body size 189 bytes.
#line 1 "ENTRY_10b56010"

undefined4 * __thiscall Recovered_Bulk::FUN_10b56010(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b5090);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTimingWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCTimingWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCTimingWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCTimingWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b58460; body size 114 bytes.
#line 1 "ENTRY_10b58460"

void FUN_10b58460(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b559d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb850(100);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b586d0; body size 213 bytes.
#line 1 "ENTRY_10b586d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b586d0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116b56a0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xe8));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a7cf20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a7d640(uVar3));
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


// Reference entry 10b587e0; body size 213 bytes.
#line 1 "ENTRY_10b587e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b587e0(undefined4 param_2)
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
  puStack_c = (undefined1 *)(LAB_116b5700);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xe8));
    local_8 = (undefined4)(0);
    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10a7cf20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10a7d640(uVar3));
    }
    local_8 = (undefined4)(2);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTransparentBasicSubwiz);
  param_1[4] = (uint)&ghidra_vftable_SCTransparentBasicSubwiz;
  param_1[0x23] = (uint)&ghidra_vftable_SCTransparentBasicSubwiz;
  param_1[0x2a] = (uint)&ghidra_vftable_SCTransparentBasicSubwiz;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b58d30; body size 68 bytes.
#line 1 "ENTRY_10b58d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10b58d30(byte param_2)
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


// Reference entry 10b58d90; body size 68 bytes.
#line 1 "ENTRY_10b58d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b58d90(byte param_2)
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


// Reference entry 10b58eb0; body size 276 bytes.
#line 1 "ENTRY_10b58eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b58eb0(undefined4 param_2,undefined4 param_3)
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
  puStack_c = (undefined1 *)(LAB_116b5892);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0xc0));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xe8));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10a7cf20(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10a7d640(uVar5));
      }
      local_8 = (undefined4)(3);
    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCTransparentBasicSubwiz);
    puVar2[4] = (uint)&ghidra_vftable_SCTransparentBasicSubwiz;
    puVar2[0x23] = (uint)&ghidra_vftable_SCTransparentBasicSubwiz;
    puVar2[0x2a] = (uint)&ghidra_vftable_SCTransparentBasicSubwiz;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b59010; body size 189 bytes.
#line 1 "ENTRY_10b59010"

undefined4 * __thiscall Recovered_Bulk::FUN_10b59010(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b5900);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCTransparentWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCTransparentWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCTransparentWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCTransparentWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b5e3f0; body size 116 bytes.
#line 1 "ENTRY_10b5e3f0"

int * __fastcall FUN_10b5e3f0(int *param_1)

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


// Reference entry 10b5e6f0; body size 68 bytes.
#line 1 "ENTRY_10b5e6f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5e6f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5eaa0; body size 68 bytes.
#line 1 "ENTRY_10b5eaa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5eaa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5eb40; body size 68 bytes.
#line 1 "ENTRY_10b5eb40"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5eb40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5ebe0; body size 68 bytes.
#line 1 "ENTRY_10b5ebe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5ebe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5ec80; body size 68 bytes.
#line 1 "ENTRY_10b5ec80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5ec80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5ed20; body size 68 bytes.
#line 1 "ENTRY_10b5ed20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5ed20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5edc0; body size 68 bytes.
#line 1 "ENTRY_10b5edc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5edc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5ee60; body size 68 bytes.
#line 1 "ENTRY_10b5ee60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5ee60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5ef00; body size 68 bytes.
#line 1 "ENTRY_10b5ef00"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5ef00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5efa0; body size 68 bytes.
#line 1 "ENTRY_10b5efa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5efa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5f040; body size 68 bytes.
#line 1 "ENTRY_10b5f040"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5f040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5f0e0; body size 68 bytes.
#line 1 "ENTRY_10b5f0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5f0e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5f180; body size 68 bytes.
#line 1 "ENTRY_10b5f180"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5f180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5f220; body size 68 bytes.
#line 1 "ENTRY_10b5f220"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5f220(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x23] = (uint)&ghidra_vftable_SCNewWizPageFor;
  param_1[0x2a] = (uint)&ghidra_vftable_SCNewWizPageFor;
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b5f2c0; body size 68 bytes.
#line 1 "ENTRY_10b5f2c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5f2c0(byte param_2)
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


// Reference entry 10b5f360; body size 68 bytes.
#line 1 "ENTRY_10b5f360"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5f360(byte param_2)
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


// Reference entry 10b5fb10; body size 168 bytes.
#line 1 "ENTRY_10b5fb10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5fb10(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7377);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoSelectionPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b5fbf0; body size 168 bytes.
#line 1 "ENTRY_10b5fbf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5fbf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b73c7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoStaggeringTestAPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestAPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestAPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestAPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b5fcd0; body size 168 bytes.
#line 1 "ENTRY_10b5fcd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5fcd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7417);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoStaggeringTestBPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestBPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestBPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestBPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b5fdb0; body size 168 bytes.
#line 1 "ENTRY_10b5fdb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5fdb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7467);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoStaggeringTestCPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestCPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestCPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoStaggeringTestCPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b5fe90; body size 168 bytes.
#line 1 "ENTRY_10b5fe90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5fe90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b74b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest1APage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest1APage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest1APage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest1APage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b5ff70; body size 168 bytes.
#line 1 "ENTRY_10b5ff70"

undefined4 * __thiscall Recovered_Bulk::FUN_10b5ff70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7507);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest1BPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest1BPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest1BPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest1BPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b60050; body size 168 bytes.
#line 1 "ENTRY_10b60050"

undefined4 * __thiscall Recovered_Bulk::FUN_10b60050(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7557);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest1CPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest1CPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest1CPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest1CPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b60130; body size 168 bytes.
#line 1 "ENTRY_10b60130"

undefined4 * __thiscall Recovered_Bulk::FUN_10b60130(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b75a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest1DPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest1DPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest1DPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest1DPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b60210; body size 168 bytes.
#line 1 "ENTRY_10b60210"

undefined4 * __thiscall Recovered_Bulk::FUN_10b60210(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b75f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest2APage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest2APage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest2APage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest2APage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b602f0; body size 168 bytes.
#line 1 "ENTRY_10b602f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b602f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7647);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest2BPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest2BPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest2BPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest2BPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b603d0; body size 168 bytes.
#line 1 "ENTRY_10b603d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b603d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7697);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest2CPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest2CPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest2CPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest2CPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b604b0; body size 168 bytes.
#line 1 "ENTRY_10b604b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b604b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b76e7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest3APage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest3APage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest3APage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest3APage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b60590; body size 168 bytes.
#line 1 "ENTRY_10b60590"

undefined4 * __thiscall Recovered_Bulk::FUN_10b60590(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7737);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe0));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTest3BPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTest3BPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTest3BPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTest3BPage;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b60670; body size 175 bytes.
#line 1 "ENTRY_10b60670"

undefined4 * __thiscall Recovered_Bulk::FUN_10b60670(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7787);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTimingsTestProductSelectionPage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTimingsTestProductSelectionPage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTimingsTestProductSelectionPage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTimingsTestProductSelectionPage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b60750; body size 175 bytes.
#line 1 "ENTRY_10b60750"

undefined4 * __thiscall Recovered_Bulk::FUN_10b60750(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b77d7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe4));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoTimingsTestVideoSequencePage);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoTimingsTestVideoSequencePage;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoTimingsTestVideoSequencePage;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoTimingsTestVideoSequencePage;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b60830; body size 189 bytes.
#line 1 "ENTRY_10b60830"

undefined4 * __thiscall Recovered_Bulk::FUN_10b60830(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b7840);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(operator_new(0xe8));
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCVideoDemoWizard);
    puVar1[4] = (uint)&ghidra_vftable_SCVideoDemoWizard;
    puVar1[0x23] = (uint)&ghidra_vftable_SCVideoDemoWizard;
    puVar1[0x2a] = (uint)&ghidra_vftable_SCVideoDemoWizard;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10b6bb30; body size 122 bytes.
#line 1 "ENTRY_10b6bb30"

void FUN_10b6bb30(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b916d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfda60(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0(&DAT_118d39d4,5000);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b6bbd0; body size 122 bytes.
#line 1 "ENTRY_10b6bbd0"

void FUN_10b6bbd0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b91ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_10def450(uVar2));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10def0d0();
  if (cVar1 != '\0') {
    thunk_FUN_10ebb8e0("timeout",5000);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b6ca80; body size 322 bytes.
#line 1 "ENTRY_10b6ca80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b6ca80(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b947d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 == *(int **)(param_1 + 8)) {
    uVar5 = (undefined4)(thunk_FUN_10314cc0(param_3,param_4));
    *param_2 = (undefined4)(uVar5);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  iVar2 = (int)(*param_4);
  if ((int *)(param_3) != piVar1) {
    piVar3 = (int *)((int *)param_4[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    *piVar1 = (int)(piVar1[-2]);
    piVar4 = (int *)((int *)piVar1[-1]);
    local_8 = (undefined4)(0);
    piVar1[1] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    thunk_FUN_10355870(param_3,piVar1 + -2,piVar1);
    if (iVar2 != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if (piVar1 != (int *)0x0) {
        *param_3 = (int)(0);
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *param_3 = (int)(iVar2);
      param_3[1] = (int)piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
    }
    local_8 = (undefined4)(1);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (undefined4)(param_3);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *piVar1 = (int)(iVar2);
  piVar3 = (int *)((int *)param_4[1]);
  piVar1[1] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b6cc40; body size 114 bytes.
#line 1 "ENTRY_10b6cc40"

undefined4 * __thiscall Recovered_Bulk::FUN_10b6cc40(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116b94bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6d510; body size 76 bytes.
#line 1 "ENTRY_10b6d510"

void __fastcall FUN_10b6d510(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b9680);
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


// Reference entry 10b6d580; body size 76 bytes.
#line 1 "ENTRY_10b6d580"

void __fastcall FUN_10b6d580(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b96b0);
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


// Reference entry 10b6d5f0; body size 76 bytes.
#line 1 "ENTRY_10b6d5f0"

void __fastcall FUN_10b6d5f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b96e0);
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


// Reference entry 10b6d660; body size 68 bytes.
#line 1 "ENTRY_10b6d660"

void __fastcall FUN_10b6d660(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b9710);
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


// Reference entry 10b6d7a0; body size 84 bytes.
#line 1 "ENTRY_10b6d7a0"

void __fastcall FUN_10b6d7a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116b97a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b6d850; body size 420 bytes.
#line 1 "ENTRY_10b6d850"

void __fastcall FUN_10b6d850(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b97d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCZoneGroup);
  if (param_1[7] != 0) {
    piVar1 = (int *)((int *)param_1[8]);
    if (piVar1 != (int *)0x0) {
      param_1[7] = 0;
      param_1[8] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    piVar1 = (int *)((int *)param_1[6]);
    if (piVar1 != (int *)0x0) {
      param_1[5] = 0;
      param_1[6] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xc]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[10]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[8]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);
  local_8 = (undefined4)(4);
  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(5);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b6da70; body size 81 bytes.
#line 1 "ENTRY_10b6da70"

int * __thiscall Recovered_Bulk::FUN_10b6da70(int *param_2)
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


// Reference entry 10b6dd80; body size 76 bytes.
#line 1 "ENTRY_10b6dd80"

void __fastcall FUN_10b6dd80(int param_1)

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


// Reference entry 10b6dde0; body size 149 bytes.
#line 1 "ENTRY_10b6dde0"

void __thiscall Recovered_Bulk::FUN_10b6dde0(int *param_2,undefined4 param_3)
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


// Reference entry 10b6e210; body size 115 bytes.
#line 1 "ENTRY_10b6e210"

undefined4 * FUN_10b6e210(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b9ac4);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x60));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10f49ce0(param_2));
  }
  local_8 = (undefined4)(0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6e2a0; body size 118 bytes.
#line 1 "ENTRY_10b6e2a0"

undefined4 * FUN_10b6e2a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b9b04);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x58));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10f43e90(param_2,param_3));
  }
  local_8 = (undefined4)(0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6f760; body size 95 bytes.
#line 1 "ENTRY_10b6f760"

undefined4 __thiscall Recovered_Bulk::FUN_10b6f760(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116b9e5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  (**(code **)(*param_1 + 0x80))(local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  thunk_FUN_103230a0(param_2);
  thunk_FUN_101f4930();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 10b6ff60; body size 608 bytes.
#line 1 "ENTRY_10b6ff60"

undefined4 __thiscall Recovered_Bulk::FUN_10b6ff60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *local_48;
  int *local_44;
  undefined4 *local_3c;
  undefined4 *local_38;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba01d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  (**(code **)(*param_1 + 0x80))(&local_48,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_30 = (int *)((int *)0x0);
  local_2c = (int *)((int *)0x0);
  local_28 = (int *)((int *)0x0);
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  piVar6 = (int *)(local_48);
  if (local_48 != (int *)(local_44)) {
    do {
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      piVar4 = (int *)((int *)piVar6[1]);
      piVar1 = (int *)((int *)*piVar6);
      local_1c = (int *)(piVar1);
      local_18 = (int *)(piVar4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (piVar1 != (int *)0x0) {
        cVar2 = (char)((**(code **)(*piVar1 + 0x58))());
        if (cVar2 == '\0') {
          cVar2 = (char)((**(code **)(*piVar1 + 0x1c))());
          if (cVar2 != '\0') {
            if (local_2c == (int *)(local_28)) {
              thunk_FUN_10314cc0(local_2c,&local_1c);
            }
            else {
              *local_2c = (int)((int)piVar1);
              local_2c[1] = (int)piVar4;
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 4))();
              }
              local_2c = (int *)(local_2c + 2);
            }
          }
        }
        else {
          thunk_FUN_1031f140(&local_3c);
          puVar5 = (undefined4 *)(local_3c);
          if (local_3c != (undefined4 *)(local_38)) {
            do {
              *(unsigned char *)((char *)&local_8 + 0) = 3;
              piVar4 = (int *)((int *)puVar5[1]);
              local_24 = (int *)((int *)*puVar5);
              local_20 = (int *)(piVar4);
              local_14 = (int *)(local_24);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 4))();
              }
              *(unsigned char *)((char *)&local_8 + 0) = 4;
              if ((local_14 != (int *)0x0) &&
                 (cVar2 = (**(code **)(*local_14 + 0x1c))(), cVar2 != '\0')) {
                if (local_2c == (int *)(local_28)) {
                  thunk_FUN_10314cc0(local_2c,&local_24);
                }
                else {
                  *local_2c = (int)((int)local_14);
                  local_2c[1] = (int)piVar4;
                  if (piVar4 != (int *)0x0) {
                    (**(code **)(*piVar4 + 4))();
                  }
                  local_2c = (int *)(local_2c + 2);
                }
              }
              *(unsigned char *)((char *)&local_8 + 0) = 5;
              if (piVar4 != (int *)0x0) {
                local_24 = (int *)((int *)0x0);
                local_20 = (int *)((int *)0x0);
                (**(code **)(*piVar4 + 8))();
              }
              puVar5 = (undefined4 *)(puVar5 + 2);
              piVar4 = (int *)(local_18);
            } while (puVar5 != (undefined4 *)(local_38));
          }
          *(unsigned char *)((char *)&local_8 + 0) = 3;
          thunk_FUN_101f4930();
        }
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (piVar4 != (int *)0x0) {
        local_1c = (int *)((int *)0x0);
        local_18 = (int *)((int *)0x0);
        (**(code **)(*piVar4 + 8))();
      }
      piVar6 = (int *)(piVar6 + 2);
    } while (piVar6 != (int *)(local_44));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_103230a0(param_2);
  piVar4 = (int *)(local_2c);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  piVar6 = (int *)(local_30);
  if (local_30 != (int *)0x0) {
    for (; (int *)(piVar6) != piVar4; piVar6 = piVar6 + 2) {
      piVar1 = (int *)((int *)piVar6[1]);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (piVar1 != (int *)0x0) {
        *piVar6 = (int)(0);
        piVar6[1] = 0;
        (**(code **)(*piVar1 + 8))();
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    uVar3 = (uint)((int)local_28 - (int)local_30 & 0xfffffff8);
    piVar6 = (int *)(local_30);
    if (0xfff < uVar3) {
      piVar6 = (int *)((int *)local_30[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)local_30 + (-4 - (int)piVar6))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar6,uVar3);
    local_30 = (int *)((int *)0x0);
    local_2c = (int *)((int *)0x0);
    local_28 = (int *)((int *)0x0);
  }
  thunk_FUN_101f4930();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 10b70270; body size 97 bytes.
#line 1 "ENTRY_10b70270"

undefined4 * __thiscall Recovered_Bulk::FUN_10b70270(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba050);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x7c))(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b702f0; body size 206 bytes.
#line 1 "ENTRY_10b702f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b702f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_116ba095);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar6 = (int *)((int *)0x0);
  piVar5 = (int *)((int *)0x0);
  iVar1 = (int)(*(int *)(param_1 + 8));
  local_8 = (int)(0);
  if (iVar1 != 0) {
    iVar3 = (int)(thunk_FUN_11138b60(iVar1 + 0x44));
    if (iVar3 != 0) {
      uVar4 = (undefined4)(thunk_FUN_11138b60(iVar1 + 0x44));
      piVar5 = (int *)((int *)thunk_FUN_1037b6f0(&local_14,uVar4));
      piVar6 = (int *)((int *)*piVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *piVar5 = (int)(0);
      if (piVar6 == (int *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    }
  }
  *param_2 = (undefined4)(piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))(uVar2);
  }
  local_8 = (int)(3);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b70fc0; body size 322 bytes.
#line 1 "ENTRY_10b70fc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b70fc0(undefined4 *param_2,int *param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba2fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 == *(int **)(param_1 + 8)) {
    uVar5 = (undefined4)(thunk_FUN_10314cc0(param_3,param_4));
    *param_2 = (undefined4)(uVar5);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  iVar2 = (int)(*param_4);
  if ((int *)(param_3) != piVar1) {
    piVar3 = (int *)((int *)param_4[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    *piVar1 = (int)(piVar1[-2]);
    piVar4 = (int *)((int *)piVar1[-1]);
    local_8 = (undefined4)(0);
    piVar1[1] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    thunk_FUN_10355870(param_3,piVar1 + -2,piVar1);
    if (iVar2 != *param_3) {
      piVar1 = (int *)((int *)param_3[1]);
      if (piVar1 != (int *)0x0) {
        *param_3 = (int)(0);
        param_3[1] = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *param_3 = (int)(iVar2);
      param_3[1] = (int)piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
    }
    local_8 = (undefined4)(1);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (undefined4)(param_3);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *piVar1 = (int)(iVar2);
  piVar3 = (int *)((int *)param_4[1]);
  piVar1[1] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b71160; body size 187 bytes.
#line 1 "ENTRY_10b71160"

undefined4 * __thiscall Recovered_Bulk::FUN_10b71160(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_116ba345);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)0x0);
  piVar3 = (int *)((int *)0x0);
  local_8 = (int)(0);
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x1c), iVar1 != 0))
  {
    piVar3 = (int *)((int *)thunk_FUN_1037bed0(&local_14,iVar1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    piVar2 = (int *)((int *)*piVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *piVar3 = (int)(0);
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  }
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (int)(3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b71270; body size 207 bytes.
#line 1 "ENTRY_10b71270"

int * __thiscall Recovered_Bulk::FUN_10b71270(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba38c);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x14) == 0) {
    pvVar3 = (void *)(operator_new(0x60));
    local_8 = (undefined4)(0);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10f49ce0(param_1));
    }
    local_8 = (undefined4)(0xffffffff);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x18));
    local_8 = (undefined4)(1);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x14) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x18) = uVar5;
  }
  local_8 = (undefined4)(0xffffffff);
  piVar4 = (int *)(*(int **)(param_1 + 0x14));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b71380; body size 184 bytes.
#line 1 "ENTRY_10b71380"

int * __thiscall Recovered_Bulk::FUN_10b71380(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba3cd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  if (param_1[3] == 0) {
    piVar2 = (int *)((int *)thunk_FUN_10f41d60(&local_14,param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    piVar1 = (int *)((int *)*piVar2);
    *piVar2 = (int)(0);
    piVar2 = (int *)((int *)param_1[4]);
    local_8 = (undefined4)(0);
    if (piVar2 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[3] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar3 = (int)(0);
    }
    else {
      iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[4] = iVar3;
    local_8 = (undefined4)(1);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  local_8 = (undefined4)(0xffffffff);
  piVar1 = (int *)((int *)param_1[3]);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b71470; body size 209 bytes.
#line 1 "ENTRY_10b71470"

int * __thiscall Recovered_Bulk::FUN_10b71470(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba41c);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar3 = (void *)(operator_new(0x58));
    local_8 = (undefined4)(0);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10f43e90(param_1,0));
    }
    local_8 = (undefined4)(0xffffffff);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x20));
    local_8 = (undefined4)(1);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x1c) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x20) = uVar5;
  }
  local_8 = (undefined4)(0xffffffff);
  piVar4 = (int *)(*(int **)(param_1 + 0x1c));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b715a0; body size 230 bytes.
#line 1 "ENTRY_10b715a0"

undefined4 __fastcall FUN_10b715a0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba465);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if ((param_1[2] != 0) &&
     (cVar2 = thunk_FUN_11138710(DAT_12126b84 ^ (uint)&stack0xfffffffc), cVar2 != '\0')) {
    ExceptionList = (void *)(local_10);
    return (undefined4)(1);
  }
  piVar3 = (int *)((int *)(**(code **)(*param_1 + 0x7c))(&local_14));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
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
  if (((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x78))(), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(*piVar1 + 0x34))(), cVar2 != '\0')) {
    local_8 = (undefined4)(4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4)(1);
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 10b71bd0; body size 64 bytes.
#line 1 "ENTRY_10b71bd0"

undefined4 __fastcall FUN_10b71bd0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = (int)(thunk_FUN_11138b60(*(int *)(param_1 + 8) + 0x44));
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
      cVar1 = (char)(FUN_10091f7e());
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_110d3140());
        if (cVar1 == '\0') {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10b71da0; body size 128 bytes.
#line 1 "ENTRY_10b71da0"

void __fastcall FUN_10b71da0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba5ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b72070; body size 232 bytes.
#line 1 "ENTRY_10b72070"

void __thiscall Recovered_Bulk::FUN_10b72070(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ba66d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b72880; body size 80 bytes.
#line 1 "ENTRY_10b72880"

void __thiscall Recovered_Bulk::FUN_10b72880(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x2c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x30));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x2c) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x30) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


// Reference entry 10b728f0; body size 303 bytes.
#line 1 "ENTRY_10b728f0"

undefined1 FUN_10b728f0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ba7bd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)0x0);
  local_8 = (undefined4)(1);
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
    (**(code **)(*piVar2 + 4))();
  }
  piVar3 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (param_3 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*param_3 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(param_1,piVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar1 = (undefined1)(thunk_FUN_10b72a70());
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(8);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10b73270; body size 88 bytes.
#line 1 "ENTRY_10b73270"

int * __thiscall Recovered_Bulk::FUN_10b73270(int *param_2)
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


// Reference entry 10b733a0; body size 116 bytes.
#line 1 "ENTRY_10b733a0"

int * __fastcall FUN_10b733a0(int *param_1)

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


// Reference entry 10b73440; body size 116 bytes.
#line 1 "ENTRY_10b73440"

int * __fastcall FUN_10b73440(int *param_1)

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


// Reference entry 10b75700; body size 220 bytes.
#line 1 "ENTRY_10b75700"

int * __thiscall Recovered_Bulk::FUN_10b75700(int *param_2)
{
  int param_1 = (int )this;
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
  puStack_c = (undefined1 *)(LAB_116baf1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_2 = (int)(0);
  param_2[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_2 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_103cda00(*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),pvVar7,param_2));
  *(undefined4 *)(*param_2 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_2);
  param_2[1] = *(int *)(param_1 + 0x24);
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
    iVar4 = (int)(*(int *)(*param_2 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_2 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_2 + 8) = *param_2;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b758b0; body size 220 bytes.
#line 1 "ENTRY_10b758b0"

int * __thiscall Recovered_Bulk::FUN_10b758b0(int *param_2)
{
  int param_1 = (int )this;
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
  puStack_c = (undefined1 *)(LAB_116baf5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_2 = (int)(0);
  param_2[1] = 0;
  pvVar7 = (void *)(operator_new(0x28));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_2 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_103cdb40(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4),pvVar7,param_2));
  *(undefined4 *)(*param_2 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_2);
  param_2[1] = *(int *)(param_1 + 0x28);
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
    iVar4 = (int)(*(int *)(*param_2 + 4));
    iVar5 = (int)(*(int *)(iVar4 + 8));
    cVar1 = (char)(*(char *)(iVar5 + 0xd));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
      iVar4 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 8));
    }
    *(int *)(*param_2 + 8) = iVar4;
  }
  else {
    *piVar2 = (int)((int)piVar2);
    *(int *)(*param_2 + 8) = *param_2;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b76c30; body size 110 bytes.
#line 1 "ENTRY_10b76c30"

void __fastcall FUN_10b76c30(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *local_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
    *(undefined4 *)puVar2[1] = 0;
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    local_4 = (int *)(param_1);
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_102ec850();
      thunk_FUN_1148a50e(puVar2,0x14);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    local_4 = (int *)(*(int **)(iVar1 + 4));
    thunk_FUN_102e9720(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10b76cc0; body size 81 bytes.
#line 1 "ENTRY_10b76cc0"

int * __thiscall Recovered_Bulk::FUN_10b76cc0(int *param_2)
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


// Reference entry 10b76d90; body size 81 bytes.
#line 1 "ENTRY_10b76d90"

int * __thiscall Recovered_Bulk::FUN_10b76d90(int *param_2)
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


// Reference entry 10b77340; body size 136 bytes.
#line 1 "ENTRY_10b77340"

float __thiscall Recovered_Bulk::FUN_10b77340(int param_2)
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


// Reference entry 10b77880; body size 87 bytes.
#line 1 "ENTRY_10b77880"

void __thiscall Recovered_Bulk::FUN_10b77880(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10b77900; body size 133 bytes.
#line 1 "ENTRY_10b77900"

void __fastcall FUN_10b77900(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10b773f0();
  return;
}


// Reference entry 10b77ad0; body size 72 bytes.
#line 1 "ENTRY_10b77ad0"

void __fastcall FUN_10b77ad0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    if ((*(int **)(iVar1 + 0x1c) != (int *)0x0) && (*(int *)(iVar1 + 0x10) != 0)) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x18))(*(int *)(iVar1 + 0x10));
    }
    piVar2 = (int *)(*(int **)(param_1 + 0x30));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      (**(code **)(*piVar2 + 8))();
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


// Reference entry 10b77bc0; body size 69 bytes.
#line 1 "ENTRY_10b77bc0"

void __fastcall FUN_10b77bc0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_102ec850();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}


// Reference entry 10b77d30; body size 222 bytes.
#line 1 "ENTRY_10b77d30"

undefined4 * FUN_10b77d30(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bb4ee);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  local_14 = (undefined4)(1);
  local_18 = (undefined4)(0xc);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("spotify.connect.adapter");
  local_18 = (undefined4)(9);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("spotify.connect.adapter");
  local_18 = (undefined4)(0xef);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("com.audible.mobile.sonos");
  local_18 = (undefined4)(0xec);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("com.pandora.dc");
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b797f0; body size 204 bytes.
#line 1 "ENTRY_10b797f0"

bool __fastcall FUN_10b797f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bbadd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x3c))(&local_14,uVar2));
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar5 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x18))(&local_18));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  iVar6 = (int)((**(code **)(*(int *)*puVar5 + 0x14))(param_1 + 0x48));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  local_8 = (undefined4)(6);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar6 == 2);
}


// Reference entry 10b7ad60; body size 454 bytes.
#line 1 "ENTRY_10b7ad60"

void __thiscall Recovered_Bulk::FUN_10b7ad60(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bbf6d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    }
    thunk_FUN_112af4e0("SCDirectControlApplication",2,"Aborting fetch from %s: no callback",puVar5,
                       uVar2);
    ExceptionList = (void *)(local_10);
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  if ((param_2 == (int *)0x0) || (param_2 != *(int **)(param_1 + 0x10))) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    }
    thunk_FUN_112af4e0("SCDirectControlApplication",1,"Error: bad connection from %s",puVar5,uVar2);
    iVar4 = (int)(**(int **)(param_1 + 0x18));
    uVar6 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(0x1f5));
    (**(code **)(iVar4 + 4))(uVar6);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10bf11c0(&param_2));
    piVar1 = (int *)((int *)*piVar3);
    local_8 = (undefined4)(0);
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
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (piVar1 == (int *)0x0) {
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
      }
      thunk_FUN_112af4e0("SCDirectControlApplication",1,"Error: null response from %s",puVar5,uVar2)
      ;
      uVar6 = (undefined4)(0x1f5);
    }
    else {
      local_14 = (int *)((int *)(**(code **)(*piVar1 + 0x14))());
      iVar4 = (int)(thunk_FUN_10bf11e0());
      if ((iVar4 == 0) && (local_14 == (int *)0xc8)) {
        uVar6 = (undefined4)((**(code **)(*piVar1 + 0x28))(&local_14));
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        thunk_FUN_101e0900(uVar6);
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 2;
      }
      uVar6 = (undefined4)(0);
    }
    iVar4 = (int)(**(int **)(param_1 + 0x18));
    uVar6 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(uVar6));
    (**(code **)(iVar4 + 4))(uVar6);
    local_8 = (undefined4)(7);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
      ExceptionList = (void *)(local_10);
      return;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b7b0b0; body size 232 bytes.
#line 1 "ENTRY_10b7b0b0"

void __fastcall FUN_10b7b0b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc01d);
  local_10 = (void *)(ExceptionList);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar6 = (int *)((int *)**(int **)(param_1 + 0xc));
  if (piVar6 != *(int **)(param_1 + 0xc)) {
    do {
      local_8 = (undefined4)(0xffffffff);
      piVar1 = (int *)((int *)piVar6[4]);
      iVar2 = (int)(piVar6[3]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar5);
      }
      iVar3 = (int)(*(int *)(iVar2 + 0x2c));
      local_8 = (undefined4)(0);
      if (iVar3 != 0) {
        if ((*(int **)(iVar3 + 0x1c) != (int *)0x0) && (*(int *)(iVar3 + 0x10) != 0)) {
          (**(code **)(**(int **)(iVar3 + 0x1c) + 0x18))(*(int *)(iVar3 + 0x10));
        }
        piVar4 = (int *)(*(int **)(iVar2 + 0x30));
        if (piVar4 != (int *)0x0) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(iVar2 + 0x30) = 0;
          (**(code **)(*piVar4 + 8))();
        }
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined4 *)(iVar2 + 0x30) = 0;
      }
      local_8 = (undefined4)(1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      piVar6 = (int *)((int *)*piVar6);
    } while (piVar6 != (int *)*(int *)(param_1 + 0xc));
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b7b470; body size 117 bytes.
#line 1 "ENTRY_10b7b470"

void __fastcall FUN_10b7b470(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc0d0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjMSDiscoveryInternalListener);
  if ((*(char *)(param_1 + 5) != '\0') && (param_1[6] != 0)) {
    if (param_1[7] != 0) {
      thunk_FUN_112af4e0("SCSwfObjMSDiscoveryListener",2,"Unsubscribe from SwfObjMSDiscovery events"
                         ,uVar1);
      thunk_FUN_110c4430(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  thunk_FUN_111a4f00();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b7b510; body size 145 bytes.
#line 1 "ENTRY_10b7b510"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7b510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc100);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjMSDiscoveryInternalListener);
  if ((*(char *)(param_1 + 5) != '\0') && (param_1[6] != 0)) {
    if (param_1[7] != 0) {
      thunk_FUN_112af4e0("SCSwfObjMSDiscoveryListener",2,"Unsubscribe from SwfObjMSDiscovery events"
                         ,uVar1);
      thunk_FUN_110c4430(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7b5d0; body size 83 bytes.
#line 1 "ENTRY_10b7b5d0"

void FUN_10b7b5d0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_111a5a30(param_1,&DAT_12119ca8,2));
  uVar1 = (uint)(*(uint *)(param_1 + 0xc));
  if (((iVar2 != 0) && (*param_2 = 1, *(uint *)(iVar2 + 0xc) <= uVar1)) &&
     (uVar1 <= *(uint *)(iVar2 + 0x10))) {
    (**(code **)(iVar2 + 0x14))
              (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 8));
    return;
  }
  thunk_FUN_111a5820(param_1,param_2);
  return;
}


// Reference entry 10b7bc50; body size 114 bytes.
#line 1 "ENTRY_10b7bc50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7bc50(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc1bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7bf50; body size 278 bytes.
#line 1 "ENTRY_10b7bf50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7bf50(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc21b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c4a0; body size 134 bytes.
#line 1 "ENTRY_10b7c4a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7c4a0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:SystemProperties:1","ReplaceAccountX",uVar3
                     ,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPReplaceAccountXAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RUpnpSPReplaceAccountXAIOOp;
  param_1[0x11b] = (uint)&ghidra_vftable_RUpnpSPReplaceAccountXAIOOp;
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c6a0; body size 292 bytes.
#line 1 "ENTRY_10b7c6a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7c6a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc2db);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpReplaceAccountX);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpReplaceAccountX);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c8e0; body size 249 bytes.
#line 1 "ENTRY_10b7c8e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7c8e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc389);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = param_2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAccount);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_8 = (undefined4)(4);
  thunk_FUN_110da8b0(uVar2);
  uVar1 = (undefined1)(thunk_FUN_110db280());
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  piVar3 = (int *)((int *)thunk_FUN_110da8b0());
  iVar4 = (int)((**(code **)(*piVar3 + 0x54))());
  if (iVar4 == 1) {
    iVar4 = (int)((**(code **)(*piVar3 + 0x5c))());
    if (((*(uint *)(iVar4 + 4) & 0x7f) - 1 & 0xfffffffe) == 10) {
      uVar1 = (undefined1)(1);
      goto LAB_10b7c9af;
    }
  }
  uVar1 = (undefined1)(0);
LAB_10b7c9af:
  *(undefined1 *)((int)param_1 + 0x2d) = uVar1;
  thunk_FUN_110da8b0();
  uVar1 = (undefined1)(thunk_FUN_110dbc10());
  *(undefined1 *)((int)param_1 + 0x2e) = uVar1;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7cde0; body size 76 bytes.
#line 1 "ENTRY_10b7cde0"

void __fastcall FUN_10b7cde0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc430);
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


// Reference entry 10b7ce50; body size 76 bytes.
#line 1 "ENTRY_10b7ce50"

void __fastcall FUN_10b7ce50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc460);
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


// Reference entry 10b7cec0; body size 76 bytes.
#line 1 "ENTRY_10b7cec0"

void __fastcall FUN_10b7cec0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc490);
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


// Reference entry 10b7cf30; body size 76 bytes.
#line 1 "ENTRY_10b7cf30"

void __fastcall FUN_10b7cf30(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc4c0);
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


// Reference entry 10b7cfa0; body size 76 bytes.
#line 1 "ENTRY_10b7cfa0"

void __fastcall FUN_10b7cfa0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc4f0);
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


// Reference entry 10b7d010; body size 76 bytes.
#line 1 "ENTRY_10b7d010"

void __fastcall FUN_10b7d010(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc520);
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


// Reference entry 10b7d080; body size 76 bytes.
#line 1 "ENTRY_10b7d080"

void __fastcall FUN_10b7d080(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc550);
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


// Reference entry 10b7d0f0; body size 76 bytes.
#line 1 "ENTRY_10b7d0f0"

void __fastcall FUN_10b7d0f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc580);
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


// Reference entry 10b7d160; body size 68 bytes.
#line 1 "ENTRY_10b7d160"

void __fastcall FUN_10b7d160(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bc5b0);
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


// Reference entry 10b7d5b0; body size 216 bytes.
#line 1 "ENTRY_10b7d5b0"

void __fastcall FUN_10b7d5b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc6d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAccount);
  piVar1 = (int *)((int *)param_1[10]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[8]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b7d6f0; body size 110 bytes.
#line 1 "ENTRY_10b7d6f0"

void __fastcall FUN_10b7d6f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc700);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleScrobbleDescriptor);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b7d780; body size 81 bytes.
#line 1 "ENTRY_10b7d780"

int * __thiscall Recovered_Bulk::FUN_10b7d780(int *param_2)
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


// Reference entry 10b7e0e0; body size 237 bytes.
#line 1 "ENTRY_10b7e0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7e0e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc790);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAccount);
  piVar1 = (int *)((int *)param_1[10]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[8]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[6]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7e260; body size 131 bytes.
#line 1 "ENTRY_10b7e260"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7e260(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bc7c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleScrobbleDescriptor);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7e310; body size 76 bytes.
#line 1 "ENTRY_10b7e310"

void __fastcall FUN_10b7e310(int param_1)

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


// Reference entry 10b7e370; body size 149 bytes.
#line 1 "ENTRY_10b7e370"

void __thiscall Recovered_Bulk::FUN_10b7e370(int *param_2,undefined4 param_3)
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


// Reference entry 10b7e6f0; body size 164 bytes.
#line 1 "ENTRY_10b7e6f0"

undefined1 FUN_10b7e6f0(void)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bca45);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)thunk_FUN_10b81ab0(&local_14));
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar2 = (undefined1)(1);
  }
  else {
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0x30))());
  }
  local_8 = (undefined4)(5);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
}


// Reference entry 10b7eb20; body size 568 bytes.
#line 1 "ENTRY_10b7eb20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7eb20(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bcb6e);
  local_10 = (void *)(ExceptionList);
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_110db210(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  thunk_FUN_110da7a0(&local_14);
  local_8 = (int)(0);
  iVar3 = (int)(thunk_FUN_110828b0());
  iVar3 = (int)((*(code *)**(undefined4 **)(iVar3 + 0x1c))());
  if (((iVar3 != 0) && (cVar1 = thunk_FUN_110d3ac0(), cVar1 != '\0')) &&
     (iVar3 = thunk_FUN_110ce190(), iVar3 != 0)) {
    iVar3 = (int)(thunk_FUN_110ce190());
    iVar3 = (int)(*(int *)(iVar3 + 0x2c));
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)(operator_new(0xd7d0));
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x48))());
        uVar13 = (undefined4)(0);
        uVar12 = (undefined4)(0);
        uVar11 = (undefined4)(2000);
        uVar10 = (undefined4)(2000);
        uVar6 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x50))
                          (2000,2000,0,0));
        thunk_FUN_111c0760(uVar5,"urn:schemas-upnp-org:service:SystemProperties:1","RemoveAccount",
                           uVar6,uVar10,uVar11,uVar12,uVar13);
        *puVar4 = (undefined4)((uint)&ghidra_vftable_RUpnpSPRemoveAccountAIOOp);
        puVar4[0x18] = (uint)&ghidra_vftable_RUpnpSPRemoveAccountAIOOp;
        puVar4[0x11b] = (uint)&ghidra_vftable_RUpnpSPRemoveAccountAIOOp;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0;
      puVar9 = (undefined1 *)(&DAT_1186d2ee);
      if (local_14 != (undefined1 *)0x0) {
        puVar9 = (undefined1 *)(local_14);
      }
      thunk_FUN_1124ffa0("AccountType",0);
      thunk_FUN_1124f350(uVar2);
      piVar7 = (int *)((int *)thunk_FUN_1124ffa0("AccountID",0));
      (**(code **)(*piVar7 + 0xc))(puVar9);
      pvVar8 = (void *)(operator_new(0x48));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (pvVar8 == (void *)0x0) {
        piVar7 = (int *)((int *)0x0);
      }
      else {
        piVar7 = (int *)((int *)thunk_FUN_101b94f0(puVar4));
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      *param_2 = (undefined4)(piVar7);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      local_8 = (int)(4);
      if (local_14 == (undefined1 *)0x0) {
        ExceptionList = (void *)(local_10);
        return (undefined4 *)(param_2);
      }
      puVar9 = (undefined1 *)(local_14 + -0x10);
      if (0xfffe < *(int *)(local_14 + -0x10)) {
        ExceptionList = (void *)(local_10);
        return (undefined4 *)(param_2);
      }
      iVar3 = (int)(thunk_FUN_1123fcd0(puVar9));
      if (iVar3 != 0) {
        ExceptionList = (void *)(local_10);
        return (undefined4 *)(param_2);
      }
      uVar2 = (undefined4)(*(undefined4 *)(local_14 + -4));
      goto LAB_10b7ed26;
    }
  }
  *param_2 = (undefined4)(0);
  local_8 = (int)(1);
  if (local_14 == (undefined1 *)0x0) {
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  puVar9 = (undefined1 *)(local_14 + -0x10);
  if (0xfffe < *(int *)(local_14 + -0x10)) {
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  iVar3 = (int)(thunk_FUN_1123fcd0(puVar9));
  if (iVar3 != 0) {
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  uVar2 = (undefined4)(*(undefined4 *)(local_14 + -4));
LAB_10b7ed26:
  *(undefined4 *)(puVar9 + 8) = 0;
  *(undefined4 *)(puVar9 + 4) = 0;
  thunk_FUN_113cfb70(local_14,uVar2);
  free(puVar9);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b80000; body size 609 bytes.
#line 1 "ENTRY_10b80000"

undefined4 * __thiscall Recovered_Bulk::FUN_10b80000(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bce8e);
  local_10 = (void *)(ExceptionList);
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_110da760(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  thunk_FUN_110da7a0(&local_18);
  local_8 = (int)(0);
  iVar3 = (int)(thunk_FUN_110828b0());
  iVar3 = (int)((*(code *)**(undefined4 **)(iVar3 + 0x1c))());
  if (((iVar3 != 0) && (cVar1 = thunk_FUN_110d3ac0(), cVar1 != '\0')) &&
     (iVar3 = thunk_FUN_110ce190(), iVar3 != 0)) {
    iVar3 = (int)(thunk_FUN_110ce190());
    iVar3 = (int)(*(int *)(iVar3 + 0x2c));
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)(operator_new(0xd7d0));
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (puVar4 == (undefined4 *)0x0) {
        local_14 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        local_14 = (undefined4 *)(puVar4);
        uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x48))());
        uVar14 = (undefined4)(0);
        uVar13 = (undefined4)(0);
        uVar12 = (undefined4)(2000);
        uVar11 = (undefined4)(2000);
        uVar6 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x50))
                          (2000,2000,0,0));
        thunk_FUN_111c0760(uVar5,"urn:schemas-upnp-org:service:SystemProperties:1",
                           "EditAccountPasswordX",uVar6,uVar11,uVar12,uVar13,uVar14);
        *puVar4 = (undefined4)((uint)&ghidra_vftable_RUpnpSPEditAccountPasswordXAIOOp);
        puVar4[0x18] = (uint)&ghidra_vftable_RUpnpSPEditAccountPasswordXAIOOp;
        puVar4[0x11b] = (uint)&ghidra_vftable_RUpnpSPEditAccountPasswordXAIOOp;
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0;
      puVar9 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
        puVar9 = (undefined1 *)((undefined1 *)*param_3);
      }
      puVar10 = (undefined1 *)(&DAT_1186d2ee);
      if (local_18 != (undefined1 *)0x0) {
        puVar10 = (undefined1 *)(local_18);
      }
      thunk_FUN_1124ffa0("AccountType",0);
      thunk_FUN_1124f350(uVar2);
      piVar7 = (int *)((int *)thunk_FUN_112501c0("AccountID"));
      (**(code **)(*piVar7 + 0xc))(puVar10);
      piVar7 = (int *)((int *)thunk_FUN_112501c0("NewAccountPassword"));
      (**(code **)(*piVar7 + 0xc))(puVar9);
      pvVar8 = (void *)(operator_new(0x48));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (pvVar8 == (void *)0x0) {
        piVar7 = (int *)((int *)0x0);
      }
      else {
        piVar7 = (int *)((int *)thunk_FUN_101b94f0(local_14));
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      *param_2 = (undefined4)(piVar7);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      local_8 = (int)(4);
      if (local_18 == (undefined1 *)0x0) {
        ExceptionList = (void *)(local_10);
        return (undefined4 *)(param_2);
      }
      puVar9 = (undefined1 *)(local_18 + -0x10);
      if (0xfffe < *(int *)(local_18 + -0x10)) {
        ExceptionList = (void *)(local_10);
        return (undefined4 *)(param_2);
      }
      iVar3 = (int)(thunk_FUN_1123fcd0(puVar9));
      if (iVar3 != 0) {
        ExceptionList = (void *)(local_10);
        return (undefined4 *)(param_2);
      }
      uVar2 = (undefined4)(*(undefined4 *)(local_18 + -4));
      goto LAB_10b8022f;
    }
  }
  *param_2 = (undefined4)(0);
  local_8 = (int)(1);
  if (local_18 == (undefined1 *)0x0) {
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  puVar9 = (undefined1 *)(local_18 + -0x10);
  if (0xfffe < *(int *)(local_18 + -0x10)) {
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  iVar3 = (int)(thunk_FUN_1123fcd0(puVar9));
  if (iVar3 != 0) {
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  uVar2 = (undefined4)(*(undefined4 *)(local_18 + -4));
LAB_10b8022f:
  *(undefined4 *)(puVar9 + 8) = 0;
  *(undefined4 *)(puVar9 + 4) = 0;
  thunk_FUN_113cfb70(local_18,uVar2);
  free(puVar9);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b82680; body size 209 bytes.
#line 1 "ENTRY_10b82680"

int * __thiscall Recovered_Bulk::FUN_10b82680(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bd5fd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar3 = (int *)(operator_new(0xc));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCBrowseService);
      piVar3[2] = param_1;
      (**(code **)(*piVar3 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0xc) = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  local_8 = (undefined4)(0xffffffff);
  piVar3 = (int *)(*(int **)(param_1 + 0xc));
  *param_2 = (int)((int)piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b82790; body size 209 bytes.
#line 1 "ENTRY_10b82790"

int * __thiscall Recovered_Bulk::FUN_10b82790(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bd63d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x14) == 0) {
    piVar3 = (int *)(operator_new(0xc));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCScrobblingService);
      piVar3[2] = param_1;
      (**(code **)(*piVar3 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x18));
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x14) = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
  local_8 = (undefined4)(0xffffffff);
  piVar3 = (int *)(*(int **)(param_1 + 0x14));
  *param_2 = (int)((int)piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b828a0; body size 209 bytes.
#line 1 "ENTRY_10b828a0"

int * __thiscall Recovered_Bulk::FUN_10b828a0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bd67d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x1c) == 0) {
    piVar3 = (int *)(operator_new(0xc));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCSimpleMessagingService);
      piVar3[2] = param_1;
      (**(code **)(*piVar3 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x20));
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x1c) = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x20) = uVar4;
  }
  local_8 = (undefined4)(0xffffffff);
  piVar3 = (int *)(*(int **)(param_1 + 0x1c));
  *param_2 = (int)((int)piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b82a20; body size 66 bytes.
#line 1 "ENTRY_10b82a20"

uint __fastcall FUN_10b82a20(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x20))());
  if (*(int *)(uVar1 + 8) != 0) {
    piVar2 = (int *)((int *)thunk_FUN_110da8b0());
    uVar1 = (uint)(0);
    if (piVar2 != (int *)0x0) {
      uVar1 = (uint)((**(code **)(*piVar2 + 0x54))());
      if (uVar1 == 1) {
        iVar3 = (int)((**(code **)(*piVar2 + 0x5c))());
        uVar1 = (uint)((*(uint *)(iVar3 + 4) & 0x7f) - 1 & 0xfffffffe);
        if (uVar1 == 10) {
          return (uint)(1);
        }
      }
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10b82c50; body size 128 bytes.
#line 1 "ENTRY_10b82c50"

void __fastcall FUN_10b82c50(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bd6bd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b82d00; body size 232 bytes.
#line 1 "ENTRY_10b82d00"

void __thiscall Recovered_Bulk::FUN_10b82d00(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bd6fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x38))();
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b84420; body size 94 bytes.
#line 1 "ENTRY_10b84420"

undefined4 __thiscall Recovered_Bulk::FUN_10b84420(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_1124ffa0("AccountType",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountID"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("NewAccountPassword"));
  (**(code **)(*piVar1 + 0xc))(param_3);
  return (undefined4)(param_1);
}


// Reference entry 10b844a0; body size 69 bytes.
#line 1 "ENTRY_10b844a0"

undefined4 __thiscall Recovered_Bulk::FUN_10b844a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_1124ffa0("AccountType",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("AccountID",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  return (undefined4)(param_1);
}


// Reference entry 10b84500; body size 190 bytes.
#line 1 "ENTRY_10b84500"

int __thiscall Recovered_Bulk::FUN_10b84500(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountUDN"));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("NewAccountID"));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("NewAccountPassword"));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountToken"));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("AccountKey"));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_112501c0("OAuthDeviceID"));
  (**(code **)(*piVar1 + 0xc))(param_2);
  uVar3 = (undefined4)(0x400);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_11250160("NewAccountUDN");
  thunk_FUN_112503c0(iVar2,uVar3);
  return (int)(param_1);
}


// Reference entry 10b84840; body size 213 bytes.
#line 1 "ENTRY_10b84840"

undefined4 * FUN_10b84840(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  size_t _Size;
  undefined4 *_Dst;
  uint uVar2;
  char *pcVar3;
  uint _Size_00;
  uint uVar4;
  
  pcVar3 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  _Size_00 = (uint)((int)pcVar3 - (int)(param_2 + 1));
  _Size = (size_t)(param_3[4]);
  if (_Size_00 <= 0x7fffffff - _Size) {
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)((undefined4 *)*param_3);
    }
    uVar2 = (uint)(_Size + _Size_00);
    uVar4 = (uint)(0xf);
    param_1[4] = 0;
    param_1[5] = 0;
    _Dst = (undefined4 *)(param_1);
    if (0xf < uVar2) {
      uVar4 = (uint)(uVar2 | 0xf);
      if (uVar4 < 0x80000000) {
        if (uVar4 < 0x16) {
          uVar4 = (uint)(0x16);
        }
      }
      else {
        uVar4 = (uint)(0x7fffffff);
      }
      _Dst = (undefined4 *)((undefined4 *)thunk_FUN_1012cab0(uVar4 + 1));
      *param_1 = (undefined4)(_Dst);
    }
    param_1[4] = uVar2;
    param_1[5] = uVar4;
    memcpy(_Dst,param_2,_Size_00);
    memcpy((void *)((int)_Dst + _Size_00),param_3,_Size);
    *(undefined1 *)((int)_Dst + uVar2) = 0;
    return (undefined4 *)(param_1);
  }
                    
  thunk_FUN_1012a4c0();
}


// Reference entry 10b84980; body size 121 bytes.
#line 1 "ENTRY_10b84980"

undefined4 * __thiscall Recovered_Bulk::FUN_10b84980(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bdbcd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  uVar2 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  local_8 = (undefined4)(0);
  param_1[1] = uVar2;
  if (uVar2 != 0) {
    thunk_FUN_1123fce0(uVar2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84a20; body size 121 bytes.
#line 1 "ENTRY_10b84a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b84a20(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bdc0d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  uVar2 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  local_8 = (undefined4)(0);
  param_1[1] = uVar2;
  if (uVar2 != 0) {
    thunk_FUN_1123fce0(uVar2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84ac0; body size 121 bytes.
#line 1 "ENTRY_10b84ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b84ac0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bdc4d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  uVar2 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  local_8 = (undefined4)(0);
  param_1[1] = uVar2;
  if (uVar2 != 0) {
    thunk_FUN_1123fce0(uVar2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84b60; body size 121 bytes.
#line 1 "ENTRY_10b84b60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b84b60(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bdc8d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  uVar2 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  local_8 = (undefined4)(0);
  param_1[1] = uVar2;
  if (uVar2 != 0) {
    thunk_FUN_1123fce0(uVar2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84d40; body size 285 bytes.
#line 1 "ENTRY_10b84d40"

undefined4 * __thiscall Recovered_Bulk::FUN_10b84d40(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bdceb);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  uVar1 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = uVar1;
  if (uVar1 != 0) {
    thunk_FUN_1123fce0(uVar1 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84eb0; body size 285 bytes.
#line 1 "ENTRY_10b84eb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b84eb0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bdd4b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  uVar1 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = uVar1;
  if (uVar1 != 0) {
    thunk_FUN_1123fce0(uVar1 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b85020; body size 285 bytes.
#line 1 "ENTRY_10b85020"

undefined4 * __thiscall Recovered_Bulk::FUN_10b85020(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bddab);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  uVar1 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = uVar1;
  if (uVar1 != 0) {
    thunk_FUN_1123fce0(uVar1 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b85190; body size 285 bytes.
#line 1 "ENTRY_10b85190"

undefined4 * __thiscall Recovered_Bulk::FUN_10b85190(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bde0b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  uVar1 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = uVar1;
  if (uVar1 != 0) {
    thunk_FUN_1123fce0(uVar1 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b88040; body size 76 bytes.
#line 1 "ENTRY_10b88040"

void __fastcall FUN_10b88040(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116be8c0);
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


// Reference entry 10b880b0; body size 76 bytes.
#line 1 "ENTRY_10b880b0"

void __fastcall FUN_10b880b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116be8f0);
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


// Reference entry 10b88120; body size 76 bytes.
#line 1 "ENTRY_10b88120"

void __fastcall FUN_10b88120(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116be920);
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


// Reference entry 10b88190; body size 76 bytes.
#line 1 "ENTRY_10b88190"

void __fastcall FUN_10b88190(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116be950);
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


// Reference entry 10b88250; body size 131 bytes.
#line 1 "ENTRY_10b88250"

void __fastcall FUN_10b88250(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116be980);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceDeleteRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RDeviceDeleteRequest;
  piVar1 = (int *)((int *)param_1[0x1895]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x1894] = 0;
    param_1[0x1895] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10b88380();
  thunk_FUN_1124a3e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b88570; body size 131 bytes.
#line 1 "ENTRY_10b88570"

void __fastcall FUN_10b88570(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116be9e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePostRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RDevicePostRequest;
  piVar1 = (int *)((int *)param_1[0x1895]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x1894] = 0;
    param_1[0x1895] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10b88380();
  thunk_FUN_1124a3e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b88670; body size 131 bytes.
#line 1 "ENTRY_10b88670"

void __fastcall FUN_10b88670(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bea10);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePutRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RDevicePutRequest;
  piVar1 = (int *)((int *)param_1[0x1895]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x1894] = 0;
    param_1[0x1895] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10b88380();
  thunk_FUN_1124a3e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b88ce0; body size 83 bytes.
#line 1 "ENTRY_10b88ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88ce0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceDeleteAIOOp);
  param_1[0x1a] = (uint)&ghidra_vftable_RDeviceDeleteAIOOp;
  param_1[2] = (uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
  param_1[0x1a] = (uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
  thunk_FUN_111c0a80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_0000449c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88d50; body size 155 bytes.
#line 1 "ENTRY_10b88d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88d50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bea40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceDeleteRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RDeviceDeleteRequest;
  piVar1 = (int *)((int *)param_1[0x1895]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x1894] = 0;
    param_1[0x1895] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10b88380();
  thunk_FUN_1124a3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6258);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b88e20; body size 83 bytes.
#line 1 "ENTRY_10b88e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88e20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceGetAIOOp);
  param_1[0x1a] = (uint)&ghidra_vftable_RDeviceGetAIOOp;
  param_1[2] = (uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp;
  param_1[0x1a] = (uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp;
  thunk_FUN_111c0a80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44a0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88f10; body size 83 bytes.
#line 1 "ENTRY_10b88f10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88f10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePostAIOOp);
  param_1[0x1a] = (uint)&ghidra_vftable_RDevicePostAIOOp;
  param_1[2] = (uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp;
  param_1[0x1a] = (uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp;
  thunk_FUN_111c0a80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_0000449c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88f80; body size 155 bytes.
#line 1 "ENTRY_10b88f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bea70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePostRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RDevicePostRequest;
  piVar1 = (int *)((int *)param_1[0x1895]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x1894] = 0;
    param_1[0x1895] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10b88380();
  thunk_FUN_1124a3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6258);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b89050; body size 83 bytes.
#line 1 "ENTRY_10b89050"

undefined4 * __thiscall Recovered_Bulk::FUN_10b89050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePutAIOOp);
  param_1[0x1a] = (uint)&ghidra_vftable_RDevicePutAIOOp;
  param_1[2] = (uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp;
  param_1[0x1a] = (uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp;
  thunk_FUN_111c0a80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_0000449c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b890c0; body size 155 bytes.
#line 1 "ENTRY_10b890c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b890c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116beaa0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePutRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RDevicePutRequest;
  piVar1 = (int *)((int *)param_1[0x1895]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x1894] = 0;
    param_1[0x1895] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10b88380();
  thunk_FUN_1124a3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6258);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b89400; body size 76 bytes.
#line 1 "ENTRY_10b89400"

void __fastcall FUN_10b89400(int param_1)

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


// Reference entry 10b89460; body size 76 bytes.
#line 1 "ENTRY_10b89460"

void __fastcall FUN_10b89460(int param_1)

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


// Reference entry 10b894c0; body size 76 bytes.
#line 1 "ENTRY_10b894c0"

void __fastcall FUN_10b894c0(int param_1)

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


// Reference entry 10b89520; body size 76 bytes.
#line 1 "ENTRY_10b89520"

void __fastcall FUN_10b89520(int param_1)

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


// Reference entry 10b89580; body size 149 bytes.
#line 1 "ENTRY_10b89580"

void __thiscall Recovered_Bulk::FUN_10b89580(int *param_2,undefined4 param_3)
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


// Reference entry 10b89660; body size 149 bytes.
#line 1 "ENTRY_10b89660"

void __thiscall Recovered_Bulk::FUN_10b89660(int *param_2,undefined4 param_3)
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


// Reference entry 10b89740; body size 149 bytes.
#line 1 "ENTRY_10b89740"

void __thiscall Recovered_Bulk::FUN_10b89740(int *param_2,undefined4 param_3)
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


// Reference entry 10b89820; body size 149 bytes.
#line 1 "ENTRY_10b89820"

void __thiscall Recovered_Bulk::FUN_10b89820(int *param_2,undefined4 param_3)
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


// Reference entry 10b899c0; body size 150 bytes.
#line 1 "ENTRY_10b899c0"

void __thiscall Recovered_Bulk::FUN_10b899c0(int param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bed5d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_2 != *(int *)(param_1 + 0x3c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x40));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0x3c) = param_2;
    *(int **)(param_1 + 0x40) = param_3;
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


// Reference entry 10b8b660; body size 183 bytes.
#line 1 "ENTRY_10b8b660"

int * __thiscall Recovered_Bulk::FUN_10b8b660(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf1dd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (param_1[0xf] == 0) {
    piVar3 = (int *)((int *)createPropertyBag());
    piVar1 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)((int *)param_1[0x10]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    param_1[0xf] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0x10] = iVar4;
    local_8 = (undefined4)(1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
  }
  local_8 = (undefined4)(0xffffffff);
  piVar1 = (int *)((int *)param_1[0xf]);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b8ce70; body size 128 bytes.
#line 1 "ENTRY_10b8ce70"

void __fastcall FUN_10b8ce70(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf51d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b8cf10; body size 128 bytes.
#line 1 "ENTRY_10b8cf10"

void __fastcall FUN_10b8cf10(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf55d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b8cfb0; body size 128 bytes.
#line 1 "ENTRY_10b8cfb0"

void __fastcall FUN_10b8cfb0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf59d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b8d050; body size 128 bytes.
#line 1 "ENTRY_10b8d050"

void __fastcall FUN_10b8d050(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf5dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b8d0f0; body size 232 bytes.
#line 1 "ENTRY_10b8d0f0"

void __thiscall Recovered_Bulk::FUN_10b8d0f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf61d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x3c))();
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b8d220; body size 232 bytes.
#line 1 "ENTRY_10b8d220"

void __thiscall Recovered_Bulk::FUN_10b8d220(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf65d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x3c))();
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b8d350; body size 232 bytes.
#line 1 "ENTRY_10b8d350"

void __thiscall Recovered_Bulk::FUN_10b8d350(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf69d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x3c))();
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b8d480; body size 232 bytes.
#line 1 "ENTRY_10b8d480"

void __thiscall Recovered_Bulk::FUN_10b8d480(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bf6dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\0')) {
    (**(code **)(*piVar1 + 0x3c))();
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b8dd50; body size 101 bytes.
#line 1 "ENTRY_10b8dd50"

undefined4 __thiscall Recovered_Bulk::FUN_10b8dd50(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  undefined1 *puVar2;
  
  thunk_FUN_1109f7f0();
  uVar1 = (undefined1)(thunk_FUN_110a0140());
  *param_2 = (undefined1)(uVar1);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x30) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x30));
  }
  thunk_FUN_1145c250(param_3,puVar2,0x19);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x24) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x24));
  }
  thunk_FUN_1145c250(param_4,puVar2,0x21);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28));
  }
  thunk_FUN_1145c250(param_5,puVar2,0x11);
  return (undefined4)(1);
}


// Reference entry 10b8e250; body size 342 bytes.
#line 1 "ENTRY_10b8e250"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8e250(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10b8e960();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_10b8e39c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_10b8e39c;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10b8e39c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10b8e396;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_10b8e396:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 10b8e550; body size 81 bytes.
#line 1 "ENTRY_10b8e550"

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

void __fastcall FID_conflict__Tidy_10b8e550(int *param_1)

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


// Reference entry 10b8e5c0; body size 89 bytes.
#line 1 "ENTRY_10b8e5c0"

void __fastcall FUN_10b8e5c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWeaklyOwnedObjectManager);
  iVar1 = (int)(param_1[1]);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[3] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


// Reference entry 10b8e6b0; body size 111 bytes.
#line 1 "ENTRY_10b8e6b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8e6b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWeaklyOwnedObjectManager);
  iVar1 = (int)(param_1[1]);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[3] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8e780; body size 89 bytes.
#line 1 "ENTRY_10b8e780"

void __thiscall Recovered_Bulk::FUN_10b8e780(int param_2,int param_3,int param_4)
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


// Reference entry 10b8e860; body size 81 bytes.
#line 1 "ENTRY_10b8e860"

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

void __fastcall FID_conflict__Tidy_10b8e860(int *param_1)

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


// Reference entry 10b8f4a0; body size 95 bytes.
#line 1 "ENTRY_10b8f4a0"

void FUN_10b8f4a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10b8fdc0; body size 93 bytes.
#line 1 "ENTRY_10b8fdc0"

int __thiscall Recovered_Bulk::FUN_10b8fdc0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116bfa3d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b90070; body size 102 bytes.
#line 1 "ENTRY_10b90070"

undefined4 * __thiscall Recovered_Bulk::FUN_10b90070(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfb1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorAutoplayRoom);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorAutoplayRoom;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b900f0; body size 102 bytes.
#line 1 "ENTRY_10b900f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b900f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfb5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorAutoplayVolume);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorAutoplayVolume;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90170; body size 102 bytes.
#line 1 "ENTRY_10b90170"

undefined4 * __thiscall Recovered_Bulk::FUN_10b90170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfb9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorIRRepeater);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorIRRepeater;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b901f0; body size 102 bytes.
#line 1 "ENTRY_10b901f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b901f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfbdd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorIRSignalLight);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorIRSignalLight;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90270; body size 102 bytes.
#line 1 "ENTRY_10b90270"

undefined4 * __thiscall Recovered_Bulk::FUN_10b90270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfc1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorIncludeGroupedRooms);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorIncludeGroupedRooms;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90370; body size 102 bytes.
#line 1 "ENTRY_10b90370"

undefined4 * __thiscall Recovered_Bulk::FUN_10b90370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfc5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorSourceLevel);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorSourceLevel;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b903f0; body size 102 bytes.
#line 1 "ENTRY_10b903f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b903f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfc9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorSourceName);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorSourceName;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90470; body size 102 bytes.
#line 1 "ENTRY_10b90470"

undefined4 * __thiscall Recovered_Bulk::FUN_10b90470(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfcdd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorStatusLight);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorStatusLight;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b904f0; body size 102 bytes.
#line 1 "ENTRY_10b904f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b904f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfd1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorTVAutoplay);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorTVAutoplay;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90570; body size 102 bytes.
#line 1 "ENTRY_10b90570"

undefined4 * __thiscall Recovered_Bulk::FUN_10b90570(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfd5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorTouchControls);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorTouchControls;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b905f0; body size 102 bytes.
#line 1 "ENTRY_10b905f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b905f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfd9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorTrueplayEnabled);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorTrueplayEnabled;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90670; body size 102 bytes.
#line 1 "ENTRY_10b90670"

undefined4 * __thiscall Recovered_Bulk::FUN_10b90670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfddd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorUngroupOnAutoplay);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorUngroupOnAutoplay;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b906f0; body size 102 bytes.
#line 1 "ENTRY_10b906f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b906f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfe1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10f56a40(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorUseAutoplayVolume);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorUseAutoplayVolume;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90830; body size 236 bytes.
#line 1 "ENTRY_10b90830"

int __fastcall FUN_10b90830(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfe50);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  iVar5 = (int)(thunk_FUN_101dcfc0(&local_18));
  if (local_18 != 0) {
    iVar5 = (int)(thunk_FUN_103d6930(param_1[2]));
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    piVar3 = (int *)(local_14 + 1);
    iVar2 = (int)(*piVar3);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      piVar3 = (int *)(local_14 + 2);
      iVar2 = (int)(*piVar3);
      iVar5 = (int)(*piVar3);
      *piVar3 = (int)(iVar2 + -1);
      UNLOCK();
      if (iVar2 + -1 == 0) {
        iVar5 = (int)((**(code **)(*local_14 + 4))());
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0xf]);
  if (piVar3 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar3 + 0x10))(piVar3 != (int *)(param_1) + 6));
    param_1[0xf] = 0;
  }
  piVar3 = (int *)((int *)param_1[5]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 2);
    iVar2 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar2 == 1) {
      iVar5 = (int)((**(code **)(*piVar3 + 4))());
    }
  }
  piVar3 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return (int)(iVar5);
}


// Reference entry 10b90960; body size 76 bytes.
#line 1 "ENTRY_10b90960"

void __fastcall FUN_10b90960(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfe80);
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


// Reference entry 10b909d0; body size 76 bytes.
#line 1 "ENTRY_10b909d0"

void __fastcall FUN_10b909d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfeb0);
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


// Reference entry 10b90a40; body size 76 bytes.
#line 1 "ENTRY_10b90a40"

void __fastcall FUN_10b90a40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bfee0);
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


// Reference entry 10b90ab0; body size 76 bytes.
#line 1 "ENTRY_10b90ab0"

void __fastcall FUN_10b90ab0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bff10);
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


// Reference entry 10b90b20; body size 76 bytes.
#line 1 "ENTRY_10b90b20"

void __fastcall FUN_10b90b20(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bff40);
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


// Reference entry 10b90b90; body size 76 bytes.
#line 1 "ENTRY_10b90b90"

void __fastcall FUN_10b90b90(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bff70);
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


// Reference entry 10b90c00; body size 76 bytes.
#line 1 "ENTRY_10b90c00"

void __fastcall FUN_10b90c00(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bffa0);
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


// Reference entry 10b90c70; body size 76 bytes.
#line 1 "ENTRY_10b90c70"

void __fastcall FUN_10b90c70(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116bffd0);
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


// Reference entry 10b90ce0; body size 76 bytes.
#line 1 "ENTRY_10b90ce0"

void __fastcall FUN_10b90ce0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c0000);
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


// Reference entry 10b90d50; body size 76 bytes.
#line 1 "ENTRY_10b90d50"

void __fastcall FUN_10b90d50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c0030);
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


// Reference entry 10b90dc0; body size 76 bytes.
#line 1 "ENTRY_10b90dc0"

void __fastcall FUN_10b90dc0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c0060);
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


// Reference entry 10b90e30; body size 76 bytes.
#line 1 "ENTRY_10b90e30"

void __fastcall FUN_10b90e30(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c0090);
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


// Reference entry 10b90fe0; body size 86 bytes.
#line 1 "ENTRY_10b90fe0"

void __fastcall FUN_10b90fe0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
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
  thunk_FUN_10b91100();
  return;
}


// Reference entry 10b91050; body size 77 bytes.
#line 1 "ENTRY_10b91050"

void __fastcall FUN_10b91050(int *param_1)

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


// Reference entry 10b91100; body size 65 bytes.
#line 1 "ENTRY_10b91100"

void __fastcall FUN_10b91100(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10b91160();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10b91160; body size 150 bytes.
#line 1 "ENTRY_10b91160"

void __fastcall FUN_10b91160(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0150);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_1);
  local_8 = (undefined4)(1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91260; body size 73 bytes.
#line 1 "ENTRY_10b91260"

void __fastcall FUN_10b91260(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar2 = (int *)((int *)param_1[3]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b912c0; body size 102 bytes.
#line 1 "ENTRY_10b912c0"

void __fastcall FUN_10b912c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0180);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91350; body size 102 bytes.
#line 1 "ENTRY_10b91350"

void __fastcall FUN_10b91350(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c01b0);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91540; body size 102 bytes.
#line 1 "ENTRY_10b91540"

void __fastcall FUN_10b91540(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0210);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b915d0; body size 102 bytes.
#line 1 "ENTRY_10b915d0"

void __fastcall FUN_10b915d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0240);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91660; body size 102 bytes.
#line 1 "ENTRY_10b91660"

void __fastcall FUN_10b91660(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0270);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91710; body size 102 bytes.
#line 1 "ENTRY_10b91710"

void __fastcall FUN_10b91710(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c02a0);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b917a0; body size 102 bytes.
#line 1 "ENTRY_10b917a0"

void __fastcall FUN_10b917a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c02d0);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91830; body size 102 bytes.
#line 1 "ENTRY_10b91830"

void __fastcall FUN_10b91830(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0300);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b918c0; body size 102 bytes.
#line 1 "ENTRY_10b918c0"

void __fastcall FUN_10b918c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0330);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91950; body size 102 bytes.
#line 1 "ENTRY_10b91950"

void __fastcall FUN_10b91950(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0360);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b919e0; body size 102 bytes.
#line 1 "ENTRY_10b919e0"

void __fastcall FUN_10b919e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0390);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91a70; body size 102 bytes.
#line 1 "ENTRY_10b91a70"

void __fastcall FUN_10b91a70(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c03c0);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91b00; body size 102 bytes.
#line 1 "ENTRY_10b91b00"

void __fastcall FUN_10b91b00(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c03f0);
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
  thunk_FUN_10b913e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b91bb0; body size 110 bytes.
#line 1 "ENTRY_10b91bb0"

void __fastcall FUN_10b91bb0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *local_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
    *(undefined4 *)puVar2[1] = 0;
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    local_4 = (int *)(param_1);
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_10b91160();
      thunk_FUN_1148a50e(puVar2,0x14);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    local_4 = (int *)(*(int **)(iVar1 + 4));
    thunk_FUN_10b8f4a0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10b91ca0; body size 81 bytes.
#line 1 "ENTRY_10b91ca0"

int * __thiscall Recovered_Bulk::FUN_10b91ca0(int *param_2)
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


// Reference entry 10b91ee0; body size 261 bytes.
#line 1 "ENTRY_10b91ee0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b91ee0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0420);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  thunk_FUN_101dcfc0(&local_18);
  if (local_18 != 0) {
    thunk_FUN_103d6930(param_1[2]);
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(local_14[1] + -1);
    local_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      iVar3 = (int)(local_14[2] + -1);
      local_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_14 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar2 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b920a0; body size 95 bytes.
#line 1 "ENTRY_10b920a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b920a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar2 = (int *)((int *)param_1[3]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b92120; body size 126 bytes.
#line 1 "ENTRY_10b92120"

int __thiscall Recovered_Bulk::FUN_10b92120(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0450);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b921d0; body size 126 bytes.
#line 1 "ENTRY_10b921d0"

int __thiscall Recovered_Bulk::FUN_10b921d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0480);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b922b0; body size 126 bytes.
#line 1 "ENTRY_10b922b0"

int __thiscall Recovered_Bulk::FUN_10b922b0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c04b0);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b92360; body size 126 bytes.
#line 1 "ENTRY_10b92360"

int __thiscall Recovered_Bulk::FUN_10b92360(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c04e0);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b92410; body size 126 bytes.
#line 1 "ENTRY_10b92410"

int __thiscall Recovered_Bulk::FUN_10b92410(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0510);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b92520; body size 126 bytes.
#line 1 "ENTRY_10b92520"

int __thiscall Recovered_Bulk::FUN_10b92520(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0540);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b925d0; body size 126 bytes.
#line 1 "ENTRY_10b925d0"

int __thiscall Recovered_Bulk::FUN_10b925d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0570);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b92680; body size 126 bytes.
#line 1 "ENTRY_10b92680"

int __thiscall Recovered_Bulk::FUN_10b92680(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c05a0);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b92730; body size 126 bytes.
#line 1 "ENTRY_10b92730"

int __thiscall Recovered_Bulk::FUN_10b92730(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c05d0);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b927e0; body size 126 bytes.
#line 1 "ENTRY_10b927e0"

int __thiscall Recovered_Bulk::FUN_10b927e0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0600);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b92890; body size 126 bytes.
#line 1 "ENTRY_10b92890"

int __thiscall Recovered_Bulk::FUN_10b92890(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0630);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b92940; body size 126 bytes.
#line 1 "ENTRY_10b92940"

int __thiscall Recovered_Bulk::FUN_10b92940(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0660);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b929f0; body size 126 bytes.
#line 1 "ENTRY_10b929f0"

int __thiscall Recovered_Bulk::FUN_10b929f0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0690);
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
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b92ce0; body size 136 bytes.
#line 1 "ENTRY_10b92ce0"

float __thiscall Recovered_Bulk::FUN_10b92ce0(int param_2)
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


// Reference entry 10b93150; body size 87 bytes.
#line 1 "ENTRY_10b93150"

void __thiscall Recovered_Bulk::FUN_10b93150(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10b931d0; body size 133 bytes.
#line 1 "ENTRY_10b931d0"

void __fastcall FUN_10b931d0(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10b92d90();
  return;
}


// Reference entry 10b932c0; body size 77 bytes.
#line 1 "ENTRY_10b932c0"

void __fastcall FUN_10b932c0(int *param_1)

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


// Reference entry 10b93330; body size 65 bytes.
#line 1 "ENTRY_10b93330"

void __fastcall FUN_10b93330(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10b91160();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10b93600; body size 69 bytes.
#line 1 "ENTRY_10b93600"

void __fastcall FUN_10b93600(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10b91160();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}


// Reference entry 10b952f0; body size 326 bytes.
#line 1 "ENTRY_10b952f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b952f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *in_stack_0000002c;
  undefined1 auStack_88 [36];
  undefined4 uStack_64;
  undefined4 uStack_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0e94);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (uint)(0);
  if (*(int *)(param_1[2] + 8) == 0) {
    (**(code **)(*param_1 + 0x34))();
  }
  uStack_3c = (undefined4)(0x10b9533f);
  pvVar1 = (void *)(operator_new(0x40));
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    uStack_3c = (undefined4)(0);
    uStack_64 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (in_stack_0000002c != (int *)0x0) {
      uStack_64 = (undefined4)((**(code **)*in_stack_0000002c)(auStack_88));
    }
    if (param_1[3] != 0) {
      LOCK();
      piVar2 = (int *)((int *)(param_1[3] + 4));
      *piVar2 = (int)(*piVar2 + 1);
      UNLOCK();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2 = (int *)((int *)thunk_FUN_10b8f670(param_1[2],param_1[3]));
  }
  piVar3 = (int *)((int *)0x0);
  local_8 = (uint)(local_8 & 0xffffff00);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  (**(code **)(*param_1 + 0x30))();
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  if (in_stack_0000002c != (int *)0x0) {
    uStack_3c = (undefined4)(0x10b95420);
    (**(code **)(*in_stack_0000002c + 0x10))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10b95cf0; body size 140 bytes.
#line 1 "ENTRY_10b95cf0"

void FUN_10b95cf0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = (void *)(ExceptionList);
  puStack_c = (undefined1 *)(LAB_116c0f50);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
    piVar2 = (int *)((int *)puVar3[4]);
    local_8 = (undefined4)(0);
    if (piVar2 != (int *)0x0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      (**(code **)(*piVar2 + 8))(uVar4);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(puVar3,0x14);
    puVar3 = (undefined4 *)(puVar1);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b95e30; body size 98 bytes.
#line 1 "ENTRY_10b95e30"

void FUN_10b95e30(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c0f80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 0x10));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x14);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b96620; body size 85 bytes.
#line 1 "ENTRY_10b96620"

void FUN_10b96620(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c1030);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b966e0; body size 95 bytes.
#line 1 "ENTRY_10b966e0"

void FUN_10b966e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10b96760; body size 95 bytes.
#line 1 "ENTRY_10b96760"

void FUN_10b96760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10b96930; body size 188 bytes.
#line 1 "ENTRY_10b96930"

ulonglong * __fastcall FUN_10b96930(ulonglong *param_1)

{
  void *pvVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c107b);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (ulonglong)(((unsigned long long)(uStack_1c) << 32 | (unsigned long long)(local_20)) & 0xffffff00ffffff00);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  local_8 = (undefined4)(1);
  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_10b9a480(0x10,*(undefined4 *)((int)param_1 + 0xc));
  ExceptionList = (void *)(local_10);
  return (ulonglong *)(param_1);
}


// Reference entry 10b96ee0; body size 175 bytes.
#line 1 "ENTRY_10b96ee0"

undefined8 * __thiscall Recovered_Bulk::FUN_10b96ee0(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c111b);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  local_8 = (undefined4)(1);
  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_10b9a480(0x10,*(undefined4 *)((int)param_1 + 0xc));
  ExceptionList = (void *)(local_10);
  return (undefined8 *)(param_1);
}


// Reference entry 10b972b0; body size 93 bytes.
#line 1 "ENTRY_10b972b0"

int __thiscall Recovered_Bulk::FUN_10b972b0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c11ad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b97390; body size 188 bytes.
#line 1 "ENTRY_10b97390"

ulonglong * __fastcall FUN_10b97390(ulonglong *param_1)

{
  void *pvVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c11fb);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (ulonglong)(((unsigned long long)(uStack_1c) << 32 | (unsigned long long)(local_20)) & 0xffffff00ffffff00);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  local_8 = (undefined4)(1);
  *(undefined4 *)(param_1 + 4) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  thunk_FUN_10b9a480(0x10,*(undefined4 *)((int)param_1 + 0xc));
  ExceptionList = (void *)(local_10);
  return (ulonglong *)(param_1);
}


// Reference entry 10b97ee0; body size 259 bytes.
#line 1 "ENTRY_10b97ee0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b97ee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  SCLibrary *pSVar2;
  int local_5c;
  int local_50;
  int *local_2c;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c14e8);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_103d5ff0(uVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLogoArtworkCache);
  param_1[2] = (uint)&ghidra_vftable_SCLogoArtworkCache;
  param_1[0xb] = param_2;
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  thunk_FUN_1011a340(*(int *)(pSVar2 + 0x4c) + 0x6c);
  param_1[10] = 2;
  if (local_5c == 3) {
    param_1[10] = 3;
  }
  else if ((local_5c == 2) || (local_5c == 4)) {
    if (local_50 == 0) {
      param_1[10] = 4;
    }
    else {
      param_1[10] = 3;
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b98450; body size 177 bytes.
#line 1 "ENTRY_10b98450"

void __fastcall FUN_10b98450(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c15e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b98540; body size 76 bytes.
#line 1 "ENTRY_10b98540"

void __fastcall FUN_10b98540(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1610);
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


// Reference entry 10b985b0; body size 76 bytes.
#line 1 "ENTRY_10b985b0"

void __fastcall FUN_10b985b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1640);
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


// Reference entry 10b98620; body size 76 bytes.
#line 1 "ENTRY_10b98620"

void __fastcall FUN_10b98620(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1670);
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


// Reference entry 10b98690; body size 76 bytes.
#line 1 "ENTRY_10b98690"

void __fastcall FUN_10b98690(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c16a0);
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


// Reference entry 10b98700; body size 76 bytes.
#line 1 "ENTRY_10b98700"

void __fastcall FUN_10b98700(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c16d0);
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


// Reference entry 10b98770; body size 76 bytes.
#line 1 "ENTRY_10b98770"

void __fastcall FUN_10b98770(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1700);
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


// Reference entry 10b987e0; body size 76 bytes.
#line 1 "ENTRY_10b987e0"

void __fastcall FUN_10b987e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1730);
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


// Reference entry 10b98850; body size 68 bytes.
#line 1 "ENTRY_10b98850"

void __fastcall FUN_10b98850(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1760);
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


// Reference entry 10b98980; body size 99 bytes.
#line 1 "ENTRY_10b98980"

void __fastcall FUN_10b98980(int param_1)

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
  thunk_FUN_10b95cf0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 10b98a00; body size 86 bytes.
#line 1 "ENTRY_10b98a00"

void __fastcall FUN_10b98a00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
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
  thunk_FUN_10b98c90();
  return;
}


// Reference entry 10b98a70; body size 77 bytes.
#line 1 "ENTRY_10b98a70"

void __fastcall FUN_10b98a70(int *param_1)

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


// Reference entry 10b98ae0; body size 77 bytes.
#line 1 "ENTRY_10b98ae0"

void __fastcall FUN_10b98ae0(int *param_1)

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


// Reference entry 10b98b50; body size 111 bytes.
#line 1 "ENTRY_10b98b50"

void __fastcall FUN_10b98b50(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c17c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 != 0) {
    piVar1 = (int *)(*(int **)(iVar3 + 0x10));
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
      iVar3 = (int)(*(int *)(param_1 + 4));
    }
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x14);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b98c90; body size 65 bytes.
#line 1 "ENTRY_10b98c90"

void __fastcall FUN_10b98c90(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10b98d60();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10b98cf0; body size 84 bytes.
#line 1 "ENTRY_10b98cf0"

void __fastcall FUN_10b98cf0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c17f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b98d60; body size 150 bytes.
#line 1 "ENTRY_10b98d60"

void __fastcall FUN_10b98d60(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c1820);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_1);
  local_8 = (undefined4)(1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b98e50; body size 315 bytes.
#line 1 "ENTRY_10b98e50"

void __fastcall FUN_10b98e50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1850);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncAAGetIOOp);
  param_1[2] = (uint)&ghidra_vftable_RAsyncAAGetIOOp;
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0x14))(uVar2);
    param_1[0xe] = 0;
  }
  if ((int *)param_1[0x3014] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3014] + 0x18))();
    if (param_1[0x3014] != 0) {
      piVar1 = (int *)((int *)param_1[0x3015]);
      if (piVar1 != (int *)0x0) {
        param_1[0x3014] = 0;
        param_1[0x3015] = 0;
        (**(code **)(*piVar1 + 8))();
      }
      param_1[0x3014] = 0;
      param_1[0x3015] = 0;
    }
  }
  piVar1 = (int *)((int *)param_1[0x3015]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x3014] = 0;
    param_1[0x3015] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x3013]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x3012] = 0;
    param_1[0x3013] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x3011]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x3011] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xb] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[8] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b99010; body size 163 bytes.
#line 1 "ENTRY_10b99010"

void __fastcall FUN_10b99010(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1880);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArtworkCacheManager);
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0x1c))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xd]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10b98980();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b99520; body size 81 bytes.
#line 1 "ENTRY_10b99520"

int * __thiscall Recovered_Bulk::FUN_10b99520(int *param_2)
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


// Reference entry 10b99590; body size 81 bytes.
#line 1 "ENTRY_10b99590"

int * __thiscall Recovered_Bulk::FUN_10b99590(int *param_2)
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


// Reference entry 10b99600; body size 81 bytes.
#line 1 "ENTRY_10b99600"

int * __thiscall Recovered_Bulk::FUN_10b99600(int *param_2)
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


// Reference entry 10b99670; body size 81 bytes.
#line 1 "ENTRY_10b99670"

int * __thiscall Recovered_Bulk::FUN_10b99670(int *param_2)
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


// Reference entry 10b99dc0; body size 107 bytes.
#line 1 "ENTRY_10b99dc0"

int __thiscall Recovered_Bulk::FUN_10b99dc0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c1950);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10b99e80; body size 337 bytes.
#line 1 "ENTRY_10b99e80"

undefined4 * __thiscall Recovered_Bulk::FUN_10b99e80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c1980);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncAAGetIOOp);
  param_1[2] = (uint)&ghidra_vftable_RAsyncAAGetIOOp;
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0x14))(uVar2);
    param_1[0xe] = 0;
  }
  if ((int *)param_1[0x3014] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3014] + 0x18))();
    if (param_1[0x3014] != 0) {
      piVar1 = (int *)((int *)param_1[0x3015]);
      if (piVar1 != (int *)0x0) {
        param_1[0x3014] = 0;
        param_1[0x3015] = 0;
        (**(code **)(*piVar1 + 8))();
      }
      param_1[0x3014] = 0;
      param_1[0x3015] = 0;
    }
  }
  piVar1 = (int *)((int *)param_1[0x3015]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (piVar1 != (int *)0x0) {
    param_1[0x3014] = 0;
    param_1[0x3015] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x3013]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    param_1[0x3012] = 0;
    param_1[0x3013] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x3011]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (piVar1 != (int *)0x0) {
    param_1[0x3011] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0xb] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[8] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc05c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a1e0; body size 65 bytes.
#line 1 "ENTRY_10b9a1e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a1e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (uint)&ghidra_vftable_SCLogoArtworkCache;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLogoArtworkCache);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a7c0; body size 137 bytes.
#line 1 "ENTRY_10b9a7c0"

uint __thiscall Recovered_Bulk::FUN_10b9a7c0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x24));
  ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
               *(float *)(param_1 + 8)));
  uVar2 = (uint)(thunk_FUN_1148ac80());
  uVar3 = (uint)(8);
  if (8 < uVar2) {
    uVar3 = (uint)(uVar2);
  }
  if (uVar3 <= uVar1) {
    return (uint)(uVar1);
  }
  if ((0x1ff < uVar1) || (uVar2 = uVar1 * 8, uVar1 * 8 < uVar3)) {
    uVar2 = (uint)(uVar3);
  }
  return (uint)(uVar2);
}


// Reference entry 10b9a870; body size 136 bytes.
#line 1 "ENTRY_10b9a870"

float __thiscall Recovered_Bulk::FUN_10b9a870(int param_2)
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


// Reference entry 10b9b0b0; body size 88 bytes.
#line 1 "ENTRY_10b9b0b0"

void __thiscall Recovered_Bulk::FUN_10b9b0b0(int param_2)
{
  int param_1 = (int )this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *(float *)(param_1 + 8))));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10b9b120; body size 87 bytes.
#line 1 "ENTRY_10b9b120"

void __thiscall Recovered_Bulk::FUN_10b9b120(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10b9b1d0; body size 134 bytes.
#line 1 "ENTRY_10b9b1d0"

void __fastcall FUN_10b9b1d0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  ceil((double)((float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
               *(float *)(param_1 + 8)));
  thunk_FUN_1148ac80();
  thunk_FUN_10b9a9d0();
  return;
}


// Reference entry 10b9b280; body size 133 bytes.
#line 1 "ENTRY_10b9b280"

void __fastcall FUN_10b9b280(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10b9ab90();
  return;
}


// Reference entry 10b9b3d0; body size 77 bytes.
#line 1 "ENTRY_10b9b3d0"

void __fastcall FUN_10b9b3d0(int *param_1)

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


// Reference entry 10b9b440; body size 77 bytes.
#line 1 "ENTRY_10b9b440"

void __fastcall FUN_10b9b440(int *param_1)

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


// Reference entry 10b9b4d0; body size 65 bytes.
#line 1 "ENTRY_10b9b4d0"

void __fastcall FUN_10b9b4d0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10b98d60();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10b9b5d0; body size 120 bytes.
#line 1 "ENTRY_10b9b5d0"

int __thiscall Recovered_Bulk::FUN_10b9b5d0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c1a50);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  piVar2 = (int *)((int *)param_2[4]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_2[3] = 0;
    param_2[4] = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
  }
  thunk_FUN_1148a50e(param_2,0x14);
  ExceptionList = (void *)(local_10);
  return (int)(iVar1);
}


// Reference entry 10b9bdf0; body size 262 bytes.
#line 1 "ENTRY_10b9bdf0"

void __fastcall FUN_10b9bdf0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x24));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x24));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  piVar2 = (int *)(*(int **)(param_1 + 0x30));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x30));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((*(int *)(param_1 + 0xc048) != 0) && (*(char *)(param_1 + 0xc058) != '\0')) {
    (**(code **)(**(int **)(param_1 + 0xc044) + 0x18))(*(int *)(param_1 + 0xc048));
    *(undefined1 *)(param_1 + 0xc058) = 0;
  }
  if (*(int **)(param_1 + 0xc050) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc050) + 0x18))();
    if (*(int *)(param_1 + 0xc050) != 0) {
      piVar2 = (int *)(*(int **)(param_1 + 0xc054));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0xc050) = 0;
        *(undefined4 *)(param_1 + 0xc054) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(undefined4 *)(param_1 + 0xc050) = 0;
      *(undefined4 *)(param_1 + 0xc054) = 0;
    }
  }
  return;
}


// Reference entry 10b9bfd0; body size 108 bytes.
#line 1 "ENTRY_10b9bfd0"

void __fastcall FUN_10b9bfd0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4 *)puVar1[1] = 0;
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    local_4 = (int)(param_1);
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_10b98d60();
      thunk_FUN_1148a50e(puVar1,0x14);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    local_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10b96760(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10b9c090; body size 69 bytes.
#line 1 "ENTRY_10b9c090"

void __fastcall FUN_10b9c090(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10b98d60();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}


// Reference entry 10b9c100; body size 65 bytes.
#line 1 "ENTRY_10b9c100"

void __fastcall FUN_10b9c100(int param_1)

{
  FILE *_File;
  undefined1 *puVar1;
  char *_Filename;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x3c) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x3c));
  }
  _File = (FILE *)((FILE *)thunk_FUN_1145cb70(puVar1,&DAT_118876d0));
  if (_File != (FILE *)0x0) {
    fclose(_File);
    _Filename = (char *)("");
    if (*(char **)(param_1 + 0x3c) != (char *)0x0) {
      _Filename = (char *)(*(char **)(param_1 + 0x3c));
    }
    _unlink(_Filename);
  }
  return;
}


// Reference entry 10b9c3b0; body size 158 bytes.
#line 1 "ENTRY_10b9c3b0"

void __fastcall FUN_10b9c3b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c1b3d);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)**(int **)(param_1 + 0x14));
  if (piVar4 != *(int **)(param_1 + 0x14)) {
    do {
      local_8 = (undefined4)(0xffffffff);
      piVar1 = (int *)((int *)piVar4[4]);
      piVar2 = (int *)((int *)piVar4[3]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar3);
      }
      local_8 = (undefined4)(0);
      (**(code **)(*piVar2 + 0x1c))();
      local_8 = (undefined4)(1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      piVar4 = (int *)((int *)*piVar4);
    } while (piVar4 != (int *)*(int *)(param_1 + 0x14));
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10b9c500; body size 274 bytes.
#line 1 "ENTRY_10b9c500"

undefined4 __thiscall Recovered_Bulk::FUN_10b9c500(byte *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1b70);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar5 = (uint)(((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
           * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
  iVar4 = (int)(thunk_FUN_10b95ba0(local_18,param_2,uVar5));
  piVar2 = (int *)(*(int **)(iVar4 + 4));
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + (*(uint *)(param_1 + 0x20) & uVar5) * 8));
    if ((int *)piVar1[1] == piVar2) {
      if ((int *)*piVar1 == (int *)(piVar2)) {
        iVar4 = (int)(*(int *)(param_1 + 0xc));
        *piVar1 = (int)(iVar4);
        piVar1[1] = iVar4;
      }
      else {
        piVar1[1] = piVar2[1];
      }
    }
    else if ((int *)*piVar1 == (int *)(piVar2)) {
      *piVar1 = (int)(*piVar2);
    }
    iVar4 = (int)(*piVar2);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    *(int *)piVar2[1] = iVar4;
    *(int *)(iVar4 + 4) = piVar2[1];
    piVar1 = (int *)((int *)piVar2[4]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      piVar2[3] = 0;
      piVar2[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    thunk_FUN_1148a50e(piVar2,0x14);
    ExceptionList = (void *)(local_10);
    return (undefined4)(1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 10b9c660; body size 164 bytes.
#line 1 "ENTRY_10b9c660"

undefined4 __thiscall Recovered_Bulk::FUN_10b9c660(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_8 [8];
  
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)*param_2);
  }
  uVar3 = (uint)(thunk_FUN_101c82e0(puVar5));
  iVar4 = (int)(thunk_FUN_10b95c20(local_8,param_2,uVar3));
  piVar2 = (int *)(*(int **)(iVar4 + 4));
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar3) * 8));
    if ((int *)piVar1[1] == piVar2) {
      if ((int *)*piVar1 == (int *)(piVar2)) {
        iVar4 = (int)(*(int *)(param_1 + 4));
        *piVar1 = (int)(iVar4);
        piVar1[1] = iVar4;
      }
      else {
        piVar1[1] = piVar2[1];
      }
    }
    else if ((int *)*piVar1 == (int *)(piVar2)) {
      *piVar1 = (int)(*piVar2);
    }
    iVar4 = (int)(*piVar2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    *(int *)piVar2[1] = iVar4;
    *(int *)(iVar4 + 4) = piVar2[1];
    thunk_FUN_10b98d60();
    thunk_FUN_1148a50e(piVar2,0x14);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10b9de60; body size 200 bytes.
#line 1 "ENTRY_10b9de60"

int * __thiscall Recovered_Bulk::FUN_10b9de60(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1d54);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x30) == 0) {
    DAT_122e8a30 = (int)(1);
    pvVar3 = (void *)(operator_new(0x30));
    local_8 = (undefined4)(0);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10b97ee0(0));
    }
    local_8 = (undefined4)(0xffffffff);
    if (piVar4 != *(int **)(param_1 + 0x30)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x34));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x30) = piVar4;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0x34) = piVar4;
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  piVar4 = (int *)(*(int **)(param_1 + 0x30));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10b9e730; body size 135 bytes.
#line 1 "ENTRY_10b9e730"

void __fastcall FUN_10b9e730(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar1 = (int *)(*(int **)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 10b9e930; body size 493 bytes.
#line 1 "ENTRY_10b9e930"

undefined4 *
FUN_10b9e930(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  int *local_20;
  int *local_1c;
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c1e9a);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_10b95f10(&local_20,&param_2));
  if (*(int *)(*piVar3 + 0xc) == 0) {
    piVar3 = (int *)(operator_new(0x3c));
    local_14 = (int *)(piVar3);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar6 = (int *)(piVar3 + 2);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCArtworkCache);
      *piVar6 = (int)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *(unsigned short *)((char *)&local_8 + 1) = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      local_1c = (int *)(piVar6);
      pvVar4 = (void *)(operator_new(0x14));
      *(void **)pvVar4 = (void *)(pvVar4);
      *(void **)((int)pvVar4 + 4) = pvVar4;
      piVar3[3] = (int)pvVar4;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      piVar3[8] = 7;
      piVar3[9] = 8;
      *piVar6 = (int)(0x3f800000);
      thunk_FUN_10b9a5a0(0x10,piVar3[3]);
      piVar3[10] = param_3;
      piVar3[0xb] = param_4;
      *(undefined1 *)(piVar3 + 0xc) = param_5;
      piVar3[0xd] = 0;
      piVar3[0xe] = 0;
    }
    piVar6 = (int *)((int *)0x0);
    local_8 = (undefined4)(0xffffffff);
    local_1c = (int *)((int *)0x0);
    local_20 = (int *)(piVar3);
    if (piVar3 != (int *)0x0) {
      piVar6 = (int *)(piVar3);
      if (*(code **)(*piVar3 + 0xc) != thunk_FUN_10b9e0c0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar2));
      }
      local_1c = (int *)(piVar6);
      (**(code **)(*piVar6 + 4))();
    }
    local_8 = (undefined4)(4);
    piVar5 = (int *)((int *)thunk_FUN_10b95f10(local_18,&param_2));
    iVar1 = (int)(*piVar5);
    if (piVar3 != *(int **)(iVar1 + 0xc)) {
      piVar5 = (int *)(*(int **)(iVar1 + 0x10));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        (**(code **)(*piVar5 + 8))();
      }
      *(int **)(iVar1 + 0xc) = piVar3;
      *(int **)(iVar1 + 0x10) = piVar6;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
    }
    *param_1 = (undefined4)(piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    local_8 = (undefined4)(5);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_1);
  }
  thunk_FUN_112af4e0("SCArtworkCacheManager",1,"Attempt to create duplicate caches with id %zu.",
                     param_2);
  *param_1 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba09c0; body size 99 bytes.
#line 1 "ENTRY_10ba09c0"

int __thiscall Recovered_Bulk::FUN_10ba09c0(int param_2)
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


// Reference entry 10ba0a40; body size 99 bytes.
#line 1 "ENTRY_10ba0a40"

int __thiscall Recovered_Bulk::FUN_10ba0a40(int param_2)
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


// Reference entry 10ba1870; body size 254 bytes.
#line 1 "ENTRY_10ba1870"

void __thiscall Recovered_Bulk::FUN_10ba1870(uint param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c24c0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar5 = (uint)(((((param_2 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ param_2 >> 8 & 0xff) * 0x1000193 ^
           param_2 >> 0x10 & 0xff) * 0x1000193 ^ param_2 >> 0x18) * 0x1000193);
  iVar4 = (int)(thunk_FUN_10b95ba0(local_18,&param_2,uVar5));
  piVar2 = (int *)(*(int **)(iVar4 + 4));
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)((int *)(*(int *)(param_1 + 0x1c) + (*(uint *)(param_1 + 0x28) & uVar5) * 8));
    if ((int *)piVar1[1] == piVar2) {
      if ((int *)*piVar1 == (int *)(piVar2)) {
        iVar4 = (int)(*(int *)(param_1 + 0x14));
        *piVar1 = (int)(iVar4);
        piVar1[1] = iVar4;
      }
      else {
        piVar1[1] = piVar2[1];
      }
    }
    else if ((int *)*piVar1 == (int *)(piVar2)) {
      *piVar1 = (int)(*piVar2);
    }
    iVar4 = (int)(*piVar2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(int *)piVar2[1] = iVar4;
    *(int *)(iVar4 + 4) = piVar2[1];
    piVar1 = (int *)((int *)piVar2[4]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      piVar2[3] = 0;
      piVar2[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    thunk_FUN_1148a50e(piVar2,0x14);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ba19c0; body size 125 bytes.
#line 1 "ENTRY_10ba19c0"

void __thiscall Recovered_Bulk::FUN_10ba19c0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    piVar2 = (int *)(*(int **)(param_1 + 0x60));
    if (piVar2 != (int *)0x0) {
      if (*(int *)(param_1 + 100) != 0) {
        (**(code **)(*piVar2 + 0x10))();
        piVar2 = (int *)(*(int **)(param_1 + 0x60));
      }
      if (piVar2 != (int *)0x0) {
        iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
        if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
          (**(code **)*piVar2)(1);
        }
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (*(char *)(param_1 + 0x59) != '\0') {
      *(undefined1 *)(param_1 + 0x59) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0x3ec;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
  }
  return;
}


// Reference entry 10ba1f00; body size 107 bytes.
#line 1 "ENTRY_10ba1f00"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba1f00(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c25bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba25b0; body size 78 bytes.
#line 1 "ENTRY_10ba25b0"

int * __thiscall Recovered_Bulk::FUN_10ba25b0(int *param_2)
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


// Reference entry 10ba2900; body size 355 bytes.
#line 1 "ENTRY_10ba2900"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba2900(undefined4 *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c2685);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  uVar11 = (uint)(0);
  puVar10 = (undefined4 *)((undefined4 *)puVar2[1]);
  cVar1 = (char)(*(char *)((int)puVar10 + 0xd));
  ppvVar3 = (void **)(&local_10);
  local_14 = (undefined4 *)(puVar2);
  puVar9 = (undefined4 *)(puVar10);
  local_10 = (void *)(ExceptionList);
  while (puVar5 = puVar10, ExceptionList = ppvVar3, cVar1 == '\0') {
    puVar10 = (undefined4 *)(param_3);
    if (0xf < (uint)param_3[5]) {
      puVar10 = (undefined4 *)((undefined4 *)*param_3);
    }
    puVar9 = (undefined4 *)(puVar5 + 4);
    if (0xf < (uint)puVar5[9]) {
      puVar9 = (undefined4 *)((undefined4 *)puVar5[4]);
    }
    uVar11 = (uint)(thunk_FUN_102bce30(puVar9,puVar5[8],puVar10,param_3[4],uVar4));
    if ((int)uVar11 < 0) {
      puVar10 = (undefined4 *)((undefined4 *)puVar5[2]);
    }
    else {
      puVar10 = (undefined4 *)((undefined4 *)*puVar5);
      local_14 = (undefined4 *)(puVar5);
    }
    uVar11 = (uint)(uVar11 >> 0x1f ^ 1);
    cVar1 = (char)(*(char *)((int)puVar10 + 0xd));
    ppvVar3 = (void **)(ExceptionList);
    puVar9 = (undefined4 *)(puVar5);
  }
  if (*(char *)((int)local_14 + 0xd) == '\0') {
    puVar10 = (undefined4 *)(local_14 + 4);
    if (0xf < (uint)local_14[9]) {
      puVar10 = (undefined4 *)((undefined4 *)local_14[4]);
    }
    puVar5 = (undefined4 *)(param_3);
    if (0xf < (uint)param_3[5]) {
      puVar5 = (undefined4 *)((undefined4 *)*param_3);
    }
    iVar6 = (int)(thunk_FUN_102bce30(puVar5,param_3[4],puVar10,local_14[8],uVar4));
    if (-1 < iVar6) {
      *param_2 = (undefined4)(local_14);
      *(undefined1 *)(param_2 + 1) = 0;
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(param_2);
    }
  }
  if (param_1[1] != 0x6666666) {
    local_8 = (undefined4)(0);
    piVar7 = (int *)(operator_new(0x28));
    local_8 = (undefined4)(1);
    thunk_FUN_10118c40(param_3);
    *piVar7 = (int)((int)puVar2);
    piVar7[1] = (int)puVar2;
    piVar7[2] = (int)puVar2;
    *(undefined2 *)(piVar7 + 3) = 0;
    uVar8 = (undefined4)(thunk_FUN_102be180(puVar9,uVar11,piVar7));
    *param_2 = (undefined4)(uVar8);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
                    
  thunk_FUN_101d7220();
}


// Reference entry 10ba2ae0; body size 268 bytes.
#line 1 "ENTRY_10ba2ae0"

void __thiscall Recovered_Bulk::FUN_10ba2ae0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c26d6);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  thunk_FUN_11262320(param_2 + 1);
  thunk_FUN_11262320((int)param_2 + 7);
  thunk_FUN_11262300((int)param_2 + 10);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
  iVar2 = (int)(param_2[4]);
  puVar1[4] = iVar2;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
  }
  iVar2 = (int)(param_2[5]);
  local_8 = (undefined4)(0);
  puVar1[5] = iVar2;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
  }
  iVar2 = (int)(param_2[6]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  puVar1[6] = iVar2;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
  }
  iVar2 = (int)(param_2[7]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar1[7] = iVar2;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
  }
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((int)puVar1 + 0x22) = *(undefined1 *)((int)param_2 + 0x22);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x24;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ba2c50; body size 482 bytes.
#line 1 "ENTRY_10ba2c50"

int __thiscall Recovered_Bulk::FUN_10ba2c50(int param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c271d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_1);
  iVar6 = (int)((param_1[1] - iVar1) / 0x24);
  if (iVar6 == 0x71c71c7) {
                    
    thunk_FUN_10baa640();
  }
  uVar2 = (uint)(iVar6 + 1);
  uVar7 = (uint)((param_1[2] - iVar1) / 0x24);
  if (0x71c71c7 - (uVar7 >> 1) < uVar7) {
    uVar7 = (uint)(0x71c71c7);
  }
  else {
    uVar7 = (uint)((uVar7 >> 1) + uVar7);
    if (uVar7 < uVar2) {
      uVar7 = (uint)(uVar2);
    }
  }
  iVar3 = (int)(thunk_FUN_10baa760(uVar7));
  local_8 = (undefined4)(0);
  iVar1 = (int)(iVar3 + ((param_2 - iVar1) / 0x24) * 0x24);
  thunk_FUN_10ba5d90(param_3);
  iVar6 = (int)(param_1[1]);
  iVar5 = (int)(*param_1);
  if (param_2 == iVar6) {
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    for (; iVar5 != iVar6; iVar5 = iVar5 + 0x24) {
      thunk_FUN_10ba5d90(iVar5);
    }
  }
  else {
    thunk_FUN_10baa360(iVar5,param_2,iVar3);
    thunk_FUN_10baa360(param_2,param_1[1],iVar1 + 0x24);
  }
  iVar6 = (int)(*param_1);
  if (iVar6 != 0) {
    iVar5 = (int)(param_1[1]);
    if (iVar6 != iVar5) {
      do {
        thunk_FUN_10ba6fd0();
        iVar6 = (int)(iVar6 + 0x24);
      } while (iVar6 != iVar5);
      iVar6 = (int)(*param_1);
    }
    uVar4 = (uint)(((param_1[2] - iVar6) / 0x24) * 0x24);
    iVar5 = (int)(iVar6);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iVar6 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar6 - iVar5) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
  }
  *param_1 = (int)(iVar3);
  param_1[1] = iVar3 + uVar2 * 0x24;
  param_1[2] = iVar3 + uVar7 * 0x24;
  ExceptionList = (void *)(local_10);
  return (int)(iVar1);
}


// Reference entry 10ba3020; body size 246 bytes.
#line 1 "ENTRY_10ba3020"

void __thiscall Recovered_Bulk::FUN_10ba3020(int *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *local_8;
  
  param_1 = (int *)((int *)*param_1);
  piVar8 = (int *)(param_1 + 1);
  local_8 = (int *)((int *)*piVar8);
  cVar1 = (char)(*(char *)((int)local_8 + 0xd));
  piVar3 = (int *)(param_1);
  while (cVar1 == '\0') {
    piVar9 = (int *)(local_8 + 4);
    puVar5 = (undefined4 *)(param_3);
    if (0xf < (uint)param_3[5]) {
      puVar5 = (undefined4 *)((undefined4 *)*param_3);
    }
    piVar7 = (int *)(piVar9);
    if (0xf < (uint)local_8[9]) {
      piVar7 = (int *)((int *)*piVar9);
    }
    iVar6 = (int)(local_8[8]);
    iVar4 = (int)(thunk_FUN_102bce30(piVar7,iVar6,puVar5,param_3[4]));
    if (iVar4 < 0) {
      piVar9 = (int *)((int *)local_8[2]);
      local_8 = (int *)(piVar3);
    }
    else {
      if (*(char *)((int)param_1 + 0xd) != '\0') {
        if (0xf < (uint)local_8[9]) {
          piVar9 = (int *)((int *)*piVar9);
        }
        puVar5 = (undefined4 *)(param_3);
        if (0xf < (uint)param_3[5]) {
          puVar5 = (undefined4 *)((undefined4 *)*param_3);
        }
        iVar6 = (int)(thunk_FUN_102bce30(puVar5,param_3[4],piVar9,iVar6));
        if (iVar6 < 0) {
          param_1 = (int *)(local_8);
        }
      }
      piVar9 = (int *)((int *)*local_8);
    }
    piVar3 = (int *)(local_8);
    local_8 = (int *)(piVar9);
    cVar1 = (char)(*(char *)((int)piVar9 + 0xd));
  }
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    piVar8 = (int *)(param_1);
  }
  if (*(char *)(*piVar8 + 0xd) == '\0') {
    uVar2 = (uint)(param_3[5]);
    piVar8 = (int *)((int *)*piVar8);
    do {
      piVar9 = (int *)(piVar8 + 4);
      if (0xf < (uint)piVar8[9]) {
        piVar9 = (int *)((int *)piVar8[4]);
      }
      puVar5 = (undefined4 *)(param_3);
      if (0xf < uVar2) {
        puVar5 = (undefined4 *)((undefined4 *)*param_3);
      }
      iVar6 = (int)(thunk_FUN_102bce30(puVar5,param_3[4],piVar9,piVar8[8]));
      if (iVar6 < 0) {
        piVar9 = (int *)((int *)*piVar8);
        param_1 = (int *)(piVar8);
      }
      else {
        piVar9 = (int *)((int *)piVar8[2]);
      }
      piVar8 = (int *)(piVar9);
    } while (*(char *)((int)piVar9 + 0xd) == '\0');
  }
  param_2[1] = (int)param_1;
  *param_2 = (int)((int)piVar3);
  return;
}


// Reference entry 10ba3160; body size 71 bytes.
#line 1 "ENTRY_10ba3160"

void __thiscall Recovered_Bulk::FUN_10ba3160(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_10ba31f0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x2c);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x2c);
  return;
}


// Reference entry 10ba3340; body size 73 bytes.
#line 1 "ENTRY_10ba3340"

int * __thiscall Recovered_Bulk::FUN_10ba3340(int *param_2,int *param_3)
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


// Reference entry 10ba3520; body size 121 bytes.
#line 1 "ENTRY_10ba3520"

undefined4 * FUN_10ba3520(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c27c5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 10ba3a10; body size 250 bytes.
#line 1 "ENTRY_10ba3a10"

int * __thiscall Recovered_Bulk::FUN_10ba3a10(int *param_2,int *param_3)
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
  puStack_c = (undefined1 *)(LAB_116c27fd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10ba3340(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0x5d1745d) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x2c));
    puVar3[4] = *param_3;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10ba98c0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 10ba3b50; body size 261 bytes.
#line 1 "ENTRY_10ba3b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba3b50(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c283d);
  local_10 = (void *)(ExceptionList);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar6 = (bool)(false);
  puVar7 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar5 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar7);
    do {
      puVar7 = (undefined4 *)(puVar2);
      bVar6 = (bool)(*param_3 <= (int)puVar7[4]);
      if (bVar6) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar7);
        puVar5 = (undefined4 *)(puVar7);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar7[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar5 + 0xd) == '\0') && ((int)puVar5[4] <= *param_3)) {
    *param_2 = (undefined4)(puVar5);
    *(undefined1 *)(param_2 + 1) = 0;
    return (undefined4 *)(param_2);
  }
  ExceptionList = (void *)(&local_10);
  if (param_1[1] == 0x9249249) {
                    
    thunk_FUN_101d7220(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  piVar3 = (int *)(operator_new(0x1c));
  piVar3[4] = *param_3;
  piVar3[5] = 0;
  piVar3[6] = 0;
  *piVar3 = (int)((int)puVar1);
  piVar3[1] = (int)puVar1;
  piVar3[2] = (int)puVar1;
  *(undefined2 *)(piVar3 + 3) = 0;
  uVar4 = (undefined4)(thunk_FUN_10ba9b50(puVar7,bVar6,piVar3));
  *param_2 = (undefined4)(uVar4);
  *(undefined1 *)(param_2 + 1) = 1;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10ba3ca0; body size 112 bytes.
#line 1 "ENTRY_10ba3ca0"

int __stdcall FUN_10ba3ca0(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c287d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x24) {
    thunk_FUN_10ba5d90(param_1);
    param_3 = (int)(param_3 + 0x24);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_3);
}


// Reference entry 10ba3d40; body size 113 bytes.
#line 1 "ENTRY_10ba3d40"

int FUN_10ba3d40(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c28bd);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x24) {
    thunk_FUN_10ba5d90(param_1);
    param_3 = (int)(param_3 + 0x24);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_3);
}


// Reference entry 10ba3dd0; body size 317 bytes.
#line 1 "ENTRY_10ba3dd0"

undefined4 * FUN_10ba3dd0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_116c291e);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (int)(0);
  if (param_1 != param_2) {
    iVar3 = (int)(param_1 + 7);
    do {
      *param_3 = (undefined4)(*(undefined4 *)(iVar3 + -7));
      thunk_FUN_11262320(iVar3 + -3);
      thunk_FUN_11262320(iVar3);
      thunk_FUN_11262300(iVar3 + 3);
      *(undefined1 *)(param_3 + 3) = *(undefined1 *)(iVar3 + 5);
      iVar1 = (int)(*(int *)(iVar3 + 9));
      param_3[4] = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
      }
      iVar1 = (int)(*(int *)(iVar3 + 0xd));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      param_3[5] = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
      }
      iVar1 = (int)(*(int *)(iVar3 + 0x11));
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      param_3[6] = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
      }
      iVar1 = (int)(*(int *)(iVar3 + 0x15));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      param_3[7] = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
      }
      *(undefined2 *)(param_3 + 8) = *(undefined2 *)(iVar3 + 0x19);
      *(undefined1 *)((int)param_3 + 0x22) = *(undefined1 *)(iVar3 + 0x1b);
      param_3 = (undefined4 *)(param_3 + 9);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      iVar1 = (int)(iVar3 + 0x1d);
      iVar3 = (int)(iVar3 + 0x24);
    } while (iVar1 != param_2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_3);
}


// Reference entry 10ba4140; body size 257 bytes.
#line 1 "ENTRY_10ba4140"

void FUN_10ba4140(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c2976);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(*param_3);
  thunk_FUN_11262320(param_3 + 1);
  thunk_FUN_11262320((int)param_3 + 7);
  thunk_FUN_11262300((int)param_3 + 10);
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_3 + 3);
  iVar1 = (int)(param_3[4]);
  param_2[4] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_3[5]);
  local_8 = (undefined4)(0);
  param_2[5] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_3[6]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  param_2[6] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  iVar1 = (int)(param_3[7]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  param_2[7] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_3 + 8);
  *(undefined1 *)((int)param_2 + 0x22) = *(undefined1 *)((int)param_3 + 0x22);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ba5870; body size 93 bytes.
#line 1 "ENTRY_10ba5870"

int __thiscall Recovered_Bulk::FUN_10ba5870(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c2c7d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10ba58f0; body size 87 bytes.
#line 1 "ENTRY_10ba58f0"

int __thiscall Recovered_Bulk::FUN_10ba58f0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
        param_2[9] = 0;
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return (int)(param_1);
}


// Reference entry 10ba5960; body size 93 bytes.
#line 1 "ENTRY_10ba5960"

int __thiscall Recovered_Bulk::FUN_10ba5960(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c2cbd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10ba5a80; body size 229 bytes.
#line 1 "ENTRY_10ba5a80"

int * __thiscall Recovered_Bulk::FUN_10ba5a80(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = (void *)(ExceptionList);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c2d05);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar5 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar5 != iVar1) {
    iVar2 = (int)((iVar1 - iVar5) / 0x24);
    iVar4 = (int)(thunk_FUN_10baa760(iVar2));
    *param_1 = (int)(iVar4);
    param_1[1] = iVar4;
    param_1[2] = iVar4 + iVar2 * 0x24;
    local_8 = (undefined4)(1);
    do {
      thunk_FUN_10ba5d90(iVar5);
      iVar4 = (int)(iVar4 + 0x24);
      iVar5 = (int)(iVar5 + 0x24);
    } while (iVar5 != iVar1);
    param_1[1] = iVar4;
    ExceptionList = (void *)(local_10);
    return (int *)(param_1);
  }
  ExceptionList = (void *)(pvVar3);
  return (int *)(param_1);
}


// Reference entry 10ba5c40; body size 261 bytes.
#line 1 "ENTRY_10ba5c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba5c40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c2d56);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_11262320(param_2 + 1);
  thunk_FUN_11262320((int)param_2 + 7);
  thunk_FUN_11262300((int)param_2 + 10);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  iVar1 = (int)(param_2[4]);
  param_1[4] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[5]);
  local_8 = (undefined4)(0);
  param_1[5] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[6]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  param_1[6] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  iVar1 = (int)(param_2[7]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  param_1[7] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((int)param_1 + 0x22) = *(undefined1 *)((int)param_2 + 0x22);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5d90; body size 261 bytes.
#line 1 "ENTRY_10ba5d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba5d90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c2db6);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_11262320(param_2 + 1);
  thunk_FUN_11262320((int)param_2 + 7);
  thunk_FUN_11262300((int)param_2 + 10);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  iVar1 = (int)(param_2[4]);
  param_1[4] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[5]);
  local_8 = (undefined4)(0);
  param_1[5] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[6]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  param_1[6] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  iVar1 = (int)(param_2[7]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  param_1[7] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((int)param_1 + 0x22) = *(undefined1 *)((int)param_2 + 0x22);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5f20; body size 200 bytes.
#line 1 "ENTRY_10ba5f20"

int * __thiscall Recovered_Bulk::FUN_10ba5f20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c2e05);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar3 != iVar1) {
    iVar4 = (int)((iVar1 - iVar3) / 0x24);
    iVar2 = (int)(thunk_FUN_10baa760(iVar4));
    *param_1 = (int)(iVar2);
    param_1[1] = iVar2;
    param_1[2] = iVar2 + iVar4 * 0x24;
    iVar4 = (int)(*param_1);
    local_8 = (undefined4)(1);
    do {
      thunk_FUN_10ba5d90(iVar3);
      iVar4 = (int)(iVar4 + 0x24);
      iVar3 = (int)(iVar3 + 0x24);
    } while (iVar3 != iVar1);
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10ba67a0; body size 88 bytes.
#line 1 "ENTRY_10ba67a0"

void __fastcall FUN_10ba67a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c2fd0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ba6820; body size 236 bytes.
#line 1 "ENTRY_10ba6820"

int __fastcall FUN_10ba6820(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c3000);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  iVar5 = (int)(thunk_FUN_101dcfc0(&local_18));
  if (local_18 != 0) {
    iVar5 = (int)(thunk_FUN_103d6930(param_1[2]));
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    piVar3 = (int *)(local_14 + 1);
    iVar2 = (int)(*piVar3);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      piVar3 = (int *)(local_14 + 2);
      iVar2 = (int)(*piVar3);
      iVar5 = (int)(*piVar3);
      *piVar3 = (int)(iVar2 + -1);
      UNLOCK();
      if (iVar2 + -1 == 0) {
        iVar5 = (int)((**(code **)(*local_14 + 4))());
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0xf]);
  if (piVar3 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar3 + 0x10))(piVar3 != (int *)(param_1) + 6));
    param_1[0xf] = 0;
  }
  piVar3 = (int *)((int *)param_1[5]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 2);
    iVar2 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar2 == 1) {
      iVar5 = (int)((**(code **)(*piVar3 + 4))());
    }
  }
  piVar3 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return (int)(iVar5);
}


// Reference entry 10ba6970; body size 76 bytes.
#line 1 "ENTRY_10ba6970"

void __fastcall FUN_10ba6970(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c3030);
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


// Reference entry 10ba69e0; body size 76 bytes.
#line 1 "ENTRY_10ba69e0"

void __fastcall FUN_10ba69e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c3060);
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


// Reference entry 10ba6a50; body size 76 bytes.
#line 1 "ENTRY_10ba6a50"

void __fastcall FUN_10ba6a50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c3090);
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


// Reference entry 10ba6ac0; body size 76 bytes.
#line 1 "ENTRY_10ba6ac0"

void __fastcall FUN_10ba6ac0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c30c0);
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


// Reference entry 10ba6b90; body size 92 bytes.
#line 1 "ENTRY_10ba6b90"

void __fastcall FUN_10ba6b90(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c3120);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ba6fd0; body size 309 bytes.
#line 1 "ENTRY_10ba6fd0"

void __fastcall FUN_10ba6fd0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c31b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*(int *)(param_1 + 0x1c));
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  local_8 = (undefined4)(1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  local_8 = (undefined4)(2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  local_8 = (undefined4)(3);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ba74a0; body size 69 bytes.
#line 1 "ENTRY_10ba74a0"

void __fastcall FUN_10ba74a0(int *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c3240);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ba7500; body size 76 bytes.
#line 1 "ENTRY_10ba7500"

void __fastcall FUN_10ba7500(int *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c3270);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)(*(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10ba7570; body size 81 bytes.
#line 1 "ENTRY_10ba7570"

int * __thiscall Recovered_Bulk::FUN_10ba7570(int *param_2)
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


// Reference entry 10ba75e0; body size 81 bytes.
#line 1 "ENTRY_10ba75e0"

int * __thiscall Recovered_Bulk::FUN_10ba75e0(int *param_2)
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


// Reference entry 10ba7650; body size 81 bytes.
#line 1 "ENTRY_10ba7650"

int * __thiscall Recovered_Bulk::FUN_10ba7650(int *param_2)
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


// Reference entry 10ba76c0; body size 81 bytes.
#line 1 "ENTRY_10ba76c0"

int * __thiscall Recovered_Bulk::FUN_10ba76c0(int *param_2)
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


// Reference entry 10ba78d0; body size 217 bytes.
#line 1 "ENTRY_10ba78d0"

int __thiscall Recovered_Bulk::FUN_10ba78d0(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c32ad);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10ba3340(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x5d1745d) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x2c));
    puVar3[4] = *param_2;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10ba98c0(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 10ba79e0; body size 228 bytes.
#line 1 "ENTRY_10ba79e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba79e0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c32ed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar5 = (bool)(false);
  puVar6 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar4 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar6);
    do {
      puVar6 = (undefined4 *)(puVar2);
      bVar5 = (bool)(*param_2 <= (int)puVar6[4]);
      if (bVar5) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar6);
        puVar4 = (undefined4 *)(puVar6);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar6[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar4 + 0xd) != '\0') || (*param_2 < (int)puVar4[4])) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    local_8 = (undefined4)(0);
    piVar3 = (int *)(operator_new(0x1c));
    piVar3[4] = *param_2;
    piVar3[5] = 0;
    piVar3[6] = 0;
    *piVar3 = (int)((int)puVar1);
    piVar3[1] = (int)puVar1;
    piVar3[2] = (int)puVar1;
    *(undefined2 *)(piVar3 + 3) = 0;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10ba9b50(puVar6,bVar5,piVar3));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar4 + 5);
}


// Reference entry 10ba7f00; body size 261 bytes.
#line 1 "ENTRY_10ba7f00"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba7f00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c3320);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  thunk_FUN_101dcfc0(&local_18);
  if (local_18 != 0) {
    thunk_FUN_103d6930(param_1[2]);
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(local_14[1] + -1);
    local_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      iVar3 = (int)(local_14[2] + -1);
      local_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_14 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar2 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba8090; body size 113 bytes.
#line 1 "ENTRY_10ba8090"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba8090(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c3350);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba84c0; body size 77 bytes.
#line 1 "ENTRY_10ba84c0"

void __fastcall FUN_10ba84c0(undefined4 *param_1)

{
  void *_Src;
  uint uVar1;
  void *pvVar2;
  
  _Src = (void *)((void *)*param_1);
  memcpy(param_1,_Src,param_1[4] + 1);
  uVar1 = (uint)(param_1[5] + 1);
  pvVar2 = (void *)(_Src);
  if (0xfff < uVar1) {
    pvVar2 = (void *)(*(void **)((int)_Src + -4));
    uVar1 = (uint)(param_1[5] + 0x24);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar2))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar2,uVar1);
  param_1[5] = 0xf;
  return;
}


// Reference entry 10ba85b0; body size 141 bytes.
#line 1 "ENTRY_10ba85b0"

void __thiscall Recovered_Bulk::FUN_10ba85b0(int param_2,int param_3,int param_4)
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
        thunk_FUN_10ba6fd0();
        iVar2 = (int)(iVar2 + 0x24);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x24) * 0x24);
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
  param_1[1] = param_2 + param_3 * 0x24;
  param_1[2] = param_2 + param_4 * 0x24;
  return;
}


// Reference entry 10ba86d0; body size 124 bytes.
#line 1 "ENTRY_10ba86d0"

undefined4 * __fastcall FUN_10ba86d0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c3635);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 10ba9df0; body size 79 bytes.
#line 1 "ENTRY_10ba9df0"

void __thiscall Recovered_Bulk::FUN_10ba9df0(int param_2)
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


// Reference entry 10ba9e60; body size 79 bytes.
#line 1 "ENTRY_10ba9e60"

void __thiscall Recovered_Bulk::FUN_10ba9e60(int param_2)
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


// Reference entry 10baa100; body size 83 bytes.
#line 1 "ENTRY_10baa100"

void __thiscall Recovered_Bulk::FUN_10baa100(int *param_2)
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


// Reference entry 10baa170; body size 83 bytes.
#line 1 "ENTRY_10baa170"

void __thiscall Recovered_Bulk::FUN_10baa170(int *param_2)
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


// Reference entry 10baa2c0; body size 127 bytes.
#line 1 "ENTRY_10baa2c0"

void __fastcall FUN_10baa2c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_10ba6fd0();
        iVar2 = (int)(iVar2 + 0x24);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0x24) * 0x24);
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


// Reference entry 10baa360; body size 319 bytes.
#line 1 "ENTRY_10baa360"

undefined4 * __stdcall FUN_10baa360(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_116c36ee);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (int)(0);
  if (param_1 != param_2) {
    iVar3 = (int)(param_1 + 7);
    do {
      *param_3 = (undefined4)(*(undefined4 *)(iVar3 + -7));
      thunk_FUN_11262320(iVar3 + -3);
      thunk_FUN_11262320(iVar3);
      thunk_FUN_11262300(iVar3 + 3);
      *(undefined1 *)(param_3 + 3) = *(undefined1 *)(iVar3 + 5);
      iVar1 = (int)(*(int *)(iVar3 + 9));
      param_3[4] = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
      }
      iVar1 = (int)(*(int *)(iVar3 + 0xd));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      param_3[5] = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
      }
      iVar1 = (int)(*(int *)(iVar3 + 0x11));
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      param_3[6] = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
      }
      iVar1 = (int)(*(int *)(iVar3 + 0x15));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      param_3[7] = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
        thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
      }
      *(undefined2 *)(param_3 + 8) = *(undefined2 *)(iVar3 + 0x19);
      *(undefined1 *)((int)param_3 + 0x22) = *(undefined1 *)(iVar3 + 0x1b);
      param_3 = (undefined4 *)(param_3 + 9);
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      iVar1 = (int)(iVar3 + 0x1d);
      iVar3 = (int)(iVar3 + 0x24);
    } while (iVar1 != param_2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_3);
}


// Reference entry 10baa4f0; body size 110 bytes.
#line 1 "ENTRY_10baa4f0"

void FUN_10baa4f0(int param_1,int param_2)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c372d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x24) {
    thunk_FUN_10ba5d90(param_1);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10baa580; body size 110 bytes.
#line 1 "ENTRY_10baa580"

void FUN_10baa580(int param_1,int param_2)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c376d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x24) {
    thunk_FUN_10ba5d90(param_1);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10baa760; body size 90 bytes.
#line 1 "ENTRY_10baa760"

void * FUN_10baa760(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x71c71c8) {
    param_1 = (uint)(param_1 * 0x24);
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


// Reference entry 10baa8f0; body size 67 bytes.
#line 1 "ENTRY_10baa8f0"

void __fastcall FUN_10baa8f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = (int)(*param_1);
  cVar1 = (char)(*(char *)((int)*(int **)(iVar2 + 4) + 0xd));
  piVar4 = (int *)(*(int **)(iVar2 + 4));
  while (cVar1 == '\0') {
    thunk_FUN_10ba31f0(param_1,piVar4[2]);
    piVar3 = (int *)((int *)*piVar4);
    thunk_FUN_1148a50e(piVar4,0x2c);
    piVar4 = (int *)(piVar3);
    cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
  }
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  param_1[1] = 0;
  return;
}


// Reference entry 10baaa00; body size 254 bytes.
#line 1 "ENTRY_10baaa00"

undefined4 __stdcall FUN_10baaa00(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c37cf);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(0x18));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCAlarmDeleteActionDescriptor);
    local_8 = (undefined4)(1);
    piVar2[2] = (int)param_2;
    piVar2[3] = 0;
    if (param_2 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
      piVar2[3] = (int)piVar3;
      (**(code **)(*piVar3 + 4))();
    }
    piVar2[4] = 0;
    piVar2[5] = 0;
  }
  piVar3 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_101da390) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(3);
  (**(code **)(*piVar2 + 0x34))(param_1);
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10baab40; body size 555 bytes.
#line 1 "ENTRY_10baab40"

undefined4 * __thiscall Recovered_Bulk::FUN_10baab40(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c384c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(thunk_FUN_11111570(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  }
  if ((param_3 != (int *)0x0) && (iVar1 != 0)) {
    puVar2 = (undefined4 *)(operator_new(0xd7d0));
    local_8 = (undefined4)(0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x48))());
      uVar9 = (undefined4)(0);
      uVar8 = (undefined4)(0);
      uVar7 = (undefined4)(2000);
      uVar6 = (undefined4)(2000);
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:AlarmClock:1","DestroyAlarm",uVar4,
                         uVar6,uVar7,uVar8,uVar9);
      *puVar2 = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
      puVar2[0x18] = (uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
      puVar2[0x11b] = (uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
    }
    local_8 = (undefined4)(0xffffffff);
    uVar3 = (undefined4)((**(code **)(*param_3 + 0x28))());
    thunk_FUN_1124ffa0(&DAT_11910258,0);
    thunk_FUN_1124f350(uVar3);
    piVar5 = (int *)(operator_new(0x48));
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar5[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      *(unsigned short *)((char *)&local_8 + 1) = 0;
      thunk_FUN_11240650();
      piVar5[2] = (int)(uint)&ghidra_vftable_RControlAIOOpCB;
      *piVar5 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
      piVar5[2] = (int)(uint)&ghidra_vftable_SCOpImpl;
      piVar5[3] = 0;
      piVar5[4] = 0;
      piVar5[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRefBase;
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      piVar5[6] = (int)puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        thunk_FUN_1123fce0(puVar2 + 1);
      }
      piVar5[7] = 0;
      piVar5[5] = (int)(uint)&ghidra_vftable_RControlAIOOpRef;
      piVar5[8] = 0;
      *(undefined2 *)(piVar5 + 9) = 1000;
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      piVar5[0xc] = (int)(uint)&ghidra_vftable_SCIObjImpl;
      piVar5[0xd] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar5[0xc] = (int)(uint)&ghidra_vftable_SCElapsedTimeMeasurement;
      piVar5[0xe] = 0;
      piVar5[0xf] = 0;
      piVar5[0xf] = 0;
      piVar5[0x10] = 0;
      piVar5[0x11] = 0;
    }
    local_8 = (undefined4)(0xffffffff);
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10baba30; body size 69 bytes.
#line 1 "ENTRY_10baba30"

void __thiscall Recovered_Bulk::FUN_10baba30(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10ba3340(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10bac260; body size 194 bytes.
#line 1 "ENTRY_10bac260"

int * __thiscall Recovered_Bulk::FUN_10bac260(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c3ab4);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x2c) == 0) {
    pvVar3 = (void *)(operator_new(0x1c));
    local_8 = (undefined4)(0);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10da4c60(*(undefined4 *)(param_1 + 8)));
    }
    local_8 = (undefined4)(0xffffffff);
    if (piVar4 != *(int **)(param_1 + 0x2c)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x30));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x2c) = piVar4;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0x30) = piVar4;
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  piVar4 = (int *)(*(int **)(param_1 + 0x2c));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10bac7a0; body size 198 bytes.
#line 1 "ENTRY_10bac7a0"

int __thiscall Recovered_Bulk::FUN_10bac7a0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c3be4);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 == 0) {
    pvVar2 = (void *)(operator_new(0x38));
    local_8 = (undefined4)(0);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10f777c0(param_2));
    }
    piVar5 = (int *)(*(int **)(param_1 + 4));
    local_8 = (undefined4)(0xffffffff);
    if (piVar3 != (int *)(piVar5)) {
      piVar5 = (int *)(*(int **)(param_1 + 8));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar5 + 8))(uVar1);
      }
      *(int **)(param_1 + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 8) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(*(int **)(param_1 + 4));
      }
    }
    (**(code **)(*piVar5 + 0xac))();
    iVar4 = (int)(*(int *)(param_1 + 4));
  }
  ExceptionList = (void *)(local_10);
  return (int)(iVar4);
}


// Reference entry 10baeb40; body size 218 bytes.
#line 1 "ENTRY_10baeb40"

undefined4 * __thiscall Recovered_Bulk::FUN_10baeb40(undefined4 *param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_116c4155);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)0x0);
  piVar4 = (int *)((int *)0x0);
  local_8 = (int)(0);
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = (int)(thunk_FUN_11115a00(param_3));
    if (iVar2 != 0) {
      if ((char)param_4 != '\0') {
        thunk_FUN_11112450();
        thunk_FUN_11119f10();
      }
      piVar4 = (int *)((int *)thunk_FUN_10bac4a0(&param_4,iVar2));
      piVar3 = (int *)((int *)*piVar4);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *piVar4 = (int)(0);
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)((int *)0x0);
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (param_4 != (int *)0x0) {
        (**(code **)(*param_4 + 8))();
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    }
  }
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  local_8 = (int)(3);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10baffd0; body size 189 bytes.
#line 1 "ENTRY_10baffd0"

void __stdcall FUN_10baffd0(long param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c4225);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar5 = (undefined4 *)(&param_2);
  piVar4 = (int *)(param_2);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->createPresentAlarmInterfaceAction((int)puVar5,param_1));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(piVar4,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    thunk_FUN_112af4e0("SCAlarmManager",1,
                       "Failed to perform PresentAlarmInterfaceAction since the action is null");
  }
  else {
    (**(code **)(*piVar1 + 0x14))();
  }
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bb2b80; body size 118 bytes.
#line 1 "ENTRY_10bb2b80"

void __stdcall FUN_10bb2b80(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c48d0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bb3a30; body size 335 bytes.
#line 1 "ENTRY_10bb3a30"

void __thiscall Recovered_Bulk::FUN_10bb3a30(uint param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  
  uVar4 = (uint)(param_1[4]);
  if (uVar4 <= param_2) {
    uVar2 = (uint)(param_1[5]);
    if (uVar2 != param_2) {
      if (uVar2 < param_2) {
        if (0x7fffffff - uVar4 < param_2 - uVar4) {
                    
          thunk_FUN_1012a4c0();
        }
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
        pvVar3 = (void *)((void *)thunk_FUN_1012cab0(uVar5 + 1));
        param_1[5] = uVar5;
        param_1[4] = param_2;
        if (uVar2 < 0x10) {
          memcpy(pvVar3,param_1,uVar4 + 1);
          *param_1 = (undefined4)(pvVar3);
          param_1[4] = uVar4;
          return;
        }
        pvVar7 = (void *)((void *)*param_1);
        memcpy(pvVar3,pvVar7,uVar4 + 1);
        uVar5 = (uint)(uVar2 + 1);
        pvVar6 = (void *)(pvVar7);
        if (0xfff < uVar5) {
          pvVar6 = (void *)(*(void **)((int)pvVar7 + -4));
          uVar5 = (uint)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar6))) {
LAB_10bb3b74:
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(pvVar6,uVar5);
        *param_1 = (undefined4)(pvVar3);
        param_1[4] = uVar4;
        return;
      }
      if ((param_2 < 0x10) && (0xf < uVar2)) {
        pvVar3 = (void *)((void *)*param_1);
        memcpy(param_1,pvVar3,uVar4 + 1);
        uVar4 = (uint)(param_1[5] + 1);
        pvVar7 = (void *)(pvVar3);
        if (0xfff < uVar4) {
          pvVar7 = (void *)(*(void **)((int)pvVar3 + -4));
          uVar4 = (uint)(param_1[5] + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar7))) goto LAB_10bb3b74;
        }
        thunk_FUN_1148a50e(pvVar7,uVar4);
        param_1[5] = 0xf;
      }
    }
  }
  return;
}


// Reference entry 10bb46d0; body size 103 bytes.
#line 1 "ENTRY_10bb46d0"

undefined1 FUN_10bb46d0(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c4d4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10413900(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  uVar1 = (undefined1)((**(code **)(*(int *)*puVar2 + 0x3c))());
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10bb5460; body size 68 bytes.
#line 1 "ENTRY_10bb5460"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb5460(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10dd0610(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizard);
  param_1[2] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizard;
  param_1[10] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizard;
  param_1[0x12] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizard;
  param_1[0x13] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizard;
  param_1[0x34] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10bb5b90; body size 260 bytes.
#line 1 "ENTRY_10bb5b90"

void __fastcall FUN_10bb5b90(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c5070);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState);
  param_1[3] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  param_1[6] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  piVar1 = (int *)((int *)param_1[0x29]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x27]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x25]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_102cc870();
  param_1[6] = (uint)&ghidra_vftable_SCSwfObjDDListener;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bb5cf0; body size 183 bytes.
#line 1 "ENTRY_10bb5cf0"

void __fastcall FUN_10bb5cf0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c50a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardConnectingState);
  param_1[3] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardConnectingState;
  param_1[6] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardConnectingState;
  param_1[7] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardConnectingState;
  thunk_FUN_102cc870(uVar2);
  thunk_FUN_102cc870();
  thunk_FUN_10bb4c10(param_1 + 9,*(undefined4 *)(param_1[9] + 4));
  thunk_FUN_1148a50e(param_1[9],0x1c);
  param_1[6] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bb6290; body size 284 bytes.
#line 1 "ENTRY_10bb6290"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c51b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState);
  param_1[3] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  param_1[6] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  piVar1 = (int *)((int *)param_1[0x29]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x27]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x25]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_102cc870();
  param_1[6] = (uint)&ghidra_vftable_SCSwfObjDDListener;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6430; body size 207 bytes.
#line 1 "ENTRY_10bb6430"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c51e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardConnectingState);
  param_1[3] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardConnectingState;
  param_1[6] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardConnectingState;
  param_1[7] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardConnectingState;
  thunk_FUN_102cc870(uVar2);
  thunk_FUN_102cc870();
  thunk_FUN_10bb4c10(param_1 + 9,*(undefined4 *)(param_1[9] + 4));
  thunk_FUN_1148a50e(param_1[9],0x1c);
  param_1[6] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x100);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb7010; body size 69 bytes.
#line 1 "ENTRY_10bb7010"

void __fastcall FUN_10bb7010(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x24) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x90) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10bb7070; body size 81 bytes.
#line 1 "ENTRY_10bb7070"

undefined4 * __fastcall FUN_10bb7070(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1;
    puVar1[2] = param_1;
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardCompleteState);
    thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",0);
    *(undefined4 *)(param_1 + 0x94) = 0;
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10bb70e0; body size 112 bytes.
#line 1 "ENTRY_10bb70e0"

undefined4 FUN_10bb70e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  uint uStack_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c54bd);
  local_10 = (void *)(ExceptionList);
  uStack_1c = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined1 *)(auStack_20);
  uStack_24 = (undefined4)(param_3);
  thunk_FUN_102e4c30(auStack_20);
  local_8 = (undefined4)(0);
  thunk_FUN_102e4c30(&uStack_24,param_2);
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_102e2d60(param_1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bb72f0; body size 381 bytes.
#line 1 "ENTRY_10bb72f0"

undefined4 * __fastcall FUN_10bb72f0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    puVar2 = (undefined4 *)(operator_new(0xc));
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardSuccessState);
      return (undefined4 *)(puVar2);
    }
    break;
  case 1:
    puVar2 = (undefined4 *)(operator_new(0xa8));
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      puVar2[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = (uint)&ghidra_vftable_SCSwfObjDDListener;
      *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState);
      puVar2[3] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
      puVar2[6] = (uint)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[10] = (uint)&ghidra_vftable_SCOpRef;
      puVar2[0xd] = (uint)&ghidra_vftable_SCOpRef;
      puVar2[0x19] = 0;
      puVar2[0x23] = 0;
      puVar2[0x24] = 0;
      puVar2[0x25] = 0;
      puVar2[0x26] = 0;
      puVar2[0x27] = 0;
      puVar2[0x28] = 0;
      puVar2[0x29] = 0;
      return (undefined4 *)(puVar2);
    }
    break;
  case 2:
    puVar2 = (undefined4 *)(operator_new(0xc));
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardSetupNotAllowedState);
      return (undefined4 *)(puVar2);
    }
    break;
  case 3:
    puVar2 = (undefined4 *)(operator_new(0xc));
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardTimeoutState);
      return (undefined4 *)(puVar2);
    }
    break;
  default:
    return (undefined4 *)((undefined4 *)0x0);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10bb74f0; body size 109 bytes.
#line 1 "ENTRY_10bb74f0"

undefined4 __fastcall FUN_10bb74f0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c5557);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  pvVar1 = (void *)(operator_new(0x100));
  local_8 = (undefined4)(0);
  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10bb5620(*(undefined4 *)(param_1 + 8)));
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 10bb7580; body size 214 bytes.
#line 1 "ENTRY_10bb7580"

undefined4 * __fastcall FUN_10bb7580(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c55a7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x114))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if ((iVar2 != 4) && (iVar2 != 7)) {
    puVar3 = (undefined4 *)(operator_new(0xc));
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar3[1] = uVar1;
      puVar3[2] = uVar1;
      *puVar3 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardIntroState);
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(puVar3);
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)((undefined4 *)0x0);
  }
  thunk_FUN_1023a9f0();
  thunk_FUN_105b52c0();
  pvVar4 = (void *)(operator_new(0x100));
  local_8 = (undefined4)(0);
  if (pvVar4 != (void *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10bb5620(*(undefined4 *)(param_1 + 8)));
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar3);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10bb7810; body size 84 bytes.
#line 1 "ENTRY_10bb7810"

undefined4 * __fastcall FUN_10bb7810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = (int)(*(int *)(param_1 + 8));
    puVar2[1] = iVar1;
    puVar2[2] = iVar1;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardCompleteState);
    thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",2);
    *(undefined4 *)(iVar1 + 0x94) = 2;
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10bb7880; body size 84 bytes.
#line 1 "ENTRY_10bb7880"

undefined4 * __fastcall FUN_10bb7880(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = (int)(*(int *)(param_1 + 8));
    puVar2[1] = iVar1;
    puVar2[2] = iVar1;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardCompleteState);
    thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",3);
    *(undefined4 *)(iVar1 + 0x94) = 3;
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10bb78f0; body size 84 bytes.
#line 1 "ENTRY_10bb78f0"

undefined4 * __fastcall FUN_10bb78f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = (int)(*(int *)(param_1 + 8));
    puVar2[1] = iVar1;
    puVar2[2] = iVar1;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardCompleteState);
    thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",1);
    *(undefined4 *)(iVar1 + 0x94) = 1;
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10bba780; body size 295 bytes.
#line 1 "ENTRY_10bba780"

void __thiscall Recovered_Bulk::FUN_10bba780(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  SCLibrary *this_;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c5df4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bba8f0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)*param_3);
  }
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_1109f7f0(puVar6,puVar5);
  thunk_FUN_110a3340(puVar6,puVar5);
  puVar7 = (undefined4 *)(&param_3);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar2 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(puVar7));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  pvVar3 = (void *)(operator_new(0x20));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (pvVar3 == (void *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    uVar4 = (undefined4)((**(code **)(*(int *)piVar1[0x32] + 100))());
    uVar4 = (undefined4)(thunk_FUN_104ddfd0(-(uint)(param_1 != 0) & param_1 + 0x18U,uVar4));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  thunk_FUN_104deb40();
  uVar4 = (undefined4)(1);
  thunk_FUN_1023a9f0(1);
  thunk_FUN_105b5360(uVar4);
  local_8 = (undefined4)(5);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bba8f0; body size 252 bytes.
#line 1 "ENTRY_10bba8f0"

void __fastcall FUN_10bba8f0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c5e4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x9c) + 0x1c))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x98) + 4))();
    }
  }
  piVar2 = (int *)((int *)createSCNullAsyncOperation((int)&local_14));
  local_1c = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (local_1c == (int *)0x0) {
    local_18 = (int *)((int *)0x0);
  }
  else {
    local_18 = (int *)((int *)(**(code **)(*local_1c + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101da240(&local_24));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  thunk_FUN_102cb990(&local_1c,*puVar3);
  piVar2 = (int *)(local_20);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (local_20 != (int *)0x0) {
    local_24 = (undefined4)(0);
    local_20 = (int *)((int *)0x0);
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(6);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bbaa30; body size 240 bytes.
#line 1 "ENTRY_10bbaa30"

void __thiscall Recovered_Bulk::FUN_10bbaa30(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c5e9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x34) + 0x1c))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x30) + 4))();
    }
  }
  piVar2 = (int *)((int *)createSCNullAsyncOperation((int)&param_2));
  local_18 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (local_18 == (int *)0x0) {
    local_14 = (int *)((int *)0x0);
  }
  else {
    local_14 = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101da240(&local_20));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  thunk_FUN_102cb990(&local_18,*puVar3);
  piVar2 = (int *)(local_1c);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (local_1c != (int *)0x0) {
    local_20 = (undefined4)(0);
    local_1c = (int *)((int *)0x0);
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(6);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bbaea0; body size 118 bytes.
#line 1 "ENTRY_10bbaea0"

void __stdcall FUN_10bbaea0(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c5f30);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bbaf50; body size 243 bytes.
#line 1 "ENTRY_10bbaf50"

void __fastcall FUN_10bbaf50(int param_1)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c5f75);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar5,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*(int *)piVar1[0x32] + 100))();
  iVar4 = (int)(thunk_FUN_11081b20(2));
  if (iVar4 != 0) {
    thunk_FUN_112af4e0("legacy_join_household_wizard",1,
                       "Successfully joined household, going to a success page");
    if (*(int *)(param_1 + 0x14) != 0) {
      thunk_FUN_104dec20();
      if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_1006aac8();
  }
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bbb080; body size 139 bytes.
#line 1 "ENTRY_10bbb080"

void __stdcall FUN_10bbb080(undefined4 param_1)

{
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 *puVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c5fb5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)pSVar2 + 0x3c))(&local_18,uVar1));
  local_8 = (undefined4)(0);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)*puVar3 + 0x18))(&local_14));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(*(int *)*puVar3 + 0x18))(param_1,0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(3);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bbb160; body size 85 bytes.
#line 1 "ENTRY_10bbb160"

void __fastcall FUN_10bbb160(int param_1)

{
  int iVar1;
  
  thunk_FUN_1112be50();
  thunk_FUN_1112c2a0(-(uint)(param_1 != 0) & param_1 + 0x1cU);
  iVar1 = (int)(thunk_FUN_1023a9f0());
  (**(code **)(*(int *)(iVar1 + 0x1c) + 8))();
  (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 10bbb1e0; body size 275 bytes.
#line 1 "ENTRY_10bbb1e0"

void __fastcall FUN_10bbb1e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c600c);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(operator_new(0x1c));
  local_8 = (undefined4)(0);
  if (local_14 == (int *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_10f7b130(-(uint)(param_1 != 0) & param_1 + 0x18U));
  }
  local_8 = (undefined4)(0xffffffff);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  thunk_FUN_10f7b5a0(uVar1);
  piVar3 = (int *)((int *)createSCNullAsyncOperation((int)&local_14));
  local_1c = (int *)((int *)*piVar3);
  local_8 = (undefined4)(1);
  *piVar3 = (int)(0);
  if (local_1c == (int *)0x0) {
    local_18 = (int *)((int *)0x0);
  }
  else {
    local_18 = (int *)((int *)(**(code **)(*local_1c + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_101da240(&local_24));
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  thunk_FUN_102cb990(&local_1c,*puVar4);
  piVar3 = (int *)(local_20);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (local_20 != (int *)0x0) {
    local_24 = (undefined4)(0);
    local_20 = (int *)((int *)0x0);
    (**(code **)(*piVar3 + 8))();
  }
  local_8 = (undefined4)(7);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bbbf60; body size 103 bytes.
#line 1 "ENTRY_10bbbf60"

undefined4 * FUN_10bbbf60(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x18));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar1[2] = param_2;
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCNetworkManagement);
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbdbd0; body size 342 bytes.
#line 1 "ENTRY_10bbdbd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbdbd0(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10bbe760();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_10bbdd1c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_10bbdd1c;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10bbdd1c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10bbdd16;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_10bbdd16:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 10bbe020; body size 76 bytes.
#line 1 "ENTRY_10bbe020"

void __fastcall FUN_10bbe020(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c6740);
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


// Reference entry 10bbe090; body size 76 bytes.
#line 1 "ENTRY_10bbe090"

void __fastcall FUN_10bbe090(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c6770);
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


// Reference entry 10bbe100; body size 68 bytes.
#line 1 "ENTRY_10bbe100"

void __fastcall FUN_10bbe100(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c67a0);
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


// Reference entry 10bbe160; body size 81 bytes.
#line 1 "ENTRY_10bbe160"

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

void __fastcall FID_conflict__Tidy_10bbe160(int *param_1)

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


// Reference entry 10bbe1d0; body size 218 bytes.
#line 1 "ENTRY_10bbe1d0"

void __fastcall FUN_10bbe1d0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c67d0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChirpManager);
  param_1[2] = (uint)&ghidra_vftable_SCChirpManager;
  param_1[3] = (uint)&ghidra_vftable_SCChirpManager;
  iVar1 = (int)(param_1[6]);
  if (iVar1 != 0) {
    uVar5 = (uint)((param_1[8] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,uVar3);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bbe300; body size 81 bytes.
#line 1 "ENTRY_10bbe300"

int * __thiscall Recovered_Bulk::FUN_10bbe300(int *param_2)
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


// Reference entry 10bbe3e0; body size 243 bytes.
#line 1 "ENTRY_10bbe3e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbe3e0(byte param_2)
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
  puStack_c = (undefined1 *)(LAB_116c6800);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChirpManager);
  param_1[2] = (uint)&ghidra_vftable_SCChirpManager;
  param_1[3] = (uint)&ghidra_vftable_SCChirpManager;
  iVar1 = (int)(param_1[6]);
  if (iVar1 != 0) {
    uVar5 = (uint)((param_1[8] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,uVar3);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24,uVar3);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbe590; body size 89 bytes.
#line 1 "ENTRY_10bbe590"

void __thiscall Recovered_Bulk::FUN_10bbe590(int param_2,int param_3,int param_4)
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


// Reference entry 10bbe660; body size 81 bytes.
#line 1 "ENTRY_10bbe660"

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

void __fastcall FID_conflict__Tidy_10bbe660(int *param_1)

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


// Reference entry 10bbef60; body size 72 bytes.
#line 1 "ENTRY_10bbef60"

void __fastcall FUN_10bbef60(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x20))(param_1);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x24))();
    if (*(int *)(param_1 + 0x10) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x14));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}


// Reference entry 10bbf010; body size 67 bytes.
#line 1 "ENTRY_10bbf010"

uint __thiscall Recovered_Bulk::FUN_10bbf010(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(0);
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  uVar3 = (uint)(*(int *)(param_1 + 0x1c) - iVar1 >> 2);
  if (uVar3 != 0) {
    do {
      if (*(int *)(iVar1 + uVar2 * 4) == param_2) {
        *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(iVar1 + -4 + uVar3 * 4);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -4;
        return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < uVar3);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 10bbf100; body size 76 bytes.
#line 1 "ENTRY_10bbf100"

void __fastcall FUN_10bbf100(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c6990);
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


// Reference entry 10bc0320; body size 83 bytes.
#line 1 "ENTRY_10bc0320"

void __fastcall FUN_10bc0320(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c6f80);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc03b0; body size 84 bytes.
#line 1 "ENTRY_10bc03b0"

void __fastcall FUN_10bc03b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c6fb0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc0870; body size 107 bytes.
#line 1 "ENTRY_10bc0870"

int __thiscall Recovered_Bulk::FUN_10bc0870(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c7080);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10bc0900; body size 254 bytes.
#line 1 "ENTRY_10bc0900"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc0900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c70b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAppInteropActionDescriptor);
  piVar1 = (int *)((int *)param_1[9]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[7]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  local_8 = (undefined4)(4);
  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc0b70; body size 105 bytes.
#line 1 "ENTRY_10bc0b70"

void __thiscall Recovered_Bulk::FUN_10bc0b70(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c73c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc1490; body size 79 bytes.
#line 1 "ENTRY_10bc1490"

void __thiscall Recovered_Bulk::FUN_10bc1490(int param_2)
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


// Reference entry 10bc15b0; body size 83 bytes.
#line 1 "ENTRY_10bc15b0"

void __thiscall Recovered_Bulk::FUN_10bc15b0(int *param_2)
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


// Reference entry 10bc1660; body size 579 bytes.
#line 1 "ENTRY_10bc1660"

void __thiscall Recovered_Bulk::FUN_10bc1660(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  SCLibrary *this_;
  undefined4 uVar5;
  SCStr *pSVar6;
  SCIStringArray *pSVar7;
  int iVar8;
  SCStr *pSVar9;
  char cVar10;
  bool bVar11;
  undefined4 uVar12;
  int *local_2c;
  int *local_28;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c74a5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x14) + 0x20))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  }
  if (param_2 == (int *)iVar1) {
    piVar2 = (int *)(operator_new(0x14));
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar2[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar2 = (int)((int)(uint)&ghidra_vftable_SCStringArray);
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      param_2 = (int *)(piVar2);
      (**(code **)(*piVar2 + 4))();
    }
    local_8 = (undefined4)(0);
    param_2 = (int *)((int *)0x0);
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x20a3,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&param_2))->int_allocRep(pcVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    (**(code **)(*piVar2 + 0x24))(&param_2);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((SCStr *)((SCStr *)&param_2))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x247d,&DAT_11882ff0));
    ((SCStr *)((SCStr *)&param_2))->int_allocRep(pcVar4);
    uVar12 = (undefined4)(0);
    bVar11 = (bool)(false);
    cVar10 = (char)((char)param_1 + 'x');
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    pSVar9 = (SCStr *)((SCStr *)0xffffffff);
    iVar8 = (int)(-1);
    iVar1 = (int)(-1);
    pSVar7 = (SCIStringArray *)((SCIStringArray *)&param_2);
    pSVar6 = (SCStr *)((SCStr *)&local_14);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar5 = (undefined4)(((SCLibrary *)(this_))->createSCDisplayMenuPopupAction(pSVar6,pSVar7,(int)piVar2,iVar1,iVar8,pSVar9,(bool)cVar10,bVar11));
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    thunk_FUN_101aa810(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(uVar12);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    uVar5 = (undefined4)((**(code **)(*local_2c + 0x20))(&local_1c));
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    thunk_FUN_101aa9f0(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("CannotForceCloseWindowAction");
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    (**(code **)(*local_18 + 0x40))(&param_2,1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    ((SCStr *)((SCStr *)&param_2))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("ShowOverTopModalWindow");
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    (**(code **)(*local_18 + 0x40))(&param_2,1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    ((SCStr *)((SCStr *)&param_2))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    (**(code **)(*local_2c + 0x14))();
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_8 = (undefined4)(0x17);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc1cc0; body size 294 bytes.
#line 1 "ENTRY_10bc1cc0"

int * __stdcall FUN_10bc1cc0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c753d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)createSCStringArray());
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("wizard/app");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x24))(local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("app2/partners/google/services/voice/setupcomplete");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x24))(local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("integration/app");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x24))(local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(10);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bc1fd0; body size 983 bytes.
#line 1 "ENTRY_10bc1fd0"

void FUN_10bc1fd0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c7699);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(0);
  piVar4 = (int *)((int *)createPropertyBag());
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_2c = (int *)((int *)0x0);
  }
  else {
    local_2c = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("URL");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x1c))(&local_18,param_1);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("SCLib");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("type");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x1c))(&local_14,&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (uint)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("success");
  piVar4 = (int *)(param_2);
  uVar3 = (uint)(1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  local_14 = (uint)(1);
  cVar2 = (char)((**(code **)(*param_2 + 0x74))(&local_1c));
  if (cVar2 == '\0') {
LAB_10bc212a:
    param_2 = (int *)((int *)((uint)param_2 & 0xffffff));
  }
  else {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("success");
    uVar3 = (uint)(3);
    local_8 = (undefined4)(0xb);
    local_14 = (uint)(3);
    iVar5 = (int)((**(code **)(*piVar4 + 0x80))(&local_18));
    param_2 = (int *)((int *)((uint)(1) << 24 | (uint)(*(uint *)((char *)&param_2 + 0))));
    if (iVar5 != 3) goto LAB_10bc212a;
  }
  if ((uVar3 & 2) != 0) {
    uVar3 = (uint)(uVar3 & 0xfffffffd);
    local_8 = (undefined4)(0xc);
    local_14 = (uint)(uVar3);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
  }
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if ((uVar3 & 1) != 0) {
    uVar3 = (uint)(uVar3 & 0xfffffffe);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)((SCStr *)&local_1c))->int_release();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (*(uint *)((char *)&param_2 + 3) != '\0') {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("success");
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("success");
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    uVar6 = (undefined4)((**(code **)(*piVar4 + 0x18))(&local_1c,&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    (**(code **)(*piVar1 + 0x1c))(&param_2,uVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    ((SCStr *)((SCStr *)&local_18))->int_release();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("error");
  uVar7 = (uint)(uVar3 | 4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));
  local_14 = (uint)(uVar7);
  cVar2 = (char)((**(code **)(*piVar4 + 0x74))(&local_1c));
  if (cVar2 != '\0') {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("error");
    uVar7 = (uint)(uVar3 | 0xc);
    local_8 = (undefined4)(0x15);
    local_14 = (uint)(uVar7);
    iVar5 = (int)((**(code **)(*piVar4 + 0x80))(&local_18));
    param_2 = (int *)((int *)((uint)(1) << 24 | (uint)(*(uint *)((char *)&param_2 + 0))));
    if (iVar5 == 3) goto LAB_10bc2248;
  }
  param_2 = (int *)((int *)((uint)param_2 & 0xffffff));
LAB_10bc2248:
  if ((uVar7 & 8) != 0) {
    uVar7 = (uint)(uVar7 & 0xfffffff7);
    local_8 = (undefined4)(0x16);
    local_14 = (uint)(uVar7);
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
  }
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  if ((uVar7 & 4) != 0) {
    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)((SCStr *)&local_1c))->int_release();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (*(uint *)((char *)&param_2 + 3) != '\0') {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep("error");
    *(unsigned char *)((char *)&local_8 + 0) = 0x18;
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("error");
    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    uVar6 = (undefined4)((**(code **)(*piVar4 + 0x18))(&local_1c,&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
    (**(code **)(*piVar1 + 0x1c))(&param_2,uVar6);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
    ((SCStr *)((SCStr *)&local_18))->int_release();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_101f6530(&local_28);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("CRReceivedDeeplink");
  *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("library");
  *(unsigned char *)((char *)&local_8 + 0) = 0x20;
  (**(code **)(*local_28 + 0x18))(&param_2,&local_1c,piVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 0x21;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x22;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  piVar1 = (int *)(local_24);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x23)));
  if (local_24 != (int *)0x0) {
    local_28 = (int *)((int *)0x0);
    local_24 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  local_8 = (undefined4)(0x24);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc3610; body size 88 bytes.
#line 1 "ENTRY_10bc3610"

void FUN_10bc3610(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c79fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  thunk_FUN_10bc1a20(&stack0x00000004);
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc3710; body size 242 bytes.
#line 1 "ENTRY_10bc3710"

int * __thiscall Recovered_Bulk::FUN_10bc3710(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c7a4d);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINfcDelegate");
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
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bc3840; body size 188 bytes.
#line 1 "ENTRY_10bc3840"

int * __thiscall Recovered_Bulk::FUN_10bc3840(undefined4 *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c7a95);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINfcDelegate");
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
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bc3990; body size 342 bytes.
#line 1 "ENTRY_10bc3990"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc3990(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10bc4680();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_10bc3adc:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_10bc3adc;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10bc3adc;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10bc3ad6;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_10bc3ad6:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 10bc3e60; body size 76 bytes.
#line 1 "ENTRY_10bc3e60"

void __fastcall FUN_10bc3e60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c7b00);
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


// Reference entry 10bc3ed0; body size 76 bytes.
#line 1 "ENTRY_10bc3ed0"

void __fastcall FUN_10bc3ed0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c7b30);
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


// Reference entry 10bc3f40; body size 68 bytes.
#line 1 "ENTRY_10bc3f40"

void __fastcall FUN_10bc3f40(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c7b60);
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


// Reference entry 10bc3fa0; body size 81 bytes.
#line 1 "ENTRY_10bc3fa0"

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

void __fastcall FID_conflict__Tidy_10bc3fa0(int *param_1)

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


// Reference entry 10bc4010; body size 74 bytes.
#line 1 "ENTRY_10bc4010"

void __fastcall FUN_10bc4010(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c7b90);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc4090; body size 205 bytes.
#line 1 "ENTRY_10bc4090"

void __fastcall FUN_10bc4090(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c7bc0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[6]);
  if (iVar1 != 0) {
    uVar4 = (uint)((param_1[8] - iVar1 >> 2) * 4);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_RITQHandler;
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc41a0; body size 81 bytes.
#line 1 "ENTRY_10bc41a0"

int * __thiscall Recovered_Bulk::FUN_10bc41a0(int *param_2)
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


// Reference entry 10bc4290; body size 98 bytes.
#line 1 "ENTRY_10bc4290"

int __thiscall Recovered_Bulk::FUN_10bc4290(byte param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c7bf0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10bc4340; body size 230 bytes.
#line 1 "ENTRY_10bc4340"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc4340(byte param_2)
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
  puStack_c = (undefined1 *)(LAB_116c7c20);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[6]);
  if (iVar1 != 0) {
    uVar5 = (uint)((param_1[8] - iVar1 >> 2) * 4);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5,uVar3);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_RITQHandler;
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28,uVar3);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc44b0; body size 89 bytes.
#line 1 "ENTRY_10bc44b0"

void __thiscall Recovered_Bulk::FUN_10bc44b0(int param_2,int param_3,int param_4)
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


// Reference entry 10bc4580; body size 81 bytes.
#line 1 "ENTRY_10bc4580"

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

void __fastcall FID_conflict__Tidy_10bc4580(int *param_1)

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


// Reference entry 10bc4b60; body size 340 bytes.
#line 1 "ENTRY_10bc4b60"

undefined4 __thiscall Recovered_Bulk::FUN_10bc4b60(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c7d60);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (param_2 != (int *)0x0) {
    iVar1 = (int)(*param_2);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      thunk_FUN_10302280(param_1 + -4,"Starting NFC scan",uVar3);
      (**(code **)(**(int **)(param_1 + 4) + 0x14))();
    }
    else if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      thunk_FUN_10302280(param_1 + -4,"NFC scan succeeded",uVar3);
      uVar3 = (uint)(0);
      if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 != 0) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(param_1 + 0xc) + uVar3 * 4))(param_2 + 1,1);
          uVar3 = (uint)(uVar3 + 1);
        } while (uVar3 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2));
      }
    }
    else if (iVar1 == 2) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      puVar2 = (undefined1 *)((undefined1 *)param_2[1]);
      puVar4 = (undefined1 *)(&DAT_1186d2ee);
      if (puVar2 != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(puVar2);
      }
      thunk_FUN_10302280(param_1 + -4,"NFC scan failed (Error: %s)",puVar4);
      uVar3 = (uint)(0);
      if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 != 0) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(param_1 + 0xc) + uVar3 * 4))(param_2 + 1,0);
          uVar3 = (uint)(uVar3 + 1);
        } while (uVar3 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2));
      }
    }
    local_8 = (undefined4)(0);
    ((SCStr *)((SCStr *)(param_2 + 1)))->int_release();
    param_2[1] = 0;
    thunk_FUN_1148a50e(param_2,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 10bc4d60; body size 103 bytes.
#line 1 "ENTRY_10bc4d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc4d60(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINfcListener"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 10bc4f80; body size 72 bytes.
#line 1 "ENTRY_10bc4f80"

void __fastcall FUN_10bc4f80(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(param_1);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x28))();
    if (*(int *)(param_1 + 0x10) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x14));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}


// Reference entry 10bc4ff0; body size 333 bytes.
#line 1 "ENTRY_10bc4ff0"

undefined4 __fastcall FUN_10bc4ff0(int param_1)

{
  char cVar1;
  SCLibrary *pSVar2;
  undefined4 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c7dec);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(char *)(param_1 + 0x24) == '\0') {
    pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)pSVar2 + 0x90))());
    local_8 = (undefined4)(0);
    iVar4 = (int)((**(code **)(*(int *)*puVar3 + 0x1c))());
    local_8 = (undefined4)(1);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    if (iVar4 == 2) {
      thunk_FUN_101b5540();
      cVar1 = (char)(thunk_FUN_101b5de0());
      if (cVar1 != '\0') {
        pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
        uVar5 = (ulong)(((SCLibrary *)(pSVar2))->getCurrentThreadID());
        pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
        uVar6 = (ulong)(((SCLibrary *)(pSVar2))->getMainThreadID());
        if (uVar5 != uVar6) {
          pvVar7 = (void *)(operator_new(8));
          local_8 = (undefined4)(2);
          if (pvVar7 == (void *)0x0) {
            uVar8 = (undefined4)(0);
          }
          else {
            ((SCStr *)((SCStr *)&stack0xffffffd0))->int_allocRep("");
            uVar8 = (undefined4)(thunk_FUN_10bc3d30(0));
          }
          local_8 = (undefined4)(0xffffffff);
          thunk_FUN_1106b190(param_1 + 0xc,uVar8);
          ExceptionList = (void *)(local_10);
          return (undefined4)(1);
        }
        *(undefined1 *)(param_1 + 0x24) = 1;
        thunk_FUN_10302280(param_1 + 8);
        (**(code **)(**(int **)(param_1 + 0x10) + 0x14))();
        ExceptionList = (void *)(local_10);
        return (undefined4)(1);
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 10bc51d0; body size 67 bytes.
#line 1 "ENTRY_10bc51d0"

uint __thiscall Recovered_Bulk::FUN_10bc51d0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(0);
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  uVar3 = (uint)(*(int *)(param_1 + 0x1c) - iVar1 >> 2);
  if (uVar3 != 0) {
    do {
      if (*(int *)(iVar1 + uVar2 * 4) == param_2) {
        *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(iVar1 + -4 + uVar3 * 4);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -4;
        return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < uVar3);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 10bc5270; body size 107 bytes.
#line 1 "ENTRY_10bc5270"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc5270(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c7e2d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc5510; body size 248 bytes.
#line 1 "ENTRY_10bc5510"

int * __thiscall Recovered_Bulk::FUN_10bc5510(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c7ebd);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIBTClassicConnectionProvider");
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
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bc56c0; body size 242 bytes.
#line 1 "ENTRY_10bc56c0"

int * __thiscall Recovered_Bulk::FUN_10bc56c0(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c7f0d);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIBTClassicConnectionProvider");
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
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bc57f0; body size 188 bytes.
#line 1 "ENTRY_10bc57f0"

int * __thiscall Recovered_Bulk::FUN_10bc57f0(undefined4 *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c7f55);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIBTClassicConnectionProvider");
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
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bc59a0; body size 121 bytes.
#line 1 "ENTRY_10bc59a0"

undefined4 * FUN_10bc59a0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c7f95);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 10bc61b0; body size 93 bytes.
#line 1 "ENTRY_10bc61b0"

int __thiscall Recovered_Bulk::FUN_10bc61b0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c805d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10bc6230; body size 87 bytes.
#line 1 "ENTRY_10bc6230"

int __thiscall Recovered_Bulk::FUN_10bc6230(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
        param_2[9] = 0;
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return (int)(param_1);
}


// Reference entry 10bc62a0; body size 93 bytes.
#line 1 "ENTRY_10bc62a0"

int __thiscall Recovered_Bulk::FUN_10bc62a0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c809d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10bc6540; body size 236 bytes.
#line 1 "ENTRY_10bc6540"

int __fastcall FUN_10bc6540(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c8160);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  iVar5 = (int)(thunk_FUN_101dcfc0(&local_18));
  if (local_18 != 0) {
    iVar5 = (int)(thunk_FUN_103d6930(param_1[2]));
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    piVar3 = (int *)(local_14 + 1);
    iVar2 = (int)(*piVar3);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      piVar3 = (int *)(local_14 + 2);
      iVar2 = (int)(*piVar3);
      iVar5 = (int)(*piVar3);
      *piVar3 = (int)(iVar2 + -1);
      UNLOCK();
      if (iVar2 + -1 == 0) {
        iVar5 = (int)((**(code **)(*local_14 + 4))());
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0xf]);
  if (piVar3 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar3 + 0x10))(piVar3 != (int *)(param_1) + 6));
    param_1[0xf] = 0;
  }
  piVar3 = (int *)((int *)param_1[5]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 2);
    iVar2 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar2 == 1) {
      iVar5 = (int)((**(code **)(*piVar3 + 4))());
    }
  }
  piVar3 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return (int)(iVar5);
}


// Reference entry 10bc66b0; body size 76 bytes.
#line 1 "ENTRY_10bc66b0"

void __fastcall FUN_10bc66b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c8190);
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


// Reference entry 10bc6720; body size 76 bytes.
#line 1 "ENTRY_10bc6720"

void __fastcall FUN_10bc6720(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c81c0);
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


// Reference entry 10bc6790; body size 76 bytes.
#line 1 "ENTRY_10bc6790"

void __fastcall FUN_10bc6790(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c81f0);
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


// Reference entry 10bc6800; body size 68 bytes.
#line 1 "ENTRY_10bc6800"

void __fastcall FUN_10bc6800(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c8220);
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


// Reference entry 10bc6990; body size 304 bytes.
#line 1 "ENTRY_10bc6990"

void __fastcall FUN_10bc6990(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c8250);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTClassicConnectionManager);
  param_1[2] = (uint)&ghidra_vftable_SCBTClassicConnectionManager;
  param_1[3] = (uint)&ghidra_vftable_SCBTClassicConnectionManager;
  param_1[10] = (uint)&ghidra_vftable_SCBTClassicConnectionManager;
  piVar2 = (int *)((int *)param_1[0x17]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (**(code **)(*piVar2 + 8))(uVar4);
  }
  piVar2 = (int *)((int *)param_1[0x15]);
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[0x13]);
  local_8 = (undefined4)(2);
  if (piVar2 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[0x11]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  local_8 = (undefined4)(3);
  if (piVar2 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(4);
  param_1[3] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc6b70; body size 81 bytes.
#line 1 "ENTRY_10bc6b70"

int * __thiscall Recovered_Bulk::FUN_10bc6b70(int *param_2)
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


// Reference entry 10bc6be0; body size 81 bytes.
#line 1 "ENTRY_10bc6be0"

int * __thiscall Recovered_Bulk::FUN_10bc6be0(int *param_2)
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


// Reference entry 10bc6c50; body size 81 bytes.
#line 1 "ENTRY_10bc6c50"

int * __thiscall Recovered_Bulk::FUN_10bc6c50(int *param_2)
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


// Reference entry 10bc6e10; body size 261 bytes.
#line 1 "ENTRY_10bc6e10"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc6e10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c8280);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  thunk_FUN_101dcfc0(&local_18);
  if (local_18 != 0) {
    thunk_FUN_103d6930(param_1[2]);
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(local_14[1] + -1);
    local_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      iVar3 = (int)(local_14[2] + -1);
      local_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_14 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar2 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc70b0; body size 325 bytes.
#line 1 "ENTRY_10bc70b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc70b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c82b0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBTClassicConnectionManager);
  param_1[2] = (uint)&ghidra_vftable_SCBTClassicConnectionManager;
  param_1[3] = (uint)&ghidra_vftable_SCBTClassicConnectionManager;
  param_1[10] = (uint)&ghidra_vftable_SCBTClassicConnectionManager;
  piVar2 = (int *)((int *)param_1[0x17]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (**(code **)(*piVar2 + 8))(uVar4);
  }
  piVar2 = (int *)((int *)param_1[0x15]);
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[0x13]);
  local_8 = (undefined4)(2);
  if (piVar2 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[0x11]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  local_8 = (undefined4)(3);
  if (piVar2 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(4);
  param_1[3] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc72b0; body size 124 bytes.
#line 1 "ENTRY_10bc72b0"

undefined4 * __fastcall FUN_10bc72b0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c8355);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 10bc73f0; body size 76 bytes.
#line 1 "ENTRY_10bc73f0"

void __stdcall FUN_10bc73f0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_1);
  cVar2 = (char)(thunk_FUN_101a2c70("SCIAppSessionManager:onAppStateChanged",param_2));
  if (cVar2 != '\0') {
    iVar3 = (int)((**(code **)(*piVar1 + 0x1c))());
    if (iVar3 == 2) {
      thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,"app FOREGROUNDED");
      thunk_FUN_10bc8860();
    }
  }
  return;
}


// Reference entry 10bc7710; body size 360 bytes.
#line 1 "ENTRY_10bc7710"

void __fastcall FUN_10bc7710(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int **ppiStack_4c;
  SCStr *pSStack_48;
  SCStr *pSStack_44;
  SCStr *pSStack_40;
  uint uStack_3c;
  SCStr local_24 [4];
  uint local_20;
  int *local_1c;
  SCStr local_18 [7];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c839d);
  local_10 = (void *)(ExceptionList);
  uStack_3c = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSStack_40 = (SCStr *)((SCStr *)0x11912980);
  pSStack_44 = (SCStr *)((SCStr *)0x0);
  pSStack_48 = (SCStr *)((SCStr *)0x119126b8);
  local_20 = (uint)(0);
  ppiStack_4c = (int **)((int **)0x10bc7752);
  thunk_FUN_112af4e0();
  pSStack_40 = (SCStr *)(local_18);
  pSStack_44 = (SCStr *)((SCStr *)0x10bc7760);
  (**(code **)(*param_1 + 0x18))();
  pSStack_48 = (SCStr *)(local_18);
  pSStack_44 = (SCStr *)((SCStr *)0x1);
  ppiStack_4c = (int **)(&local_1c);
  local_8 = (undefined4)(0);
  piVar3 = (int *)((int *)thunk_FUN_1033cdf0());
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    pSStack_44 = (SCStr *)((SCStr *)0x10bc7796);
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    pSStack_44 = (SCStr *)((SCStr *)0x10bc77af);
    (**(code **)(*local_1c + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  uVar5 = (uint)(local_20);
  if (piVar1 != (int *)0x0) {
    pSStack_44 = (SCStr *)(local_24);
    pSStack_48 = (SCStr *)((SCStr *)0x10bc77c2);
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1034e150());
    uVar5 = (uint)(1);
    if (((char *)*puVar4 != (char *)0x0) && (*(char *)*puVar4 != '\0')) {
      local_11 = (char)('\x01');
      goto LAB_10bc77de;
    }
  }
  local_11 = (char)('\0');
LAB_10bc77de:
  if ((uVar5 & 1) != 0) {
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    pSStack_44 = (SCStr *)((SCStr *)0x10bc77ef);
    ((SCStr *)(local_24))->int_release();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  }
  if ((local_11 != '\0') && (piVar1 != (int *)param_1[0x14])) {
    piVar2 = (int *)((int *)param_1[0x15]);
    if (piVar2 != (int *)0x0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      pSStack_44 = (SCStr *)((SCStr *)0x10bc7818);
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0x14] = (int)piVar1;
    param_1[0x15] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      pSStack_44 = (SCStr *)((SCStr *)0x10bc7829);
      (**(code **)(*piVar3 + 4))();
    }
  }
  pSStack_44 = (SCStr *)((SCStr *)0x10bc7830);
  thunk_FUN_10bc8860();
  pSStack_44 = (SCStr *)((SCStr *)0x0);
  pSStack_48 = (SCStr *)((SCStr *)param_1);
  ((SCStr *)((SCStr *)&ppiStack_4c))->int_allocRep("SCIBTClassicConnectionManager:onSonosDeviceConnected");
  thunk_FUN_103d65f0();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  if (piVar3 != (int *)0x0) {
    pSStack_44 = (SCStr *)((SCStr *)0x10bc7857);
    (**(code **)(*piVar3 + 8))();
  }
  local_8 = (undefined4)(7);
  pSStack_44 = (SCStr *)((SCStr *)0x10bc7866);
  ((SCStr *)(local_18))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc7930; body size 104 bytes.
#line 1 "ENTRY_10bc7930"

void __fastcall FUN_10bc7930(int param_1)

{
  int *piVar1;
  char *pcStack_14;
  int iStack_10;
  char *pcStack_c;
  
  pcStack_c = (char *)("Disconnected from Sonos Device.");
  iStack_10 = (int)(2);
  pcStack_14 = (char *)("SCBTClassicConnectionManager");
  thunk_FUN_112af4e0();
  if (*(int *)(param_1 + 0x50) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x54));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      pcStack_c = (char *)((char *)0x10bc7968);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  pcStack_c = (char *)("j");
  thunk_FUN_10bc8b30();
  pcStack_c = (char *)((char *)0x0);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&pcStack_14))->int_allocRep("SCIBTClassicConnectionManager:onSonosDeviceDisconnected");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10bc7a50; body size 196 bytes.
#line 1 "ENTRY_10bc7a50"

SCStr * __thiscall Recovered_Bulk::FUN_10bc7a50(SCStr *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c83e5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  cVar2 = (char)((**(code **)(*param_1 + 0x14))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (cVar2 != '\0') {
    piVar1 = (int *)((int *)param_1[0xe]);
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x20))(local_18));
    local_8 = (undefined4)(0);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x1c))(&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    (**(code **)(*param_1 + 0x34))(param_2,uVar4,uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
    local_8 = (undefined4)(3);
    ((SCStr *)(local_18))->int_release();
    ExceptionList = (void *)(local_10);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_2);
}


// Reference entry 10bc7b50; body size 152 bytes.
#line 1 "ENTRY_10bc7b50"

SCStr * __thiscall Recovered_Bulk::FUN_10bc7b50(SCStr *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c841d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  cVar1 = (char)((**(code **)(*param_1 + 0x14))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (cVar1 != '\0') {
    uVar2 = (undefined4)((**(code **)(*(int *)param_1[0xe] + 0x1c))(&local_14));
    local_8 = (undefined4)(0);
    (**(code **)(*param_1 + 0x38))(param_2,uVar2);
    local_8 = (undefined4)(1);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    ExceptionList = (void *)(local_10);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_2);
}


// Reference entry 10bc7c30; body size 357 bytes.
#line 1 "ENTRY_10bc7c30"

void __thiscall Recovered_Bulk::FUN_10bc7c30(SCStr *param_2,SCStr *param_3,undefined4 *param_4)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 local_3c;
  int *local_38;
  char local_31;
  undefined4 *local_30;
  char local_28 [20];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c8476);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar5 = (bool)(false);
  local_30 = (undefined4 *)(param_4);
  local_38 = (int *)(param_1);
  local_14 = (uint)(uVar3);
  if ((*(char **)param_3 != (char *)0x0) && (**(char **)param_3 != '\0')) {
    ((SCStr *)((SCStr *)&local_3c))->int_allocRep((char *)0x0);
    local_8 = (undefined4)(0);
    bVar5 = (bool)(true);
    cVar2 = (char)((**(code **)(*local_38 + 0x20))(param_3,&local_3c));
    local_31 = (char)('\x01');
    if (cVar2 != '\0') goto LAB_10bc7cad;
  }
  local_31 = (char)('\0');
LAB_10bc7cad:
  if (bVar5) {
    local_8 = (undefined4)(1);
    ((SCStr *)((SCStr *)&local_3c))->int_release();
    local_3c = (undefined4)(0);
  }
  puVar1 = (undefined4 *)(local_30);
  local_8 = (undefined4)(0xffffffff);
  if (local_31 == '\0') {
    cVar2 = (char)((**(code **)(*local_38 + 0x20))(param_3,local_30,uVar3));
    if (cVar2 == '\0') {
      pcVar6 = (char *)("");
    }
    else {
      thunk_FUN_1125cbd0();
      puVar4 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)((undefined1 *)*puVar1);
      }
      thunk_FUN_1125cf40(puVar4);
      thunk_FUN_1125ce60(local_28,0x14);
      pcVar6 = (char *)(local_28);
    }
    ((SCStr *)(param_2))->int_allocRep(pcVar6);
  }
  else {
    ((SCStr *)((SCStr *)&local_38))->int_allocRep(PTR_s__SONOS_12119d1c);
    local_8 = (undefined4)(2);
    uVar3 = (uint)(((SCStr *)(param_3))->utf8_find((SCStr *)&local_38));
    local_8 = (undefined4)(3);
    ((SCStr *)((SCStr *)&local_38))->int_release();
    local_8 = (undefined4)(0xffffffff);
    ((SCStr *)(param_3))->utf8_substr((uint)param_2,uVar3 + 8);
  }
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10bc8220; body size 858 bytes.
#line 1 "ENTRY_10bc8220"

void __fastcall FUN_10bc8220(int param_1)

{
  char cVar1;
  SCLibrary *pSVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c85f5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x50) != 0) {
    piVar7 = (int *)(*(int **)(param_1 + 0x54));
    if (piVar7 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      (**(code **)(*piVar7 + 8))();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  thunk_FUN_101b5540();
  thunk_FUN_101b6c00();
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar7 = (int *)(*(int **)(*(int *)(pSVar2 + 0x4c) + 0xe8));
  if ((piVar7 == (int *)0x0) || (cVar1 = (**(code **)*piVar7)(), cVar1 == '\0')) {
    if (*(int *)(param_1 + 0x38) != 0) {
      piVar7 = (int *)(*(int **)(param_1 + 0x3c));
      if (piVar7 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        (**(code **)(*piVar7 + 8))();
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar7 + 4))());
    piVar7 = (int *)((int *)*piVar3);
    local_8 = (undefined4)(0);
    *piVar3 = (int)(0);
    if (piVar7 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)((int *)0x0);
      local_1c = (int *)((int *)0x0);
    }
    else {
      ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIBTClassicConnectionProvider");
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      puVar4 = (undefined4 *)((undefined4 *)(**(code **)*piVar7)());
      piVar7 = (int *)((int *)*puVar4);
      *puVar4 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      local_1c = (int *)(piVar7);
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      ((SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (undefined4)(0);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    if (piVar7 != *(int **)(param_1 + 0x38)) {
      piVar3 = (int *)(*(int **)(param_1 + 0x3c));
      if (piVar3 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        (**(code **)(*piVar3 + 8))();
      }
      *(int **)(param_1 + 0x38) = piVar7;
      if (piVar7 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
        *(int **)(param_1 + 0x3c) = piVar3;
        (**(code **)(*piVar3 + 4))();
      }
    }
    local_18 = (int *)(operator_new(0xc));
    if (local_18 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *local_18 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      local_18[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *local_18 = (int)((int)(uint)&ghidra_vftable_SCBTClassicConnectionCallback);
      local_18[2] = param_1;
      piVar3 = (int *)(local_18);
    }
    if (piVar3 != *(int **)(param_1 + 0x48)) {
      piVar5 = (int *)(*(int **)(param_1 + 0x4c));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        (**(code **)(*piVar5 + 8))();
      }
      *(int **)(param_1 + 0x48) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else {
        if (*(code **)(*piVar3 + 0xc) != thunk_FUN_10bc7df0) {
          piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        }
        *(int **)(param_1 + 0x4c) = piVar3;
        (**(code **)(*piVar3 + 4))();
      }
    }
    (**(code **)(**(int **)(param_1 + 0x38) + 0x28))();
    local_8 = (undefined4)(10);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
  }
  piVar3 = (int *)((int *)thunk_FUN_101fb480());
  piVar7 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0xb);
  *piVar3 = (int)(0);
  if (piVar7 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (piVar7 != (int *)0x0) {
    piVar5 = (int *)((int *)thunk_FUN_101fc140(&local_1c));
    piVar7 = (int *)((int *)*piVar5);
    *piVar5 = (int)(0);
    piVar5 = (int *)(*(int **)(param_1 + 0x5c));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    if (piVar5 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      (**(code **)(*piVar5 + 8))();
    }
    *(int **)(param_1 + 0x58) = piVar7;
    if (piVar7 == (int *)0x0) {
      uVar6 = (undefined4)(0);
    }
    else {
      uVar6 = (undefined4)((**(code **)(*piVar7 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  thunk_FUN_10342c60();
  local_8 = (undefined4)(0x11);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc8860; body size 570 bytes.
#line 1 "ENTRY_10bc8860"

void __fastcall FUN_10bc8860(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c869d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  if (param_1[0xc] != 0) {
    thunk_FUN_1059d940(param_1[0xc]);
    param_1[0xc] = 0;
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x14))(uVar2));
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,
                       "NOT starting BLE scan because no product is BT connected");
    ExceptionList = (void *)(local_10);
    return;
  }
  if (param_1[0x14] != 0) {
    cVar1 = (char)(thunk_FUN_1034e440());
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_1034e450());
      if (cVar1 != '\0') {
        thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,
                           "NOT starting BLE scan because we already have the product");
        ExceptionList = (void *)(local_10);
        return;
      }
    }
  }
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101fb480(&local_14));
  local_8 = (undefined4)(0);
  iVar4 = (int)((**(code **)(*(int *)*puVar3 + 0x1c))());
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  if (iVar4 != 2) {
    thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,
                       "NOT starting BLE scan because we are not foregrounded");
    ExceptionList = (void *)(local_10);
    return;
  }
  if ((char)param_1[0xd] != '\0') {
    thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,"BLE scan already in progress");
    ExceptionList = (void *)(local_10);
    return;
  }
  if (param_1[0x14] != 0) {
    cVar1 = (char)(thunk_FUN_1034e4a0(1));
    if (cVar1 != '\0') {
      thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,
                         "Already connected over BLE so no need to start a BLE scan");
      ExceptionList = (void *)(local_10);
      return;
    }
  }
  uVar5 = (undefined4)(0);
  thunk_FUN_101b5540(0);
  cVar1 = (char)(thunk_FUN_101b5de0(uVar5));
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,
                       "Waiting for BLE ability to become available");
    ExceptionList = (void *)(local_10);
    return;
  }
  iVar4 = (int)(thunk_FUN_10342f60(1));
  if (iVar4 != 0) {
    thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,"Active BLE scan requested");
    iVar4 = (int)(thunk_FUN_1059d5a0(60000));
    param_1[0xb] = iVar4;
    *(undefined1 *)(param_1 + 0xd) = 1;
    ExceptionList = (void *)(local_10);
    return;
  }
  thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,
                     "Unable to start active BLE scan. Will retry in %d milliseconds",1000);
  iVar4 = (int)(thunk_FUN_1059d5a0(1000));
  param_1[0xc] = iVar4;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bc8b30; body size 91 bytes.
#line 1 "ENTRY_10bc8b30"

void __fastcall FUN_10bc8b30(int param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_112af4e0("SCBTClassicConnectionManager",2,"Stopping BLE scan");
    thunk_FUN_10342f40(1);
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 10bc90f0; body size 103 bytes.
#line 1 "ENTRY_10bc90f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc90f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 10bc9170; body size 103 bytes.
#line 1 "ENTRY_10bc9170"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc9170(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTClassicConnectionCallback"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 10bc91f0; body size 103 bytes.
#line 1 "ENTRY_10bc91f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc91f0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIBTClassicConnectionManager"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 10bc9460; body size 77 bytes.
#line 1 "ENTRY_10bc9460"

void __fastcall FUN_10bc9460(int param_1)

{
  int *piVar1;
  
  thunk_FUN_112af4e0("SCBTClassicConnectionManager",0,"resetAndRestartBleScan");
  if (*(int *)(param_1 + 0x50) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x54));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  thunk_FUN_10bc8860();
  return;
}


// Reference entry 10bc94c0; body size 96 bytes.
#line 1 "ENTRY_10bc94c0"

void __fastcall FUN_10bc94c0(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x28))(0);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x5c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  thunk_FUN_103434a0(param_1 + 8);
  param_1 = (int)(param_1 + 0x28);
  thunk_FUN_101b5540(param_1);
  thunk_FUN_101b8020(param_1);
  return;
}


// Reference entry 10bc9860; body size 342 bytes.
#line 1 "ENTRY_10bc9860"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc9860(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10bca220();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_10bc99ac:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_10bc99ac;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10bc99ac;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10bc99a6;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_10bc99a6:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 10bc9d00; body size 81 bytes.
#line 1 "ENTRY_10bc9d00"

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

void __fastcall FID_conflict__Tidy_10bc9d00(int *param_1)

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


// Reference entry 10bc9d70; body size 446 bytes.
#line 1 "ENTRY_10bc9d70"

void __fastcall FUN_10bc9d70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  int *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c88f0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar8 = (bool)(false);
  local_18 = (int *)((int *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistoryStore);
  param_1[2] = (uint)&ghidra_vftable_SCDiscoveryHistoryStore;
  param_1[5] = (uint)&ghidra_vftable_SCDiscoveryHistoryStore;
  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (pSVar4 != (SCLibrary *)0x0) {
    pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0x90))(&local_18,uVar3));
    bVar8 = (bool)(true);
    local_11 = (char)('\x01');
    if (*piVar5 != 0) goto LAB_10bc9de0;
  }
  local_11 = (char)('\0');
LAB_10bc9de0:
  if (bVar8) {
    local_8 = (undefined4)(0);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
  }
  if (local_11 != '\0') {
    uVar1 = (undefined4)(param_1[3]);
    pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar6 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)pSVar4 + 0x90))(&local_1c));
    (**(code **)(*(int *)*puVar6 + 0x30))(uVar1);
    local_8 = (undefined4)(1);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
  }
  if (param_1[0xf] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xf])(1);
    }
    param_1[0xf] = 0;
  }
  thunk_FUN_112a7f20(param_1 + 6);
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  iVar2 = (int)(param_1[8]);
  local_8 = (undefined4)(0xffffffff);
  if (iVar2 != 0) {
    uVar3 = (uint)((param_1[10] - iVar2 >> 2) * 4);
    iVar7 = (int)(iVar2);
    if (0xfff < uVar3) {
      iVar7 = (int)(*(int *)(iVar2 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar2 - iVar7) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar7,uVar3);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  param_1[5] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[2] = (uint)&ghidra_vftable_SCEventSinkDelegate;
  piVar5 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(3);
  if (piVar5 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar5 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bca050; body size 89 bytes.
#line 1 "ENTRY_10bca050"

void __thiscall Recovered_Bulk::FUN_10bca050(int param_2,int param_3,int param_4)
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


// Reference entry 10bca120; body size 81 bytes.
#line 1 "ENTRY_10bca120"

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

void __fastcall FID_conflict__Tidy_10bca120(int *param_1)

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


// Reference entry 10bcaf90; body size 244 bytes.
#line 1 "ENTRY_10bcaf90"

void __fastcall FUN_10bcaf90(int param_1)

{
  int iVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c8d4c);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x90))(&local_14,uVar2));
  iVar1 = (int)(*piVar4);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  if (iVar1 != 0) {
    uVar6 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    puVar5 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)pSVar3 + 0x90))(&local_18));
    local_8 = (undefined4)(1);
    (**(code **)(*(int *)*puVar5 + 0x2c))(uVar6);
    local_8 = (undefined4)(2);
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  local_8 = (undefined4)(0xffffffff);
  local_14 = (int *)(operator_new(0x20));
  local_8 = (undefined4)(3);
  if (local_14 == (int *)0x0) {
    uVar6 = (undefined4)(0);
  }
  else {
    uVar6 = (undefined4)(thunk_FUN_110828b0());
    uVar6 = (undefined4)(thunk_FUN_104ddfd0(-(uint)(param_1 != 0) & param_1 + 0x14U,uVar6));
  }
  local_8 = (undefined4)(0xffffffff);
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  thunk_FUN_104deb40();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bcb150; body size 118 bytes.
#line 1 "ENTRY_10bcb150"

void __stdcall FUN_10bcb150(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c8d80);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bcb230; body size 366 bytes.
#line 1 "ENTRY_10bcb230"

bool __fastcall FUN_10bcb230(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *local_1c;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c8ddd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)thunk_FUN_102518f0(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("muse_getdevices_call_interval");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  cVar2 = (char)((**(code **)(*piVar1 + 0x18))(&local_14));
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (cVar2 == '\0') {
    iVar4 = (int)(30000);
    pcVar6 = (char *)("use cloud fetch interval defined in the code: %ld seconds");
    iVar5 = (int)(0x1e);
  }
  else {
    ((SCStr *)(local_18))->int_allocRep("call_interval");
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("muse_getdevices_call_interval");
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    iVar4 = (int)((**(code **)(*piVar1 + 0x20))(&local_14,local_18));
    iVar4 = (int)(iVar4 * 1000);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((SCStr *)(local_18))->int_release();
    pcVar6 = (char *)("use cloud fetch interval from Optimizely: %ld seconds");
    iVar5 = (int)(iVar4 / 1000);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_112af4e0("SCDHS",3,pcVar6,iVar5);
  iVar5 = (int)(thunk_FUN_1145aba0(param_1 + 0x30));
  local_8 = (undefined4)(0xb);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar4 <= iVar5);
}


// Reference entry 10bcb450; body size 103 bytes.
#line 1 "ENTRY_10bcb450"

undefined4 * __thiscall Recovered_Bulk::FUN_10bcb450(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 10bcb5c0; body size 67 bytes.
#line 1 "ENTRY_10bcb5c0"

uint __thiscall Recovered_Bulk::FUN_10bcb5c0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(0);
  iVar1 = (int)(*(int *)(param_1 + 0x20));
  uVar3 = (uint)(*(int *)(param_1 + 0x24) - iVar1 >> 2);
  if (uVar3 != 0) {
    do {
      if (*(int *)(iVar1 + uVar2 * 4) == param_2) {
        *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(iVar1 + -4 + uVar3 * 4);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -4;
        return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < uVar3);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 10bcc760; body size 248 bytes.
#line 1 "ENTRY_10bcc760"

int * __thiscall Recovered_Bulk::FUN_10bcc760(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c90ad);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIVoiceServiceDelegate");
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
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bcc940; body size 242 bytes.
#line 1 "ENTRY_10bcc940"

int * __thiscall Recovered_Bulk::FUN_10bcc940(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c90fd);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIVoiceServiceDelegate");
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
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bcca70; body size 188 bytes.
#line 1 "ENTRY_10bcca70"

int * __thiscall Recovered_Bulk::FUN_10bcca70(undefined4 *param_2)
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
  puStack_c = (undefined1 *)(LAB_116c9145);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIVoiceServiceDelegate");
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
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10bccc10; body size 472 bytes.
#line 1 "ENTRY_10bccc10"

void __thiscall Recovered_Bulk::FUN_10bccc10(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  uVar4 = (uint)(0);
  piVar6 = (int *)(param_2);
  while (piVar6 != (int *)(param_3)) {
    piVar8 = (int *)((int *)piVar6[2]);
    uVar4 = (uint)(uVar4 + 1);
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar8 + 0xd));
      piVar6 = (int *)(piVar8);
      piVar8 = (int *)((int *)*piVar8);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar8 + 0xd));
        piVar6 = (int *)(piVar8);
        piVar8 = (int *)((int *)*piVar8);
      }
    }
    else {
      cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
      piVar7 = (int *)((int *)piVar6[1]);
      piVar8 = (int *)(piVar6);
      while ((piVar6 = piVar7, cVar1 == '\0' && (piVar8 == (int *)piVar6[2]))) {
        cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
        piVar7 = (int *)((int *)piVar6[1]);
        piVar8 = (int *)(piVar6);
      }
    }
  }
  iVar2 = (int)(*param_1);
  uVar5 = (uint)(param_1[1] - iVar2 >> 2);
  if (uVar4 <= uVar5) {
    thunk_FUN_10bcd900(param_2,param_3,iVar2);
    param_1[1] = iVar2 + uVar4 * 4;
    return;
  }
  piVar6 = (int *)(param_2);
  if ((uint)(param_1[2] - iVar2 >> 2) < uVar4) {
    thunk_FUN_10bd9ba0(uVar4);
  }
  else {
    bVar9 = (bool)(uVar5 == 0);
    if ((int)uVar5 < 0) {
      iVar2 = (int)(-uVar5);
      uVar5 = (uint)(0);
      do {
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          piVar8 = (int *)((int *)*piVar6);
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            cVar1 = (char)(*(char *)(piVar8[2] + 0xd));
            piVar7 = (int *)((int *)piVar8[2]);
            while (piVar6 = piVar8, cVar1 == '\0') {
              cVar1 = (char)(*(char *)(piVar7[2] + 0xd));
              piVar8 = (int *)(piVar7);
              piVar7 = (int *)((int *)piVar7[2]);
            }
          }
          else {
            cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
            piVar7 = (int *)((int *)piVar6[1]);
            piVar8 = (int *)(piVar6);
            while ((piVar6 = piVar7, cVar1 == '\0' && (piVar8 == (int *)*piVar6))) {
              cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
              piVar7 = (int *)((int *)piVar6[1]);
              piVar8 = (int *)(piVar6);
            }
            if (*(char *)((int)piVar8 + 0xd) != '\0') {
              piVar6 = (int *)(piVar8);
            }
          }
        }
        else {
          piVar6 = (int *)((int *)piVar6[2]);
        }
        iVar2 = (int)(iVar2 + -1);
      } while (iVar2 != 0);
      bVar9 = (bool)(true);
    }
    if (!bVar9) {
      do {
        piVar8 = (int *)((int *)piVar6[2]);
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          cVar1 = (char)(*(char *)(*piVar8 + 0xd));
          piVar6 = (int *)(piVar8);
          piVar8 = (int *)((int *)*piVar8);
          while (cVar1 == '\0') {
            cVar1 = (char)(*(char *)(*piVar8 + 0xd));
            piVar6 = (int *)(piVar8);
            piVar8 = (int *)((int *)*piVar8);
          }
        }
        else {
          cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
          piVar7 = (int *)((int *)piVar6[1]);
          piVar8 = (int *)(piVar6);
          while ((piVar6 = piVar7, cVar1 == '\0' && (piVar8 == (int *)piVar6[2]))) {
            cVar1 = (char)(*(char *)(piVar6[1] + 0xd));
            piVar7 = (int *)((int *)piVar6[1]);
            piVar8 = (int *)(piVar6);
          }
        }
        uVar5 = (uint)(uVar5 - 1);
      } while (0 < (int)uVar5);
    }
  }
  thunk_FUN_10bcd900(param_2,piVar6,*param_1);
  piVar8 = (int *)((int *)param_1[1]);
  do {
    do {
      while( true ) {
        piVar7 = (int *)(piVar6);
        if (piVar7 == (int *)(param_3)) {
          param_1[1] = (int)piVar8;
          return;
        }
        *piVar8 = (int)(piVar7[4]);
        piVar8 = (int *)(piVar8 + 1);
        piVar6 = (int *)((int *)piVar7[2]);
        if (*(char *)((int)piVar6 + 0xd) != '\0') break;
        cVar1 = (char)(*(char *)(*piVar6 + 0xd));
        piVar7 = (int *)((int *)*piVar6);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar7 + 0xd));
          piVar6 = (int *)(piVar7);
          piVar7 = (int *)((int *)*piVar7);
        }
      }
      piVar6 = (int *)((int *)piVar7[1]);
    } while (*(char *)((int)piVar6 + 0xd) != '\0');
    do {
      piVar3 = (int *)(piVar6);
      piVar6 = (int *)(piVar3);
      if (piVar7 != (int *)piVar3[2]) break;
      piVar6 = (int *)((int *)piVar3[1]);
      piVar7 = (int *)(piVar3);
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  } while( true );
}


// Reference entry 10bcd900; body size 112 bytes.
#line 1 "ENTRY_10bcd900"

int * FUN_10bcd900(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_1 == (int *)(param_2)) {
    return (int *)(param_3);
  }
  do {
    *param_3 = (int)(param_1[4]);
    param_3 = (int *)(param_3 + 1);
    piVar2 = (int *)((int *)param_1[2]);
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
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  } while (param_1 != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 10bcdb00; body size 111 bytes.
#line 1 "ENTRY_10bcdb00"

void FUN_10bcdb00(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c93a0);
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


// Reference entry 10bcdba0; body size 254 bytes.
#line 1 "ENTRY_10bcdba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bcdba0(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c93dd);
  local_10 = (void *)(ExceptionList);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar6 = (bool)(false);
  puVar7 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar5 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar7);
    do {
      puVar7 = (undefined4 *)(puVar2);
      if ((int)puVar7[4] < *param_3) {
        puVar2 = (undefined4 *)((undefined4 *)puVar7[2]);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)*puVar7);
        puVar5 = (undefined4 *)(puVar7);
      }
      bVar6 = (bool)(*param_3 <= (int)puVar7[4]);
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar5 + 0xd) == '\0') && ((int)puVar5[4] <= *param_3)) {
    *param_2 = (undefined4)(puVar5);
    *(undefined1 *)(param_2 + 1) = 0;
    return (undefined4 *)(param_2);
  }
  ExceptionList = (void *)(&local_10);
  if (param_1[1] == 0xccccccc) {
                    
    thunk_FUN_101d7220(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  piVar3 = (int *)(operator_new(0x14));
  piVar3[4] = *param_3;
  *piVar3 = (int)((int)puVar1);
  piVar3[1] = (int)puVar1;
  piVar3[2] = (int)puVar1;
  *(undefined2 *)(piVar3 + 3) = 0;
  uVar4 = (undefined4)(thunk_FUN_10bdb900(puVar7,bVar6,piVar3));
  *param_2 = (undefined4)(uVar4);
  *(undefined1 *)(param_2 + 1) = 1;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10bcdfc0; body size 342 bytes.
#line 1 "ENTRY_10bcdfc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bcdfc0(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10bdcfa0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_10bce10c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_10bce10c;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10bce10c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10bce106;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_10bce106:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 10bce170; body size 342 bytes.
#line 1 "ENTRY_10bce170"

undefined4 * __thiscall Recovered_Bulk::FUN_10bce170(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10bdcfb0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_10bce2bc:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_10bce2bc;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10bce2bc;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10bce2b6;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_10bce2b6:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 10bce670; body size 607 bytes.
#line 1 "ENTRY_10bce670"

void * __thiscall Recovered_Bulk::FUN_10bce670(int param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c952d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar2 = (int)(*param_1);
  iVar8 = (int)((param_1[1] - iVar2) / 0x1c);
  if (iVar8 == 0x9249249) {
                    
    thunk_FUN_10bdcfd0();
  }
  uVar1 = (uint)(iVar8 + 1);
  uVar3 = (uint)((param_1[2] - iVar2) / 0x1c);
  if (0x9249249 - (uVar3 >> 1) < uVar3) {
LAB_10bce8c5:
                    
    thunk_FUN_1012a2a0();
  }
  uVar3 = (uint)((uVar3 >> 1) + uVar3);
  uVar6 = (uint)(uVar1);
  if (uVar1 <= uVar3) {
    uVar6 = (uint)(uVar3);
  }
  if (0x9249249 < uVar6) goto LAB_10bce8c5;
  uVar3 = (uint)(uVar6 * 0x1c);
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      pvVar5 = (void *)((void *)0x0);
    }
    else {
      pvVar5 = (void *)(operator_new(uVar3));
    }
  }
  else {
    if (uVar3 + 0x23 <= uVar3) goto LAB_10bce8c5;
    pvVar4 = (void *)(operator_new(uVar3 + 0x23));
    if (pvVar4 == (void *)0x0) goto LAB_10bce8bf;
    pvVar5 = (void *)((void *)((int)pvVar4 + 0x23U & 0xffffffe0));
    *(void **)((int)pvVar5 + -4) = pvVar4;
  }
  local_8 = (undefined4)(0);
  pvVar4 = (void *)((void *)((int)pvVar5 + ((param_2 - iVar2) / 0x1c) * 0x1c));
  thunk_FUN_10475400(param_3);
  iVar2 = (int)(param_1[1]);
  iVar8 = (int)(*param_1);
  if (param_2 == iVar2) {
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    pvVar7 = (void *)(pvVar5);
    for (; iVar8 != iVar2; iVar8 = iVar8 + 0x1c) {
      thunk_FUN_10475400(iVar8);
      pvVar7 = (void *)((void *)((int)pvVar7 + 0x1c));
    }
    thunk_FUN_10352990(pvVar7,pvVar7,param_1);
  }
  else {
    thunk_FUN_10bdc920(iVar8,param_2,pvVar5);
    thunk_FUN_10bdc920(param_2,param_1[1],(int)pvVar4 + 0x1c);
  }
  if (*param_1 != 0) {
    thunk_FUN_10352990(*param_1,param_1[1],param_1);
    iVar2 = (int)(*param_1);
    uVar3 = (uint)(((param_1[2] - *param_1) / 0x1c) * 0x1c);
    iVar8 = (int)(iVar2);
    if (0xfff < uVar3) {
      iVar8 = (int)(*(int *)(iVar2 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar2 - iVar8) - 4U) {
LAB_10bce8bf:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar8,uVar3);
  }
  *param_1 = (int)((int)pvVar5);
  param_1[1] = (int)((int)pvVar5 + uVar1 * 0x1c);
  param_1[2] = (int)(uVar6 * 0x1c + (int)pvVar5);
  ExceptionList = (void *)(local_10);
  return (void *)(pvVar4);
}


// Reference entry 10bcec60; body size 71 bytes.
#line 1 "ENTRY_10bcec60"

void __thiscall Recovered_Bulk::FUN_10bcec60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_10bcee70(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x1c);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x1c);
  return;
}


// Reference entry 10bcee10; body size 71 bytes.
#line 1 "ENTRY_10bcee10"

void __thiscall Recovered_Bulk::FUN_10bcee10(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_10bcf3d0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x14);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x14);
  return;
}


// Reference entry 10bceec0; body size 138 bytes.
#line 1 "ENTRY_10bceec0"

undefined4 __thiscall Recovered_Bulk::FUN_10bceec0(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c95a0);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    thunk_FUN_10bceec0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    local_8 = (undefined4)(0);
    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    param_3[4] = 0;
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x18,uVar4);
    ppvVar3 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bcef80; body size 138 bytes.
#line 1 "ENTRY_10bcef80"

undefined4 __thiscall Recovered_Bulk::FUN_10bcef80(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c95d0);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    thunk_FUN_10bcef80(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    local_8 = (undefined4)(0);
    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    param_3[4] = 0;
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x18,uVar4);
    ppvVar3 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bcf040; body size 138 bytes.
#line 1 "ENTRY_10bcf040"

undefined4 __thiscall Recovered_Bulk::FUN_10bcf040(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c9600);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    thunk_FUN_10bcf040(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    local_8 = (undefined4)(0);
    ((SCStr *)((SCStr *)(param_3 + 5)))->int_release();
    param_3[5] = 0;
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x18,uVar4);
    ppvVar3 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bcf100; body size 67 bytes.
#line 1 "ENTRY_10bcf100"

void __stdcall FUN_10bcf100(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10bcf100(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_10bd7130();
    thunk_FUN_1148a50e(param_2,0x30);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10bcf160; body size 150 bytes.
#line 1 "ENTRY_10bcf160"

undefined4 __thiscall Recovered_Bulk::FUN_10bcf160(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c9630);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_10bcf160(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x1c);
    ppvVar4 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bcf230; body size 150 bytes.
#line 1 "ENTRY_10bcf230"

undefined4 __thiscall Recovered_Bulk::FUN_10bcf230(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c9660);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_10bcf230(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x1c);
    ppvVar4 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bcf300; body size 150 bytes.
#line 1 "ENTRY_10bcf300"

undefined4 __thiscall Recovered_Bulk::FUN_10bcf300(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c9690);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_10bcf300(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x1c);
    ppvVar4 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bcf420; body size 138 bytes.
#line 1 "ENTRY_10bcf420"

undefined4 __thiscall Recovered_Bulk::FUN_10bcf420(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c96c0);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    thunk_FUN_10bcf420(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    local_8 = (undefined4)(0);
    ((SCStr *)((SCStr *)(param_3 + 4)))->int_release();
    param_3[4] = 0;
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x18,uVar4);
    ppvVar3 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bcf4e0; body size 138 bytes.
#line 1 "ENTRY_10bcf4e0"

undefined4 __thiscall Recovered_Bulk::FUN_10bcf4e0(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c96f0);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar3 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    thunk_FUN_10bcf4e0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    local_8 = (undefined4)(0);
    ((SCStr *)((SCStr *)(param_3 + 5)))->int_release();
    param_3[5] = 0;
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x18,uVar4);
    ppvVar3 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10bcf810; body size 73 bytes.
#line 1 "ENTRY_10bcf810"

int * __thiscall Recovered_Bulk::FUN_10bcf810(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar4);
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = (uint)(*param_3);
    do {
      *param_2 = (int)((int)puVar4);
      uVar3 = (uint)(puVar4[4]);
      if (uVar2 <= uVar3) {
        param_2[2] = (int)puVar4;
        puVar4 = (undefined4 *)((undefined4 *)*puVar4);
      }
      else {
        puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
      }
      param_2[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 10bcf950; body size 73 bytes.
#line 1 "ENTRY_10bcf950"

int * __thiscall Recovered_Bulk::FUN_10bcf950(int *param_2,int *param_3)
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


// Reference entry 10bcf9b0; body size 73 bytes.
#line 1 "ENTRY_10bcf9b0"

int * __thiscall Recovered_Bulk::FUN_10bcf9b0(int *param_2,int *param_3)
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


// Reference entry 10bcfa10; body size 73 bytes.
#line 1 "ENTRY_10bcfa10"

int * __thiscall Recovered_Bulk::FUN_10bcfa10(int *param_2,int *param_3)
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


// Reference entry 10bcfa70; body size 73 bytes.
#line 1 "ENTRY_10bcfa70"

int * __thiscall Recovered_Bulk::FUN_10bcfa70(int *param_2,int *param_3)
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


// Reference entry 10bcfad0; body size 73 bytes.
#line 1 "ENTRY_10bcfad0"

int * __thiscall Recovered_Bulk::FUN_10bcfad0(int *param_2,int *param_3)
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


// Reference entry 10bcfd90; body size 89 bytes.
#line 1 "ENTRY_10bcfd90"

void FUN_10bcfd90(undefined4 param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9720);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x18,uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bcfe10; body size 89 bytes.
#line 1 "ENTRY_10bcfe10"

void FUN_10bcfe10(undefined4 param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9750);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_2 + 0x10)))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x18,uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bcfe90; body size 89 bytes.
#line 1 "ENTRY_10bcfe90"

void FUN_10bcfe90(undefined4 param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9780);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_2 + 0x14)))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  thunk_FUN_1148a50e(param_2,0x18,uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bcff30; body size 98 bytes.
#line 1 "ENTRY_10bcff30"

void FUN_10bcff30(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c97b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 0x18));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x1c);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bcffb0; body size 98 bytes.
#line 1 "ENTRY_10bcffb0"

void FUN_10bcffb0(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c97e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 0x18));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x1c);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bd0030; body size 98 bytes.
#line 1 "ENTRY_10bd0030"

void FUN_10bd0030(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9810);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 0x18));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x1c);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bd01a0; body size 508 bytes.
#line 1 "ENTRY_10bd01a0"

void __thiscall Recovered_Bulk::FUN_10bd01a0(void *param_2,void *param_3,int param_4)
{
  int *param_1 = (int *)this;
  size_t _Size;
  void *_Dst;
  size_t _Size_00;
  int iVar1;
  uint uVar2;
  void *_Dst_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  size_t _Size_01;
  
  _Size_00 = (size_t)(param_4 - (int)param_3);
  uVar5 = (uint)((int)_Size_00 >> 2);
  pvVar6 = (void *)((void *)*param_1);
  _Dst = (void *)((void *)param_1[1]);
  if (uVar5 != 0) {
    if ((uint)(param_1[2] - (int)_Dst >> 2) < uVar5) {
      iVar1 = (int)((int)_Dst - (int)pvVar6 >> 2);
      if (0x3fffffffU - iVar1 < uVar5) {
                    
        thunk_FUN_101a9bd0();
      }
      uVar2 = (uint)(iVar1 + uVar5);
      uVar4 = (uint)(param_1[2] - (int)pvVar6 >> 2);
      if (0x3fffffff - (uVar4 >> 1) < uVar4) {
        uVar4 = (uint)(0x3fffffff);
      }
      else {
        uVar4 = (uint)((uVar4 >> 1) + uVar4);
        if (uVar4 < uVar2) {
          uVar4 = (uint)(uVar2);
        }
      }
      _Dst_00 = (void *)((void *)thunk_FUN_101a9c10(uVar4));
      iVar1 = (int)((int)param_2 - (int)pvVar6 >> 2);
      memmove((void *)((int)_Dst_00 + iVar1 * 4),param_3,_Size_00);
      if ((uVar5 == 1) && ((void *)(param_2) == _Dst)) {
        memmove(_Dst_00,pvVar6,(int)_Dst - (int)pvVar6);
      }
      else {
        memmove(_Dst_00,pvVar6,(int)param_2 - (int)pvVar6);
        memmove((void *)((int)_Dst_00 + (iVar1 + uVar5) * 4),param_2,(int)_Dst - (int)param_2);
      }
      iVar1 = (int)(*param_1);
      if (iVar1 != 0) {
        uVar5 = (uint)(param_1[2] - iVar1 & 0xfffffffc);
        iVar3 = (int)(iVar1);
        if (0xfff < uVar5) {
          iVar3 = (int)(*(int *)(iVar1 + -4));
          uVar5 = (uint)(uVar5 + 0x23);
          if (0x1f < (iVar1 - iVar3) - 4U) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(iVar3,uVar5);
      }
      *param_1 = (int)((int)_Dst_00);
      param_1[1] = (int)((int)_Dst_00 + uVar2 * 4);
      param_1[2] = (int)((int)_Dst_00 + uVar4 * 4);
      return;
    }
    _Size = (size_t)(uVar5 * 4);
    uVar4 = (uint)((int)_Dst - (int)param_2 >> 2);
    if (uVar5 < uVar4) {
      pvVar6 = (void *)((void *)((int)_Dst + uVar5 * -4));
      memmove(_Dst,pvVar6,_Size);
      _Size_01 = (size_t)((int)pvVar6 - (int)param_2);
      param_1[1] = (int)(_Size + (int)_Dst);
      memmove((void *)((int)_Dst - _Size_01),param_2,_Size_01);
      memmove(param_2,param_3,_Size_00);
      return;
    }
    memmove((void *)(_Size + (int)param_2),param_2,(int)_Dst - (int)param_2);
    param_1[1] = (int)((int)(_Size + (int)param_2) + uVar4 * 4);
    memmove(param_2,param_3,_Size_00);
  }
  return;
}


// Reference entry 10bd07b0; body size 221 bytes.
#line 1 "ENTRY_10bd07b0"

int * __thiscall Recovered_Bulk::FUN_10bd07b0(int *param_2,uint *param_3)
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
  puStack_c = (undefined1 *)(LAB_116c984d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcf810(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(uint *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10bda480(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


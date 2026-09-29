// Mechanically recovered Ghidra C-like functions, compiled as x86 C++.
// Types below are width-preserving placeholders, pending semantic recovery.
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using byte = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using float10 = long double;
using code = int(...);

using byte = unsigned char;
using uchar = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using ulonglong = unsigned long long;
using float10 = long double;
using DWORD = unsigned long;
using BOOL = int;
using LPCSTR = const char *;
using __time64_t = long long;
struct FILE;
struct tm;
struct ThrowInfo;

struct RefCounted {
    virtual void Reserved();
    virtual void AddRef();
    virtual void Release();
};

// Placement construction calls the actual constructor at the recovered receiver.
inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
class SwfStr;
class SCStr {
public:
    void *rep;
    SCStr();
    SCStr(const char *text);
    SCStr(const char *text, unsigned int length);
    SCStr(const SCStr &other);
    SCStr(const SwfStr &other);
    ~SCStr();
    bool operator<(const SCStr &other) const;
    bool operator<(const SwfStr &other) const;
    bool endsWith(const char *suffix) const;
    bool endsWith(const SCStr &suffix) const;
    bool endsWith(const SwfStr &suffix) const;
    SCStr &append(const char *text);
    SCStr &append(const char *text, unsigned int length);
    SCStr &append(char value);
    SCStr &append(const SCStr &other);
    SCStr &prepend(const char *text);
    SCStr &prepend(const char *text, unsigned int length);
    SCStr &prepend(const SCStr &other);
    SCStr &setFromUTF16(const unsigned short *text);
    SCStr &setFromUTF16(const unsigned short *text, unsigned int length);
    SCStr &replace(const char *from, const char *to, bool ignoreCase);
    char *getBuffer(unsigned int length);
    void empty();
    unsigned int utf8_length() const;
    bool int_endsWith(const char *text, unsigned int length, unsigned int suffixLength) const;
    unsigned int __cdecl trimRear(char *text, char *characters);
    int __cdecl format(const char *format, ...);
    bool operator==(const char *other) const;
    bool operator==(SCStr *other) const;
    bool operator!=(const char *other) const;
    bool operator!=(SCStr *other) const;
    bool beginsWith(const char *prefix) const;
    bool beginsWith(SCStr *prefix) const;
    bool contains(const char *needle, bool ignoreCase) const;
    bool contains(SCStr *needle, bool ignoreCase) const;
    unsigned int length() const;
    unsigned int hash() const;
    void int_addref();
    void int_release();
    void int_allocRep(char *text);
    void int_allocRep(char *text, unsigned int length);
};
struct RecoveredVirtualSlots {
  virtual int VirtualSlot0();
  virtual int VirtualSlot1();
  virtual int VirtualSlot2();
  virtual int VirtualSlot3();
};
extern undefined1 DAT_1186d2ee;
extern undefined4 DAT_121a06a0;
extern undefined4 DAT_121a06a4;
extern undefined4 DAT_121a06a8;
extern undefined4 DAT_121a06ac;
extern undefined4 DAT_121a06b0;
extern undefined4 DAT_121a06b4;
extern undefined4 DAT_121a06b8;
extern undefined4 DAT_121a06bc;
extern undefined4 DAT_121a06c0;
extern undefined4 DAT_121a06c4;
extern code * DAT_121a06d8;
extern undefined4 DAT_121a0be0;
extern undefined4 DAT_121a5544;
extern undefined4 DAT_121a6008;
extern undefined4 DAT_121a6014;
extern undefined4 _DAT_121a6008;
extern undefined4 _DAT_121a6014;
extern char ghidra_vftable_RAccountAIOOpBase[];
extern char ghidra_vftable_RConnectedPartnerRemoveRequest[];
extern char ghidra_vftable_RGetBetaSettingsRequest[];
extern char ghidra_vftable_RGetDiagnosticMetadataRequest[];
extern char ghidra_vftable_RGetEthernetStatusRequest[];
extern char ghidra_vftable_RGetLocalSupportDocumentRequest[];
extern char ghidra_vftable_RGetNetworkConnectivityTestResultRequest[];
extern char ghidra_vftable_RHouseholdSettingGetRequest[];
extern char ghidra_vftable_RHouseholdSettingPostRequest[];
extern char ghidra_vftable_RITQHandler[];
extern char ghidra_vftable_RInitiateDiagnosticsRequest[];
extern char ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest[];
extern char ghidra_vftable_RLookupV1CertInfoRequest[];
extern char ghidra_vftable_RMuseDeviceSetSettingsPostRequest[];
extern char ghidra_vftable_RMuseGetUserSettingsRequest[];
extern char ghidra_vftable_RMusePlayerInfoGetRequest[];
extern char ghidra_vftable_RMuseRateItemPostRequest[];
extern char ghidra_vftable_RPostUpdateRequest[];
extern char ghidra_vftable_RRefreshTokenRequest[];
extern char ghidra_vftable_RReportDiagnosticsStatusRequest[];
extern char ghidra_vftable_RSHdmiGetInfoRequest[];
extern char ghidra_vftable_RSecRegAccountTransferRequest[];
extern char ghidra_vftable_RSecRegBeginSecureTransferRequest[];
extern char ghidra_vftable_RSecRegCreateIdentityRequest[];
extern char ghidra_vftable_RSecRegFinalizeRegistrationRequest[];
extern char ghidra_vftable_RSecRegGetRegistrationResult[];
extern char ghidra_vftable_RSecRegGetUserAccountRequest[];
extern char ghidra_vftable_RSecRegLoginRequest[];
extern char ghidra_vftable_RSecRegPasswordSetRequest[];
extern char ghidra_vftable_RSecRegPrepareRegistrationRequest[];
extern char ghidra_vftable_RSecRegPrepareTransferRequest[];
extern char ghidra_vftable_RSecRegResetPasswordRequest[];
extern char ghidra_vftable_RSecRegUpdateUserRequest[];
extern char ghidra_vftable_RSecRegUserEmailRequest[];
extern char ghidra_vftable_RSecRegUserGetRequest[];
extern char ghidra_vftable_RSecRegValidateEmailRequest[];
extern char ghidra_vftable_RSecRegVerifyEmailRequest[];
extern char ghidra_vftable_RSecRegVerifyEmailSubmitRequest[];
extern char ghidra_vftable_RServiceAuthHeaderBuilderFactory[];
extern char ghidra_vftable_RServiceManifestGetRequest[];
extern char ghidra_vftable_RStartNetworkConnectivityTestRequest[];
extern char ghidra_vftable_RTMFetchClientTokenRequest[];
extern char ghidra_vftable_RTempDisableNetworkRequest[];
extern char ghidra_vftable_RTrackMetaDataObjCB[];
extern char ghidra_vftable_RVSAlexaChallengeRequest[];
extern char ghidra_vftable_RVSAlexaROWLocaleRequest[];
extern char ghidra_vftable_RVSAmazonSkillAuthCodeRequest[];
extern char ghidra_vftable_RVSAuthenticateRequest[];
extern char ghidra_vftable_RVSDeleteAccountRequest[];
extern char ghidra_vftable_RVSNotifyInitiateOnboardingRequest[];
extern char ghidra_vftable_SCAccountManagerEventSink[];
extern char ghidra_vftable_SCAccountSettingsDataSource[];
extern char ghidra_vftable_SCAccountSignInInitState[];
extern char ghidra_vftable_SCAccountSignInMainPageState[];
extern char ghidra_vftable_SCAggregateSearchDataSource[];
extern char ghidra_vftable_SCAlarmItem[];
extern char ghidra_vftable_SCAlarmMusicDataSource[];
extern char ghidra_vftable_SCAlarmMusicRootDataSource[];
extern char ghidra_vftable_SCAlarmsDataSource[];
extern char ghidra_vftable_SCAlarmsSettingsDataSource[];
extern char ghidra_vftable_SCAlarmsSettingsZonesDataSource[];
extern char ghidra_vftable_SCAlexaAuthChecklistMSPAlexaEducationState[];
extern char ghidra_vftable_SCAlexaAuthChecklistVoiceEducationState[];
extern char ghidra_vftable_SCAlexaAuthReminderState[];
extern char ghidra_vftable_SCAlexaAuthWizard[];
extern char ghidra_vftable_SCAllNodeBrowseItemBase[];
extern char ghidra_vftable_SCAsyncBrowseDataSource[];
extern char ghidra_vftable_SCAsyncBrowseItemBase[];
extern char ghidra_vftable_SCAutoplayZoneSelectAction[];
extern char ghidra_vftable_SCAvailableServicesMenuDataSource[];
extern char ghidra_vftable_SCBTDevice[];
extern char ghidra_vftable_SCBTNowPlaying[];
extern char ghidra_vftable_SCBTZoneGroup[];
extern char ghidra_vftable_SCBaseHttpAsyncIOOperation[];
extern char ghidra_vftable_SCBrowseDataSourceEventSink[];
extern char ghidra_vftable_SCBrowseDataSourceProxy[];
extern char ghidra_vftable_SCBrowseStackManagerEventSink[];
extern char ghidra_vftable_SCChangeEmailWizMainPageState[];
extern char ghidra_vftable_SCChangeEmailWizVerifyState[];
extern char ghidra_vftable_SCConnectedPartnersCache[];
extern char ghidra_vftable_SCController__LimitedAccessStateData[];
extern char ghidra_vftable_SCControllerConfigReporter[];
extern char ghidra_vftable_SCControllerEventSink[];
extern char ghidra_vftable_SCCreateIdentityPostRequest[];
extern char ghidra_vftable_SCDateTimeManagerEventSink[];
extern char ghidra_vftable_SCDeviceListDataSource[];
extern char ghidra_vftable_SCDeviceMusicEqualizationEventSink[];
extern char ghidra_vftable_SCDeviceSettingsDataSource[];
extern char ghidra_vftable_SCEventSinkDelegate[];
extern char ghidra_vftable_SCFeatureManagerEventSink[];
extern char ghidra_vftable_SCGetAsyncIOOperation[];
extern char ghidra_vftable_SCHTAudioBrowseItem[];
extern char ghidra_vftable_SCHistoryBrowseDataSource[];
extern char ghidra_vftable_SCHomePageBrowseItem[];
extern char ghidra_vftable_SCHomePagePinnedItem[];
extern char ghidra_vftable_SCHouseholdEventSink[];
extern char ghidra_vftable_SCIActionDelegateCB[];
extern char ghidra_vftable_SCIObj[];
extern char ghidra_vftable_SCIOpCBDelegate[];
extern char ghidra_vftable_SCIStackedItemImpl[];
extern char ghidra_vftable_SCIndexManagerEventSink[];
extern char ghidra_vftable_SCLanScanner[];
extern char ghidra_vftable_SCLandingPagePremiumSonosRadio[];
extern char ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState[];
extern char ghidra_vftable_SCLegacySubmitDiagsWizSubmittingState[];
extern char ghidra_vftable_SCLifecycleLauncherWizardRetrievingProductsState[];
extern char ghidra_vftable_SCLifecycleManagerEventSink[];
extern char ghidra_vftable_SCLifecycleNetworkTestAggregateResultState[];
extern char ghidra_vftable_SCLifecycleNetworkTestStartWifiState[];
extern char ghidra_vftable_SCLifecycleNetworkTestWifiNameState[];
extern char ghidra_vftable_SCLifecycleNetworkTestWifiSubmittingState[];
extern char ghidra_vftable_SCLineInBrowseItem[];
extern char ghidra_vftable_SCLineInMenuDataSource[];
extern char ghidra_vftable_SCLocalMusicBrowseDataSource[];
extern char ghidra_vftable_SCLocalMusicBrowseItem[];
extern char ghidra_vftable_SCLoggingHelper[];
extern char ghidra_vftable_SCMusicIndexUpdateTimeSettingItem[];
extern char ghidra_vftable_SCMusicLibraryBrowseDataSource[];
extern char ghidra_vftable_SCMusicLibraryBrowseItem[];
extern char ghidra_vftable_SCMusicLibraryManagementDataSource[];
extern char ghidra_vftable_SCMusicServiceAppLinkFailState[];
extern char ghidra_vftable_SCMusicServiceBrowseItem[];
extern char ghidra_vftable_SCMusicServiceCallToActionAppLinkState[];
extern char ghidra_vftable_SCMusicServiceIntroState[];
extern char ghidra_vftable_SCMusicServiceListState[];
extern char ghidra_vftable_SCMusicServiceResultErrorState[];
extern char ghidra_vftable_SCMusicServiceSetNicknameState[];
extern char ghidra_vftable_SCMusicServiceWorkingState[];
extern char ghidra_vftable_SCMusicSourceBrowseItem[];
extern char ghidra_vftable_SCMyPlaylistsDataSource[];
extern char ghidra_vftable_SCNetworkListObj[];
extern char ghidra_vftable_SCNewWizAccountManagerEventSource[];
extern char ghidra_vftable_SCNewWizEventSource[];
extern char ghidra_vftable_SCNewWizLifecycleManagerEventSource[];
extern char ghidra_vftable_SCNewWizMuseBleClientEventSource[];
extern char ghidra_vftable_SCNewWizWifiDelegateCallback[];
extern char ghidra_vftable_SCNowPlayingEventSink[];
extern char ghidra_vftable_SCNowPlayingSourceHTAudioStream[];
extern char ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState[];
extern char ghidra_vftable_SCOnlineUpdateFinishSecureReg[];
extern char ghidra_vftable_SCOpAddLinkCodeAccount[];
extern char ghidra_vftable_SCOpAddShare[];
extern char ghidra_vftable_SCOpValidateServiceCredentials[];
extern char ghidra_vftable_SCPlayQueueDataSource[];
extern char ghidra_vftable_SCPlayQueueItem[];
extern char ghidra_vftable_SCPlaylistsBrowseDataSource[];
extern char ghidra_vftable_SCPlaylistsBrowseItem[];
extern char ghidra_vftable_SCRemoveMeSettingsMenu[];
extern char ghidra_vftable_SCRenameLineInAction[];
extern char ghidra_vftable_SCSearchHistoryViewBrowseItem[];
extern char ghidra_vftable_SCSearchTypeNonSonosItem[];
extern char ghidra_vftable_SCSearchTypeSonosItem[];
extern char ghidra_vftable_SCSearchViewBrowseItem[];
extern char ghidra_vftable_SCSearchViewDataSource[];
extern char ghidra_vftable_SCSecureExistingEmailState[];
extern char ghidra_vftable_SCSecureExistingFinishSecureRegState[];
extern char ghidra_vftable_SCSecureExistingLookupState[];
extern char ghidra_vftable_SCSecureRegistrationAccountEmailState[];
extern char ghidra_vftable_SCSecureRegistrationCreatePasswordState[];
extern char ghidra_vftable_SCSecureRegistrationDataOptInSubmitState[];
extern char ghidra_vftable_SCSecureRegistrationLoginPrepState[];
extern char ghidra_vftable_SCSecureRegistrationLoginState[];
extern char ghidra_vftable_SCSecureRegistrationNewAccountState[];
extern char ghidra_vftable_SCSecureRegistrationPhoneState[];
extern char ghidra_vftable_SCSecureRegistrationPostalState[];
extern char ghidra_vftable_SCSecureRegistrationResetPasswordState[];
extern char ghidra_vftable_SCSecureRegistrationVerifyEmailState[];
extern char ghidra_vftable_SCSelectRoomsGenericErrorState[];
extern char ghidra_vftable_SCSelectRoomsListState[];
extern char ghidra_vftable_SCSelectRoomsRemoveVoiceServiceState[];
extern char ghidra_vftable_SCSelectRoomsWizard[];
extern char ghidra_vftable_SCServiceDescriptorManagerEventSink[];
extern char ghidra_vftable_SCSetDefaultAccountAction[];
extern char ghidra_vftable_SCSettingsIndicatorItem[];
extern char ghidra_vftable_SCSettingsItemBase[];
extern char ghidra_vftable_SCSettingsMenuAlarm[];
extern char ghidra_vftable_SCSettingsMenuAlarmRoom[];
extern char ghidra_vftable_SCSettingsMenuAlarms[];
extern char ghidra_vftable_SCSettingsMenuAutoplay[];
extern char ghidra_vftable_SCSettingsMenuAutoplayRoom[];
extern char ghidra_vftable_SCSettingsMenuConnectedProduct[];
extern char ghidra_vftable_SCSettingsMenuDateTime[];
extern char ghidra_vftable_SCSettingsMenuDevice[];
extern char ghidra_vftable_SCSettingsMenuEQ[];
extern char ghidra_vftable_SCSettingsMenuEnumeration[];
extern char ghidra_vftable_SCSettingsMenuExperiment[];
extern char ghidra_vftable_SCSettingsMenuExperiments[];
extern char ghidra_vftable_SCSettingsMenuGroupsEdit[];
extern char ghidra_vftable_SCSettingsMenuHeightChannelLevel[];
extern char ghidra_vftable_SCSettingsMenuLineIn[];
extern char ghidra_vftable_SCSettingsMenuManageWifi[];
extern char ghidra_vftable_SCSettingsMenuMusicLibrary[];
extern char ghidra_vftable_SCSettingsMenuMusicLibrarySetup[];
extern char ghidra_vftable_SCSettingsMenuMusicService[];
extern char ghidra_vftable_SCSettingsMenuNetworkStatus[];
extern char ghidra_vftable_SCSettingsMenuNowPlaying[];
extern char ghidra_vftable_SCSettingsMenuParentalControls[];
extern char ghidra_vftable_SCSettingsMenuRoomName[];
extern char ghidra_vftable_SCSettingsMenuRoomVoiceService[];
extern char ghidra_vftable_SCSettingsMenuRoot[];
extern char ghidra_vftable_SCSettingsMenuServices[];
extern char ghidra_vftable_SCSettingsMenuSet[];
extern char ghidra_vftable_SCSettingsMenuSonosVoiceLocale[];
extern char ghidra_vftable_SCSettingsMenuSourceLatency[];
extern char ghidra_vftable_SCSettingsMenuSourceLevel[];
extern char ghidra_vftable_SCSettingsMenuSourceName[];
extern char ghidra_vftable_SCSettingsMenuSubAudio[];
extern char ghidra_vftable_SCSettingsMenuSupport[];
extern char ghidra_vftable_SCSettingsMenuSurroundAudio[];
extern char ghidra_vftable_SCSettingsMenuSystem[];
extern char ghidra_vftable_SCSettingsMenuTVDialogSync[];
extern char ghidra_vftable_SCSettingsMenuTVGroupLatency[];
extern char ghidra_vftable_SCSettingsMenuTrueplay[];
extern char ghidra_vftable_SCSettingsMenuUpdates[];
extern char ghidra_vftable_SCSettingsMenuVoiceService[];
extern char ghidra_vftable_SCSettingsMenuVoiceServiceSettings[];
extern char ghidra_vftable_SCSettingsMenuVolumeLimit[];
extern char ghidra_vftable_SCShareManagerEventSink[];
extern char ghidra_vftable_SCSonanceDetectionDetectResultsState[];
extern char ghidra_vftable_SCSpinnerSettingsItem[];
extern char ghidra_vftable_SCStartupReporter[];
extern char ghidra_vftable_SCStaticBrowseItem[];
extern char ghidra_vftable_SCStereoDualMonoSelectAction[];
extern char ghidra_vftable_SCStrPropDelegate[];
extern char ghidra_vftable_SCStringTemplateNode[];
extern char ghidra_vftable_SCSwfObjBCListener[];
extern char ghidra_vftable_SCSwfObjDDListener[];
extern char ghidra_vftable_SCSwfObjHHListener[];
extern char ghidra_vftable_SCSwfObjHTListener[];
extern char ghidra_vftable_SCTVIRRepeaterSettingItem[];
extern char ghidra_vftable_SCTimerUser[];
extern char ghidra_vftable_SCTmpMusicServiceDetailDataSource[];
extern char ghidra_vftable_SCTmpMusicServicesDataSource[];
extern char ghidra_vftable_SCToggleScrobblingBrowseItem[];
extern char ghidra_vftable_SCUpdateNowBrowseItem[];
extern char ghidra_vftable_SCUrl[];
extern char ghidra_vftable_SCUserAccountEventSink[];
extern char ghidra_vftable_SCVoiceSetupReporter[];
extern char ghidra_vftable_SCWizardState[];
extern char ghidra_vftable_SwfObjAVTAdapter[];
extern char ghidra_vftable_SwfObjCM[];
extern void thunk_FUN_1148a50e(void *allocation, unsigned int bytes) noexcept;
struct CallABI_thunk_FUN_10223600 { void thunk_FUN_10223600(undefined4); };
extern undefined4 * __cdecl abi_call_thunk_FUN_10292c70(undefined4 *);
extern void __cdecl abi_call_thunk_FUN_111fd590(void *);
extern void __cdecl abi_call_thunk_FUN_1086f2f0(undefined4, int *);
extern undefined4 * __cdecl abi_call_thunk_FUN_1037bed0(undefined4 *, int);
extern undefined4 * __cdecl abi_call_thunk_FUN_101da4a0(undefined4 *);
extern undefined4 * __cdecl abi_call_thunk_FUN_10436cd0(undefined4 *);
extern undefined4 * __cdecl abi_call_thunk_FUN_10e01b60(undefined4 *);
extern undefined4 * __cdecl abi_call_thunk_FUN_1023ab10(undefined4 *);
extern undefined4 * __cdecl abi_call_thunk_FUN_1037a2b0(undefined4 *);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101d19a0(...);
extern int thunk_FUN_101eb2b0(...);
extern int thunk_FUN_101eb3f0(...);
extern int thunk_FUN_101ec4a0(...);
extern int thunk_FUN_101f53d0(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102037c0(...);
extern int thunk_FUN_10203970(...);
extern int thunk_FUN_10203d60(...);
extern int thunk_FUN_10203dc0(...);
extern int thunk_FUN_10223600(...);
extern int thunk_FUN_1022de20(...);
extern int thunk_FUN_102460b0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_10267120(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102c45c0(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_102cc960(...);
extern int thunk_FUN_10305f70(...);
extern int thunk_FUN_10318ac0(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_1039fa00(...);
extern int thunk_FUN_103d0880(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103fa5c0(...);
extern int thunk_FUN_103fa6b0(...);
extern int thunk_FUN_10461ec0(...);
extern int thunk_FUN_104ad290(...);
extern int thunk_FUN_104ccb60(...);
extern int thunk_FUN_104d76e0(...);
extern int thunk_FUN_104d7a00(...);
extern int thunk_FUN_104da760(...);
extern int thunk_FUN_104ddc70(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104ed870(...);
extern int thunk_FUN_105036b0(...);
extern int thunk_FUN_1052e8a0(...);
extern int thunk_FUN_1053f780(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105d3a20(...);
extern int thunk_FUN_106845c0(...);
extern int thunk_FUN_10688910(...);
extern int thunk_FUN_106ab5b0(...);
extern int thunk_FUN_106cffb0(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_108288d0(...);
extern int thunk_FUN_10b6d850(...);
extern int thunk_FUN_10bcda40(...);
extern int thunk_FUN_10bceec0(...);
extern int thunk_FUN_10bcf040(...);
extern int thunk_FUN_10bd6f00(...);
extern int thunk_FUN_10c41180(...);
extern int thunk_FUN_10c68c80(...);
extern int thunk_FUN_10ce0370(...);
extern int thunk_FUN_10ce2c30(...);
extern int thunk_FUN_10ce3510(...);
extern int thunk_FUN_10cee770(...);
extern int thunk_FUN_10cf58e0(...);
extern int thunk_FUN_10cf7110(...);
extern int thunk_FUN_10cf71a0(...);
extern int thunk_FUN_10d15c80(...);
extern int thunk_FUN_10d43400(...);
extern int thunk_FUN_10d53ba0(...);
extern int thunk_FUN_10d751f0(...);
extern int thunk_FUN_10d752e0(...);
extern int thunk_FUN_10d753d0(...);
extern int thunk_FUN_10dd1440(...);
extern int thunk_FUN_10dec580(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10e26da0(...);
extern int thunk_FUN_10e26e90(...);
extern int thunk_FUN_10e26f80(...);
extern int thunk_FUN_10e5df30(...);
extern int thunk_FUN_10e5e6b0(...);
extern int thunk_FUN_10e5ef30(...);
extern int thunk_FUN_10f41620(...);
extern int thunk_FUN_10f82750(...);
extern int thunk_FUN_10f82b00(...);
extern int thunk_FUN_10fab6b0(...);
extern int thunk_FUN_10faf960(...);
extern int thunk_FUN_10fcd150(...);
extern int thunk_FUN_11007f30(...);
extern int thunk_FUN_11042880(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_1113e6f0(...);
extern int thunk_FUN_111482f0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_111fc270(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1124a3d0(...);
extern int thunk_FUN_1124a3e0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_11261f10(...);
struct Recovered_101263e0 { int FUN_101263e0(byte param_2) noexcept; };
struct Recovered_101269f0 { int FUN_101269f0(byte param_2) noexcept; };
struct Recovered_101b1680 { SCStr * FUN_101b1680(byte param_2) noexcept; };
struct Recovered_101b27d0 { int * FUN_101b27d0(int *param_2,int *param_3) noexcept; };
struct Recovered_101d5880 { SCStr * FUN_101d5880(byte param_2) noexcept; };
struct Recovered_10247a30 { SCStr * FUN_10247a30(byte param_2) noexcept; };
struct Recovered_10247b00 { SCStr * FUN_10247b00(byte param_2) noexcept; };
struct Recovered_10247ba0 { SCStr * FUN_10247ba0(byte param_2) noexcept; };
struct Recovered_10259bd0 { SCStr * FUN_10259bd0(byte param_2) noexcept; };
struct Recovered_10297430 { SCStr * FUN_10297430(byte param_2) noexcept; };
struct Recovered_102da130 { undefined4 * FUN_102da130(byte param_2) noexcept; };
struct Recovered_102da330 { undefined4 * FUN_102da330(byte param_2) noexcept; };
struct Recovered_102da3f0 { undefined4 * FUN_102da3f0(byte param_2) noexcept; };
struct Recovered_102da4b0 { undefined4 * FUN_102da4b0(byte param_2) noexcept; };
struct Recovered_102da560 { undefined4 * FUN_102da560(byte param_2) noexcept; };
struct Recovered_10337f50 { int FUN_10337f50(byte param_2) noexcept; };
struct Recovered_10337ff0 { int FUN_10337ff0(byte param_2) noexcept; };
struct Recovered_10338110 { SCStr * FUN_10338110(byte param_2) noexcept; };
struct Recovered_10339200 { void FUN_10339200(char param_2) noexcept; };
struct Recovered_103393e0 { void FUN_103393e0(char param_2) noexcept; };
struct Recovered_10368f60 { SCStr * FUN_10368f60(byte param_2) noexcept; };
struct Recovered_10369010 { SCStr * FUN_10369010(byte param_2) noexcept; };
struct Recovered_1036a510 { int FUN_1036a510(byte param_2) noexcept; };
struct Recovered_103a0360 { undefined4 * FUN_103a0360(byte param_2) noexcept; };
struct Recovered_103a97d0 { SCStr * FUN_103a97d0(byte param_2) noexcept; };
struct Recovered_103c3e70 { int FUN_103c3e70(byte param_2) noexcept; };
struct Recovered_103e4ac0 { undefined4 * FUN_103e4ac0(byte param_2) noexcept; };
struct Recovered_1042b6d0 { undefined4 * FUN_1042b6d0(byte param_2) noexcept; };
struct Recovered_1042b8c0 { undefined4 * FUN_1042b8c0(byte param_2) noexcept; };
struct Recovered_1043d320 { undefined4 * FUN_1043d320(byte param_2) noexcept; };
struct Recovered_1043e9c0 { undefined4 * FUN_1043e9c0(byte param_2) noexcept; };
struct Recovered_10441e80 { undefined4 * FUN_10441e80(byte param_2) noexcept; };
struct Recovered_104444b0 { undefined4 * FUN_104444b0(byte param_2) noexcept; };
struct Recovered_1044fe50 { undefined4 * FUN_1044fe50(byte param_2) noexcept; };
struct Recovered_1044ff40 { undefined4 * FUN_1044ff40(byte param_2) noexcept; };
struct Recovered_1045f750 { undefined4 * FUN_1045f750(byte param_2) noexcept; };
struct Recovered_10462a90 { undefined4 * FUN_10462a90(byte param_2) noexcept; };
struct Recovered_10468050 { undefined4 * FUN_10468050(byte param_2) noexcept; };
struct Recovered_104681b0 { undefined4 * FUN_104681b0(byte param_2) noexcept; };
struct Recovered_1046c6f0 { undefined4 * FUN_1046c6f0(byte param_2) noexcept; };
struct Recovered_10473040 { undefined4 * FUN_10473040(byte param_2) noexcept; };
struct Recovered_10476000 { undefined4 * FUN_10476000(byte param_2) noexcept; };
struct Recovered_1047a060 { undefined4 * FUN_1047a060(byte param_2) noexcept; };
struct Recovered_10498910 { undefined4 * FUN_10498910(byte param_2) noexcept; };
struct Recovered_10498a10 { undefined4 * FUN_10498a10(byte param_2) noexcept; };
struct Recovered_10498b30 { undefined4 * FUN_10498b30(byte param_2) noexcept; };
struct Recovered_1049ffd0 { undefined4 * FUN_1049ffd0(byte param_2) noexcept; };
struct Recovered_104a0190 { undefined4 * FUN_104a0190(byte param_2) noexcept; };
struct Recovered_104a02b0 { undefined4 * FUN_104a02b0(byte param_2) noexcept; };
struct Recovered_104a03d0 { undefined4 * FUN_104a03d0(byte param_2) noexcept; };
struct Recovered_104a0550 { undefined4 * FUN_104a0550(byte param_2) noexcept; };
struct Recovered_104a06f0 { undefined4 * FUN_104a06f0(byte param_2) noexcept; };
struct Recovered_104a8a40 { undefined4 * FUN_104a8a40(byte param_2) noexcept; };
struct Recovered_104a9aa0 { undefined4 * FUN_104a9aa0(byte param_2) noexcept; };
struct Recovered_104aa620 { undefined4 * FUN_104aa620(byte param_2) noexcept; };
struct Recovered_104ada70 { undefined4 * FUN_104ada70(byte param_2) noexcept; };
struct Recovered_104b3660 { undefined4 * FUN_104b3660(byte param_2) noexcept; };
struct Recovered_104b4040 { undefined4 * FUN_104b4040(byte param_2) noexcept; };
struct Recovered_104b8c30 { undefined4 * FUN_104b8c30(byte param_2) noexcept; };
struct Recovered_104bc990 { undefined4 * FUN_104bc990(byte param_2) noexcept; };
struct Recovered_104bdc70 { undefined4 * FUN_104bdc70(byte param_2) noexcept; };
struct Recovered_104c4070 { SCStr * FUN_104c4070(byte param_2) noexcept; };
struct Recovered_104c4200 { undefined4 * FUN_104c4200(byte param_2) noexcept; };
struct Recovered_104c4300 { undefined4 * FUN_104c4300(byte param_2) noexcept; };
struct Recovered_104c9c40 { undefined4 * FUN_104c9c40(byte param_2) noexcept; };
struct Recovered_104cd6a0 { SCStr * FUN_104cd6a0(byte param_2) noexcept; };
struct Recovered_104fbc10 { SCStr * FUN_104fbc10(byte param_2) noexcept; };
struct Recovered_1052b080 { undefined4 * FUN_1052b080(byte param_2) noexcept; };
struct Recovered_1052b150 { undefined4 * FUN_1052b150(byte param_2) noexcept; };
struct Recovered_1052b4d0 { undefined4 * FUN_1052b4d0(byte param_2) noexcept; };
struct Recovered_1052be20 { undefined4 * FUN_1052be20(byte param_2) noexcept; };
struct Recovered_1052bf00 { undefined4 * FUN_1052bf00(byte param_2) noexcept; };
struct Recovered_10550910 { SCStr * FUN_10550910(byte param_2) noexcept; };
struct Recovered_1057cc60 { undefined4 * FUN_1057cc60(byte param_2) noexcept; };
struct Recovered_10595ae0 { SCStr * FUN_10595ae0(byte param_2) noexcept; };
struct Recovered_105a9a40 { SCStr * FUN_105a9a40(byte param_2) noexcept; };
struct Recovered_105a9bf0 { int FUN_105a9bf0(byte param_2) noexcept; };
struct Recovered_105d4f10 { SCStr * FUN_105d4f10(byte param_2) noexcept; };
struct Recovered_105d55d0 { undefined4 * FUN_105d55d0(byte param_2) noexcept; };
struct Recovered_105d61c0 { undefined4 * FUN_105d61c0(byte param_2) noexcept; };
struct Recovered_105d6750 { undefined4 * FUN_105d6750(byte param_2) noexcept; };
struct Recovered_10602780 { undefined4 * FUN_10602780(byte param_2) noexcept; };
struct Recovered_10603a60 { int FUN_10603a60(byte param_2) noexcept; };
struct Recovered_1065a110 { int FUN_1065a110(byte param_2) noexcept; };
struct Recovered_10684d60 { SCStr * FUN_10684d60(byte param_2) noexcept; };
struct Recovered_106892b0 { undefined4 * FUN_106892b0(byte param_2) noexcept; };
struct Recovered_1069d350 { SCStr * FUN_1069d350(byte param_2) noexcept; };
struct Recovered_106af410 { void FUN_106af410(int *param_2,int *param_3); };
struct Recovered_106b6d90 { undefined4 * FUN_106b6d90(byte param_2) noexcept; };
struct Recovered_106bb440 { int FUN_106bb440(int *param_2); };
struct Recovered_106bb540 { int FUN_106bb540(int *param_2) noexcept; };
struct Recovered_106d3450 { SCStr * FUN_106d3450(byte param_2) noexcept; };
struct Recovered_106e6ac0 { int FUN_106e6ac0(byte param_2) noexcept; };
struct Recovered_106f8f20 { int FUN_106f8f20(byte param_2) noexcept; };
struct Recovered_107041f0 { int FUN_107041f0(byte param_2) noexcept; };
struct Recovered_1070b070 { int FUN_1070b070(byte param_2) noexcept; };
struct Recovered_1071a200 { int FUN_1071a200(byte param_2) noexcept; };
struct Recovered_1072ccc0 { int FUN_1072ccc0(byte param_2) noexcept; };
struct Recovered_1072dba0 { int FUN_1072dba0(byte param_2) noexcept; };
struct Recovered_1072e090 { void FUN_1072e090(char param_2) noexcept; };
struct Recovered_1074b910 { int FUN_1074b910(byte param_2) noexcept; };
struct Recovered_1074d250 { int FUN_1074d250(byte param_2) noexcept; };
struct Recovered_1075ab40 { int FUN_1075ab40(byte param_2) noexcept; };
struct Recovered_10763a90 { int FUN_10763a90(byte param_2) noexcept; };
struct Recovered_107685d0 { int FUN_107685d0(byte param_2) noexcept; };
struct Recovered_10774b30 { int FUN_10774b30(byte param_2) noexcept; };
struct Recovered_1077c550 { int FUN_1077c550(byte param_2) noexcept; };
struct Recovered_107d0db0 { int FUN_107d0db0(byte param_2) noexcept; };
struct Recovered_107ecf70 { int FUN_107ecf70(byte param_2) noexcept; };
struct Recovered_108039d0 { int FUN_108039d0(byte param_2) noexcept; };
struct Recovered_10813510 { int FUN_10813510(byte param_2) noexcept; };
struct Recovered_1082c370 { SCStr * FUN_1082c370(byte param_2) noexcept; };
struct Recovered_10830680 { void FUN_10830680(int *param_2,int param_3); };
struct Recovered_10848a60 { int FUN_10848a60(byte param_2) noexcept; };
struct Recovered_1085df50 { int FUN_1085df50(byte param_2) noexcept; };
struct Recovered_10862f10 { int FUN_10862f10(byte param_2) noexcept; };
struct Recovered_10876390 { int FUN_10876390(byte param_2) noexcept; };
struct Recovered_1087e700 { int FUN_1087e700(byte param_2) noexcept; };
struct Recovered_10883400 { int FUN_10883400(byte param_2) noexcept; };
struct Recovered_10894120 { int FUN_10894120(byte param_2) noexcept; };
struct Recovered_108b5fd0 { int FUN_108b5fd0(byte param_2) noexcept; };
struct Recovered_108bf600 { int FUN_108bf600(byte param_2) noexcept; };
struct Recovered_108cb8c0 { int FUN_108cb8c0(byte param_2) noexcept; };
struct Recovered_108e4d20 { int FUN_108e4d20(byte param_2) noexcept; };
struct Recovered_108f90a0 { int FUN_108f90a0(byte param_2) noexcept; };
struct Recovered_108fd4d0 { int FUN_108fd4d0(byte param_2) noexcept; };
struct Recovered_109091d0 { int FUN_109091d0(byte param_2) noexcept; };
struct Recovered_1091c970 { int FUN_1091c970(byte param_2) noexcept; };
struct Recovered_109304d0 { int FUN_109304d0(byte param_2) noexcept; };
struct Recovered_1094b020 { int FUN_1094b020(byte param_2) noexcept; };
struct Recovered_109550c0 { int FUN_109550c0(byte param_2) noexcept; };
struct Recovered_109836d0 { int FUN_109836d0(byte param_2) noexcept; };
struct Recovered_10989c40 { int FUN_10989c40(byte param_2) noexcept; };
struct Recovered_10990ba0 { SCStr * FUN_10990ba0(byte param_2) noexcept; };
struct Recovered_109aa380 { int FUN_109aa380(byte param_2) noexcept; };
struct Recovered_109b8690 { int FUN_109b8690(byte param_2) noexcept; };
struct Recovered_109c0d80 { int FUN_109c0d80(byte param_2) noexcept; };
struct Recovered_109c5520 { int FUN_109c5520(byte param_2) noexcept; };
struct Recovered_109ccb40 { int FUN_109ccb40(byte param_2) noexcept; };
struct Recovered_109da830 { int FUN_109da830(byte param_2) noexcept; };
struct Recovered_109e47a0 { int FUN_109e47a0(byte param_2) noexcept; };
struct Recovered_109efaa0 { int FUN_109efaa0(byte param_2) noexcept; };
struct Recovered_10a0a3a0 { int FUN_10a0a3a0(byte param_2) noexcept; };
struct Recovered_10a0e190 { int FUN_10a0e190(byte param_2) noexcept; };
struct Recovered_10a41b60 { int FUN_10a41b60(byte param_2) noexcept; };
struct Recovered_10a45320 { int FUN_10a45320(byte param_2) noexcept; };
struct Recovered_10a49a70 { int FUN_10a49a70(byte param_2) noexcept; };
struct Recovered_10a77610 { int FUN_10a77610(byte param_2) noexcept; };
struct Recovered_10a8a360 { int FUN_10a8a360(byte param_2) noexcept; };
struct Recovered_10a9c2f0 { int FUN_10a9c2f0(byte param_2) noexcept; };
struct Recovered_10b053c0 { undefined4 * FUN_10b053c0(byte param_2) noexcept; };
struct Recovered_10b0f030 { int FUN_10b0f030(byte param_2) noexcept; };
struct Recovered_10b35b70 { int FUN_10b35b70(byte param_2) noexcept; };
struct Recovered_10bb6110 { SCStr * FUN_10bb6110(byte param_2) noexcept; };
struct Recovered_10bb6290 { undefined4 * FUN_10bb6290(byte param_2) noexcept; };
struct Recovered_10bd9220 { int FUN_10bd9220(byte param_2) noexcept; };
struct Recovered_10bee0b0 { undefined4 * FUN_10bee0b0(byte param_2) noexcept; };
struct Recovered_10c24820 { SCStr * FUN_10c24820(byte param_2) noexcept; };
struct Recovered_10c2c170 { undefined4 * FUN_10c2c170(byte param_2) noexcept; };
struct Recovered_10c421a0 { undefined4 * FUN_10c421a0(byte param_2) noexcept; };
struct Recovered_10c87bc0 { void FUN_10c87bc0(int *param_2,int *param_3); };
struct Recovered_10c87d20 { void FUN_10c87d20(int *param_2,int *param_3); };
struct Recovered_10c8a290 { int FUN_10c8a290(byte param_2) noexcept; };
struct Recovered_10c8a340 { int FUN_10c8a340(byte param_2) noexcept; };
struct Recovered_10c8b9e0 { int FUN_10c8b9e0(int *param_2); };
struct Recovered_10c8bb20 { int FUN_10c8bb20(int *param_2); };
struct Recovered_10c8bc70 { int FUN_10c8bc70(int *param_2) noexcept; };
struct Recovered_10c8bd30 { int FUN_10c8bd30(int *param_2) noexcept; };
struct Recovered_10ca2aa0 { undefined4 * FUN_10ca2aa0(byte param_2) noexcept; };
struct Recovered_10cf5d20 { undefined4 * FUN_10cf5d20(byte param_2) noexcept; };
struct Recovered_10d12aa0 { undefined4 * FUN_10d12aa0(byte param_2) noexcept; };
struct Recovered_10d161f0 { undefined4 * FUN_10d161f0(byte param_2) noexcept; };
struct Recovered_10d1afa0 { undefined4 * FUN_10d1afa0(byte param_2) noexcept; };
struct Recovered_10d1df70 { undefined4 * FUN_10d1df70(byte param_2) noexcept; };
struct Recovered_10d1f6e0 { undefined4 * FUN_10d1f6e0(byte param_2) noexcept; };
struct Recovered_10d1f7d0 { undefined4 * FUN_10d1f7d0(byte param_2) noexcept; };
struct Recovered_10d22fa0 { undefined4 * FUN_10d22fa0(byte param_2) noexcept; };
struct Recovered_10d28120 { undefined4 * FUN_10d28120(byte param_2) noexcept; };
struct Recovered_10d28600 { undefined4 * FUN_10d28600(byte param_2) noexcept; };
struct Recovered_10d287a0 { undefined4 * FUN_10d287a0(byte param_2) noexcept; };
struct Recovered_10d30520 { int FUN_10d30520(byte param_2) noexcept; };
struct Recovered_10d30700 { undefined4 * FUN_10d30700(byte param_2) noexcept; };
struct Recovered_10d30810 { undefined4 * FUN_10d30810(byte param_2) noexcept; };
struct Recovered_10d3b490 { undefined4 * FUN_10d3b490(byte param_2) noexcept; };
struct Recovered_10d3b560 { undefined4 * FUN_10d3b560(byte param_2) noexcept; };
struct Recovered_10d3e930 { undefined4 * FUN_10d3e930(byte param_2) noexcept; };
struct Recovered_10d3eb90 { undefined4 * FUN_10d3eb90(byte param_2) noexcept; };
struct Recovered_10d43de0 { undefined4 * FUN_10d43de0(byte param_2) noexcept; };
struct Recovered_10d65210 { undefined4 * FUN_10d65210(byte param_2) noexcept; };
struct Recovered_10d6a520 { undefined4 * FUN_10d6a520(byte param_2) noexcept; };
struct Recovered_10d6a6b0 { undefined4 * FUN_10d6a6b0(byte param_2) noexcept; };
struct Recovered_10d88d00 { int FUN_10d88d00(byte param_2) noexcept; };
struct Recovered_10d88de0 { int FUN_10d88de0(byte param_2) noexcept; };
struct Recovered_10db9110 { SCStr * FUN_10db9110(byte param_2) noexcept; };
struct Recovered_10dc3c90 { void FUN_10dc3c90(int *param_2,int param_3); };
struct Recovered_10df29f0 { undefined4 * FUN_10df29f0(byte param_2) noexcept; };
struct Recovered_10df2aa0 { undefined4 * FUN_10df2aa0(byte param_2) noexcept; };
struct Recovered_10e000d0 { undefined4 * FUN_10e000d0(byte param_2) noexcept; };
struct Recovered_10e0cb00 { int FUN_10e0cb00(byte param_2) noexcept; };
struct Recovered_10e13d80 { undefined4 * FUN_10e13d80(byte param_2) noexcept; };
struct Recovered_10e29640 { undefined4 * FUN_10e29640(byte param_2) noexcept; };
struct Recovered_10e29a90 { undefined4 * FUN_10e29a90(byte param_2) noexcept; };
struct Recovered_10e2a120 { undefined4 * FUN_10e2a120(byte param_2) noexcept; };
struct Recovered_10e2a300 { undefined4 * FUN_10e2a300(byte param_2) noexcept; };
struct Recovered_10e2a400 { undefined4 * FUN_10e2a400(byte param_2) noexcept; };
struct Recovered_10e2a560 { undefined4 * FUN_10e2a560(byte param_2) noexcept; };
struct Recovered_10e2a6e0 { undefined4 * FUN_10e2a6e0(byte param_2) noexcept; };
struct Recovered_10e60340 { undefined4 * FUN_10e60340(byte param_2) noexcept; };
struct Recovered_10e60430 { undefined4 * FUN_10e60430(byte param_2) noexcept; };
struct Recovered_10e60bd0 { undefined4 * FUN_10e60bd0(byte param_2) noexcept; };
struct Recovered_10e60f30 { undefined4 * FUN_10e60f30(byte param_2) noexcept; };
struct Recovered_10e60ff0 { undefined4 * FUN_10e60ff0(byte param_2) noexcept; };
struct Recovered_10e76f60 { undefined4 * FUN_10e76f60(byte param_2) noexcept; };
struct Recovered_10e7ff70 { undefined4 * FUN_10e7ff70(byte param_2) noexcept; };
struct Recovered_10e99100 { undefined4 * FUN_10e99100(byte param_2) noexcept; };
struct Recovered_10eb74c0 { SCStr * FUN_10eb74c0(byte param_2) noexcept; };
struct Recovered_10eb7580 { SCStr * FUN_10eb7580(byte param_2) noexcept; };
struct Recovered_10ed1250 { int FUN_10ed1250(byte param_2) noexcept; };
struct Recovered_10f1cef0 { int FUN_10f1cef0(byte param_2) noexcept; };
struct Recovered_10f1cfb0 { int FUN_10f1cfb0(byte param_2) noexcept; };
struct Recovered_10f26ae0 { SCStr * FUN_10f26ae0(byte param_2) noexcept; };
struct Recovered_10f32a90 { int FUN_10f32a90(byte param_2) noexcept; };
struct Recovered_10f38830 { int FUN_10f38830(byte param_2) noexcept; };
struct Recovered_10f7e7a0 { undefined4 * FUN_10f7e7a0(byte param_2) noexcept; };
struct Recovered_10f9be40 { int FUN_10f9be40(byte param_2) noexcept; };
struct Recovered_10fad000 { void FUN_10fad000(int *param_2,int *param_3); };
struct Recovered_10fad160 { void FUN_10fad160(int *param_2,int *param_3); };
struct Recovered_10fb15b0 { int FUN_10fb15b0(byte param_2) noexcept; };
struct Recovered_10fb1670 { int FUN_10fb1670(byte param_2) noexcept; };
struct Recovered_10fb1760 { int FUN_10fb1760(byte param_2) noexcept; };
struct Recovered_10fb1820 { undefined4 * FUN_10fb1820(byte param_2) noexcept; };
struct Recovered_10fb1c40 { undefined4 * FUN_10fb1c40(byte param_2) noexcept; };
struct Recovered_10fb3fd0 { int FUN_10fb3fd0(int *param_2); };
struct Recovered_10fb4120 { int FUN_10fb4120(int *param_2); };
struct Recovered_10fb4330 { int FUN_10fb4330(int *param_2) noexcept; };
struct Recovered_10fb4400 { int FUN_10fb4400(int *param_2) noexcept; };
struct Recovered_10fb4510 { int FUN_10fb4510(int *param_2) noexcept; };
struct Recovered_10fb8750 { undefined4 FUN_10fb8750(byte *param_2); };
struct Recovered_10fc2810 { int FUN_10fc2810(byte param_2) noexcept; };
struct Recovered_10fca650 { undefined4 * FUN_10fca650(byte param_2) noexcept; };
struct Recovered_10fd10f0 { undefined4 * FUN_10fd10f0(byte param_2) noexcept; };
struct Recovered_10fd9970 { undefined4 * FUN_10fd9970(byte param_2) noexcept; };
struct Recovered_10fd9fa0 { undefined4 * FUN_10fd9fa0(byte param_2) noexcept; };
struct Recovered_10feed80 { undefined4 * FUN_10feed80(byte param_2) noexcept; };
struct Recovered_11004760 { undefined4 * FUN_11004760(byte param_2) noexcept; };
struct Recovered_110108f0 { undefined4 * FUN_110108f0(byte param_2) noexcept; };
struct Recovered_110109f0 { undefined4 * FUN_110109f0(byte param_2) noexcept; };
struct Recovered_11010d10 { undefined4 * FUN_11010d10(byte param_2) noexcept; };
struct Recovered_11012f50 { void FUN_11012f50(int *param_2,int param_3); };
struct Recovered_1101d270 { undefined4 * FUN_1101d270(byte param_2) noexcept; };
struct Recovered_11172e60 { undefined4 * FUN_11172e60(byte param_2) noexcept; };
// Reference entry 1011ff40; body size 99 bytes.
#line 1 "ENTRY_1011ff40"

void __fastcall FUN_1011ff40(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10120220; body size 226 bytes.
#line 1 "ENTRY_10120220"

void __fastcall FUN_10120220(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCUrl;
  piVar1 = (int *)param_1[8];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 6))->int_release();
  param_1[6] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 5))->int_release();
  param_1[5] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  
})();

  return;
}


// Reference entry 10120340; body size 119 bytes.
#line 1 "ENTRY_10120340"

void __fastcall FUN_10120340(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x38);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x30);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 101263e0; body size 120 bytes.
#line 1 "ENTRY_101263e0"

int Recovered_101263e0::FUN_101263e0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 101269f0; body size 140 bytes.
#line 1 "ENTRY_101269f0"

int Recovered_101269f0::FUN_101269f0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x38);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x30);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x48);
  }
  
})();

  return param_1;
}


// Reference entry 10149950; body size 180 bytes.
#line 1 "ENTRY_10149950"

undefined4 FUN_10149950(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06b0));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 10149a40; body size 180 bytes.
#line 1 "ENTRY_10149a40"

undefined4 FUN_10149a40(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06a0));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 10149b30; body size 180 bytes.
#line 1 "ENTRY_10149b30"

undefined4 FUN_10149b30(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06b4));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 10149c20; body size 180 bytes.
#line 1 "ENTRY_10149c20"

undefined4 FUN_10149c20(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06a4));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 10149d10; body size 180 bytes.
#line 1 "ENTRY_10149d10"

undefined4 FUN_10149d10(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06bc));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 10149e00; body size 180 bytes.
#line 1 "ENTRY_10149e00"

undefined4 FUN_10149e00(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06a8));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 10149ef0; body size 180 bytes.
#line 1 "ENTRY_10149ef0"

undefined4 FUN_10149ef0(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06c4));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 10149fe0; body size 180 bytes.
#line 1 "ENTRY_10149fe0"

undefined4 FUN_10149fe0(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06b8));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 1014a0d0; body size 180 bytes.
#line 1 "ENTRY_1014a0d0"

undefined4 FUN_1014a0d0(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06c0));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 1014a1c0; body size 180 bytes.
#line 1 "ENTRY_1014a1c0"

undefined4 FUN_1014a1c0(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a06ac));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 101519e0; body size 144 bytes.
#line 1 "ENTRY_101519e0"

void FUN_101519e0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x14))(&local_14,&param_2,param_4);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10151d10; body size 150 bytes.
#line 1 "ENTRY_10151d10"

undefined4 FUN_10151d10(int *param_1,undefined4 param_2,ushort *param_3,ushort *param_4)

{

  undefined4 uVar2;
  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_3);
  param_3 = (ushort *)0x0;
  ((SCStr *)&param_3)->setFromUTF16(param_4);
  uVar2 = (**(code **)(*param_1 + 0x28))(param_2,&local_14,&param_3);
  ([&]() noexcept {

  ((SCStr *)&param_3)->int_release();
  param_3 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar2;
}


// Reference entry 10152180; body size 144 bytes.
#line 1 "ENTRY_10152180"

void FUN_10152180(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x18))(&local_14,&param_2,param_4);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10152e60; body size 153 bytes.
#line 1 "ENTRY_10152e60"

undefined1 FUN_10152e60(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  undefined1 uVar1;

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  uVar1 = (**(code **)(*param_1 + 0x28))(&local_14,&param_2,param_4);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar1;
}


// Reference entry 10154630; body size 144 bytes.
#line 1 "ENTRY_10154630"

void FUN_10154630(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x20))(&local_14,&param_2,param_4);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10154a20; body size 150 bytes.
#line 1 "ENTRY_10154a20"

undefined1 FUN_10154a20(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined1 uVar1;

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  uVar1 = (**(code **)(*param_1 + 0x20))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar1;
}


// Reference entry 10154af0; body size 139 bytes.
#line 1 "ENTRY_10154af0"

undefined1 FUN_10154af0(int *param_1,ushort *param_2)

{
  undefined1 uVar1;

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  ((SCStr *)&param_2)->int_allocRep((char *)0x0);
  uVar1 = (**(code **)(*param_1 + 0x20))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar1;
}


// Reference entry 1015a0c0; body size 147 bytes.
#line 1 "ENTRY_1015a0c0"

undefined4 FUN_1015a0c0(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 uVar2;
  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  uVar2 = (**(code **)(*param_1 + 0x14))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar2;
}


// Reference entry 1015c270; body size 141 bytes.
#line 1 "ENTRY_1015c270"

void FUN_1015c270(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x1c))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10162290; body size 198 bytes.
#line 1 "ENTRY_10162290"

float10 FUN_10162290(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5
                    )

{

  float10 fVar2;
  undefined4 local_18;
  undefined4 local_14;

  local_18 = 0;
  ((SCStr *)&local_18)->setFromUTF16(param_2);
  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_3);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_4);
  fVar2 = (float10)(**(code **)(*param_1 + 0x28))(&local_18,&local_14,&param_2,param_5);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  local_14 = 0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  
})();

  return (float10)(double)fVar2;
}


// Reference entry 10162390; body size 196 bytes.
#line 1 "ENTRY_10162390"

undefined4
FUN_10162390(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5)

{

  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;

  local_18 = 0;
  ((SCStr *)&local_18)->setFromUTF16(param_2);
  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_3);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_4);
  uVar2 = (**(code **)(*param_1 + 0x24))(&local_18,&local_14,&param_2,param_5);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  local_14 = 0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  
})();

  return uVar2;
}


// Reference entry 10162a50; body size 153 bytes.
#line 1 "ENTRY_10162a50"

undefined1 FUN_10162a50(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  undefined1 uVar1;

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  uVar1 = (**(code **)(*param_1 + 0x1c))(&local_14,&param_2,param_4);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar1;
}


// Reference entry 10162b40; body size 150 bytes.
#line 1 "ENTRY_10162b40"

undefined1 FUN_10162b40(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined1 uVar1;

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  uVar1 = (**(code **)(*param_1 + 0x40))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar1;
}


// Reference entry 10162f10; body size 187 bytes.
#line 1 "ENTRY_10162f10"

void FUN_10162f10(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{

  undefined4 local_18;
  undefined4 local_14;

  local_18 = 0;
  ((SCStr *)&local_18)->setFromUTF16(param_2);
  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_3);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_4);
  (**(code **)(*param_1 + 0x3c))(&local_18,&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  local_14 = 0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  
})();

  return;
}


// Reference entry 101630b0; body size 151 bytes.
#line 1 "ENTRY_101630b0"

float10 FUN_101630b0(int *param_1,ushort *param_2,ushort *param_3)

{

  float10 fVar2;
  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  fVar2 = (float10)(**(code **)(*param_1 + 0x24))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return (float10)(double)fVar2;
}


// Reference entry 10163180; body size 147 bytes.
#line 1 "ENTRY_10163180"

undefined4 FUN_10163180(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 uVar2;
  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  uVar2 = (**(code **)(*param_1 + 0x20))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar2;
}


// Reference entry 10163b20; body size 141 bytes.
#line 1 "ENTRY_10163b20"

void FUN_10163b20(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x3c))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10164170; body size 150 bytes.
#line 1 "ENTRY_10164170"

undefined1 FUN_10164170(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined1 uVar1;

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  uVar1 = (**(code **)(*param_1 + 0x34))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar1;
}


// Reference entry 10167ba0; body size 141 bytes.
#line 1 "ENTRY_10167ba0"

void FUN_10167ba0(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x20))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10168040; body size 141 bytes.
#line 1 "ENTRY_10168040"

void FUN_10168040(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x24))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10168120; body size 141 bytes.
#line 1 "ENTRY_10168120"

void FUN_10168120(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x24))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10168680; body size 141 bytes.
#line 1 "ENTRY_10168680"

void FUN_10168680(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x28))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 1016f740; body size 236 bytes.
#line 1 "ENTRY_1016f740"

undefined4 FUN_1016f740(int *param_1,ushort *param_2,undefined4 param_3)

{
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uStack_28;
  undefined4 local_18;
  undefined1 *local_14;

  local_18 = 0;
  local_14 = (undefined1 *)0x0;
  uStack_28 = 0x1016f77f;
  ((SCStr *)&local_18)->setFromUTF16(param_2);
  new ((SCStr *)&uStack_28) SCStr(*((SCStr *)&local_18));
  pSVar1 = (SCStr *)(**(code **)(*param_1 + 0x24))(&param_2);
  if (pSVar1 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar1;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();

  puVar4 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = local_14;
  }
  uVar2 = ((SCStr *)&local_14)->length();
  uVar3 = (*DAT_121a06d8)(puVar4,uVar2);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  local_14 = (undefined1 *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  
})();

  return uVar3;
}


// Reference entry 10178460; body size 141 bytes.
#line 1 "ENTRY_10178460"

void FUN_10178460(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x2c))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 1017aec0; body size 141 bytes.
#line 1 "ENTRY_1017aec0"

void FUN_1017aec0(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x1c))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 1017d4e0; body size 141 bytes.
#line 1 "ENTRY_1017d4e0"

void FUN_1017d4e0(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x40))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 1017d7d0; body size 141 bytes.
#line 1 "ENTRY_1017d7d0"

void FUN_1017d7d0(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x3c))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 1017fdf0; body size 150 bytes.
#line 1 "ENTRY_1017fdf0"

undefined1 FUN_1017fdf0(int *param_1,ushort *param_2,ushort *param_3)

{
  undefined1 uVar1;

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  uVar1 = (**(code **)(*param_1 + 0x14))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar1;
}


// Reference entry 101871a0; body size 141 bytes.
#line 1 "ENTRY_101871a0"

void FUN_101871a0(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x24))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10188f10; body size 232 bytes.
#line 1 "ENTRY_10188f10"

undefined4 FUN_10188f10(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{

  undefined4 uVar2;
  SCStr local_1c [4];
  undefined4 local_18;
  undefined4 local_14;

  local_18 = 0;
  ((SCStr *)&local_18)->setFromUTF16(param_2);
  (local_1c)->int_allocRep("");
  ((SCStr *)&local_14)->int_allocRep((char *)0x0);
  ((SCStr *)&param_2)->int_allocRep("");
  uVar2 = (**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,0,0,&param_2,&local_14,0,1,0,0,0,local_1c);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  local_14 = 0;
  
})();
([&]() noexcept {

  (local_1c)->int_release();
  
})();
([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  
})();

  return uVar2;
}


// Reference entry 10189040; body size 231 bytes.
#line 1 "ENTRY_10189040"

undefined4 FUN_10189040(int *param_1,ushort *param_2,undefined4 param_3)

{

  undefined4 uVar2;
  SCStr local_1c [4];
  undefined4 local_18;
  undefined4 local_14;

  local_18 = 0;
  ((SCStr *)&local_18)->setFromUTF16(param_2);
  (local_1c)->int_allocRep("");
  ((SCStr *)&local_14)->int_allocRep((char *)0x0);
  ((SCStr *)&param_2)->int_allocRep("");
  uVar2 = (**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,0,0,0,&param_2,&local_14,0,1,0,0,0,local_1c);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  local_14 = 0;
  
})();
([&]() noexcept {

  (local_1c)->int_release();
  
})();
([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  
})();

  return uVar2;
}


// Reference entry 10189870; body size 255 bytes.
#line 1 "ENTRY_10189870"

undefined4
FUN_10189870(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8)

{

  undefined4 uVar2;
  bool bVar3;
  undefined4 local_18;
  undefined4 local_14;

  local_18 = 0;
  ((SCStr *)&local_18)->setFromUTF16(param_2);
  bVar3 = param_5 != 0;
  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_7);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_8);
  ((SCStr *)&param_5)->int_allocRep("");
  uVar2 = (**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,bVar3,param_6,&local_14,&param_2,0,1,0,0,0,&param_5);
  ([&]() noexcept {

  ((SCStr *)&param_5)->int_release();
  
})();
([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  local_14 = 0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  
})();

  return uVar2;
}


// Reference entry 101899c0; body size 247 bytes.
#line 1 "ENTRY_101899c0"

undefined4
FUN_101899c0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7)

{

  undefined4 uVar2;
  bool bVar3;
  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  bVar3 = param_5 != 0;
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_7);
  ((SCStr *)&param_7)->int_allocRep("");
  ((SCStr *)&param_5)->int_allocRep((char *)0x0);
  uVar2 = (**(code **)(*param_1 + 0x38))
                    (&local_14,param_3,param_4,bVar3,param_6,&param_2,&param_5,0,1,0,0,0,&param_7);
  ([&]() noexcept {

  ((SCStr *)&param_5)->int_release();
  param_5 = 0;
  
})();
([&]() noexcept {

  ((SCStr *)&param_7)->int_release();
  
})();
([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar2;
}


// Reference entry 10189b00; body size 242 bytes.
#line 1 "ENTRY_10189b00"

undefined4
FUN_10189b00(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{

  undefined4 uVar2;
  bool bVar3;
  SCStr local_18 [4];
  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  bVar3 = param_5 != 0;
  (local_18)->int_allocRep("");
  ((SCStr *)&param_5)->int_allocRep((char *)0x0);
  ((SCStr *)&param_2)->int_allocRep("");
  uVar2 = (**(code **)(*param_1 + 0x38))
                    (&local_14,param_3,param_4,bVar3,param_6,&param_2,&param_5,0,1,0,0,0,local_18);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&param_5)->int_release();
  param_5 = 0;
  
})();
([&]() noexcept {

  (local_18)->int_release();
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar2;
}


// Reference entry 10189c40; body size 241 bytes.
#line 1 "ENTRY_10189c40"

undefined4
FUN_10189c40(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{

  undefined4 uVar2;
  bool bVar3;
  SCStr local_18 [4];
  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  bVar3 = param_5 != 0;
  (local_18)->int_allocRep("");
  ((SCStr *)&param_5)->int_allocRep((char *)0x0);
  ((SCStr *)&param_2)->int_allocRep("");
  uVar2 = (**(code **)(*param_1 + 0x38))
                    (&local_14,param_3,param_4,bVar3,0,&param_2,&param_5,0,1,0,0,0,local_18);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&param_5)->int_release();
  param_5 = 0;
  
})();
([&]() noexcept {

  (local_18)->int_release();
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar2;
}


// Reference entry 1018a520; body size 180 bytes.
#line 1 "ENTRY_1018a520"

undefined4 FUN_1018a520(void)

{

  SCStr *pSVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_18;
  undefined1 *local_14;

  local_14 = (undefined1 *)0x0;
  pSVar2 = (SCStr *)new ((SCStr *)&local_18) SCStr(*((SCStr *)&DAT_121a0be0));
  if (pSVar2 != (SCStr *)&local_14) {
    ((SCStr *)&local_14)->int_release();
    local_14 = *(undefined1 **)pSVar2;
    ((SCStr *)&local_14)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_18)->int_release();
  local_18 = 0;
  
})();

  puVar5 = &DAT_1186d2ee;
  if (local_14 != (undefined1 *)0x0) {
    puVar5 = local_14;
  }
  uVar3 = ((SCStr *)&local_14)->length();
  uVar4 = (*DAT_121a06d8)(puVar5,uVar3);
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return uVar4;
}


// Reference entry 1018f5a0; body size 144 bytes.
#line 1 "ENTRY_1018f5a0"

void FUN_1018f5a0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x18))(&local_14,&param_2,param_4);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 1018f660; body size 146 bytes.
#line 1 "ENTRY_1018f660"

void FUN_1018f660(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x18))(&local_14,&param_2,60000);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10191c80; body size 144 bytes.
#line 1 "ENTRY_10191c80"

void FUN_10191c80(int *param_1,ushort *param_2,ushort *param_3)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0xd4))(&local_14,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10194400; body size 143 bytes.
#line 1 "ENTRY_10194400"

void FUN_10194400(undefined4 *param_1,ushort *param_2,undefined4 param_3,ushort *param_4)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_4);
  (**(code **)*param_1)(&local_14,param_3,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10195a20; body size 143 bytes.
#line 1 "ENTRY_10195a20"

void FUN_10195a20(undefined4 *param_1,ushort *param_2,undefined4 param_3,ushort *param_4)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_4);
  (**(code **)*param_1)(&local_14,param_3,&param_2);
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 10199380; body size 141 bytes.
#line 1 "ENTRY_10199380"

void FUN_10199380(undefined4 param_1,ushort *param_2,ushort *param_3)

{
  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  ((CallABI_thunk_FUN_10223600 *)(&local_14))->thunk_FUN_10223600((undefined4)(&param_2));
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
}


// Reference entry 101ab700; body size 163 bytes.
#line 1 "ENTRY_101ab700"

void FUN_101ab700(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[4];
    ([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    
})();
([&]() noexcept {

    ((SCStr *)(puVar3 + 2))->int_release();
    puVar3[2] = 0;
    
})();

    thunk_FUN_1148a50e((void *)(puVar3), 0x14);
    puVar3 = puVar1;
  }

  return;
}


// Reference entry 101ab800; body size 122 bytes.
#line 1 "ENTRY_101ab800"

void FUN_101ab800(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x14);
  
})();

  return;
}


// Reference entry 101abab0; body size 107 bytes.
#line 1 "ENTRY_101abab0"

void FUN_101abab0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 101aeb00; body size 168 bytes.
#line 1 "ENTRY_101aeb00"

void __fastcall FUN_101aeb00(int param_1) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
    **(undefined4 **)(param_1 + 8) = 0;
    puVar3 = *(undefined4 **)(param_1 + 0xc);
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      piVar2 = (int *)puVar3[4];
      ([&]() noexcept {

      if (piVar2 != (int *)0x0) {
        puVar3[3] = 0;
        puVar3[4] = 0;
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      }
      
})();
([&]() noexcept {

      ((SCStr *)(puVar3 + 2))->int_release();
      puVar3[2] = 0;
      
})();

      thunk_FUN_1148a50e((void *)(puVar3), 0x14);
      puVar3 = puVar1;
    }
  }

  return;
}


// Reference entry 101aec10; body size 106 bytes.
#line 1 "ENTRY_101aec10"

void __fastcall FUN_101aec10(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 101b1680; body size 127 bytes.
#line 1 "ENTRY_101b1680"

SCStr * Recovered_101b1680::FUN_101b1680(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 101b27d0; body size 186 bytes.
#line 1 "ENTRY_101b27d0"

int * Recovered_101b27d0::FUN_101b27d0(int *param_2,int *param_3) noexcept
{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;

  int *piVar5;

  
  piVar5 = param_2;

  if (param_2 != param_3) {
    puVar1 = (undefined4 *)param_2[1];
    param_2 = (int *)0x0;
    *puVar1 = (undefined4)param_3;
    param_3[1] = (int)puVar1;
    do {
      piVar2 = (int *)*piVar5;
      piVar3 = (int *)piVar5[4];
      ([&]() noexcept {

      if (piVar3 != (int *)0x0) {
        piVar5[3] = 0;
        piVar5[4] = 0;
        ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
      }
      
})();
([&]() noexcept {

      ((SCStr *)(piVar5 + 2))->int_release();
      piVar5[2] = 0;
      
})();

      thunk_FUN_1148a50e((void *)(piVar5), 0x14);
      param_2 = (int *)((int)param_2 + 1);
      piVar5 = piVar2;
    } while (piVar2 != param_3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - (int)param_2;
  }

  return param_3;
}


// Reference entry 101ce130; body size 122 bytes.
#line 1 "ENTRY_101ce130"

void FUN_101ce130(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 101ceae0; body size 107 bytes.
#line 1 "ENTRY_101ceae0"

void FUN_101ceae0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 101d2e10; body size 106 bytes.
#line 1 "ENTRY_101d2e10"

void __fastcall FUN_101d2e10(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 101d5880; body size 127 bytes.
#line 1 "ENTRY_101d5880"

SCStr * Recovered_101d5880::FUN_101d5880(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 102036c0; body size 195 bytes.
#line 1 "ENTRY_102036c0"

void __fastcall FUN_102036c0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCAllNodeBrowseItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCAllNodeBrowseItemBase;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCAllNodeBrowseItemBase;
  thunk_FUN_10202e00();
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  param_1[0x10] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 102037c0; body size 338 bytes.
#line 1 "ENTRY_102037c0"

void __fastcall FUN_102037c0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x94] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x95] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  param_1[0x96] = (undefined4)&ghidra_vftable_SCAsyncBrowseDataSource;
  if ((int *)param_1[0x9a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x9a] + 0x18))(param_1[0x97]);
  }
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x9e))->int_release();
  param_1[0x9e] = 0;
  piVar1 = (int *)param_1[0x9b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x96] = (undefined4)&ghidra_vftable_SCShareManagerEventSink;
  piVar1 = (int *)param_1[0x98];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x95] = (undefined4)&ghidra_vftable_SCSwfObjBCListener;
  thunk_FUN_110a9ef0();
  thunk_FUN_10203970();
  
})();

  return;
}


// Reference entry 10203dc0; body size 318 bytes.
#line 1 "ENTRY_10203dc0"

void __fastcall FUN_10203dc0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[0xf] = (undefined4)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[0x10] = (undefined4)&ghidra_vftable_SCAsyncBrowseItemBase;
  param_1[0x11] = (undefined4)&ghidra_vftable_SCAsyncBrowseItemBase;
  piVar1 = (int *)param_1[0x44];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x41))->int_release();
  param_1[0x41] = 0;
  thunk_FUN_10202e00();
  piVar1 = (int *)param_1[0x17];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x14))->int_release();
  param_1[0x14] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  param_1[0x11] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x10] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0xf] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10222f20; body size 704 bytes.
#line 1 "ENTRY_10222f20"

void __fastcall FUN_10222f20(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0x104)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x100))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x104))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0xfc)));
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xf8))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xfc))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0xf4)));
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xf0))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xf4))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0xdc)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xdc))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0xd8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xd8))) = 0;
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0xa4)));
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xa0))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xa4))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0x9c)));
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x98))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x9c))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x4c)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x4c))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x44)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x44))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x40)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x40))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x3c)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x3c))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x38)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x38))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x34)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x34))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x30)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x30))) = 0;
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0x2c)));
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x28))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x2c))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x24)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x24))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x20)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x20))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x1c)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x1c))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x18)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x18))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x14)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x10)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x10))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0xc)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 1022df10; body size 227 bytes.
#line 1 "ENTRY_1022df10"

void __fastcall FUN_1022df10(int *param_1) noexcept
{
  int *piVar1;

  int *piVar3;
  int *local_14;

  *param_1 = (int)(undefined4)&ghidra_vftable_SCController__LimitedAccessStateData;
  local_14 = param_1;
  if (param_1[8] != 0) {
    thunk_FUN_1059d940(param_1[8]);
    param_1[8] = 0;
  }
  piVar3 = (int *)abi_call_thunk_FUN_10292c70((undefined4 *)(&local_14));
  piVar1 = (int *)*piVar3;
  *piVar3 = 0;
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((RecoveredVirtualSlots *)(piVar1))->VirtualSlot3();
  }
  ([&]() noexcept {

  if (local_14 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(local_14))->VirtualSlot2();
  }
  
})();

  if ((piVar1 != (int *)0x0) && (param_1[7] != 0)) {
    (**(code **)(*piVar1 + 0x3c))(param_1[7],0,1);
    param_1[7] = 0;
  }
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  *param_1 = (int)(undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  
})();

  return;
}


// Reference entry 10246450; body size 143 bytes.
#line 1 "ENTRY_10246450"

void FUN_10246450(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x24))->int_release();
  *(undefined4 *)(param_2 + 0x24) = 0;
  thunk_FUN_10247e10();
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x28);
  
})();

  return;
}


// Reference entry 10246510; body size 113 bytes.
#line 1 "ENTRY_10246510"

void FUN_10246510(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x18);
  
})();

  return;
}


// Reference entry 10246720; body size 130 bytes.
#line 1 "ENTRY_10246720"

void FUN_10246720(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (0x14)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (0x14))) = 0;
  thunk_FUN_10247e10();
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 102467d0; body size 98 bytes.
#line 1 "ENTRY_102467d0"

void FUN_102467d0(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10246850; body size 98 bytes.
#line 1 "ENTRY_10246850"

void FUN_10246850(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10247210; body size 129 bytes.
#line 1 "ENTRY_10247210"

void __fastcall FUN_10247210(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x14)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
  thunk_FUN_10247e10();
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 102472c0; body size 97 bytes.
#line 1 "ENTRY_102472c0"

void __fastcall FUN_102472c0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10247340; body size 97 bytes.
#line 1 "ENTRY_10247340"

void __fastcall FUN_10247340(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 102473e0; body size 263 bytes.
#line 1 "ENTRY_102473e0"

void __fastcall FUN_102473e0(int param_1) noexcept
{
  int *piVar1;

  thunk_FUN_10246290((undefined4 *)(param_1 + 0x38),*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x38)), 0x18);
  thunk_FUN_10246290((undefined4 *)(param_1 + 0x30),*(undefined4 *)(*(int *)(param_1 + 0x30) + 4));
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x30)), 0x18);
  piVar1 = *(int **)(param_1 + 0x2c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_102460b0((undefined4 *)(param_1 + 0x20),*(undefined4 *)(*(int *)(param_1 + 0x20) + 4));
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x20)), 0x18);
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x18))->int_release();
  *(undefined4 *)(param_1 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x14))->int_release();
  *(undefined4 *)(param_1 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  *(undefined4 *)(param_1 + 0x10) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();

  return;
}


// Reference entry 10247780; body size 105 bytes.
#line 1 "ENTRY_10247780"

void __fastcall FUN_10247780(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x10)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x10))) = 0;
  thunk_FUN_10247e10();
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10247a30; body size 150 bytes.
#line 1 "ENTRY_10247a30"

SCStr * Recovered_10247a30::FUN_10247a30(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x14)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
  thunk_FUN_10247e10();
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x18);
  }
  
})();

  return param_1;
}


// Reference entry 10247b00; body size 118 bytes.
#line 1 "ENTRY_10247b00"

SCStr * Recovered_10247b00::FUN_10247b00(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }
  
})();

  return param_1;
}


// Reference entry 10247ba0; body size 118 bytes.
#line 1 "ENTRY_10247ba0"

SCStr * Recovered_10247ba0::FUN_10247ba0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }
  
})();

  return param_1;
}


// Reference entry 102550f0; body size 146 bytes.
#line 1 "ENTRY_102550f0"

void FUN_102550f0(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x1c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x20);
  
})();

  return;
}


// Reference entry 102560a0; body size 131 bytes.
#line 1 "ENTRY_102560a0"

void FUN_102560a0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (0xc)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (0xc))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10257e60; body size 141 bytes.
#line 1 "ENTRY_10257e60"

void __fastcall FUN_10257e60(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x34);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10258900; body size 130 bytes.
#line 1 "ENTRY_10258900"

void __fastcall FUN_10258900(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0xc)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10258e00; body size 106 bytes.
#line 1 "ENTRY_10258e00"

void __fastcall FUN_10258e00(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10259bd0; body size 151 bytes.
#line 1 "ENTRY_10259bd0"

SCStr * Recovered_10259bd0::FUN_10259bd0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0xc)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 10267220; body size 324 bytes.
#line 1 "ENTRY_10267220"

void __fastcall FUN_10267220(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLandingPagePremiumSonosRadio;
  param_1[2] = (undefined4)&ghidra_vftable_SCLandingPagePremiumSonosRadio;
  param_1[0x12] = (undefined4)&ghidra_vftable_SCLandingPagePremiumSonosRadio;
  piVar1 = (int *)param_1[0x20];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x1e];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x1a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x18];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x16];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x12] = (undefined4)&ghidra_vftable_SCIActionDelegateCB;
  piVar1 = (int *)param_1[0x14];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10267120();
  
})();

  return;
}


// Reference entry 10294810; body size 122 bytes.
#line 1 "ENTRY_10294810"

void FUN_10294810(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10294c70; body size 107 bytes.
#line 1 "ENTRY_10294c70"

void FUN_10294c70(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10296680; body size 106 bytes.
#line 1 "ENTRY_10296680"

void __fastcall FUN_10296680(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 102967e0; body size 162 bytes.
#line 1 "ENTRY_102967e0"

void __fastcall FUN_102967e0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RLookupV1CertInfoRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RLookupV1CertInfoRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1845))->int_release();
  param_1[0x1845] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1844))->int_release();
  param_1[0x1844] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10297430; body size 127 bytes.
#line 1 "ENTRY_10297430"

SCStr * Recovered_10297430::FUN_10297430(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 102c5000; body size 237 bytes.
#line 1 "ENTRY_102c5000"

void __fastcall FUN_102c5000(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSetDefaultAccountAction;
  param_1[0xb] = (undefined4)&ghidra_vftable_SCSetDefaultAccountAction;
  if (param_1[0xc] != 0) {
    if (param_1[0x10] != 0) {
      piVar1 = (int *)param_1[0x11];
      if (piVar1 != (int *)0x0) {
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      }
      param_1[0x10] = 0;
      param_1[0x11] = 0;
    }
    (**(code **)(*(int *)param_1[0xc] + 8))();
    param_1[0xc] = 0;
  }
  piVar1 = (int *)param_1[0x11];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xf];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xd))->int_release();
  param_1[0xd] = 0;
  param_1[0xb] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104ed870();
  
})();

  return;
}


// Reference entry 102d97e0; body size 105 bytes.
#line 1 "ENTRY_102d97e0"

void __fastcall FUN_102d97e0(undefined4 *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  
})();

  return;
}


// Reference entry 102d9960; body size 127 bytes.
#line 1 "ENTRY_102d9960"

void __fastcall FUN_102d9960(undefined4 *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  
})();

  return;
}


// Reference entry 102d9a10; body size 127 bytes.
#line 1 "ENTRY_102d9a10"

void __fastcall FUN_102d9a10(undefined4 *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  
})();

  return;
}


// Reference entry 102d9ac0; body size 105 bytes.
#line 1 "ENTRY_102d9ac0"

void __fastcall FUN_102d9ac0(undefined4 *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  
})();

  return;
}


// Reference entry 102d9b50; body size 149 bytes.
#line 1 "ENTRY_102d9b50"

void __fastcall FUN_102d9b50(undefined4 *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  
})();

  return;
}


// Reference entry 102da130; body size 126 bytes.
#line 1 "ENTRY_102da130"

undefined4 * Recovered_102da130::FUN_102da130(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 102da330; body size 148 bytes.
#line 1 "ENTRY_102da330"

undefined4 * Recovered_102da330::FUN_102da330(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 102da3f0; body size 148 bytes.
#line 1 "ENTRY_102da3f0"

undefined4 * Recovered_102da3f0::FUN_102da3f0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 102da4b0; body size 126 bytes.
#line 1 "ENTRY_102da4b0"

undefined4 * Recovered_102da4b0::FUN_102da4b0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 102da560; body size 170 bytes.
#line 1 "ENTRY_102da560"

undefined4 * Recovered_102da560::FUN_102da560(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCStringTemplateNode;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 10304120; body size 158 bytes.
#line 1 "ENTRY_10304120"

void FUN_10304120(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  undefined4 *puVar2;

  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    ([&]() noexcept {

    ((SCStr *)(puVar2 + 3))->int_release();
    puVar2[3] = 0;
    
})();
([&]() noexcept {

    ((SCStr *)(puVar2 + 2))->int_release();
    puVar2[2] = 0;
    
})();

    thunk_FUN_1148a50e((void *)(puVar2), 0x10);
    puVar2 = puVar1;
  }

  return;
}


// Reference entry 10304210; body size 113 bytes.
#line 1 "ENTRY_10304210"

void FUN_10304210(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0xc))->int_release();
  *(undefined4 *)(param_2 + 0xc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x10);
  
})();

  return;
}


// Reference entry 10304760; body size 98 bytes.
#line 1 "ENTRY_10304760"

void FUN_10304760(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 1032fb90; body size 122 bytes.
#line 1 "ENTRY_1032fb90"

void FUN_1032fb90(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10331e10; body size 107 bytes.
#line 1 "ENTRY_10331e10"

void FUN_10331e10(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10335be0; body size 97 bytes.
#line 1 "ENTRY_10335be0"

void __fastcall FUN_10335be0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10335c60; body size 97 bytes.
#line 1 "ENTRY_10335c60"

void __fastcall FUN_10335c60(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 103360a0; body size 98 bytes.
#line 1 "ENTRY_103360a0"

void __fastcall FUN_103360a0(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10336120; body size 98 bytes.
#line 1 "ENTRY_10336120"

void __fastcall FUN_10336120(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10336630; body size 106 bytes.
#line 1 "ENTRY_10336630"

void __fastcall FUN_10336630(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10337f50; body size 122 bytes.
#line 1 "ENTRY_10337f50"

int Recovered_10337f50::FUN_10337f50(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 10337ff0; body size 122 bytes.
#line 1 "ENTRY_10337ff0"

int Recovered_10337ff0::FUN_10337ff0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10338110; body size 127 bytes.
#line 1 "ENTRY_10338110"

SCStr * Recovered_10338110::FUN_10338110(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10339200; body size 120 bytes.
#line 1 "ENTRY_10339200"

void Recovered_10339200::FUN_10339200(char param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return;
}


// Reference entry 103393e0; body size 120 bytes.
#line 1 "ENTRY_103393e0"

void Recovered_103393e0::FUN_103393e0(char param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return;
}


// Reference entry 10354000; body size 122 bytes.
#line 1 "ENTRY_10354000"

void FUN_10354000(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 103540a0; body size 122 bytes.
#line 1 "ENTRY_103540a0"

void FUN_103540a0(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10358830; body size 107 bytes.
#line 1 "ENTRY_10358830"

void FUN_10358830(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 103588c0; body size 107 bytes.
#line 1 "ENTRY_103588c0"

void FUN_103588c0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10358950; body size 133 bytes.
#line 1 "ENTRY_10358950"

void FUN_10358950(undefined4 param_1,int param_2)

{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0xc))->int_release();
  *(undefined4 *)(param_2 + 0xc) = 0;
  
})();

  return;
}


// Reference entry 10363080; body size 139 bytes.
#line 1 "ENTRY_10363080"

void __fastcall FUN_10363080(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0x10)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x10))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10363140; body size 106 bytes.
#line 1 "ENTRY_10363140"

void __fastcall FUN_10363140(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 103631d0; body size 106 bytes.
#line 1 "ENTRY_103631d0"

void __fastcall FUN_103631d0(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 103653b0; body size 118 bytes.
#line 1 "ENTRY_103653b0"

void __fastcall FUN_103653b0(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[3];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10365780; body size 132 bytes.
#line 1 "ENTRY_10365780"

void __fastcall FUN_10365780(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  *(undefined4 *)(param_1 + 0x10) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();

  return;
}


// Reference entry 103659a0; body size 139 bytes.
#line 1 "ENTRY_103659a0"

void __fastcall FUN_103659a0(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0x10)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x10))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10368f60; body size 127 bytes.
#line 1 "ENTRY_10368f60"

SCStr * Recovered_10368f60::FUN_10368f60(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10369010; body size 127 bytes.
#line 1 "ENTRY_10369010"

SCStr * Recovered_10369010::FUN_10369010(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 1036a510; body size 153 bytes.
#line 1 "ENTRY_1036a510"

int Recovered_1036a510::FUN_1036a510(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  *(undefined4 *)(param_1 + 0x10) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x1c);
  }
  
})();

  return param_1;
}


// Reference entry 1039fdb0; body size 119 bytes.
#line 1 "ENTRY_1039fdb0"

void __fastcall FUN_1039fdb0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCOpAddLinkCodeAccount;
  param_1[2] = (undefined4)&ghidra_vftable_SCOpAddLinkCodeAccount;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  thunk_FUN_1039fa00();
  
})();

  return;
}


// Reference entry 103a0360; body size 140 bytes.
#line 1 "ENTRY_103a0360"

undefined4 * Recovered_103a0360::FUN_103a0360(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCOpAddLinkCodeAccount;
  param_1[2] = (undefined4)&ghidra_vftable_SCOpAddLinkCodeAccount;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  thunk_FUN_1039fa00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x50);
  }
  
})();

  return param_1;
}


// Reference entry 103a5020; body size 122 bytes.
#line 1 "ENTRY_103a5020"

void FUN_103a5020(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 103a59b0; body size 107 bytes.
#line 1 "ENTRY_103a59b0"

void FUN_103a59b0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 103a7f20; body size 106 bytes.
#line 1 "ENTRY_103a7f20"

void __fastcall FUN_103a7f20(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 103a81d0; body size 295 bytes.
#line 1 "ENTRY_103a81d0"

void __fastcall FUN_103a81d0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x94] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x95] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0x96] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  param_1[0xa0] = (undefined4)&ghidra_vftable_SCAlarmMusicDataSource;
  if ((int *)param_1[0xa4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xa4] + 100))(param_1[0xa1]);
  }
  piVar1 = (int *)param_1[0xa5];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0xa0] = (undefined4)&ghidra_vftable_SCBrowseStackManagerEventSink;
  piVar1 = (int *)param_1[0xa2];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_102037c0();
  
})();

  return;
}


// Reference entry 103a97d0; body size 127 bytes.
#line 1 "ENTRY_103a97d0"

SCStr * Recovered_103a97d0::FUN_103a97d0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 103c2a20; body size 99 bytes.
#line 1 "ENTRY_103c2a20"

void __fastcall FUN_103c2a20(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x14))->int_release();
  *(undefined4 *)(param_1 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();

  return;
}


// Reference entry 103c2ab0; body size 237 bytes.
#line 1 "ENTRY_103c2ab0"

void __fastcall FUN_103c2ab0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RRefreshTokenRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RRefreshTokenRequest;
  if (param_1[0x198a] != 0) {
    abi_call_thunk_FUN_111fd590((void *)(param_1[0x198a]));
  }
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x198d))->int_release();
  param_1[0x198d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x198c))->int_release();
  param_1[0x198c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x198b))->int_release();
  param_1[0x198b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103c2be0; body size 237 bytes.
#line 1 "ENTRY_103c2be0"

void __fastcall FUN_103c2be0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RTMFetchClientTokenRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RTMFetchClientTokenRequest;
  if (param_1[0x188d] != 0) {
    abi_call_thunk_FUN_111fd590((void *)(param_1[0x188d]));
  }
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103c3110; body size 143 bytes.
#line 1 "ENTRY_103c3110"

void __fastcall FUN_103c3110(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1c))->int_release();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x18))->int_release();
  *(undefined4 *)(param_1 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x14))->int_release();
  *(undefined4 *)(param_1 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  *(undefined4 *)(param_1 + 0x10) = 0;
  
})();

  return;
}


// Reference entry 103c3e70; body size 120 bytes.
#line 1 "ENTRY_103c3e70"

int Recovered_103c3e70::FUN_103c3e70(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x14))->int_release();
  *(undefined4 *)(param_1 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x18);
  }
  
})();

  return param_1;
}


// Reference entry 103e0ee0; body size 288 bytes.
#line 1 "ENTRY_103e0ee0"

void __fastcall FUN_103e0ee0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RGetBetaSettingsRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RGetBetaSettingsRequest;
  piVar1 = (int *)param_1[0x184e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x184d] = 0;
    param_1[0x184e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 103e12e0; body size 162 bytes.
#line 1 "ENTRY_103e12e0"

void __fastcall FUN_103e12e0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegAccountTransferRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegAccountTransferRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x198a))->int_release();
  param_1[0x198a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e1440; body size 274 bytes.
#line 1 "ENTRY_103e1440"

void __fastcall FUN_103e1440(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegBeginSecureTransferRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegBeginSecureTransferRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188d))->int_release();
  param_1[0x188d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e1890; body size 190 bytes.
#line 1 "ENTRY_103e1890"

void __fastcall FUN_103e1890(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegCreateIdentityRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegCreateIdentityRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e1a50; body size 190 bytes.
#line 1 "ENTRY_103e1a50"

void __fastcall FUN_103e1a50(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegFinalizeRegistrationRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegFinalizeRegistrationRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e1c10; body size 218 bytes.
#line 1 "ENTRY_103e1c10"

void __fastcall FUN_103e1c10(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegGetRegistrationResult;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RSecRegGetRegistrationResult;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 103e1d30; body size 386 bytes.
#line 1 "ENTRY_103e1d30"

void __fastcall FUN_103e1d30(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegGetUserAccountRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RSecRegGetUserAccountRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1851))->int_release();
  param_1[0x1851] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1850))->int_release();
  param_1[0x1850] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184f))->int_release();
  param_1[0x184f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184e))->int_release();
  param_1[0x184e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184d))->int_release();
  param_1[0x184d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 103e20a0; body size 237 bytes.
#line 1 "ENTRY_103e20a0"

void __fastcall FUN_103e20a0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegLoginRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegLoginRequest;
  if (param_1[0x188c] != 0) {
    abi_call_thunk_FUN_111fd590((void *)(param_1[0x188c]));
  }
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x198e))->int_release();
  param_1[0x198e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e22b0; body size 162 bytes.
#line 1 "ENTRY_103e22b0"

void __fastcall FUN_103e22b0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegPasswordSetRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegPasswordSetRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x198a))->int_release();
  param_1[0x198a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e2440; body size 302 bytes.
#line 1 "ENTRY_103e2440"

void __fastcall FUN_103e2440(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegPrepareRegistrationRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegPrepareRegistrationRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188e))->int_release();
  param_1[0x188e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188d))->int_release();
  param_1[0x188d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e25c0; body size 246 bytes.
#line 1 "ENTRY_103e25c0"

void __fastcall FUN_103e25c0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegPrepareTransferRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegPrepareTransferRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e28a0; body size 190 bytes.
#line 1 "ENTRY_103e28a0"

void __fastcall FUN_103e28a0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegResetPasswordRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegResetPasswordRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e2a30; body size 190 bytes.
#line 1 "ENTRY_103e2a30"

void __fastcall FUN_103e2a30(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegUpdateUserRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegUpdateUserRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e2b80; body size 246 bytes.
#line 1 "ENTRY_103e2b80"

void __fastcall FUN_103e2b80(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegUserEmailRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RSecRegUserEmailRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 103e2cc0; body size 274 bytes.
#line 1 "ENTRY_103e2cc0"

void __fastcall FUN_103e2cc0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegUserGetRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RSecRegUserGetRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x194e))->int_release();
  param_1[0x194e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x194d))->int_release();
  param_1[0x194d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 103e2eb0; body size 246 bytes.
#line 1 "ENTRY_103e2eb0"

void __fastcall FUN_103e2eb0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegValidateEmailRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RSecRegValidateEmailRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x184d))->int_release();
  param_1[0x184d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 103e30c0; body size 190 bytes.
#line 1 "ENTRY_103e30c0"

void __fastcall FUN_103e30c0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegVerifyEmailRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegVerifyEmailRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e3250; body size 190 bytes.
#line 1 "ENTRY_103e3250"

void __fastcall FUN_103e3250(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RSecRegVerifyEmailSubmitRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RSecRegVerifyEmailSubmitRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 103e4ac0; body size 242 bytes.
#line 1 "ENTRY_103e4ac0"

undefined4 * Recovered_103e4ac0::FUN_103e4ac0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_RSecRegGetRegistrationResult;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RSecRegGetRegistrationResult;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x6130);
  }
  
})();

  return param_1;
}


// Reference entry 1042a9f0; body size 436 bytes.
#line 1 "ENTRY_1042a9f0"

void __fastcall FUN_1042a9f0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAlarm;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarm;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarm;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarm;
  piVar1 = (int *)param_1[0x35];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x33];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x31];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2f];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1042ada0; body size 184 bytes.
#line 1 "ENTRY_1042ada0"

void __fastcall FUN_1042ada0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1042af50; body size 290 bytes.
#line 1 "ENTRY_1042af50"

void __fastcall FUN_1042af50(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAlarms;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarms;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarms;
  piVar1 = (int *)param_1[0x2e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1042b6d0; body size 208 bytes.
#line 1 "ENTRY_1042b6d0"

undefined4 * Recovered_1042b6d0::FUN_1042b6d0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarmRoom;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 1042b8c0; body size 314 bytes.
#line 1 "ENTRY_1042b8c0"

undefined4 * Recovered_1042b8c0::FUN_1042b8c0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAlarms;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarms;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAlarms;
  piVar1 = (int *)param_1[0x2e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc0);
  }
  
})();

  return param_1;
}


// Reference entry 1043d1d0; body size 234 bytes.
#line 1 "ENTRY_1043d1d0"

void __fastcall FUN_1043d1d0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplay;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplay;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplay;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplay;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1043d320; body size 258 bytes.
#line 1 "ENTRY_1043d320"

undefined4 * Recovered_1043d320::FUN_1043d320(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplay;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplay;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplay;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplay;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 1043e870; body size 234 bytes.
#line 1 "ENTRY_1043e870"

void __fastcall FUN_1043e870(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplayRoom;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplayRoom;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplayRoom;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplayRoom;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1043e9c0; body size 258 bytes.
#line 1 "ENTRY_1043e9c0"

undefined4 * Recovered_1043e9c0::FUN_1043e9c0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplayRoom;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplayRoom;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplayRoom;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuAutoplayRoom;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 10441c70; body size 330 bytes.
#line 1 "ENTRY_10441c70"

void __fastcall FUN_10441c70(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuDateTime;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuDateTime;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuDateTime;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuDateTime;
  piVar1 = (int *)param_1[0x2e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10441e80; body size 354 bytes.
#line 1 "ENTRY_10441e80"

undefined4 * Recovered_10441e80::FUN_10441e80(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuDateTime;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuDateTime;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuDateTime;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuDateTime;
  piVar1 = (int *)param_1[0x2e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xd0);
  }
  
})();

  return param_1;
}


// Reference entry 10443d20; body size 234 bytes.
#line 1 "ENTRY_10443d20"

void __fastcall FUN_10443d20(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuDevice;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuDevice;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuDevice;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuDevice;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104444b0; body size 258 bytes.
#line 1 "ENTRY_104444b0"

undefined4 * Recovered_104444b0::FUN_104444b0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuDevice;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuDevice;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuDevice;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuDevice;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb0);
  }
  
})();

  return param_1;
}


// Reference entry 1044b330; body size 194 bytes.
#line 1 "ENTRY_1044b330"

void __fastcall FUN_1044b330(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuEnumeration;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuEnumeration;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuEnumeration;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  param_1[0x28] = 0;
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1044fb10; body size 152 bytes.
#line 1 "ENTRY_1044fb10"

void __fastcall FUN_1044fb10(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuExperiment;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiment;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiment;
  piVar1 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x24))->int_release();
  param_1[0x24] = 0;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1044fbe0; body size 226 bytes.
#line 1 "ENTRY_1044fbe0"

void __fastcall FUN_1044fbe0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuExperiments;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiments;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiments;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiments;
  piVar1 = (int *)param_1[0x2a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1044fe50; body size 176 bytes.
#line 1 "ENTRY_1044fe50"

undefined4 * Recovered_1044fe50::FUN_1044fe50(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuExperiment;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiment;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiment;
  piVar1 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x24))->int_release();
  param_1[0x24] = 0;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 1044ff40; body size 250 bytes.
#line 1 "ENTRY_1044ff40"

undefined4 * Recovered_1044ff40::FUN_1044ff40(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuExperiments;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiments;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiments;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuExperiments;
  piVar1 = (int *)param_1[0x2a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb0);
  }
  
})();

  return param_1;
}


// Reference entry 10457320; body size 526 bytes.
#line 1 "ENTRY_10457320"

void __fastcall FUN_10457320(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuGroupsEdit;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuGroupsEdit;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuGroupsEdit;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuGroupsEdit;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCSettingsMenuGroupsEdit;
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCSettingsMenuGroupsEdit;
  piVar1 = (int *)param_1[0x37];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x35];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x33];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x31];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2f];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2b))->int_release();
  param_1[0x2b] = 0;
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCIActionDelegateCB;
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1045f540; body size 319 bytes.
#line 1 "ENTRY_1045f540"

void __fastcall FUN_1045f540(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[0x26] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  piVar1 = (int *)param_1[0x32];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x30];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2e];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  param_1[0x26] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSwfObjBCListener;
  thunk_FUN_110a9ef0();
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1045f750; body size 343 bytes.
#line 1 "ENTRY_1045f750"

undefined4 * Recovered_1045f750::FUN_1045f750(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  param_1[0x26] = (undefined4)&ghidra_vftable_SCSettingsMenuLineIn;
  piVar1 = (int *)param_1[0x32];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x30];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2e];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  param_1[0x26] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSwfObjBCListener;
  thunk_FUN_110a9ef0();
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xd0);
  }
  
})();

  return param_1;
}


// Reference entry 104623f0; body size 288 bytes.
#line 1 "ENTRY_104623f0"

void __fastcall FUN_104623f0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  thunk_FUN_101f53d0();
  thunk_FUN_10461ec0();
  piVar1 = (int *)param_1[0x2d];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10462a90; body size 312 bytes.
#line 1 "ENTRY_10462a90"

undefined4 * Recovered_10462a90::FUN_10462a90(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuManageWifi;
  thunk_FUN_101f53d0();
  thunk_FUN_10461ec0();
  piVar1 = (int *)param_1[0x2d];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x130);
  }
  
})();

  return param_1;
}


// Reference entry 10467d30; body size 246 bytes.
#line 1 "ENTRY_10467d30"

void __fastcall FUN_10467d30(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrary;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrary;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrary;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrary;
  piVar1 = (int *)param_1[0x2a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10467e70; body size 224 bytes.
#line 1 "ENTRY_10467e70"

void __fastcall FUN_10467e70(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  piVar1 = (int *)param_1[0x2c];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10468050; body size 270 bytes.
#line 1 "ENTRY_10468050"

undefined4 * Recovered_10468050::FUN_10468050(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrary;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrary;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrary;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrary;
  piVar1 = (int *)param_1[0x2a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc0);
  }
  
})();

  return param_1;
}


// Reference entry 104681b0; body size 248 bytes.
#line 1 "ENTRY_104681b0"

undefined4 * Recovered_104681b0::FUN_104681b0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicLibrarySetup;
  piVar1 = (int *)param_1[0x2c];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb8);
  }
  
})();

  return param_1;
}


// Reference entry 1046c560; body size 194 bytes.
#line 1 "ENTRY_1046c560"

void __fastcall FUN_1046c560(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuNetworkStatus;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuNetworkStatus;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuNetworkStatus;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x24))->int_release();
  param_1[0x24] = 0;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1046c6f0; body size 218 bytes.
#line 1 "ENTRY_1046c6f0"

undefined4 * Recovered_1046c6f0::FUN_1046c6f0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuNetworkStatus;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuNetworkStatus;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuNetworkStatus;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x24))->int_release();
  param_1[0x24] = 0;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 1046e7e0; body size 276 bytes.
#line 1 "ENTRY_1046e7e0"

void __fastcall FUN_1046e7e0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuParentalControls;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuParentalControls;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuParentalControls;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuParentalControls;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuParentalControls;
  if (param_1[0x28] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x28])(1);
    }
    param_1[0x28] = 0;
  }
  thunk_FUN_101ec4a0();
  piVar1 = (int *)param_1[0x2a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10472b50; body size 270 bytes.
#line 1 "ENTRY_10472b50"

void __fastcall FUN_10472b50(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuRoomName;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomName;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomName;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomName;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2b))->int_release();
  param_1[0x2b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10473040; body size 294 bytes.
#line 1 "ENTRY_10473040"

undefined4 * Recovered_10473040::FUN_10473040(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuRoomName;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomName;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomName;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomName;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2b))->int_release();
  param_1[0x2b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb0);
  }
  
})();

  return param_1;
}


// Reference entry 10475a20; body size 178 bytes.
#line 1 "ENTRY_10475a20"

void __fastcall FUN_10475a20(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuRoomVoiceService;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomVoiceService;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomVoiceService;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomVoiceService;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10476000; body size 202 bytes.
#line 1 "ENTRY_10476000"

undefined4 * Recovered_10476000::FUN_10476000(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuRoomVoiceService;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomVoiceService;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomVoiceService;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuRoomVoiceService;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 10479ca0; body size 339 bytes.
#line 1 "ENTRY_10479ca0"

void __fastcall FUN_10479ca0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[0x28] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[0x2b] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  thunk_FUN_1022de20();
  piVar1 = (int *)param_1[0x30];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x2b] = (undefined4)&ghidra_vftable_SCUserAccountEventSink;
  piVar1 = (int *)param_1[0x2d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x28] = (undefined4)&ghidra_vftable_SCAccountManagerEventSink;
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCFeatureManagerEventSink;
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1047a060; body size 363 bytes.
#line 1 "ENTRY_1047a060"

undefined4 * Recovered_1047a060::FUN_1047a060(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[0x28] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  param_1[0x2b] = (undefined4)&ghidra_vftable_SCSettingsMenuRoot;
  thunk_FUN_1022de20();
  piVar1 = (int *)param_1[0x30];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x2b] = (undefined4)&ghidra_vftable_SCUserAccountEventSink;
  piVar1 = (int *)param_1[0x2d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x28] = (undefined4)&ghidra_vftable_SCAccountManagerEventSink;
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCFeatureManagerEventSink;
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xd0);
  }
  
})();

  return param_1;
}


// Reference entry 10485450; body size 911 bytes.
#line 1 "ENTRY_10485450"

void __fastcall FUN_10485450(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  param_1[0x2b] = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  param_1[0x2c] = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  param_1[0x2d] = (undefined4)&ghidra_vftable_SCSettingsMenuSet;
  piVar1 = (int *)param_1[0x58];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x56];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x54];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x52];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x50];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x4e];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x4c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x4a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x48];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x46];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x44];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x42];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x40];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2f))->int_release();
  param_1[0x2f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2e))->int_release();
  param_1[0x2e] = 0;
  param_1[0x2d] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x2c] = (undefined4)&ghidra_vftable_SCSwfObjHTListener;
  param_1[0x2b] = (undefined4)&ghidra_vftable_SCSwfObjBCListener;
  thunk_FUN_110a9ef0();
  param_1[0x27] = (undefined4)&ghidra_vftable_SCAccountManagerEventSink;
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10498510; body size 168 bytes.
#line 1 "ENTRY_10498510"

void __fastcall FUN_10498510(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuConnectedProduct;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuConnectedProduct;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuConnectedProduct;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuConnectedProduct;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104985f0; body size 192 bytes.
#line 1 "ENTRY_104985f0"

void __fastcall FUN_104985f0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuMusicService;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicService;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicService;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicService;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104986f0; body size 204 bytes.
#line 1 "ENTRY_104986f0"

void __fastcall FUN_104986f0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuServices;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuServices;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuServices;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuServices;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10498910; body size 192 bytes.
#line 1 "ENTRY_10498910"

undefined4 * Recovered_10498910::FUN_10498910(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuConnectedProduct;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuConnectedProduct;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuConnectedProduct;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuConnectedProduct;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 10498a10; body size 216 bytes.
#line 1 "ENTRY_10498a10"

undefined4 * Recovered_10498a10::FUN_10498a10(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuMusicService;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicService;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicService;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuMusicService;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 10498b30; body size 228 bytes.
#line 1 "ENTRY_10498b30"

undefined4 * Recovered_10498b30::FUN_10498b30(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuServices;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuServices;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuServices;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuServices;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 1049f380; body size 318 bytes.
#line 1 "ENTRY_1049f380"

void __fastcall FUN_1049f380(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuEQ;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuEQ;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuEQ;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuEQ;
  piVar1 = (int *)param_1[0x2e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1049f520; body size 192 bytes.
#line 1 "ENTRY_1049f520"

void __fastcall FUN_1049f520(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuHeightChannelLevel;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuHeightChannelLevel;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuHeightChannelLevel;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuHeightChannelLevel;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1049f620; body size 192 bytes.
#line 1 "ENTRY_1049f620"

void __fastcall FUN_1049f620(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSubAudio;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSubAudio;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSubAudio;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSubAudio;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  param_1[0x28] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1049f720; body size 276 bytes.
#line 1 "ENTRY_1049f720"

void __fastcall FUN_1049f720(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSurroundAudio;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSurroundAudio;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSurroundAudio;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSurroundAudio;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2c))->int_release();
  param_1[0x2c] = 0;
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1049f880; body size 296 bytes.
#line 1 "ENTRY_1049f880"

void __fastcall FUN_1049f880(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  piVar1 = (int *)param_1[0x2c];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  param_1[0x28] = 0;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1049fa00; body size 172 bytes.
#line 1 "ENTRY_1049fa00"

void __fastcall FUN_1049fa00(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuVolumeLimit;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuVolumeLimit;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuVolumeLimit;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 1049ffd0; body size 342 bytes.
#line 1 "ENTRY_1049ffd0"

undefined4 * Recovered_1049ffd0::FUN_1049ffd0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuEQ;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuEQ;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuEQ;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuEQ;
  piVar1 = (int *)param_1[0x2e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc0);
  }
  
})();

  return param_1;
}


// Reference entry 104a0190; body size 216 bytes.
#line 1 "ENTRY_104a0190"

undefined4 * Recovered_104a0190::FUN_104a0190(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuHeightChannelLevel;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuHeightChannelLevel;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuHeightChannelLevel;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuHeightChannelLevel;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 104a02b0; body size 216 bytes.
#line 1 "ENTRY_104a02b0"

undefined4 * Recovered_104a02b0::FUN_104a02b0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSubAudio;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSubAudio;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSubAudio;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSubAudio;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  param_1[0x28] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 104a03d0; body size 300 bytes.
#line 1 "ENTRY_104a03d0"

undefined4 * Recovered_104a03d0::FUN_104a03d0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSurroundAudio;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSurroundAudio;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSurroundAudio;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSurroundAudio;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2c))->int_release();
  param_1[0x2c] = 0;
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb8);
  }
  
})();

  return param_1;
}


// Reference entry 104a0550; body size 320 bytes.
#line 1 "ENTRY_104a0550"

undefined4 * Recovered_104a0550::FUN_104a0550(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCSettingsMenuTrueplay;
  piVar1 = (int *)param_1[0x2c];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  param_1[0x28] = 0;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb8);
  }
  
})();

  return param_1;
}


// Reference entry 104a06f0; body size 196 bytes.
#line 1 "ENTRY_104a06f0"

undefined4 * Recovered_104a06f0::FUN_104a06f0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuVolumeLimit;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuVolumeLimit;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuVolumeLimit;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 104a8890; body size 172 bytes.
#line 1 "ENTRY_104a8890"

void __fastcall FUN_104a8890(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSourceName;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceName;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceName;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceName;
  piVar1 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104a8a40; body size 196 bytes.
#line 1 "ENTRY_104a8a40"

undefined4 * Recovered_104a8a40::FUN_104a8a40(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSourceName;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceName;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceName;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceName;
  piVar1 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 104a99b0; body size 172 bytes.
#line 1 "ENTRY_104a99b0"

void __fastcall FUN_104a99b0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLevel;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLevel;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLevel;
  piVar1 = (int *)param_1[0x26];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x24))->int_release();
  param_1[0x24] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104a9aa0; body size 196 bytes.
#line 1 "ENTRY_104a9aa0"

undefined4 * Recovered_104a9aa0::FUN_104a9aa0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLevel;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLevel;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLevel;
  piVar1 = (int *)param_1[0x26];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x24))->int_release();
  param_1[0x24] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 104aa510; body size 192 bytes.
#line 1 "ENTRY_104aa510"

void __fastcall FUN_104aa510(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLatency;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLatency;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLatency;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLatency;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104aa620; body size 216 bytes.
#line 1 "ENTRY_104aa620"

undefined4 * Recovered_104aa620::FUN_104aa620(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLatency;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLatency;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLatency;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSourceLatency;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb0);
  }
  
})();

  return param_1;
}


// Reference entry 104ad540; body size 175 bytes.
#line 1 "ENTRY_104ad540"

void __fastcall FUN_104ad540(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSupport;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSupport;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSupport;
  thunk_FUN_104ad290();
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104ada70; body size 199 bytes.
#line 1 "ENTRY_104ada70"

undefined4 * Recovered_104ada70::FUN_104ada70(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSupport;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSupport;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSupport;
  thunk_FUN_104ad290();
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x110);
  }
  
})();

  return param_1;
}


// Reference entry 104b3570; body size 172 bytes.
#line 1 "ENTRY_104b3570"

void __fastcall FUN_104b3570(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuTVDialogSync;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuTVDialogSync;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuTVDialogSync;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104b3660; body size 196 bytes.
#line 1 "ENTRY_104b3660"

undefined4 * Recovered_104b3660::FUN_104b3660(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuTVDialogSync;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuTVDialogSync;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuTVDialogSync;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 104b3f30; body size 192 bytes.
#line 1 "ENTRY_104b3f30"

void __fastcall FUN_104b3f30(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuTVGroupLatency;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuTVGroupLatency;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuTVGroupLatency;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuTVGroupLatency;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104b4040; body size 216 bytes.
#line 1 "ENTRY_104b4040"

undefined4 * Recovered_104b4040::FUN_104b4040(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuTVGroupLatency;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuTVGroupLatency;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuTVGroupLatency;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuTVGroupLatency;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb0);
  }
  
})();

  return param_1;
}


// Reference entry 104b8710; body size 248 bytes.
#line 1 "ENTRY_104b8710"

void __fastcall FUN_104b8710(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSystem;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSystem;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSystem;
  piVar1 = (int *)param_1[0x2b];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104b8c30; body size 272 bytes.
#line 1 "ENTRY_104b8c30"

undefined4 * Recovered_104b8c30::FUN_104b8c30(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSystem;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSystem;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSystem;
  piVar1 = (int *)param_1[0x2b];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb8);
  }
  
})();

  return param_1;
}


// Reference entry 104bc760; body size 204 bytes.
#line 1 "ENTRY_104bc760"

void __fastcall FUN_104bc760(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuUpdates;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuUpdates;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuUpdates;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuUpdates;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104bc990; body size 228 bytes.
#line 1 "ENTRY_104bc990"

undefined4 * Recovered_104bc990::FUN_104bc990(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuUpdates;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuUpdates;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuUpdates;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuUpdates;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 104bdb00; body size 262 bytes.
#line 1 "ENTRY_104bdb00"

void __fastcall FUN_104bdb00(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceService;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceService;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceService;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceService;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x29))->int_release();
  param_1[0x29] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  param_1[0x28] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104bdc70; body size 286 bytes.
#line 1 "ENTRY_104bdc70"

undefined4 * Recovered_104bdc70::FUN_104bdc70(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceService;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceService;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceService;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceService;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x29))->int_release();
  param_1[0x29] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  param_1[0x28] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xb0);
  }
  
})();

  return param_1;
}


// Reference entry 104c2280; body size 120 bytes.
#line 1 "ENTRY_104c2280"

void FUN_104c2280(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 104c3a40; body size 97 bytes.
#line 1 "ENTRY_104c3a40"

void __fastcall FUN_104c3a40(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 104c3ac0; body size 119 bytes.
#line 1 "ENTRY_104c3ac0"

void __fastcall FUN_104c3ac0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 104c3c10; body size 172 bytes.
#line 1 "ENTRY_104c3c10"

void __fastcall FUN_104c3c10(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSonosVoiceLocale;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSonosVoiceLocale;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSonosVoiceLocale;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSonosVoiceLocale;
  piVar1 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104c3cf0; body size 314 bytes.
#line 1 "ENTRY_104c3cf0"

void __fastcall FUN_104c3cf0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2e))->int_release();
  param_1[0x2e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2d))->int_release();
  param_1[0x2d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2c))->int_release();
  param_1[0x2c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2b))->int_release();
  param_1[0x2b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104c4070; body size 140 bytes.
#line 1 "ENTRY_104c4070"

SCStr * Recovered_104c4070::FUN_104c4070(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 104c4200; body size 196 bytes.
#line 1 "ENTRY_104c4200"

undefined4 * Recovered_104c4200::FUN_104c4200(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuSonosVoiceLocale;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuSonosVoiceLocale;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuSonosVoiceLocale;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuSonosVoiceLocale;
  piVar1 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 104c4300; body size 338 bytes.
#line 1 "ENTRY_104c4300"

undefined4 * Recovered_104c4300::FUN_104c4300(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSettingsMenuVoiceServiceSettings;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x2e))->int_release();
  param_1[0x2e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2d))->int_release();
  param_1[0x2d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2c))->int_release();
  param_1[0x2c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2b))->int_release();
  param_1[0x2b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[2] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  param_1[10] = (undefined4)&ghidra_vftable_SCRemoveMeSettingsMenu;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 200);
  }
  
})();

  return param_1;
}


// Reference entry 104c9b30; body size 152 bytes.
#line 1 "ENTRY_104c9b30"

void __fastcall FUN_104c9b30(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuNowPlaying;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuNowPlaying;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuNowPlaying;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 104c9c40; body size 176 bytes.
#line 1 "ENTRY_104c9c40"

undefined4 * Recovered_104c9c40::FUN_104c9c40(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsMenuNowPlaying;
  param_1[2] = (undefined4)&ghidra_vftable_SCSettingsMenuNowPlaying;
  param_1[10] = (undefined4)&ghidra_vftable_SCSettingsMenuNowPlaying;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 104cb7f0; body size 98 bytes.
#line 1 "ENTRY_104cb7f0"

void FUN_104cb7f0(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 104ccda0; body size 97 bytes.
#line 1 "ENTRY_104ccda0"

void __fastcall FUN_104ccda0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 104cd6a0; body size 118 bytes.
#line 1 "ENTRY_104cd6a0"

SCStr * Recovered_104cd6a0::FUN_104cd6a0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 104d53b0; body size 163 bytes.
#line 1 "ENTRY_104d53b0"

void __fastcall FUN_104d53b0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x24)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x24))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x18)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x18))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x14)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 104f8e20; body size 122 bytes.
#line 1 "ENTRY_104f8e20"

void FUN_104f8e20(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 104f9630; body size 107 bytes.
#line 1 "ENTRY_104f9630"

void FUN_104f9630(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 104faf60; body size 106 bytes.
#line 1 "ENTRY_104faf60"

void __fastcall FUN_104faf60(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 104fbc10; body size 127 bytes.
#line 1 "ENTRY_104fbc10"

SCStr * Recovered_104fbc10::FUN_104fbc10(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10503400; body size 185 bytes.
#line 1 "ENTRY_10503400"

void __fastcall FUN_10503400(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x140))->int_release();
  *(undefined4 *)(param_1 + 0x140) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x13c))->int_release();
  *(undefined4 *)(param_1 + 0x13c) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x138))->int_release();
  *(undefined4 *)(param_1 + 0x138) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x134))->int_release();
  *(undefined4 *)(param_1 + 0x134) = 0;
  thunk_FUN_110a9ef0();
  thunk_FUN_105036b0();
  
})();

  return;
}


// Reference entry 105034f0; body size 146 bytes.
#line 1 "ENTRY_105034f0"

void __fastcall FUN_105034f0(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x138))->int_release();
  *(undefined4 *)(param_1 + 0x138) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x134))->int_release();
  *(undefined4 *)(param_1 + 0x134) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x130))->int_release();
  *(undefined4 *)(param_1 + 0x130) = 0;
  thunk_FUN_105036b0();
  
})();

  return;
}


// Reference entry 105035b0; body size 174 bytes.
#line 1 "ENTRY_105035b0"

void __fastcall FUN_105035b0(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x13c))->int_release();
  *(undefined4 *)(param_1 + 0x13c) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x138))->int_release();
  *(undefined4 *)(param_1 + 0x138) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x134))->int_release();
  *(undefined4 *)(param_1 + 0x134) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x130))->int_release();
  *(undefined4 *)(param_1 + 0x130) = 0;
  thunk_FUN_105036b0();
  
})();

  return;
}


// Reference entry 10504060; body size 213 bytes.
#line 1 "ENTRY_10504060"

void __fastcall FUN_10504060(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x144))->int_release();
  *(undefined4 *)(param_1 + 0x144) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x140))->int_release();
  *(undefined4 *)(param_1 + 0x140) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x13c))->int_release();
  *(undefined4 *)(param_1 + 0x13c) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x138))->int_release();
  *(undefined4 *)(param_1 + 0x138) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x134))->int_release();
  *(undefined4 *)(param_1 + 0x134) = 0;
  thunk_FUN_110a9ef0();
  thunk_FUN_105036b0();
  
})();

  return;
}


// Reference entry 105293d0; body size 133 bytes.
#line 1 "ENTRY_105293d0"

void __fastcall FUN_105293d0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceAppLinkFailState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 6))->int_release();
  param_1[6] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10529480; body size 111 bytes.
#line 1 "ENTRY_10529480"

void __fastcall FUN_10529480(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceCallToActionAppLinkState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10529750; body size 131 bytes.
#line 1 "ENTRY_10529750"

void __fastcall FUN_10529750(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceIntroState;
  piVar1 = (int *)param_1[6];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 105299b0; body size 183 bytes.
#line 1 "ENTRY_105299b0"

void __fastcall FUN_105299b0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceListState;
  param_1[3] = (undefined4)&ghidra_vftable_SCMusicServiceListState;
  thunk_FUN_1053f780();
  piVar1 = (int *)param_1[10];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCServiceDescriptorManagerEventSink;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10529f20; body size 148 bytes.
#line 1 "ENTRY_10529f20"

void __fastcall FUN_10529f20(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x3b))->int_release();
  param_1[0x3b] = 0;
  thunk_FUN_102cc870();
  thunk_FUN_102cc960();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10529fe0; body size 133 bytes.
#line 1 "ENTRY_10529fe0"

void __fastcall FUN_10529fe0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceResultErrorState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 5))->int_release();
  param_1[5] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 1052a0b0; body size 201 bytes.
#line 1 "ENTRY_1052a0b0"

void __fastcall FUN_1052a0b0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceSetNicknameState;
  param_1[5] = (undefined4)&ghidra_vftable_SCMusicServiceSetNicknameState;
  param_1[8] = (undefined4)&ghidra_vftable_SCMusicServiceSetNicknameState;
  thunk_FUN_1052e8a0();
  if (param_1[0xc] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xc])(1);
    }
    param_1[0xc] = 0;
  }
  piVar1 = (int *)param_1[10];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[8] = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  param_1[5] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 1052a500; body size 305 bytes.
#line 1 "ENTRY_1052a500"

void __fastcall FUN_1052a500(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceWorkingState;
  param_1[3] = (undefined4)&ghidra_vftable_SCMusicServiceWorkingState;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicServiceWorkingState;
  param_1[0xd] = (undefined4)&ghidra_vftable_SCMusicServiceWorkingState;
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 0x18))();
  }
  thunk_FUN_1059d800();
  thunk_FUN_104dec20();
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  piVar1 = (int *)param_1[0x15];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x13];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x11];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0xd] = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  
})();
([&]() noexcept {

  param_1[6] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 1052b080; body size 154 bytes.
#line 1 "ENTRY_1052b080"

undefined4 * Recovered_1052b080::FUN_1052b080(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceAppLinkFailState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 6))->int_release();
  param_1[6] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x1c);
  }
  
})();

  return param_1;
}


// Reference entry 1052b150; body size 132 bytes.
#line 1 "ENTRY_1052b150"

undefined4 * Recovered_1052b150::FUN_1052b150(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceCallToActionAppLinkState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x18);
  }
  
})();

  return param_1;
}


// Reference entry 1052b4d0; body size 152 bytes.
#line 1 "ENTRY_1052b4d0"

undefined4 * Recovered_1052b4d0::FUN_1052b4d0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceIntroState;
  piVar1 = (int *)param_1[6];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x1c);
  }
  
})();

  return param_1;
}


// Reference entry 1052be20; body size 172 bytes.
#line 1 "ENTRY_1052be20"

undefined4 * Recovered_1052be20::FUN_1052be20(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x3b))->int_release();
  param_1[0x3b] = 0;
  thunk_FUN_102cc870();
  thunk_FUN_102cc960();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xf0);
  }
  
})();

  return param_1;
}


// Reference entry 1052bf00; body size 154 bytes.
#line 1 "ENTRY_1052bf00"

undefined4 * Recovered_1052bf00::FUN_1052bf00(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceResultErrorState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 5))->int_release();
  param_1[5] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x18);
  }
  
})();

  return param_1;
}


// Reference entry 1054e2d0; body size 122 bytes.
#line 1 "ENTRY_1054e2d0"

void FUN_1054e2d0(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 1054e8c0; body size 107 bytes.
#line 1 "ENTRY_1054e8c0"

void FUN_1054e8c0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 1054fcb0; body size 106 bytes.
#line 1 "ENTRY_1054fcb0"

void __fastcall FUN_1054fcb0(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 1054ff50; body size 162 bytes.
#line 1 "ENTRY_1054ff50"

void __fastcall FUN_1054ff50(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RServiceManifestGetRequest;
  param_1[1] = (undefined4)&ghidra_vftable_RServiceManifestGetRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1845))->int_release();
  param_1[0x1845] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1844))->int_release();
  param_1[0x1844] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10550910; body size 127 bytes.
#line 1 "ENTRY_10550910"

SCStr * Recovered_10550910::FUN_10550910(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 1057ba80; body size 325 bytes.
#line 1 "ENTRY_1057ba80"

void __fastcall FUN_1057ba80(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x94] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x95] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0x96] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  param_1[0xa0] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseDataSource;
  if ((int *)param_1[0xa6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xa6] + 100))(param_1[0xa1]);
  }
  piVar1 = (int *)param_1[0xa7];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xa4))->int_release();
  param_1[0xa4] = 0;
  param_1[0xa0] = (undefined4)&ghidra_vftable_SCBrowseStackManagerEventSink;
  piVar1 = (int *)param_1[0xa2];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_102037c0();
  
})();

  return;
}


// Reference entry 1057bc20; body size 283 bytes.
#line 1 "ENTRY_1057bc20"

void __fastcall FUN_1057bc20(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0xf] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0x10] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0x11] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0x46] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0x48] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x4f))->int_release();
  param_1[0x4f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x4e))->int_release();
  param_1[0x4e] = 0;
  piVar1 = (int *)param_1[0x4d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x48] = (undefined4)&ghidra_vftable_SCIStackedItemImpl;
  piVar1 = (int *)param_1[0x4a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x48] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10203d60();
  
})();

  return;
}


// Reference entry 1057cc60; body size 307 bytes.
#line 1 "ENTRY_1057cc60"

undefined4 * Recovered_1057cc60::FUN_1057cc60(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0xf] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0x10] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0x11] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0x46] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  param_1[0x48] = (undefined4)&ghidra_vftable_SCPlaylistsBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x4f))->int_release();
  param_1[0x4f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x4e))->int_release();
  param_1[0x4e] = 0;
  piVar1 = (int *)param_1[0x4d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x48] = (undefined4)&ghidra_vftable_SCIStackedItemImpl;
  piVar1 = (int *)param_1[0x4a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x48] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10203d60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x148);
  }
  
})();

  return param_1;
}


// Reference entry 10594550; body size 120 bytes.
#line 1 "ENTRY_10594550"

void FUN_10594550(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 105956f0; body size 119 bytes.
#line 1 "ENTRY_105956f0"

void __fastcall FUN_105956f0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10595ae0; body size 140 bytes.
#line 1 "ENTRY_10595ae0"

SCStr * Recovered_10595ae0::FUN_10595ae0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 105a5870; body size 122 bytes.
#line 1 "ENTRY_105a5870"

void FUN_105a5870(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x20);
  
})();

  return;
}


// Reference entry 105a66d0; body size 107 bytes.
#line 1 "ENTRY_105a66d0"

void FUN_105a66d0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 105a8270; body size 106 bytes.
#line 1 "ENTRY_105a8270"

void __fastcall FUN_105a8270(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 105a8430; body size 127 bytes.
#line 1 "ENTRY_105a8430"

void __fastcall FUN_105a8430(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x30);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x28);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10def0d0();
  
})();

  return;
}


// Reference entry 105a9a40; body size 127 bytes.
#line 1 "ENTRY_105a9a40"

SCStr * Recovered_105a9a40::FUN_105a9a40(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 105a9bf0; body size 148 bytes.
#line 1 "ENTRY_105a9bf0"

int Recovered_105a9bf0::FUN_105a9bf0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x30);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x28);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10def0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x34);
  }
  
})();

  return param_1;
}


// Reference entry 105ba520; body size 97 bytes.
#line 1 "ENTRY_105ba520"

void __fastcall FUN_105ba520(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 105cd650; body size 98 bytes.
#line 1 "ENTRY_105cd650"

void FUN_105cd650(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 105d2d10; body size 97 bytes.
#line 1 "ENTRY_105d2d10"

void __fastcall FUN_105d2d10(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 105d3200; body size 145 bytes.
#line 1 "ENTRY_105d3200"

void __fastcall FUN_105d3200(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAutoplayZoneSelectAction;
  piVar1 = (int *)param_1[0x14];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  thunk_FUN_105d3a20();
  
})();

  return;
}


// Reference entry 105d3d10; body size 200 bytes.
#line 1 "ENTRY_105d3d10"

void __fastcall FUN_105d3d10(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCRenameLineInAction;
  piVar1 = (int *)param_1[0x1a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x18];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x15))->int_release();
  param_1[0x15] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  thunk_FUN_104ccb60();
  
})();

  return;
}


// Reference entry 105d41b0; body size 112 bytes.
#line 1 "ENTRY_105d41b0"

void __fastcall FUN_105d41b0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCStereoDualMonoSelectAction;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  thunk_FUN_105d3a20();
  
})();

  return;
}


// Reference entry 105d4f10; body size 118 bytes.
#line 1 "ENTRY_105d4f10"

SCStr * Recovered_105d4f10::FUN_105d4f10(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }
  
})();

  return param_1;
}


// Reference entry 105d55d0; body size 166 bytes.
#line 1 "ENTRY_105d55d0"

undefined4 * Recovered_105d55d0::FUN_105d55d0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAutoplayZoneSelectAction;
  piVar1 = (int *)param_1[0x14];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  thunk_FUN_105d3a20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x54);
  }
  
})();

  return param_1;
}


// Reference entry 105d61c0; body size 221 bytes.
#line 1 "ENTRY_105d61c0"

undefined4 * Recovered_105d61c0::FUN_105d61c0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCRenameLineInAction;
  piVar1 = (int *)param_1[0x1a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x18];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x15))->int_release();
  param_1[0x15] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  thunk_FUN_104ccb60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x6c);
  }
  
})();

  return param_1;
}


// Reference entry 105d6750; body size 133 bytes.
#line 1 "ENTRY_105d6750"

undefined4 * Recovered_105d6750::FUN_105d6750(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCStereoDualMonoSelectAction;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  thunk_FUN_105d3a20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x4c);
  }
  
})();

  return param_1;
}


// Reference entry 105f5060; body size 110 bytes.
#line 1 "ENTRY_105f5060"

void FUN_105f5060(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_2 + 2))->int_release();
  param_2[2] = 0;
  piVar1 = (int *)param_2[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105fec50; body size 110 bytes.
#line 1 "ENTRY_105fec50"

void __fastcall FUN_105fec50(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105fece0; body size 110 bytes.
#line 1 "ENTRY_105fece0"

void __fastcall FUN_105fece0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105fed70; body size 110 bytes.
#line 1 "ENTRY_105fed70"

void __fastcall FUN_105fed70(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105fee00; body size 110 bytes.
#line 1 "ENTRY_105fee00"

void __fastcall FUN_105fee00(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105feec0; body size 119 bytes.
#line 1 "ENTRY_105feec0"

void __fastcall FUN_105feec0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105fef60; body size 119 bytes.
#line 1 "ENTRY_105fef60"

void __fastcall FUN_105fef60(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105ff930; body size 135 bytes.
#line 1 "ENTRY_105ff930"

void __fastcall FUN_105ff930(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x30);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x28);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  
})();

  return;
}


// Reference entry 105ffaa0; body size 110 bytes.
#line 1 "ENTRY_105ffaa0"

void __fastcall FUN_105ffaa0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105ffba0; body size 110 bytes.
#line 1 "ENTRY_105ffba0"

void __fastcall FUN_105ffba0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105ffc30; body size 110 bytes.
#line 1 "ENTRY_105ffc30"

void __fastcall FUN_105ffc30(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105ffcc0; body size 109 bytes.
#line 1 "ENTRY_105ffcc0"

void __fastcall FUN_105ffcc0(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105ffd50; body size 109 bytes.
#line 1 "ENTRY_105ffd50"

void __fastcall FUN_105ffd50(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105ffe50; body size 110 bytes.
#line 1 "ENTRY_105ffe50"

void __fastcall FUN_105ffe50(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105ffee0; body size 119 bytes.
#line 1 "ENTRY_105ffee0"

void __fastcall FUN_105ffee0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 105fff80; body size 119 bytes.
#line 1 "ENTRY_105fff80"

void __fastcall FUN_105fff80(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10600020; body size 110 bytes.
#line 1 "ENTRY_10600020"

void __fastcall FUN_10600020(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 106000b0; body size 110 bytes.
#line 1 "ENTRY_106000b0"

void __fastcall FUN_106000b0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 106001b0; body size 110 bytes.
#line 1 "ENTRY_106001b0"

void __fastcall FUN_106001b0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 106002b0; body size 119 bytes.
#line 1 "ENTRY_106002b0"

void __fastcall FUN_106002b0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x14);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xc);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10600350; body size 110 bytes.
#line 1 "ENTRY_10600350"

void __fastcall FUN_10600350(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10600ee0; body size 258 bytes.
#line 1 "ENTRY_10600ee0"

void __fastcall FUN_10600ee0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x118))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  piVar1 = *(int **)(param_1 + 0x110);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10602780; body size 130 bytes.
#line 1 "ENTRY_10602780"

undefined4 * Recovered_10602780::FUN_10602780(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10603a60; body size 282 bytes.
#line 1 "ENTRY_10603a60"

int Recovered_10603a60::FUN_10603a60(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x118))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  piVar1 = *(int **)(param_1 + 0x110);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x124);
  }
  
})();

  return param_1;
}


// Reference entry 1061f220; body size 119 bytes.
#line 1 "ENTRY_1061f220"

void __fastcall FUN_1061f220(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1061f360; body size 110 bytes.
#line 1 "ENTRY_1061f360"

void __fastcall FUN_1061f360(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1061f3f0; body size 119 bytes.
#line 1 "ENTRY_1061f3f0"

void __fastcall FUN_1061f3f0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1061f490; body size 110 bytes.
#line 1 "ENTRY_1061f490"

void __fastcall FUN_1061f490(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1061f520; body size 110 bytes.
#line 1 "ENTRY_1061f520"

void __fastcall FUN_1061f520(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062bf00; body size 110 bytes.
#line 1 "ENTRY_1062bf00"

void __fastcall FUN_1062bf00(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062bf90; body size 110 bytes.
#line 1 "ENTRY_1062bf90"

void __fastcall FUN_1062bf90(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062c020; body size 110 bytes.
#line 1 "ENTRY_1062c020"

void __fastcall FUN_1062c020(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062c0e0; body size 119 bytes.
#line 1 "ENTRY_1062c0e0"

void __fastcall FUN_1062c0e0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062c930; body size 110 bytes.
#line 1 "ENTRY_1062c930"

void __fastcall FUN_1062c930(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062c9c0; body size 110 bytes.
#line 1 "ENTRY_1062c9c0"

void __fastcall FUN_1062c9c0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062cae0; body size 119 bytes.
#line 1 "ENTRY_1062cae0"

void __fastcall FUN_1062cae0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062cb80; body size 110 bytes.
#line 1 "ENTRY_1062cb80"

void __fastcall FUN_1062cb80(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1062cd80; body size 110 bytes.
#line 1 "ENTRY_1062cd80"

void __fastcall FUN_1062cd80(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10654510; body size 110 bytes.
#line 1 "ENTRY_10654510"

void __fastcall FUN_10654510(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10656150; body size 255 bytes.
#line 1 "ENTRY_10656150"

void __fastcall FUN_10656150(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x124))->int_release();
  *(undefined4 *)(param_1 + 0x124) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x120))->int_release();
  *(undefined4 *)(param_1 + 0x120) = 0;
  thunk_FUN_1036e480();
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10656690; body size 110 bytes.
#line 1 "ENTRY_10656690"

void __fastcall FUN_10656690(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10656730; body size 110 bytes.
#line 1 "ENTRY_10656730"

void __fastcall FUN_10656730(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10656940; body size 99 bytes.
#line 1 "ENTRY_10656940"

void __fastcall FUN_10656940(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 1065a110; body size 279 bytes.
#line 1 "ENTRY_1065a110"

int Recovered_1065a110::FUN_1065a110(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x124))->int_release();
  *(undefined4 *)(param_1 + 0x124) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x120))->int_release();
  *(undefined4 *)(param_1 + 0x120) = 0;
  thunk_FUN_1036e480();
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x128);
  }
  
})();

  return param_1;
}


// Reference entry 106824a0; body size 122 bytes.
#line 1 "ENTRY_106824a0"

void FUN_106824a0(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10682b20; body size 107 bytes.
#line 1 "ENTRY_10682b20"

void FUN_10682b20(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10684200; body size 106 bytes.
#line 1 "ENTRY_10684200"

void __fastcall FUN_10684200(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10684d60; body size 127 bytes.
#line 1 "ENTRY_10684d60"

SCStr * Recovered_10684d60::FUN_10684d60(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10688b20; body size 167 bytes.
#line 1 "ENTRY_10688b20"

void __fastcall FUN_10688b20(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCOpAddShare;
  param_1[2] = (undefined4)&ghidra_vftable_SCOpAddShare;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x222))->int_release();
  param_1[0x222] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x221))->int_release();
  param_1[0x221] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x220))->int_release();
  param_1[0x220] = 0;
  thunk_FUN_111482f0();
  thunk_FUN_10688910();
  
})();

  return;
}


// Reference entry 106892b0; body size 191 bytes.
#line 1 "ENTRY_106892b0"

undefined4 * Recovered_106892b0::FUN_106892b0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCOpAddShare;
  param_1[2] = (undefined4)&ghidra_vftable_SCOpAddShare;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x222))->int_release();
  param_1[0x222] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x221))->int_release();
  param_1[0x221] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x220))->int_release();
  param_1[0x220] = 0;
  thunk_FUN_111482f0();
  thunk_FUN_10688910();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x88c);
  }
  
})();

  return param_1;
}


// Reference entry 10699d60; body size 163 bytes.
#line 1 "ENTRY_10699d60"

void FUN_10699d60(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[4];
    ([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    
})();
([&]() noexcept {

    ((SCStr *)(puVar3 + 2))->int_release();
    puVar3[2] = 0;
    
})();

    thunk_FUN_1148a50e((void *)(puVar3), 0x14);
    puVar3 = puVar1;
  }

  return;
}


// Reference entry 10699e60; body size 122 bytes.
#line 1 "ENTRY_10699e60"

void FUN_10699e60(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x14);
  
})();

  return;
}


// Reference entry 1069a2b0; body size 107 bytes.
#line 1 "ENTRY_1069a2b0"

void FUN_1069a2b0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 1069c1b0; body size 106 bytes.
#line 1 "ENTRY_1069c1b0"

void __fastcall FUN_1069c1b0(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 1069d350; body size 127 bytes.
#line 1 "ENTRY_1069d350"

SCStr * Recovered_1069d350::FUN_1069d350(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 106af410; body size 208 bytes.
#line 1 "ENTRY_106af410"

void Recovered_106af410::FUN_106af410(int *param_2,int *param_3)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;

  uint uVar4;

  uVar4 = ((SCStr *)(param_3 + 2))->hash();
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar4) * 8);
  if ((int *)piVar1[1] == param_3) {
    if ((int *)*piVar1 == param_3) {
      iVar2 = *(int *)(param_1 + 4);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
    }
    else {
      piVar1[1] = param_3[1];
    }
  }
  else if ((int *)*piVar1 == param_3) {
    *piVar1 = *param_3;
  }
  iVar2 = *param_3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *(int *)param_3[1] = iVar2;
  *(int *)(iVar2 + 4) = param_3[1];
  ([&]() noexcept {

  ((SCStr *)(param_3 + 3))->int_release();
  param_3[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_3 + 2))->int_release();
  param_3[2] = 0;
  thunk_FUN_1148a50e((void *)(param_3), 0x10);
  *param_2 = iVar2;
  
})();

  return;
}


// Reference entry 106b3d40; body size 134 bytes.
#line 1 "ENTRY_106b3d40"

void __fastcall FUN_106b3d40(undefined4 *param_1) noexcept
{

  thunk_FUN_106ab5b0(param_1 + 3,*(undefined4 *)(param_1[3] + 4));
  thunk_FUN_1148a50e((void *)(param_1[3]), 0x28);
  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCLoggingHelper;
  
})();

  return;
}


// Reference entry 106b6d90; body size 155 bytes.
#line 1 "ENTRY_106b6d90"

undefined4 * Recovered_106b6d90::FUN_106b6d90(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  thunk_FUN_106ab5b0(param_1 + 3,*(undefined4 *)(param_1[3] + 4));
  thunk_FUN_1148a50e((void *)(param_1[3]), 0x28);
  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCLoggingHelper;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 106bb440; body size 191 bytes.
#line 1 "ENTRY_106bb440"

int Recovered_106bb440::FUN_106bb440(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;

  uint uVar4;

  uVar4 = ((SCStr *)(param_2 + 2))->hash();
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar4) * 8);
  if ((int *)piVar1[1] == param_2) {
    if ((int *)*piVar1 == param_2) {
      iVar2 = *(int *)(param_1 + 4);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
    }
    else {
      piVar1[1] = param_2[1];
    }
  }
  else if ((int *)*piVar1 == param_2) {
    *piVar1 = *param_2;
  }
  iVar2 = *param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *(int *)param_2[1] = iVar2;
  *(int *)(iVar2 + 4) = param_2[1];
  ([&]() noexcept {

  ((SCStr *)(param_2 + 3))->int_release();
  param_2[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 2))->int_release();
  param_2[2] = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x10);
  
})();

  return iVar2;
}


// Reference entry 106bb540; body size 137 bytes.
#line 1 "ENTRY_106bb540"

int Recovered_106bb540::FUN_106bb540(int *param_2) noexcept
{
  int param_1 = (int)this;
  int iVar1;

  iVar1 = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  ([&]() noexcept {

  ((SCStr *)(param_2 + 3))->int_release();
  param_2[3] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 2))->int_release();
  param_2[2] = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x10);
  
})();

  return iVar1;
}


// Reference entry 106d1b00; body size 122 bytes.
#line 1 "ENTRY_106d1b00"

void FUN_106d1b00(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 106d20a0; body size 107 bytes.
#line 1 "ENTRY_106d20a0"

void FUN_106d20a0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 106d2cd0; body size 106 bytes.
#line 1 "ENTRY_106d2cd0"

void __fastcall FUN_106d2cd0(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 106d3450; body size 127 bytes.
#line 1 "ENTRY_106d3450"

SCStr * Recovered_106d3450::FUN_106d3450(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 106e4b70; body size 110 bytes.
#line 1 "ENTRY_106e4b70"

void __fastcall FUN_106e4b70(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 106e55f0; body size 132 bytes.
#line 1 "ENTRY_106e55f0"

void __fastcall FUN_106e55f0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 106e57c0; body size 110 bytes.
#line 1 "ENTRY_106e57c0"

void __fastcall FUN_106e57c0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 106e6ac0; body size 156 bytes.
#line 1 "ENTRY_106e6ac0"

int Recovered_106e6ac0::FUN_106e6ac0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xfc);
  }
  
})();

  return param_1;
}


// Reference entry 106f8760; body size 132 bytes.
#line 1 "ENTRY_106f8760"

void __fastcall FUN_106f8760(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 106f8880; body size 110 bytes.
#line 1 "ENTRY_106f8880"

void __fastcall FUN_106f8880(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 106f8f20; body size 156 bytes.
#line 1 "ENTRY_106f8f20"

int Recovered_106f8f20::FUN_106f8f20(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xf8);
  }
  
})();

  return param_1;
}


// Reference entry 106fe630; body size 110 bytes.
#line 1 "ENTRY_106fe630"

void __fastcall FUN_106fe630(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 106fea40; body size 110 bytes.
#line 1 "ENTRY_106fea40"

void __fastcall FUN_106fea40(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10703b20; body size 160 bytes.
#line 1 "ENTRY_10703b20"

void __fastcall FUN_10703b20(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = *(int **)(param_1 + 0xf0);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe8))->int_release();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 107041f0; body size 184 bytes.
#line 1 "ENTRY_107041f0"

int Recovered_107041f0::FUN_107041f0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = *(int **)(param_1 + 0xf0);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe8))->int_release();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xfc);
  }
  
})();

  return param_1;
}


// Reference entry 1070a040; body size 119 bytes.
#line 1 "ENTRY_1070a040"

void __fastcall FUN_1070a040(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1070a710; body size 188 bytes.
#line 1 "ENTRY_1070a710"

void __fastcall FUN_1070a710(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xfc))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1070a880; body size 119 bytes.
#line 1 "ENTRY_1070a880"

void __fastcall FUN_1070a880(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1070b070; body size 212 bytes.
#line 1 "ENTRY_1070b070"

int Recovered_1070b070::FUN_1070b070(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xfc))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 107199e0; body size 244 bytes.
#line 1 "ENTRY_107199e0"

void __fastcall FUN_107199e0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xfc))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1071a200; body size 268 bytes.
#line 1 "ENTRY_1071a200"

int Recovered_1071a200::FUN_1071a200(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xfc))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x108);
  }
  
})();

  return param_1;
}


// Reference entry 1072a960; body size 109 bytes.
#line 1 "ENTRY_1072a960"

void __fastcall FUN_1072a960(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1072ae90; body size 110 bytes.
#line 1 "ENTRY_1072ae90"

void __fastcall FUN_1072ae90(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1072b7c0; body size 174 bytes.
#line 1 "ENTRY_1072b7c0"

void __fastcall FUN_1072b7c0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1072bb20; body size 110 bytes.
#line 1 "ENTRY_1072bb20"

void __fastcall FUN_1072bb20(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 1072ccc0; body size 131 bytes.
#line 1 "ENTRY_1072ccc0"

int Recovered_1072ccc0::FUN_1072ccc0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 1072dba0; body size 198 bytes.
#line 1 "ENTRY_1072dba0"

int Recovered_1072dba0::FUN_1072dba0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x104);
  }
  
})();

  return param_1;
}


// Reference entry 1072e090; body size 129 bytes.
#line 1 "ENTRY_1072e090"

void Recovered_1072e090::FUN_1072e090(char param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return;
}


// Reference entry 1074b680; body size 144 bytes.
#line 1 "ENTRY_1074b680"

void __fastcall FUN_1074b680(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1074b910; body size 168 bytes.
#line 1 "ENTRY_1074b910"

int Recovered_1074b910::FUN_1074b910(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 1074cfc0; body size 144 bytes.
#line 1 "ENTRY_1074cfc0"

void __fastcall FUN_1074cfc0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1074d250; body size 168 bytes.
#line 1 "ENTRY_1074d250"

int Recovered_1074d250::FUN_1074d250(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 1075a060; body size 144 bytes.
#line 1 "ENTRY_1075a060"

void __fastcall FUN_1075a060(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1075ab40; body size 168 bytes.
#line 1 "ENTRY_1075ab40"

int Recovered_1075ab40::FUN_1075ab40(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x108);
  }
  
})();

  return param_1;
}


// Reference entry 107634e0; body size 228 bytes.
#line 1 "ENTRY_107634e0"

void __fastcall FUN_107634e0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10763a90; body size 252 bytes.
#line 1 "ENTRY_10763a90"

int Recovered_10763a90::FUN_10763a90(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x11c);
  }
  
})();

  return param_1;
}


// Reference entry 107681d0; body size 228 bytes.
#line 1 "ENTRY_107681d0"

void __fastcall FUN_107681d0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 107685d0; body size 252 bytes.
#line 1 "ENTRY_107685d0"

int Recovered_107685d0::FUN_107685d0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x11c);
  }
  
})();

  return param_1;
}


// Reference entry 10774290; body size 186 bytes.
#line 1 "ENTRY_10774290"

void __fastcall FUN_10774290(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10774430; body size 110 bytes.
#line 1 "ENTRY_10774430"

void __fastcall FUN_10774430(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10774b30; body size 210 bytes.
#line 1 "ENTRY_10774b30"

int Recovered_10774b30::FUN_10774b30(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10c);
  }
  
})();

  return param_1;
}


// Reference entry 1077c290; body size 186 bytes.
#line 1 "ENTRY_1077c290"

void __fastcall FUN_1077c290(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1077c550; body size 210 bytes.
#line 1 "ENTRY_1077c550"

int Recovered_1077c550::FUN_1077c550(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10c);
  }
  
})();

  return param_1;
}


// Reference entry 1078fed0; body size 99 bytes.
#line 1 "ENTRY_1078fed0"

void __fastcall FUN_1078fed0(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 107cfc40; body size 174 bytes.
#line 1 "ENTRY_107cfc40"

void __fastcall FUN_107cfc40(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 107d0db0; body size 198 bytes.
#line 1 "ENTRY_107d0db0"

int Recovered_107d0db0::FUN_107d0db0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x108);
  }
  
})();

  return param_1;
}


// Reference entry 107ebf00; body size 186 bytes.
#line 1 "ENTRY_107ebf00"

void __fastcall FUN_107ebf00(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 107ecf70; body size 210 bytes.
#line 1 "ENTRY_107ecf70"

int Recovered_107ecf70::FUN_107ecf70(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x110);
  }
  
})();

  return param_1;
}


// Reference entry 10802fe0; body size 186 bytes.
#line 1 "ENTRY_10802fe0"

void __fastcall FUN_10802fe0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 108039d0; body size 210 bytes.
#line 1 "ENTRY_108039d0"

int Recovered_108039d0::FUN_108039d0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x110);
  }
  
})();

  return param_1;
}


// Reference entry 10812e70; body size 228 bytes.
#line 1 "ENTRY_10812e70"

void __fastcall FUN_10812e70(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10813510; body size 252 bytes.
#line 1 "ENTRY_10813510"

int Recovered_10813510::FUN_10813510(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x11c);
  }
  
})();

  return param_1;
}


// Reference entry 10829040; body size 107 bytes.
#line 1 "ENTRY_10829040"

void FUN_10829040(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 1082b650; body size 106 bytes.
#line 1 "ENTRY_1082b650"

void __fastcall FUN_1082b650(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 1082baf0; body size 398 bytes.
#line 1 "ENTRY_1082baf0"

void __fastcall FUN_1082baf0(int param_1) noexcept
{
  int *piVar1;

  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 0x134),*(undefined4 *)(*(int *)(param_1 + 0x134) + 4))
  ;
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x134)), 0x14);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 300),*(undefined4 *)(*(int *)(param_1 + 300) + 4));
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 300)), 0x14);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 0x124),*(undefined4 *)(*(int *)(param_1 + 0x124) + 4))
  ;
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x124)), 0x14);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 0x11c),*(undefined4 *)(*(int *)(param_1 + 0x11c) + 4))
  ;
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x11c)), 0x14);
  thunk_FUN_102a3ea0((undefined4 *)(param_1 + 0x114),*(undefined4 *)(*(int *)(param_1 + 0x114) + 4))
  ;
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x114)), 0x14);
  thunk_FUN_108288d0((undefined4 *)(param_1 + 0x10c),*(undefined4 *)(*(int *)(param_1 + 0x10c) + 4))
  ;
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x10c)), 0x1c);
  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1082c370; body size 127 bytes.
#line 1 "ENTRY_1082c370"

SCStr * Recovered_1082c370::FUN_1082c370(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10830680; body size 257 bytes.
#line 1 "ENTRY_10830680"

void Recovered_10830680::FUN_10830680(int *param_2,int param_3)

{
  int param_1 = (int)this;
  int *piVar1;

  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;

  piVar6 = *(int **)(param_1 + 4);
  piVar4 = (int *)(param_3 + 0xc);
  if (piVar4 != piVar6) {
    piVar5 = (int *)(param_3 + 4);
    do {
      if (piVar4 != piVar5 + -1) {
        ((SCStr *)(piVar5 + -1))->int_release();
        piVar5[-1] = *piVar4;
        ((SCStr *)(piVar5 + -1))->int_addref();
      }
      iVar3 = piVar4[1];
      if (iVar3 != *piVar5) {
        piVar1 = (int *)piVar5[1];
        if (piVar1 != (int *)0x0) {
          *piVar5 = 0;
          piVar5[1] = 0;
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
          iVar3 = piVar4[1];
        }
        *piVar5 = iVar3;
        piVar1 = (int *)piVar4[2];
        piVar5[1] = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
        }
      }
      piVar4 = piVar4 + 3;
      piVar5 = piVar5 + 3;
    } while (piVar4 != piVar6);
    piVar6 = *(int **)(param_1 + 4);
  }
  piVar4 = (int *)piVar6[-1];
  ([&]() noexcept {

  if (piVar4 != (int *)0x0) {
    piVar6[-2] = 0;
    piVar6[-1] = 0;
    ((RecoveredVirtualSlots *)(piVar4))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(piVar6 + -3))->int_release();
  piVar6[-3] = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -0xc;
  *param_2 = param_3;
  
})();

  return;
}


// Reference entry 10846710; body size 216 bytes.
#line 1 "ENTRY_10846710"

void __fastcall FUN_10846710(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x110))->int_release();
  *(undefined4 *)(param_1 + 0x110) = 0;
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10848a60; body size 240 bytes.
#line 1 "ENTRY_10848a60"

int Recovered_10848a60::FUN_10848a60(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x110))->int_release();
  *(undefined4 *)(param_1 + 0x110) = 0;
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x118);
  }
  
})();

  return param_1;
}


// Reference entry 1085dcc0; body size 144 bytes.
#line 1 "ENTRY_1085dcc0"

void __fastcall FUN_1085dcc0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1085df50; body size 168 bytes.
#line 1 "ENTRY_1085df50"

int Recovered_1085df50::FUN_1085df50(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 10862040; body size 144 bytes.
#line 1 "ENTRY_10862040"

void __fastcall FUN_10862040(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10862260; body size 106 bytes.
#line 1 "ENTRY_10862260"

void __fastcall FUN_10862260(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10862f10; body size 168 bytes.
#line 1 "ENTRY_10862f10"

int Recovered_10862f10::FUN_10862f10(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x104);
  }
  
})();

  return param_1;
}


// Reference entry 108754f0; body size 255 bytes.
#line 1 "ENTRY_108754f0"

void __fastcall FUN_108754f0(SCStr *param_1) noexcept
{
  SCStr *pSVar1;
  int *piVar2;

  int iVar4;
  int *piVar5;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x38)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x38))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x34)))->int_release();
  pSVar1 = param_1 + 0x28;
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x34))) = 0;
  thunk_FUN_102a3ea0(pSVar1,*(undefined4 *)(*(int *)pSVar1 + 4));
  thunk_FUN_1148a50e((void *)(*(int *)pSVar1), 0x14);
  iVar4 = *(int *)((SCStr *)((char *)param_1 + (0x20)));
  piVar5 = *(int **)(iVar4 + 4);
  if (*(char *)((int)*(int **)(iVar4 + 4) + 0xd) == '\0') {
    do {
      abi_call_thunk_FUN_1086f2f0((undefined4)(param_1 + 0x20), (int *)(piVar5[2]));
      piVar2 = (int *)*piVar5;
      thunk_FUN_1148a50e((void *)(piVar5), 0x14);
      piVar5 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar4 = *(int *)((SCStr *)((char *)param_1 + (0x20)));
  }
  thunk_FUN_1148a50e((void *)(iVar4), 0x14);
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 108757d0; body size 258 bytes.
#line 1 "ENTRY_108757d0"

void __fastcall FUN_108757d0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x11c))->int_release();
  *(undefined4 *)(param_1 + 0x11c) = 0;
  piVar1 = *(int **)(param_1 + 0x110);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10876390; body size 282 bytes.
#line 1 "ENTRY_10876390"

int Recovered_10876390::FUN_10876390(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x11c))->int_release();
  *(undefined4 *)(param_1 + 0x11c) = 0;
  piVar1 = *(int **)(param_1 + 0x110);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x120);
  }
  
})();

  return param_1;
}


// Reference entry 1087e5d0; body size 186 bytes.
#line 1 "ENTRY_1087e5d0"

void __fastcall FUN_1087e5d0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1087e700; body size 210 bytes.
#line 1 "ENTRY_1087e700"

int Recovered_1087e700::FUN_1087e700(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10c);
  }
  
})();

  return param_1;
}


// Reference entry 108822a0; body size 160 bytes.
#line 1 "ENTRY_108822a0"

void __fastcall FUN_108822a0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xfc))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10883400; body size 184 bytes.
#line 1 "ENTRY_10883400"

int Recovered_10883400::FUN_10883400(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xfc))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 108937a0; body size 186 bytes.
#line 1 "ENTRY_108937a0"

void __fastcall FUN_108937a0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10894120; body size 210 bytes.
#line 1 "ENTRY_10894120"

int Recovered_10894120::FUN_10894120(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10c);
  }
  
})();

  return param_1;
}


// Reference entry 108b5910; body size 186 bytes.
#line 1 "ENTRY_108b5910"

void __fastcall FUN_108b5910(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 108b5fd0; body size 210 bytes.
#line 1 "ENTRY_108b5fd0"

int Recovered_108b5fd0::FUN_108b5fd0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10c);
  }
  
})();

  return param_1;
}


// Reference entry 108bebd0; body size 132 bytes.
#line 1 "ENTRY_108bebd0"

void __fastcall FUN_108bebd0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 108bf600; body size 156 bytes.
#line 1 "ENTRY_108bf600"

int Recovered_108bf600::FUN_108bf600(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xf8);
  }
  
})();

  return param_1;
}


// Reference entry 108ca950; body size 186 bytes.
#line 1 "ENTRY_108ca950"

void __fastcall FUN_108ca950(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 108cb8c0; body size 210 bytes.
#line 1 "ENTRY_108cb8c0"

int Recovered_108cb8c0::FUN_108cb8c0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x110);
  }
  
})();

  return param_1;
}


// Reference entry 108e3a80; body size 286 bytes.
#line 1 "ENTRY_108e3a80"

void __fastcall FUN_108e3a80(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x118))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x104))->int_release();
  *(undefined4 *)(param_1 + 0x104) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xfc))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = *(int **)(param_1 + 0xf4);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 108e4d20; body size 310 bytes.
#line 1 "ENTRY_108e4d20"

int Recovered_108e4d20::FUN_108e4d20(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x118))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x104))->int_release();
  *(undefined4 *)(param_1 + 0x104) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xfc))->int_release();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  piVar1 = *(int **)(param_1 + 0xf4);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x124);
  }
  
})();

  return param_1;
}


// Reference entry 108f8e10; body size 144 bytes.
#line 1 "ENTRY_108f8e10"

void __fastcall FUN_108f8e10(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 108f90a0; body size 168 bytes.
#line 1 "ENTRY_108f90a0"

int Recovered_108f90a0::FUN_108f90a0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 108fce00; body size 228 bytes.
#line 1 "ENTRY_108fce00"

void __fastcall FUN_108fce00(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 108fd4d0; body size 252 bytes.
#line 1 "ENTRY_108fd4d0"

int Recovered_108fd4d0::FUN_108fd4d0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x11c);
  }
  
})();

  return param_1;
}


// Reference entry 109082f0; body size 228 bytes.
#line 1 "ENTRY_109082f0"

void __fastcall FUN_109082f0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109091d0; body size 252 bytes.
#line 1 "ENTRY_109091d0"

int Recovered_109091d0::FUN_109091d0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x124);
  }
  
})();

  return param_1;
}


// Reference entry 1091b370; body size 228 bytes.
#line 1 "ENTRY_1091b370"

void __fastcall FUN_1091b370(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1091c970; body size 252 bytes.
#line 1 "ENTRY_1091c970"

int Recovered_1091c970::FUN_1091c970(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x11c);
  }
  
})();

  return param_1;
}


// Reference entry 1092f2a0; body size 186 bytes.
#line 1 "ENTRY_1092f2a0"

void __fastcall FUN_1092f2a0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109304d0; body size 210 bytes.
#line 1 "ENTRY_109304d0"

int Recovered_109304d0::FUN_109304d0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x114);
  }
  
})();

  return param_1;
}


// Reference entry 1094a790; body size 228 bytes.
#line 1 "ENTRY_1094a790"

void __fastcall FUN_1094a790(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 1094b020; body size 252 bytes.
#line 1 "ENTRY_1094b020"

int Recovered_1094b020::FUN_1094b020(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x11c);
  }
  
})();

  return param_1;
}


// Reference entry 10954d30; body size 144 bytes.
#line 1 "ENTRY_10954d30"

void __fastcall FUN_10954d30(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109550c0; body size 168 bytes.
#line 1 "ENTRY_109550c0"

int Recovered_109550c0::FUN_109550c0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 109626c0; body size 110 bytes.
#line 1 "ENTRY_109626c0"

void __fastcall FUN_109626c0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10982bb0; body size 216 bytes.
#line 1 "ENTRY_10982bb0"

void __fastcall FUN_10982bb0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x10c))->int_release();
  *(undefined4 *)(param_1 + 0x10c) = 0;
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109836d0; body size 240 bytes.
#line 1 "ENTRY_109836d0"

int Recovered_109836d0::FUN_109836d0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x10c))->int_release();
  *(undefined4 *)(param_1 + 0x10c) = 0;
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x110);
  }
  
})();

  return param_1;
}


// Reference entry 10989860; body size 174 bytes.
#line 1 "ENTRY_10989860"

void __fastcall FUN_10989860(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10989c40; body size 198 bytes.
#line 1 "ENTRY_10989c40"

int Recovered_10989c40::FUN_10989c40(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x104);
  }
  
})();

  return param_1;
}


// Reference entry 1098e370; body size 122 bytes.
#line 1 "ENTRY_1098e370"

void FUN_1098e370(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 1098e5a0; body size 107 bytes.
#line 1 "ENTRY_1098e5a0"

void FUN_1098e5a0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10990350; body size 106 bytes.
#line 1 "ENTRY_10990350"

void __fastcall FUN_10990350(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10990ba0; body size 127 bytes.
#line 1 "ENTRY_10990ba0"

SCStr * Recovered_10990ba0::FUN_10990ba0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 109a94b0; body size 228 bytes.
#line 1 "ENTRY_109a94b0"

void __fastcall FUN_109a94b0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109aa380; body size 252 bytes.
#line 1 "ENTRY_109aa380"

int Recovered_109aa380::FUN_109aa380(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x120);
  }
  
})();

  return param_1;
}


// Reference entry 109b8030; body size 174 bytes.
#line 1 "ENTRY_109b8030"

void __fastcall FUN_109b8030(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109b8690; body size 198 bytes.
#line 1 "ENTRY_109b8690"

int Recovered_109b8690::FUN_109b8690(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x104);
  }
  
})();

  return param_1;
}


// Reference entry 109c06d0; body size 144 bytes.
#line 1 "ENTRY_109c06d0"

void __fastcall FUN_109c06d0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109c0d80; body size 168 bytes.
#line 1 "ENTRY_109c0d80"

int Recovered_109c0d80::FUN_109c0d80(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 109c4e20; body size 144 bytes.
#line 1 "ENTRY_109c4e20"

void __fastcall FUN_109c4e20(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109c5520; body size 168 bytes.
#line 1 "ENTRY_109c5520"

int Recovered_109c5520::FUN_109c5520(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 109cc5e0; body size 132 bytes.
#line 1 "ENTRY_109cc5e0"

void __fastcall FUN_109cc5e0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109ccb40; body size 156 bytes.
#line 1 "ENTRY_109ccb40"

int Recovered_109ccb40::FUN_109ccb40(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xf8);
  }
  
})();

  return param_1;
}


// Reference entry 109da080; body size 202 bytes.
#line 1 "ENTRY_109da080"

void __fastcall FUN_109da080(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x104))->int_release();
  *(undefined4 *)(param_1 + 0x104) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109da830; body size 226 bytes.
#line 1 "ENTRY_109da830"

int Recovered_109da830::FUN_109da830(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x104))->int_release();
  *(undefined4 *)(param_1 + 0x104) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x100))->int_release();
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x108);
  }
  
})();

  return param_1;
}


// Reference entry 109e3b80; body size 174 bytes.
#line 1 "ENTRY_109e3b80"

void __fastcall FUN_109e3b80(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x104))->int_release();
  *(undefined4 *)(param_1 + 0x104) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109e47a0; body size 198 bytes.
#line 1 "ENTRY_109e47a0"

int Recovered_109e47a0::FUN_109e47a0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x104))->int_release();
  *(undefined4 *)(param_1 + 0x104) = 0;
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x108);
  }
  
})();

  return param_1;
}


// Reference entry 109ef290; body size 228 bytes.
#line 1 "ENTRY_109ef290"

void __fastcall FUN_109ef290(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 109efaa0; body size 252 bytes.
#line 1 "ENTRY_109efaa0"

int Recovered_109efaa0::FUN_109efaa0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x110);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x11c);
  }
  
})();

  return param_1;
}


// Reference entry 10a09da0; body size 132 bytes.
#line 1 "ENTRY_10a09da0"

void __fastcall FUN_10a09da0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10a0a3a0; body size 156 bytes.
#line 1 "ENTRY_10a0a3a0"

int Recovered_10a0a3a0::FUN_10a0a3a0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xf8);
  }
  
})();

  return param_1;
}


// Reference entry 10a0dba0; body size 144 bytes.
#line 1 "ENTRY_10a0dba0"

void __fastcall FUN_10a0dba0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10a0e190; body size 168 bytes.
#line 1 "ENTRY_10a0e190"

int Recovered_10a0e190::FUN_10a0e190(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x108);
  }
  
})();

  return param_1;
}


// Reference entry 10a417c0; body size 144 bytes.
#line 1 "ENTRY_10a417c0"

void __fastcall FUN_10a417c0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10a41b60; body size 168 bytes.
#line 1 "ENTRY_10a41b60"

int Recovered_10a41b60::FUN_10a41b60(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xf8);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 10a44f60; body size 186 bytes.
#line 1 "ENTRY_10a44f60"

void __fastcall FUN_10a44f60(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10a45320; body size 210 bytes.
#line 1 "ENTRY_10a45320"

int Recovered_10a45320::FUN_10a45320(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10c);
  }
  
})();

  return param_1;
}


// Reference entry 10a496b0; body size 186 bytes.
#line 1 "ENTRY_10a496b0"

void __fastcall FUN_10a496b0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10a49a70; body size 210 bytes.
#line 1 "ENTRY_10a49a70"

int Recovered_10a49a70::FUN_10a49a70(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x104);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10c);
  }
  
})();

  return param_1;
}


// Reference entry 10a76d50; body size 216 bytes.
#line 1 "ENTRY_10a76d50"

void __fastcall FUN_10a76d50(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xfc);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xec))->int_release();
  *(undefined4 *)(param_1 + 0xec) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe8))->int_release();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10a76ed0; body size 137 bytes.
#line 1 "ENTRY_10a76ed0"

void __fastcall FUN_10a76ed0(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0x14)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x10))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10246290(param_1 + 8,*(undefined4 *)(*(int *)((SCStr *)((char *)param_1 + (8))) + 4));
  thunk_FUN_1148a50e((void *)(*(undefined4 *)((SCStr *)((char *)param_1 + (8)))), 0x18);
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10a77610; body size 240 bytes.
#line 1 "ENTRY_10a77610"

int Recovered_10a77610::FUN_10a77610(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xfc);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xec))->int_release();
  *(undefined4 *)(param_1 + 0xec) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe8))->int_release();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x100);
  }
  
})();

  return param_1;
}


// Reference entry 10a89cf0; body size 160 bytes.
#line 1 "ENTRY_10a89cf0"

void __fastcall FUN_10a89cf0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10a8a360; body size 184 bytes.
#line 1 "ENTRY_10a8a360"

int Recovered_10a8a360::FUN_10a8a360(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf0))->int_release();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xf8);
  }
  
})();

  return param_1;
}


// Reference entry 10a9ba70; body size 160 bytes.
#line 1 "ENTRY_10a9ba70"

void __fastcall FUN_10a9ba70(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xf0);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10a9c2f0; body size 184 bytes.
#line 1 "ENTRY_10a9c2f0"

int Recovered_10a9c2f0::FUN_10a9c2f0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf8))->int_release();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xf0);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xfc);
  }
  
})();

  return param_1;
}


// Reference entry 10b03980; body size 110 bytes.
#line 1 "ENTRY_10b03980"

void FUN_10b03980(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_2 + 2))->int_release();
  param_2[2] = 0;
  piVar1 = (int *)param_2[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10b04e50; body size 109 bytes.
#line 1 "ENTRY_10b04e50"

void __fastcall FUN_10b04e50(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10b053c0; body size 130 bytes.
#line 1 "ENTRY_10b053c0"

undefined4 * Recovered_10b053c0::FUN_10b053c0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10b0dca0; body size 281 bytes.
#line 1 "ENTRY_10b0dca0"

void __fastcall FUN_10b0dca0(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x144))->int_release();
  *(undefined4 *)(param_1 + 0x144) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x140))->int_release();
  *(undefined4 *)(param_1 + 0x140) = 0;
  piVar1 = *(int **)(param_1 + 0x13c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10b0f030; body size 305 bytes.
#line 1 "ENTRY_10b0f030"

int Recovered_10b0f030::FUN_10b0f030(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x144))->int_release();
  *(undefined4 *)(param_1 + 0x144) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x140))->int_release();
  *(undefined4 *)(param_1 + 0x140) = 0;
  piVar1 = *(int **)(param_1 + 0x13c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xf8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x150);
  }
  
})();

  return param_1;
}


// Reference entry 10b34d90; body size 300 bytes.
#line 1 "ENTRY_10b34d90"

void __fastcall FUN_10b34d90(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x11c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x114);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  
})();

  return;
}


// Reference entry 10b35b70; body size 324 bytes.
#line 1 "ENTRY_10b35b70"

int Recovered_10b35b70::FUN_10b35b70(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x11c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x114);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x10c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x104);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf4))->int_release();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  piVar1 = *(int **)(param_1 + 0xec);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x120);
  }
  
})();

  return param_1;
}


// Reference entry 10b88380; body size 319 bytes.
#line 1 "ENTRY_10b88380"

void __fastcall FUN_10b88380(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x40);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x38))->int_release();
  *(undefined4 *)(param_1 + 0x38) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x34))->int_release();
  *(undefined4 *)(param_1 + 0x34) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x30))->int_release();
  *(undefined4 *)(param_1 + 0x30) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2c))->int_release();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  *(undefined4 *)(param_1 + 0x28) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x24))->int_release();
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = *(int **)(param_1 + 0x20);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x18))->int_release();
  *(undefined4 *)(param_1 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x14))->int_release();
  *(undefined4 *)(param_1 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();

  return;
}


// Reference entry 10bb4da0; body size 135 bytes.
#line 1 "ENTRY_10bb4da0"

void FUN_10bb4da0(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10bb51c0; body size 122 bytes.
#line 1 "ENTRY_10bb51c0"

void FUN_10bb51c0(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10bb5a40; body size 121 bytes.
#line 1 "ENTRY_10bb5a40"

void __fastcall FUN_10bb5a40(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10bb5b90; body size 260 bytes.
#line 1 "ENTRY_10bb5b90"

void __fastcall FUN_10bb5b90(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  param_1[3] = (undefined4)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  param_1[6] = (undefined4)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_102cc870();
  param_1[6] = (undefined4)&ghidra_vftable_SCSwfObjDDListener;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10bb6110; body size 142 bytes.
#line 1 "ENTRY_10bb6110"

SCStr * Recovered_10bb6110::FUN_10bb6110(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10bb6290; body size 284 bytes.
#line 1 "ENTRY_10bb6290"

undefined4 * Recovered_10bb6290::FUN_10bb6290(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  param_1[3] = (undefined4)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  param_1[6] = (undefined4)&ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_102cc870();
  param_1[6] = (undefined4)&ghidra_vftable_SCSwfObjDDListener;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 10bd24a0; body size 100 bytes.
#line 1 "ENTRY_10bd24a0"

void FUN_10bd24a0(undefined4 param_1,int param_2)

{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;
  
})();

  return;
}


// Reference entry 10bd7050; body size 163 bytes.
#line 1 "ENTRY_10bd7050"

void __fastcall FUN_10bd7050(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x10)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x10))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0xc)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10bd7130; body size 157 bytes.
#line 1 "ENTRY_10bd7130"

void __fastcall FUN_10bd7130(int param_1) noexcept
{

  thunk_FUN_10bceec0((undefined4 *)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 0x14) + 4));
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0x14)), 0x18);
  thunk_FUN_10bcf040((undefined4 *)(param_1 + 0xc),*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  thunk_FUN_1148a50e((void *)(*(undefined4 *)(param_1 + 0xc)), 0x18);
  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10bd9220; body size 120 bytes.
#line 1 "ENTRY_10bd9220"

int Recovered_10bd9220::FUN_10bd9220(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10bedf20; body size 268 bytes.
#line 1 "ENTRY_10bedf20"

void __fastcall FUN_10bedf20(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[2] = (undefined4)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[10] = (undefined4)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCBrowseDataSourceProxy;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x24];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (undefined4)&ghidra_vftable_SCBrowseDataSourceEventSink;
  piVar1 = (int *)param_1[0x22];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10bee0b0; body size 292 bytes.
#line 1 "ENTRY_10bee0b0"

undefined4 * Recovered_10bee0b0::FUN_10bee0b0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[2] = (undefined4)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[10] = (undefined4)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCBrowseDataSourceProxy;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x24];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (undefined4)&ghidra_vftable_SCBrowseDataSourceEventSink;
  piVar1 = (int *)param_1[0x22];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d76e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 10bfb670; body size 176 bytes.
#line 1 "ENTRY_10bfb670"

void __fastcall FUN_10bfb670(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RPostUpdateRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RPostUpdateRequest;
  piVar1 = (int *)param_1[0x188a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1889] = 0;
    param_1[0x188a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10c17930; body size 503 bytes.
#line 1 "ENTRY_10c17930"

void __fastcall FUN_10c17930(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLocalMusicBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCLocalMusicBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCLocalMusicBrowseDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCLocalMusicBrowseDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCLocalMusicBrowseDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCLocalMusicBrowseDataSource;
  piVar1 = (int *)param_1[0x5b];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x59];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x57))->int_release();
  param_1[0x57] = 0;
  piVar1 = (int *)param_1[0x56];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x54))->int_release();
  param_1[0x54] = 0;
  thunk_FUN_10202e00();
  piVar1 = (int *)param_1[0x2b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x24];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x22] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10c17bb0; body size 180 bytes.
#line 1 "ENTRY_10c17bb0"

void __fastcall FUN_10c17bb0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLocalMusicBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCLocalMusicBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCLocalMusicBrowseItem;
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 8))();
  }
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x3b))->int_release();
  param_1[0x3b] = 0;
  thunk_FUN_10202e00();
  piVar1 = (int *)param_1[0x10];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0xe] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10c22600; body size 163 bytes.
#line 1 "ENTRY_10c22600"

void FUN_10c22600(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[4];
    ([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    
})();
([&]() noexcept {

    ((SCStr *)(puVar3 + 2))->int_release();
    puVar3[2] = 0;
    
})();

    thunk_FUN_1148a50e((void *)(puVar3), 0x14);
    puVar3 = puVar1;
  }

  return;
}


// Reference entry 10c22700; body size 122 bytes.
#line 1 "ENTRY_10c22700"

void FUN_10c22700(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x14);
  
})();

  return;
}


// Reference entry 10c22d80; body size 107 bytes.
#line 1 "ENTRY_10c22d80"

void FUN_10c22d80(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10c240c0; body size 106 bytes.
#line 1 "ENTRY_10c240c0"

void __fastcall FUN_10c240c0(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10c24820; body size 127 bytes.
#line 1 "ENTRY_10c24820"

SCStr * Recovered_10c24820::FUN_10c24820(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10c2c000; body size 105 bytes.
#line 1 "ENTRY_10c2c000"

void __fastcall FUN_10c2c000(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCNetworkListObj;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  
})();

  return;
}


// Reference entry 10c2c170; body size 126 bytes.
#line 1 "ENTRY_10c2c170"

undefined4 * Recovered_10c2c170::FUN_10c2c170(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCNetworkListObj;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 1))->int_release();
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 10c41840; body size 216 bytes.
#line 1 "ENTRY_10c41840"

void __fastcall FUN_10c41840(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCStartupReporter;
  param_1[1] = (undefined4)&ghidra_vftable_SCStartupReporter;
  param_1[4] = (undefined4)&ghidra_vftable_SCStartupReporter;
  param_1[7] = (undefined4)&ghidra_vftable_SCStartupReporter;
  DAT_121a5544 = 0;
  thunk_FUN_10c41180();
  ([&]() noexcept {

  param_1[7] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[4] = (undefined4)&ghidra_vftable_SCEventSinkDelegate;
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[1] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[3];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  
})();

  return;
}


// Reference entry 10c421a0; body size 240 bytes.
#line 1 "ENTRY_10c421a0"

undefined4 * Recovered_10c421a0::FUN_10c421a0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCStartupReporter;
  param_1[1] = (undefined4)&ghidra_vftable_SCStartupReporter;
  param_1[4] = (undefined4)&ghidra_vftable_SCStartupReporter;
  param_1[7] = (undefined4)&ghidra_vftable_SCStartupReporter;
  DAT_121a5544 = 0;
  thunk_FUN_10c41180();
  ([&]() noexcept {

  param_1[7] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[4] = (undefined4)&ghidra_vftable_SCEventSinkDelegate;
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[1] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[3];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x80);
  }
  
})();

  return param_1;
}


// Reference entry 10c47ef0; body size 147 bytes.
#line 1 "ENTRY_10c47ef0"

void __fastcall FUN_10c47ef0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCControllerConfigReporter;
  param_1[0x1c] = (undefined4)&ghidra_vftable_SCControllerConfigReporter;
  piVar1 = (int *)param_1[0x24];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  param_1[0x1c] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  thunk_FUN_103d0880();
  
})();

  return;
}


// Reference entry 10c81300; body size 246 bytes.
#line 1 "ENTRY_10c81300"

void __fastcall FUN_10c81300(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RHouseholdSettingGetRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RHouseholdSettingGetRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1847))->int_release();
  param_1[0x1847] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1845))->int_release();
  param_1[0x1845] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1844))->int_release();
  param_1[0x1844] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10c81440; body size 190 bytes.
#line 1 "ENTRY_10c81440"

void __fastcall FUN_10c81440(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RHouseholdSettingPostRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RHouseholdSettingPostRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1887))->int_release();
  param_1[0x1887] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1885))->int_release();
  param_1[0x1885] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1884))->int_release();
  param_1[0x1884] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10c85310; body size 163 bytes.
#line 1 "ENTRY_10c85310"

void FUN_10c85310(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    ([&]() noexcept {

    ((SCStr *)(puVar3 + 8))->int_release();
    puVar3[8] = 0;
    piVar2 = (int *)puVar3[7];
    
})();
([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[6] = 0;
      puVar3[7] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    
})();

    thunk_FUN_1148a50e((void *)(puVar3), 0x28);
    puVar3 = puVar1;
  }

  return;
}


// Reference entry 10c853f0; body size 173 bytes.
#line 1 "ENTRY_10c853f0"

void FUN_10c853f0(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[9];
    ([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[8] = 0;
      puVar3[9] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    piVar2 = (int *)puVar3[7];
    
})();
([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[6] = 0;
      puVar3[7] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    
})();

    thunk_FUN_1148a50e((void *)(puVar3), 0x28);
    puVar3 = puVar1;
  }

  return;
}


// Reference entry 10c85510; body size 122 bytes.
#line 1 "ENTRY_10c85510"

void FUN_10c85510(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x20))->int_release();
  *(undefined4 *)(param_2 + 0x20) = 0;
  piVar1 = *(int **)(param_2 + 0x1c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x28);
  
})();

  return;
}


// Reference entry 10c855b0; body size 131 bytes.
#line 1 "ENTRY_10c855b0"

void FUN_10c855b0(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x24);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 0x1c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x28);
  
})();

  return;
}


// Reference entry 10c879c0; body size 111 bytes.
#line 1 "ENTRY_10c879c0"

void FUN_10c879c0(undefined4 param_1,int param_2)

{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;
  piVar1 = *(int **)(param_2 + 0x14);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10c87a60; body size 120 bytes.
#line 1 "ENTRY_10c87a60"

void FUN_10c87a60(undefined4 param_1,int param_2)

{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x1c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 0x14);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10c87bc0; body size 269 bytes.
#line 1 "ENTRY_10c87bc0"

void Recovered_10c87bc0::FUN_10c87bc0(int *param_2,int *param_3)

{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  uint uVar5;

  uVar5 = *(uint *)(param_1 + 0x20) &
          ((((*(byte *)(param_3 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 9))
            * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 10)) * 0x1000193 ^
          (uint)*(byte *)((int)param_3 + 0xb)) * 0x1000193;
  iVar1 = *(int *)(param_1 + 0x14);
  piVar2 = *(int **)(iVar1 + uVar5 * 8);
  if (*(int **)(iVar1 + 4 + uVar5 * 8) == param_3) {
    if (piVar2 == param_3) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar1 + uVar5 * 8) = uVar3;
      *(undefined4 *)(iVar1 + 4 + uVar5 * 8) = uVar3;
    }
    else {
      *(int *)(iVar1 + 4 + uVar5 * 8) = param_3[1];
    }
  }
  else if (piVar2 == param_3) {
    *(int *)(iVar1 + uVar5 * 8) = *param_3;
  }
  iVar1 = *param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)param_3[1] = iVar1;
  *(int *)(iVar1 + 4) = param_3[1];
  ([&]() noexcept {

  ((SCStr *)(param_3 + 8))->int_release();
  param_3[8] = 0;
  piVar2 = (int *)param_3[7];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_3[6] = 0;
    param_3[7] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_3), 0x28);
  *param_2 = iVar1;
  
})();

  return;
}


// Reference entry 10c87d20; body size 273 bytes.
#line 1 "ENTRY_10c87d20"

void Recovered_10c87d20::FUN_10c87d20(int *param_2,int *param_3)

{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  uint uVar5;

  uVar5 = *(uint *)(param_1 + 0x20) &
          ((((*(byte *)(param_3 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 9))
            * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 10)) * 0x1000193 ^
          (uint)*(byte *)((int)param_3 + 0xb)) * 0x1000193;
  iVar1 = *(int *)(param_1 + 0x14);
  piVar2 = *(int **)(iVar1 + uVar5 * 8);
  if (*(int **)(iVar1 + 4 + uVar5 * 8) == param_3) {
    if (piVar2 == param_3) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar1 + uVar5 * 8) = uVar3;
      *(undefined4 *)(iVar1 + 4 + uVar5 * 8) = uVar3;
    }
    else {
      *(int *)(iVar1 + 4 + uVar5 * 8) = param_3[1];
    }
  }
  else if (piVar2 == param_3) {
    *(int *)(iVar1 + uVar5 * 8) = *param_3;
  }
  iVar1 = *param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)param_3[1] = iVar1;
  *(int *)(iVar1 + 4) = param_3[1];
  piVar2 = (int *)param_3[9];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_3[8] = 0;
    param_3[9] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  piVar2 = (int *)param_3[7];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_3[6] = 0;
    param_3[7] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_3), 0x28);
  *param_2 = iVar1;
  
})();

  return;
}


// Reference entry 10c89690; body size 110 bytes.
#line 1 "ENTRY_10c89690"

void __fastcall FUN_10c89690(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x18))->int_release();
  *(undefined4 *)(param_1 + 0x18) = 0;
  piVar1 = *(int **)(param_1 + 0x14);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10c89720; body size 119 bytes.
#line 1 "ENTRY_10c89720"

void __fastcall FUN_10c89720(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x1c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x14);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10c89a80; body size 110 bytes.
#line 1 "ENTRY_10c89a80"

void __fastcall FUN_10c89a80(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  *(undefined4 *)(param_1 + 0x10) = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10c89bd0; body size 119 bytes.
#line 1 "ENTRY_10c89bd0"

void __fastcall FUN_10c89bd0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x14);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0xc);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10c8a290; body size 131 bytes.
#line 1 "ENTRY_10c8a290"

int Recovered_10c8a290::FUN_10c8a290(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x18))->int_release();
  *(undefined4 *)(param_1 + 0x18) = 0;
  piVar1 = *(int **)(param_1 + 0x14);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x20);
  }
  
})();

  return param_1;
}


// Reference entry 10c8a340; body size 140 bytes.
#line 1 "ENTRY_10c8a340"

int Recovered_10c8a340::FUN_10c8a340(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x1c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x14);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x20);
  }
  
})();

  return param_1;
}


// Reference entry 10c8b9e0; body size 245 bytes.
#line 1 "ENTRY_10c8b9e0"

int Recovered_10c8b9e0::FUN_10c8b9e0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;

  piVar1 = (int *)(*(int *)(param_1 + 0x14) +
                  (*(uint *)(param_1 + 0x20) &
                  ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                    (uint)*(byte *)((int)param_2 + 9)) * 0x1000193 ^
                   (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
                  (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193) * 8);
  if ((int *)piVar1[1] == param_2) {
    if ((int *)*piVar1 == param_2) {
      iVar2 = *(int *)(param_1 + 0xc);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
    }
    else {
      piVar1[1] = param_2[1];
    }
  }
  else if ((int *)*piVar1 == param_2) {
    *piVar1 = *param_2;
  }
  iVar2 = *param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)param_2[1] = iVar2;
  *(int *)(iVar2 + 4) = param_2[1];
  ([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  param_2[8] = 0;
  piVar1 = (int *)param_2[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_2[6] = 0;
    param_2[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x28);
  
})();

  return iVar2;
}


// Reference entry 10c8bb20; body size 256 bytes.
#line 1 "ENTRY_10c8bb20"

int Recovered_10c8bb20::FUN_10c8bb20(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;

  piVar1 = (int *)(*(int *)(param_1 + 0x14) +
                  (*(uint *)(param_1 + 0x20) &
                  ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                    (uint)*(byte *)((int)param_2 + 9)) * 0x1000193 ^
                   (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
                  (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193) * 8);
  if ((int *)piVar1[1] == param_2) {
    if ((int *)*piVar1 == param_2) {
      iVar2 = *(int *)(param_1 + 0xc);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
    }
    else {
      piVar1[1] = param_2[1];
    }
  }
  else if ((int *)*piVar1 == param_2) {
    *piVar1 = *param_2;
  }
  iVar2 = *param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)param_2[1] = iVar2;
  *(int *)(iVar2 + 4) = param_2[1];
  piVar1 = (int *)param_2[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_2[8] = 0;
    param_2[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_2[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_2[6] = 0;
    param_2[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x28);
  
})();

  return iVar2;
}


// Reference entry 10c8bc70; body size 144 bytes.
#line 1 "ENTRY_10c8bc70"

int Recovered_10c8bc70::FUN_10c8bc70(int *param_2) noexcept
{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;

  iVar1 = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  ([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  param_2[8] = 0;
  piVar2 = (int *)param_2[7];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[6] = 0;
    param_2[7] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x28);
  
})();

  return iVar1;
}


// Reference entry 10c8bd30; body size 153 bytes.
#line 1 "ENTRY_10c8bd30"

int Recovered_10c8bd30::FUN_10c8bd30(int *param_2) noexcept
{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;

  iVar1 = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  piVar2 = (int *)param_2[9];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[8] = 0;
    param_2[9] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  piVar2 = (int *)param_2[7];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[6] = 0;
    param_2[7] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x28);
  
})();

  return iVar1;
}


// Reference entry 10ca1ae0; body size 158 bytes.
#line 1 "ENTRY_10ca1ae0"

void __fastcall FUN_10ca1ae0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState;
  param_1[3] = (undefined4)&ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 7))->int_release();
  param_1[7] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 6))->int_release();
  param_1[6] = 0;
  param_1[3] = (undefined4)&ghidra_vftable_SCIActionDelegateCB;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10ca1e10; body size 407 bytes.
#line 1 "ENTRY_10ca1e10"

void __fastcall FUN_10ca1e10(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCOnlineUpdateFinishSecureReg;
  param_1[3] = (undefined4)&ghidra_vftable_SCOnlineUpdateFinishSecureReg;
  if ((int *)param_1[6] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[6] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[6] + 0x18))();
    }
  }
  if ((int *)param_1[8] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[8] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[8] + 0x18))();
    }
  }
  if ((int *)param_1[10] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[10] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[10] + 0x18))();
    }
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0xc] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0xc] + 0x18))();
    }
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0xe] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0xe] + 0x18))();
    }
  }
  piVar1 = (int *)param_1[0xf];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xd];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xb];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10ca2aa0; body size 179 bytes.
#line 1 "ENTRY_10ca2aa0"

undefined4 * Recovered_10ca2aa0::FUN_10ca2aa0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState;
  param_1[3] = (undefined4)&ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 7))->int_release();
  param_1[7] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 6))->int_release();
  param_1[6] = 0;
  param_1[3] = (undefined4)&ghidra_vftable_SCIActionDelegateCB;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x24);
  }
  
})();

  return param_1;
}


// Reference entry 10ccb140; body size 344 bytes.
#line 1 "ENTRY_10ccb140"

void __fastcall FUN_10ccb140(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RVSAlexaChallengeRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RVSAlexaChallengeRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1890))->int_release();
  param_1[0x1890] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188f))->int_release();
  param_1[0x188f] = 0;
  piVar1 = (int *)param_1[0x188e];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x188d] = 0;
    param_1[0x188e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10ccb300; body size 246 bytes.
#line 1 "ENTRY_10ccb300"

void __fastcall FUN_10ccb300(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RVSAlexaROWLocaleRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RVSAlexaROWLocaleRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10ccb440; body size 218 bytes.
#line 1 "ENTRY_10ccb440"

void __fastcall FUN_10ccb440(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RVSAmazonSkillAuthCodeRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RVSAmazonSkillAuthCodeRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10ccb560; body size 344 bytes.
#line 1 "ENTRY_10ccb560"

void __fastcall FUN_10ccb560(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RVSAuthenticateRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RVSAuthenticateRequest;
  piVar1 = (int *)param_1[0x1891];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1890] = 0;
    param_1[0x1891] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188e))->int_release();
  param_1[0x188e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188d))->int_release();
  param_1[0x188d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10ccb720; body size 302 bytes.
#line 1 "ENTRY_10ccb720"

void __fastcall FUN_10ccb720(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RVSDeleteAccountRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RVSDeleteAccountRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188e))->int_release();
  param_1[0x188e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188d))->int_release();
  param_1[0x188d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10ccba90; body size 302 bytes.
#line 1 "ENTRY_10ccba90"

void __fastcall FUN_10ccba90(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RVSNotifyInitiateOnboardingRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RVSNotifyInitiateOnboardingRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188f))->int_release();
  param_1[0x188f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188e))->int_release();
  param_1[0x188e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188d))->int_release();
  param_1[0x188d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10cdfa80; body size 347 bytes.
#line 1 "ENTRY_10cdfa80"

void __fastcall FUN_10cdfa80(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;

  int iVar6;

  *param_1 = (undefined4)&ghidra_vftable_SwfObjAVTAdapter;
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0xcc))(param_1[5]);
    (**(code **)(*(int *)param_1[10] + 8))();
    param_1[10] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xd];
  param_1[9] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar1 + 1);
  }
  puVar2 = (undefined4 *)param_1[0xb];
  puVar3 = (undefined4 *)param_1[0xc];
  if (puVar2 != (undefined4 *)0x0) {
    iVar6 = thunk_FUN_1123fcd0(puVar2 + 1);
    if (iVar6 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = thunk_FUN_1123fcd0(puVar3 + 1);
    if (iVar6 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  thunk_FUN_10ce0370();
  piVar4 = (int *)param_1[6];
  if (piVar4 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar4))->VirtualSlot2();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  ([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar6 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar6 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 7))->int_release();
  param_1[7] = 0;
  piVar4 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar4 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar4))->VirtualSlot2();
  }
  thunk_FUN_111a4f00();
  
})();

  return;
}


// Reference entry 10cee930; body size 309 bytes.
#line 1 "ENTRY_10cee930"

void __fastcall FUN_10cee930(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCConnectedPartnersCache;
  param_1[4] = (undefined4)&ghidra_vftable_SCConnectedPartnersCache;
  if ((int *)param_1[0x2b] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0x2b] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(param_1[0x2a] + 4))();
    }
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0x11] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(param_1[0x10] + 4))();
    }
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  piVar1 = (int *)param_1[0x45];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cee770();
  thunk_FUN_102cc870();
  thunk_FUN_102a3ea0(param_1 + 0xd,*(undefined4 *)(param_1[0xd] + 4));
  thunk_FUN_1148a50e((void *)(param_1[0xd]), 0x14);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[2];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10cf5ab0; body size 135 bytes.
#line 1 "ENTRY_10cf5ab0"

void __fastcall FUN_10cf5ab0(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;

  int iVar3;

  *param_1 = (undefined4)&ghidra_vftable_SCOpValidateServiceCredentials;
  param_1[2] = (undefined4)&ghidra_vftable_SCOpValidateServiceCredentials;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  puVar1 = (undefined4 *)param_1[0x12];
  
})();
([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  thunk_FUN_10cf58e0();
  
})();

  return;
}


// Reference entry 10cf5d20; body size 156 bytes.
#line 1 "ENTRY_10cf5d20"

undefined4 * Recovered_10cf5d20::FUN_10cf5d20(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;

  int iVar3;

  *param_1 = (undefined4)&ghidra_vftable_SCOpValidateServiceCredentials;
  param_1[2] = (undefined4)&ghidra_vftable_SCOpValidateServiceCredentials;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  puVar1 = (undefined4 *)param_1[0x12];
  
})();
([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  thunk_FUN_10cf58e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x54);
  }
  
})();

  return param_1;
}


// Reference entry 10cf6f60; body size 226 bytes.
#line 1 "ENTRY_10cf6f60"

void __fastcall FUN_10cf6f60(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseItem;
  param_1[0x1c] = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseItem;
  if ((int *)param_1[0x20] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x20] + 0x18))(param_1[0x1d]);
  }
  piVar1 = (int *)param_1[0x21];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1c] = (undefined4)&ghidra_vftable_SCIndexManagerEventSink;
  piVar1 = (int *)param_1[0x1e];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCMusicSourceBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicSourceBrowseItem;
  piVar1 = (int *)param_1[0x1b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf71a0();
  
})();

  return;
}


// Reference entry 10cf71a0; body size 261 bytes.
#line 1 "ENTRY_10cf71a0"

void __fastcall FUN_10cf71a0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCStaticBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCStaticBrowseItem;
  piVar1 = (int *)param_1[0x18];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x16];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  param_1[0x10] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe))->int_release();
  param_1[0xe] = 0;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10cfb7f0; body size 462 bytes.
#line 1 "ENTRY_10cfb7f0"

void __fastcall FUN_10cfb7f0(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;
  int *piVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCDeviceSettingsDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCDeviceSettingsDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCDeviceSettingsDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCDeviceSettingsDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCDeviceSettingsDataSource;
  if (param_1[0x30] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x30])(1);
    }
    param_1[0x30] = 0;
  }
  if (param_1[0x2d] != 0) {
    piVar2 = (int *)param_1[0x2e];
    if (piVar2 != (int *)0x0) {
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
  }
  puVar1 = param_1 + 0x23;
  thunk_FUN_10ce2c30(*puVar1,param_1[0x24],puVar1);
  param_1[0x24] = *puVar1;
  if (param_1[0x26] != 0) {
    param_1[0x26] = 0;
  }
  piVar2 = (int *)param_1[0x2e];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2b))->int_release();
  param_1[0x2b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x29))->int_release();
  param_1[0x29] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x28))->int_release();
  param_1[0x28] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x27))->int_release();
  param_1[0x27] = 0;
  thunk_FUN_10ce3510();
  param_1[0x21] = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d01f70; body size 279 bytes.
#line 1 "ENTRY_10d01f70"

void __fastcall FUN_10d01f70(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;
  int *piVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCAlarmMusicRootDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAlarmMusicRootDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAlarmMusicRootDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCAlarmMusicRootDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCAlarmMusicRootDataSource;
  thunk_FUN_104dec20();
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28])(1);
  }
  if ((int *)param_1[0x2a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2a] + 100))(param_1[0x26]);
  }
  puVar1 = param_1 + 0x20;
  thunk_FUN_10ce2c30(*puVar1,param_1[0x21],puVar1);
  param_1[0x21] = *puVar1;
  piVar2 = (int *)param_1[0x2b];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCBrowseStackManagerEventSink;
  piVar2 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  thunk_FUN_10fcd150();
  
})();

  return;
}


// Reference entry 10d12380; body size 443 bytes.
#line 1 "ENTRY_10d12380"

void __fastcall FUN_10d12380(int *param_1) noexcept
{
  int *piVar1;
  int iVar2;

  int *piVar4;
  undefined4 *puVar5;
  int *local_14;

  *param_1 = (int)(undefined4)&ghidra_vftable_SCDeviceListDataSource;
  param_1[2] = (int)(undefined4)&ghidra_vftable_SCDeviceListDataSource;
  param_1[10] = (int)(undefined4)&ghidra_vftable_SCDeviceListDataSource;
  param_1[0x20] = (int)(undefined4)&ghidra_vftable_SCDeviceListDataSource;
  param_1[0x21] = (int)(undefined4)&ghidra_vftable_SCDeviceListDataSource;
  param_1[0x22] = (int)(undefined4)&ghidra_vftable_SCDeviceListDataSource;
  local_14 = param_1;
  piVar4 = (int *)abi_call_thunk_FUN_1037bed0((undefined4 *)(&local_14), (int)(param_1[0x27]));
  piVar1 = (int *)*piVar4;
  *piVar4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)((RecoveredVirtualSlots *)(piVar1))->VirtualSlot3();
  }
  ([&]() noexcept {

  if (local_14 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(local_14))->VirtualSlot2();
  }
  
})();

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xcc))(param_1[0x23]);
  }
  thunk_FUN_104dec20();
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x29])(1);
  }
  iVar2 = param_1[0x25];
  puVar5 = (undefined4 *)(iVar2 + 8);
  param_1[0x29] = 0;
  thunk_FUN_10ce2c30(*puVar5,*(undefined4 *)(iVar2 + 0xc),puVar5);
  *(undefined4 *)(iVar2 + 0xc) = *puVar5;
  ([&]() noexcept {

  if (piVar4 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(piVar4))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x22] = (int)(undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x24];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x21] = (int)(undefined4)&ghidra_vftable_SCIObj;
  param_1[0x20] = (int)(undefined4)&ghidra_vftable_SCSwfObjHHListener;
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d125e0; body size 326 bytes.
#line 1 "ENTRY_10d125e0"

void __fastcall FUN_10d125e0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsIndicatorItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsIndicatorItem;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsIndicatorItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x23))->int_release();
  param_1[0x23] = 0;
  piVar1 = (int *)param_1[0x21];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1f))->int_release();
  param_1[0x1f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1e))->int_release();
  param_1[0x1e] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  
})();

  return;
}


// Reference entry 10d12aa0; body size 350 bytes.
#line 1 "ENTRY_10d12aa0"

undefined4 * Recovered_10d12aa0::FUN_10d12aa0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSettingsIndicatorItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsIndicatorItem;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsIndicatorItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x23))->int_release();
  param_1[0x23] = 0;
  piVar1 = (int *)param_1[0x21];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1f))->int_release();
  param_1[0x1f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1e))->int_release();
  param_1[0x1e] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 10d15d30; body size 461 bytes.
#line 1 "ENTRY_10d15d30"

void __fastcall FUN_10d15d30(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x94] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x97] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x9a] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x9d] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x9e] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  thunk_FUN_10d15c80();
  piVar1 = (int *)param_1[0xa8];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d7a00();
  
})();
([&]() noexcept {

  param_1[0x9e] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0x9d] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x9a] = (undefined4)&ghidra_vftable_SCUserAccountEventSink;
  piVar1 = (int *)param_1[0x9c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x97] = (undefined4)&ghidra_vftable_SCAccountManagerEventSink;
  piVar1 = (int *)param_1[0x99];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x94] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x96];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10203970();
  
})();

  return;
}


// Reference entry 10d161f0; body size 485 bytes.
#line 1 "ENTRY_10d161f0"

undefined4 * Recovered_10d161f0::FUN_10d161f0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x94] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x97] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x9a] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x9d] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  param_1[0x9e] = (undefined4)&ghidra_vftable_SCHistoryBrowseDataSource;
  thunk_FUN_10d15c80();
  piVar1 = (int *)param_1[0xa8];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d7a00();
  
})();
([&]() noexcept {

  param_1[0x9e] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0x9d] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x9a] = (undefined4)&ghidra_vftable_SCUserAccountEventSink;
  piVar1 = (int *)param_1[0x9c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x97] = (undefined4)&ghidra_vftable_SCAccountManagerEventSink;
  piVar1 = (int *)param_1[0x99];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x94] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x96];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10203970();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x2b0);
  }
  
})();

  return param_1;
}


// Reference entry 10d1a860; body size 151 bytes.
#line 1 "ENTRY_10d1a860"

void __fastcall FUN_10d1a860(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCHTAudioBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCHTAudioBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  param_1[0x10] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe))->int_release();
  param_1[0xe] = 0;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10d1afa0; body size 172 bytes.
#line 1 "ENTRY_10d1afa0"

undefined4 * Recovered_10d1afa0::FUN_10d1afa0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCHTAudioBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCHTAudioBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  param_1[0x10] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe))->int_release();
  param_1[0xe] = 0;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x48);
  }
  
})();

  return param_1;
}


// Reference entry 10d1ddf0; body size 187 bytes.
#line 1 "ENTRY_10d1ddf0"

void __fastcall FUN_10d1ddf0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCToggleScrobblingBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCToggleScrobblingBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCToggleScrobblingBrowseItem;
  piVar1 = (int *)param_1[0x13];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x11];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10d1df70; body size 208 bytes.
#line 1 "ENTRY_10d1df70"

undefined4 * Recovered_10d1df70::FUN_10d1df70(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCToggleScrobblingBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCToggleScrobblingBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCToggleScrobblingBrowseItem;
  piVar1 = (int *)param_1[0x13];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x11];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x58);
  }
  
})();

  return param_1;
}


// Reference entry 10d1f350; body size 165 bytes.
#line 1 "ENTRY_10d1f350"

void __fastcall FUN_10d1f350(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCLineInBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCLineInBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCLineInBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  param_1[0x10] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10d1f430; body size 229 bytes.
#line 1 "ENTRY_10d1f430"

void __fastcall FUN_10d1f430(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  piVar1 = (int *)param_1[0x33];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x31];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10ce3510();
  thunk_FUN_104ddc70();
  param_1[0x21] = (undefined4)&ghidra_vftable_SCSwfObjBCListener;
  thunk_FUN_110a9ef0();
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d1f6e0; body size 186 bytes.
#line 1 "ENTRY_10d1f6e0"

undefined4 * Recovered_10d1f6e0::FUN_10d1f6e0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCLineInBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCLineInBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCLineInBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  param_1[0x10] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x48);
  }
  
})();

  return param_1;
}


// Reference entry 10d1f7d0; body size 253 bytes.
#line 1 "ENTRY_10d1f7d0"

undefined4 * Recovered_10d1f7d0::FUN_10d1f7d0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCLineInMenuDataSource;
  piVar1 = (int *)param_1[0x33];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x31];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10ce3510();
  thunk_FUN_104ddc70();
  param_1[0x21] = (undefined4)&ghidra_vftable_SCSwfObjBCListener;
  thunk_FUN_110a9ef0();
  thunk_FUN_104d76e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xd8);
  }
  
})();

  return param_1;
}


// Reference entry 10d22dd0; body size 204 bytes.
#line 1 "ENTRY_10d22dd0"

void __fastcall FUN_10d22dd0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseDataSource;
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCIndexManagerEventSink;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCShareManagerEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf7110();
  
})();

  return;
}


// Reference entry 10d22ee0; body size 97 bytes.
#line 1 "ENTRY_10d22ee0"

void __fastcall FUN_10d22ee0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0xc)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10d22fa0; body size 228 bytes.
#line 1 "ENTRY_10d22fa0"

undefined4 * Recovered_10d22fa0::FUN_10d22fa0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCMusicLibraryBrowseDataSource;
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCSwfObjHHListener;
  param_1[0x27] = (undefined4)&ghidra_vftable_SCIndexManagerEventSink;
  piVar1 = (int *)param_1[0x29];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x24] = (undefined4)&ghidra_vftable_SCShareManagerEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf7110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc0);
  }
  
})();

  return param_1;
}


// Reference entry 10d27580; body size 321 bytes.
#line 1 "ENTRY_10d27580"

void __fastcall FUN_10d27580(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAvailableServicesMenuDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAvailableServicesMenuDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAvailableServicesMenuDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCAvailableServicesMenuDataSource;
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x2b];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x24];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x22];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d279e0; body size 175 bytes.
#line 1 "ENTRY_10d279e0"

void __fastcall FUN_10d279e0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCTmpMusicServiceDetailDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCTmpMusicServiceDetailDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCTmpMusicServiceDetailDataSource;
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x23];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x21];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d27b60; body size 175 bytes.
#line 1 "ENTRY_10d27b60"

void __fastcall FUN_10d27b60(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCTmpMusicServicesDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCTmpMusicServicesDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCTmpMusicServicesDataSource;
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x23];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x21];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d28120; body size 345 bytes.
#line 1 "ENTRY_10d28120"

undefined4 * Recovered_10d28120::FUN_10d28120(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAvailableServicesMenuDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAvailableServicesMenuDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAvailableServicesMenuDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCAvailableServicesMenuDataSource;
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x2b];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x24];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x22];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc0);
  }
  
})();

  return param_1;
}


// Reference entry 10d28600; body size 199 bytes.
#line 1 "ENTRY_10d28600"

undefined4 * Recovered_10d28600::FUN_10d28600(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCTmpMusicServiceDetailDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCTmpMusicServiceDetailDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCTmpMusicServiceDetailDataSource;
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x23];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x21];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d76e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 10d287a0; body size 199 bytes.
#line 1 "ENTRY_10d287a0"

undefined4 * Recovered_10d287a0::FUN_10d287a0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCTmpMusicServicesDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCTmpMusicServicesDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCTmpMusicServicesDataSource;
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x23];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x21];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d76e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 10d2f770; body size 117 bytes.
#line 1 "ENTRY_10d2f770"

void __fastcall FUN_10d2f770(int param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x70))->int_release();
  *(undefined4 *)(param_1 + 0x70) = 0;
  piVar1 = *(int **)(param_1 + 0x6c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf71a0();
  
})();

  return;
}


// Reference entry 10d2f8f0; body size 143 bytes.
#line 1 "ENTRY_10d2f8f0"

void __fastcall FUN_10d2f8f0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicServiceBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1c))->int_release();
  param_1[0x1c] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCMusicSourceBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicSourceBrowseItem;
  piVar1 = (int *)param_1[0x1b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf71a0();
  
})();

  return;
}


// Reference entry 10d300c0; body size 152 bytes.
#line 1 "ENTRY_10d300c0"

void __fastcall FUN_10d300c0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCUpdateNowBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCUpdateNowBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1e))->int_release();
  param_1[0x1e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1c))->int_release();
  param_1[0x1c] = 0;
  piVar1 = (int *)param_1[0x1b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf71a0();
  
})();

  return;
}


// Reference entry 10d30520; body size 138 bytes.
#line 1 "ENTRY_10d30520"

int Recovered_10d30520::FUN_10d30520(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x70))->int_release();
  *(undefined4 *)(param_1 + 0x70) = 0;
  piVar1 = *(int **)(param_1 + 0x6c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x78);
  }
  
})();

  return param_1;
}


// Reference entry 10d30700; body size 164 bytes.
#line 1 "ENTRY_10d30700"

undefined4 * Recovered_10d30700::FUN_10d30700(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicServiceBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicServiceBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1c))->int_release();
  param_1[0x1c] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCMusicSourceBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicSourceBrowseItem;
  piVar1 = (int *)param_1[0x1b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x78);
  }
  
})();

  return param_1;
}


// Reference entry 10d30810; body size 176 bytes.
#line 1 "ENTRY_10d30810"

undefined4 * Recovered_10d30810::FUN_10d30810(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCUpdateNowBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCUpdateNowBrowseItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1e))->int_release();
  param_1[0x1e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1c))->int_release();
  param_1[0x1c] = 0;
  piVar1 = (int *)param_1[0x1b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x80);
  }
  
})();

  return param_1;
}


// Reference entry 10d3b270; body size 129 bytes.
#line 1 "ENTRY_10d3b270"

void __fastcall FUN_10d3b270(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCSearchTypeNonSonosItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSearchTypeNonSonosItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe))->int_release();
  param_1[0xe] = 0;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10d3b320; body size 185 bytes.
#line 1 "ENTRY_10d3b320"

void __fastcall FUN_10d3b320(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchTypeSonosItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSearchTypeSonosItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCSearchTypeSonosItem;
  thunk_FUN_10202e00();
  piVar1 = (int *)param_1[0x13];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  param_1[0x10] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  thunk_FUN_110a9ef0();
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10d3b490; body size 150 bytes.
#line 1 "ENTRY_10d3b490"

undefined4 * Recovered_10d3b490::FUN_10d3b490(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchTypeNonSonosItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSearchTypeNonSonosItem;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xe))->int_release();
  param_1[0xe] = 0;
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x40);
  }
  
})();

  return param_1;
}


// Reference entry 10d3b560; body size 209 bytes.
#line 1 "ENTRY_10d3b560"

undefined4 * Recovered_10d3b560::FUN_10d3b560(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchTypeSonosItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSearchTypeSonosItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCSearchTypeSonosItem;
  thunk_FUN_10202e00();
  piVar1 = (int *)param_1[0x13];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x10))->int_release();
  param_1[0x10] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  thunk_FUN_110a9ef0();
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xf8);
  }
  
})();

  return param_1;
}


// Reference entry 10d3e090; body size 391 bytes.
#line 1 "ENTRY_10d3e090"

void __fastcall FUN_10d3e090(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[0x26] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  piVar1 = (int *)param_1[0x31];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2e))->int_release();
  param_1[0x2e] = 0;
  piVar1 = (int *)param_1[0x2d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10ce3510();
  param_1[0x26] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCIndexManagerEventSink;
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (undefined4)&ghidra_vftable_SCDateTimeManagerEventSink;
  piVar1 = (int *)param_1[0x22];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d3e2b0; body size 173 bytes.
#line 1 "ENTRY_10d3e2b0"

void __fastcall FUN_10d3e2b0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSpinnerSettingsItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSpinnerSettingsItem;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSpinnerSettingsItem;
  piVar1 = (int *)param_1[0x1f];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  
})();

  return;
}


// Reference entry 10d3e930; body size 415 bytes.
#line 1 "ENTRY_10d3e930"

undefined4 * Recovered_10d3e930::FUN_10d3e930(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  param_1[0x26] = (undefined4)&ghidra_vftable_SCMusicLibraryManagementDataSource;
  piVar1 = (int *)param_1[0x31];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2e))->int_release();
  param_1[0x2e] = 0;
  piVar1 = (int *)param_1[0x2d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10ce3510();
  param_1[0x26] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCIndexManagerEventSink;
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (undefined4)&ghidra_vftable_SCDateTimeManagerEventSink;
  piVar1 = (int *)param_1[0x22];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_104d76e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xd0);
  }
  
})();

  return param_1;
}


// Reference entry 10d3eb90; body size 197 bytes.
#line 1 "ENTRY_10d3eb90"

undefined4 * Recovered_10d3eb90::FUN_10d3eb90(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSpinnerSettingsItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSpinnerSettingsItem;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSpinnerSettingsItem;
  piVar1 = (int *)param_1[0x1f];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x80);
  }
  
})();

  return param_1;
}


// Reference entry 10d43400; body size 230 bytes.
#line 1 "ENTRY_10d43400"

void __fastcall FUN_10d43400(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;

  puVar1 = param_1 + 0x21;
  *param_1 = (undefined4)&ghidra_vftable_SCAlarmsDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAlarmsDataSource;
  puVar2 = param_1 + 0x20;
  param_1[10] = (undefined4)&ghidra_vftable_SCAlarmsDataSource;
  *puVar2 = (undefined4)&ghidra_vftable_SCAlarmsDataSource;
  thunk_FUN_10ce2c30(*puVar1,param_1[0x22],puVar1);
  param_1[0x22] = *puVar1;
  (**(code **)(*(int *)param_1[0x26] + 0x18))(puVar2);
  piVar3 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  piVar3 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  thunk_FUN_10ce3510();
  *puVar2 = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d43530; body size 208 bytes.
#line 1 "ENTRY_10d43530"

void __fastcall FUN_10d43530(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlarmsSettingsDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAlarmsSettingsDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAlarmsSettingsDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCAlarmsSettingsDataSource;
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCAlarmsSettingsDataSource;
  (**(code **)(*(int *)param_1[0x2b] + 0x1c))(param_1 + 0x20);
  piVar1 = (int *)param_1[0x2f];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10d43400();
  
})();

  return;
}


// Reference entry 10d436f0; body size 205 bytes.
#line 1 "ENTRY_10d436f0"

void __fastcall FUN_10d436f0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  piVar1 = (int *)param_1[0x31];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10d43400();
  
})();

  return;
}


// Reference entry 10d43de0; body size 229 bytes.
#line 1 "ENTRY_10d43de0"

undefined4 * Recovered_10d43de0::FUN_10d43de0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCAlarmsSettingsZonesDataSource;
  piVar1 = (int *)param_1[0x31];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x2a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10d43400();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xd0);
  }
  
})();

  return param_1;
}


// Reference entry 10d53c40; body size 576 bytes.
#line 1 "ENTRY_10d53c40"

void __fastcall FUN_10d53c40(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAggregateSearchDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCAggregateSearchDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCAggregateSearchDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCAggregateSearchDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCAggregateSearchDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCAggregateSearchDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCAggregateSearchDataSource;
  thunk_FUN_1124d790();
  piVar1 = (int *)param_1[0x3c];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x3a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x38];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10d53ba0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x33))->int_release();
  param_1[0x33] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x32))->int_release();
  param_1[0x32] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x31))->int_release();
  param_1[0x31] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x30))->int_release();
  param_1[0x30] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2f))->int_release();
  param_1[0x2f] = 0;
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x25] = (undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x22] = (undefined4)&ghidra_vftable_SCBrowseDataSourceEventSink;
  piVar1 = (int *)param_1[0x24];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x21] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d53f30; body size 152 bytes.
#line 1 "ENTRY_10d53f30"

void __fastcall FUN_10d53f30(SCStr *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x18)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x18))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x10)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x10))) = 0;
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0xc)));
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10d5e270; body size 151 bytes.
#line 1 "ENTRY_10d5e270"

void __fastcall FUN_10d5e270(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[7];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[3];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10d5e340; body size 311 bytes.
#line 1 "ENTRY_10d5e340"

void __fastcall FUN_10d5e340(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMyPlaylistsDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCMyPlaylistsDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCMyPlaylistsDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCMyPlaylistsDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCMyPlaylistsDataSource;
  (**(code **)(*(int *)param_1[0x23] + 0x28))();
  (**(code **)(*(int *)param_1[0x25] + 0x28))();
  thunk_FUN_10ce3510();
  piVar1 = (int *)param_1[0x2a];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x28];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x24];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x21] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d60e30; body size 478 bytes.
#line 1 "ENTRY_10d60e30"

void __fastcall FUN_10d60e30(int *param_1) noexcept
{
  int *piVar1;

  int *piVar3;
  int *local_14;

  *param_1 = (int)(undefined4)&ghidra_vftable_SCAccountSettingsDataSource;
  param_1[2] = (int)(undefined4)&ghidra_vftable_SCAccountSettingsDataSource;
  param_1[10] = (int)(undefined4)&ghidra_vftable_SCAccountSettingsDataSource;
  param_1[0x20] = (int)(undefined4)&ghidra_vftable_SCAccountSettingsDataSource;
  param_1[0x21] = (int)(undefined4)&ghidra_vftable_SCAccountSettingsDataSource;
  param_1[0x24] = (int)(undefined4)&ghidra_vftable_SCAccountSettingsDataSource;
  local_14 = param_1;
  piVar3 = (int *)abi_call_thunk_FUN_101da4a0((undefined4 *)(&local_14));
  piVar1 = (int *)*piVar3;
  *piVar3 = 0;
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((RecoveredVirtualSlots *)(piVar1))->VirtualSlot3();
  }
  ([&]() noexcept {

  if (local_14 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(local_14))->VirtualSlot2();
  }
  
})();

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(param_1[0x25]);
  }
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  
})();

  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 0x38))(param_1[0x22]);
  }
  piVar1 = (int *)param_1[0x2f];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  thunk_FUN_10ce3510();
  param_1[0x24] = (int)(undefined4)&ghidra_vftable_SCAccountManagerEventSink;
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x21] = (int)(undefined4)&ghidra_vftable_SCUserAccountEventSink;
  piVar1 = (int *)param_1[0x23];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (int)(undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104d76e0();
  
})();

  return;
}


// Reference entry 10d64b00; body size 146 bytes.
#line 1 "ENTRY_10d64b00"

void __fastcall FUN_10d64b00(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchHistoryViewBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSearchHistoryViewBrowseItem;
  piVar1 = (int *)param_1[10];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10d65210; body size 167 bytes.
#line 1 "ENTRY_10d65210"

undefined4 * Recovered_10d65210::FUN_10d65210(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchHistoryViewBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSearchHistoryViewBrowseItem;
  piVar1 = (int *)param_1[10];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x2c);
  }
  
})();

  return param_1;
}


// Reference entry 10d69bd0; body size 285 bytes.
#line 1 "ENTRY_10d69bd0"

void __fastcall FUN_10d69bd0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[0xf] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[0x10] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[0x11] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  piVar1 = (int *)param_1[0x4e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x4b))->int_release();
  param_1[0x4b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x4a))->int_release();
  param_1[0x4a] = 0;
  piVar1 = (int *)param_1[0x49];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x47];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10203dc0();
  
})();

  return;
}


// Reference entry 10d69d40; body size 212 bytes.
#line 1 "ENTRY_10d69d40"

void __fastcall FUN_10d69d40(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  piVar1 = (int *)param_1[0x97];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x94))->int_release();
  param_1[0x94] = 0;
  thunk_FUN_10203970();
  
})();

  return;
}


// Reference entry 10d6a520; body size 309 bytes.
#line 1 "ENTRY_10d6a520"

undefined4 * Recovered_10d6a520::FUN_10d6a520(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[0xf] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[0x10] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  param_1[0x11] = (undefined4)&ghidra_vftable_SCSearchViewBrowseItem;
  piVar1 = (int *)param_1[0x4e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x4b))->int_release();
  param_1[0x4b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x4a))->int_release();
  param_1[0x4a] = 0;
  piVar1 = (int *)param_1[0x49];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x47];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10203dc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x140);
  }
  
})();

  return param_1;
}


// Reference entry 10d6a6b0; body size 236 bytes.
#line 1 "ENTRY_10d6a6b0"

undefined4 * Recovered_10d6a6b0::FUN_10d6a6b0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCSearchViewDataSource;
  piVar1 = (int *)param_1[0x97];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x94))->int_release();
  param_1[0x94] = 0;
  thunk_FUN_10203970();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x260);
  }
  
})();

  return param_1;
}


// Reference entry 10d75760; body size 400 bytes.
#line 1 "ENTRY_10d75760"

void __fastcall FUN_10d75760(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCAccountSignInInitState;
  param_1[3] = (undefined4)&ghidra_vftable_SCAccountSignInInitState;
  param_1[6] = (undefined4)&ghidra_vftable_SCAccountSignInInitState;
  param_1[9] = (undefined4)&ghidra_vftable_SCAccountSignInInitState;
  if ((int *)param_1[0xf] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0xf] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0xf] + 0x18))();
      (**(code **)(param_1[0xe] + 4))();
    }
  }
  if ((int *)param_1[0x29] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0x29] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0x29] + 0x18))();
      (**(code **)(param_1[0x28] + 4))();
    }
  }
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x43))->int_release();
  param_1[0x43] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x42))->int_release();
  param_1[0x42] = 0;
  thunk_FUN_10d753d0();
  thunk_FUN_10d752e0();
  piVar1 = (int *)param_1[0xd];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[9] = (undefined4)&ghidra_vftable_SCUserAccountEventSink;
  piVar1 = (int *)param_1[0xb];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIActionDelegateCB;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10d75960; body size 386 bytes.
#line 1 "ENTRY_10d75960"

void __fastcall FUN_10d75960(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAccountSignInMainPageState;
  param_1[3] = (undefined4)&ghidra_vftable_SCAccountSignInMainPageState;
  param_1[6] = (undefined4)&ghidra_vftable_SCAccountSignInMainPageState;
  param_1[9] = (undefined4)&ghidra_vftable_SCAccountSignInMainPageState;
  (**(code **)(*(int *)param_1[10] + 0x44))();
  (**(code **)(*(int *)param_1[0xc] + 0x44))();
  thunk_FUN_10d751f0();
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x14))->int_release();
  param_1[0x14] = 0;
  piVar1 = (int *)param_1[0x13];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x11];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xf];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xd];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xb];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[9] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[6] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIActionDelegateCB;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10d81060; body size 239 bytes.
#line 1 "ENTRY_10d81060"

void __fastcall FUN_10d81060(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RAccountAIOOpBase;
  param_1[2] = (undefined4)&ghidra_vftable_RAccountAIOOpBase;
  if (param_1[8] != 0) {
    (**(code **)(*(int *)param_1[7] + 0x18))(param_1[8]);
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0x18))();
    if (param_1[10] != 0) {
      piVar1 = (int *)param_1[0xb];
      if (piVar1 != (int *)0x0) {
        param_1[10] = 0;
        param_1[0xb] = 0;
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      }
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
  }
  piVar1 = (int *)param_1[0xb];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_11261f10();
  
})();

  return;
}


// Reference entry 10d81ac0; body size 143 bytes.
#line 1 "ENTRY_10d81ac0"

void __fastcall FUN_10d81ac0(undefined4 *param_1) noexcept
{
  SCStr *ghidra_this;

  undefined4 *local_14;

  *param_1 = (undefined4)&ghidra_vftable_SCCreateIdentityPostRequest;
  local_14 = param_1;
  ((SCStr *)&local_14)->int_allocRep((char *)0x0);
  ghidra_this = (SCStr *)(param_1 + 0x14);
  if ((SCStr *)&local_14 != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 **)ghidra_this = local_14;
    (ghidra_this)->int_addref();
  }
  ([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();
([&]() noexcept {

  (ghidra_this)->int_release();
  *(undefined4 *)ghidra_this = 0;
  thunk_FUN_106845c0();
  
})();

  return;
}


// Reference entry 10d889c0; body size 144 bytes.
#line 1 "ENTRY_10d889c0"

void __fastcall FUN_10d889c0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x9c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x94);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  
})();

  return;
}


// Reference entry 10d88a80; body size 126 bytes.
#line 1 "ENTRY_10d88a80"

void __fastcall FUN_10d88a80(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x34);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb3f0();
  
})();

  return;
}


// Reference entry 10d88d00; body size 168 bytes.
#line 1 "ENTRY_10d88d00"

int Recovered_10d88d00::FUN_10d88d00(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x9c);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x94);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 10d88de0; body size 147 bytes.
#line 1 "ENTRY_10d88de0"

int Recovered_10d88de0::FUN_10d88de0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x34);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_101eb3f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x38);
  }
  
})();

  return param_1;
}


// Reference entry 10db62a0; body size 107 bytes.
#line 1 "ENTRY_10db62a0"

void FUN_10db62a0(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10db7f60; body size 107 bytes.
#line 1 "ENTRY_10db7f60"

void __fastcall FUN_10db7f60(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0xc);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10db82f0; body size 106 bytes.
#line 1 "ENTRY_10db82f0"

void __fastcall FUN_10db82f0(SCStr *param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10db9110; body size 127 bytes.
#line 1 "ENTRY_10db9110"

SCStr * Recovered_10db9110::FUN_10db9110(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 10dc3c90; body size 269 bytes.
#line 1 "ENTRY_10dc3c90"

void Recovered_10dc3c90::FUN_10dc3c90(int *param_2,int param_3)

{
  int param_1 = (int)this;
  int *piVar1;

  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;

  piVar6 = *(int **)(param_1 + 4);
  piVar4 = (int *)(param_3 + 0x14);
  if (piVar4 != piVar6) {
    piVar5 = (int *)(param_3 + 4);
    do {
      if (piVar4 != piVar5 + -1) {
        ((SCStr *)(piVar5 + -1))->int_release();
        piVar5[-1] = *piVar4;
        ((SCStr *)(piVar5 + -1))->int_addref();
      }
      iVar3 = piVar4[1];
      if (iVar3 != *piVar5) {
        piVar1 = (int *)piVar5[1];
        if (piVar1 != (int *)0x0) {
          *piVar5 = 0;
          piVar5[1] = 0;
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
          iVar3 = piVar4[1];
        }
        *piVar5 = iVar3;
        piVar1 = (int *)piVar4[2];
        piVar5[1] = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
        }
      }
      piVar5[2] = piVar4[3];
      piVar1 = piVar4 + 4;
      piVar4 = piVar4 + 5;
      *(char *)(piVar5 + 3) = (char)*piVar1;
      piVar5 = piVar5 + 5;
    } while (piVar4 != piVar6);
    piVar6 = *(int **)(param_1 + 4);
  }
  piVar4 = (int *)piVar6[-3];
  ([&]() noexcept {

  if (piVar4 != (int *)0x0) {
    piVar6[-4] = 0;
    piVar6[-3] = 0;
    ((RecoveredVirtualSlots *)(piVar4))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(piVar6 + -5))->int_release();
  piVar6[-5] = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -0x14;
  *param_2 = param_3;
  
})();

  return;
}


// Reference entry 10dce150; body size 97 bytes.
#line 1 "ENTRY_10dce150"

void __fastcall FUN_10dce150(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10de8ec0; body size 185 bytes.
#line 1 "ENTRY_10de8ec0"

void __fastcall FUN_10de8ec0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x14)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x10)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x10))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0xc)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10def0d0; body size 137 bytes.
#line 1 "ENTRY_10def0d0"

void __fastcall FUN_10def0d0(SCStr *param_1) noexcept
{
  int *piVar1;

  thunk_FUN_10dec580(param_1 + 0x10,*(undefined4 *)(*(int *)((SCStr *)((char *)param_1 + (0x10))) + 4));
  thunk_FUN_1148a50e((void *)(*(undefined4 *)((SCStr *)((char *)param_1 + (0x10)))), 0x1c);
  piVar1 = *(int **)((SCStr *)((char *)param_1 + (0xc)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10df27f0; body size 109 bytes.
#line 1 "ENTRY_10df27f0"

void __fastcall FUN_10df27f0(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10df2880; body size 109 bytes.
#line 1 "ENTRY_10df2880"

void __fastcall FUN_10df2880(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10df2910; body size 109 bytes.
#line 1 "ENTRY_10df2910"

void __fastcall FUN_10df2910(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10df29f0; body size 130 bytes.
#line 1 "ENTRY_10df29f0"

undefined4 * Recovered_10df29f0::FUN_10df29f0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10df2aa0; body size 130 bytes.
#line 1 "ENTRY_10df2aa0"

undefined4 * Recovered_10df2aa0::FUN_10df2aa0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10dfe7e0; body size 243 bytes.
#line 1 "ENTRY_10dfe7e0"

void __fastcall FUN_10dfe7e0(int *param_1) noexcept
{
  int *piVar1;

  int *local_14;

  *param_1 = (int)(undefined4)&ghidra_vftable_SCNewWizAccountManagerEventSource;
  param_1[4] = (int)(undefined4)&ghidra_vftable_SCNewWizAccountManagerEventSource;
  local_14 = param_1;
  abi_call_thunk_FUN_101da4a0((undefined4 *)(&local_14));
  (**(code **)(*local_14 + 0x38))(param_1[5]);
  ([&]() noexcept {

  if (local_14 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(local_14))->VirtualSlot2();
  }
  
})();

  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 0x38))(param_1[5]);
  }
  piVar1 = (int *)param_1[8];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[4] = (int)(undefined4)&ghidra_vftable_SCEventSinkDelegate;
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (int)(undefined4)&ghidra_vftable_SCNewWizEventSource;
  piVar1 = (int *)param_1[3];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10dfee50; body size 187 bytes.
#line 1 "ENTRY_10dfee50"

void __fastcall FUN_10dfee50(int *param_1) noexcept
{
  int *piVar1;

  undefined4 *puVar3;
  int *local_14;

  *param_1 = (int)(undefined4)&ghidra_vftable_SCNewWizLifecycleManagerEventSource;
  param_1[4] = (int)(undefined4)&ghidra_vftable_SCNewWizLifecycleManagerEventSource;
  local_14 = param_1;
  puVar3 = (undefined4 *)abi_call_thunk_FUN_10436cd0((undefined4 *)(&local_14));
  (**(code **)(*(int *)*puVar3 + 0x1c))(param_1[5]);
  ([&]() noexcept {

  if (local_14 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(local_14))->VirtualSlot2();
  }
  param_1[4] = (int)(undefined4)&ghidra_vftable_SCLifecycleManagerEventSink;
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (int)(undefined4)&ghidra_vftable_SCNewWizEventSource;
  piVar1 = (int *)param_1[3];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10dfef50; body size 131 bytes.
#line 1 "ENTRY_10dfef50"

void __fastcall FUN_10dfef50(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCNewWizMuseBleClientEventSource;
  piVar1 = (int *)param_1[5];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCNewWizEventSource;
  piVar1 = (int *)param_1[3];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10dff4e0; body size 176 bytes.
#line 1 "ENTRY_10dff4e0"

void __fastcall FUN_10dff4e0(int *param_1) noexcept
{
  int iVar1;
  int *piVar2;

  undefined4 *puVar4;
  int *local_14;

  iVar1 = param_1[4];
  *param_1 = (int)(undefined4)&ghidra_vftable_SCNewWizWifiDelegateCallback;
  local_14 = param_1;
  puVar4 = (undefined4 *)abi_call_thunk_FUN_10e01b60((undefined4 *)(&local_14));
  (**(code **)(*(int *)*puVar4 + 0x24))(iVar1);
  ([&]() noexcept {

  if (local_14 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(local_14))->VirtualSlot2();
  }
  piVar2 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  *param_1 = (int)(undefined4)&ghidra_vftable_SCNewWizEventSource;
  piVar2 = (int *)param_1[3];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10e000d0; body size 152 bytes.
#line 1 "ENTRY_10e000d0"

undefined4 * Recovered_10e000d0::FUN_10e000d0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCNewWizMuseBleClientEventSource;
  piVar1 = (int *)param_1[5];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCNewWizEventSource;
  piVar1 = (int *)param_1[3];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x18);
  }
  
})();

  return param_1;
}


// Reference entry 10e0b7a0; body size 113 bytes.
#line 1 "ENTRY_10e0b7a0"

void FUN_10e0b7a0(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10e0b840; body size 122 bytes.
#line 1 "ENTRY_10e0b840"

void FUN_10e0b840(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10e0bcb0; body size 100 bytes.
#line 1 "ENTRY_10e0bcb0"

void FUN_10e0bcb0(undefined4 param_1,int param_2)

{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;
  
})();

  return;
}


// Reference entry 10e0bd40; body size 107 bytes.
#line 1 "ENTRY_10e0bd40"

void FUN_10e0bd40(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;

  piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10e0c690; body size 98 bytes.
#line 1 "ENTRY_10e0c690"

void __fastcall FUN_10e0c690(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10e0c780; body size 97 bytes.
#line 1 "ENTRY_10e0c780"

void __fastcall FUN_10e0c780(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10e0cb00; body size 122 bytes.
#line 1 "ENTRY_10e0cb00"

int Recovered_10e0cb00::FUN_10e0cb00(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10e12e70; body size 251 bytes.
#line 1 "ENTRY_10e12e70"

void __fastcall FUN_10e12e70(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureExistingEmailState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureExistingEmailState;
  param_1[6] = (undefined4)&ghidra_vftable_SCSecureExistingEmailState;
  piVar1 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10d753d0();
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e12fb0; body size 525 bytes.
#line 1 "ENTRY_10e12fb0"

void __fastcall FUN_10e12fb0(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureExistingFinishSecureRegState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureExistingFinishSecureRegState;
  if ((int *)param_1[6] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[6] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[6] + 0x18))();
    }
  }
  if ((int *)param_1[8] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[8] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[8] + 0x18))();
    }
  }
  if ((int *)param_1[10] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[10] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[10] + 0x18))();
    }
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0xc] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0xc] + 0x18))();
    }
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0xe] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0xe] + 0x18))();
    }
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0x10] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0x10] + 0x18))();
    }
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0x12] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0x12] + 0x18))();
    }
  }
  piVar1 = (int *)param_1[0x13];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x11];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xf];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xd];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xb];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e13320; body size 346 bytes.
#line 1 "ENTRY_10e13320"

void __fastcall FUN_10e13320(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureExistingLookupState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureExistingLookupState;
  if ((int *)param_1[10] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[10] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[10] + 0x18))();
      if (param_1[10] != 0) {
        piVar1 = (int *)param_1[0xb];
        if (piVar1 != (int *)0x0) {
          param_1[10] = 0;
          param_1[0xb] = 0;
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
        }
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
  }
  if ((int *)param_1[8] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[8] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[8] + 0x18))();
      if (param_1[8] != 0) {
        piVar1 = (int *)param_1[9];
        if (piVar1 != (int *)0x0) {
          param_1[8] = 0;
          param_1[9] = 0;
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
        }
        param_1[8] = 0;
        param_1[9] = 0;
      }
    }
  }
  piVar1 = (int *)param_1[0xb];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 7))->int_release();
  param_1[7] = 0;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e13d80; body size 275 bytes.
#line 1 "ENTRY_10e13d80"

undefined4 * Recovered_10e13d80::FUN_10e13d80(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureExistingEmailState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureExistingEmailState;
  param_1[6] = (undefined4)&ghidra_vftable_SCSecureExistingEmailState;
  piVar1 = (int *)param_1[0x27];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10d753d0();
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 10e279a0; body size 260 bytes.
#line 1 "ENTRY_10e279a0"

void __fastcall FUN_10e279a0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationAccountEmailState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationAccountEmailState;
  param_1[4] = (undefined4)&ghidra_vftable_SCSecureRegistrationAccountEmailState;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x23];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10e26f80();
  param_1[4] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  param_1[3] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  
})();

  return;
}


// Reference entry 10e27d30; body size 244 bytes.
#line 1 "ENTRY_10e27d30"

void __fastcall FUN_10e27d30(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationCreatePasswordState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationCreatePasswordState;
  param_1[6] = (undefined4)&ghidra_vftable_SCSecureRegistrationCreatePasswordState;
  thunk_FUN_10e26e90();
  thunk_FUN_10e26da0();
  piVar1 = (int *)param_1[0xc];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[10];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e27e80; body size 259 bytes.
#line 1 "ENTRY_10e27e80"

void __fastcall FUN_10e27e80(undefined4 *param_1) noexcept
{
  char cVar1;

  int *piVar3;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationDataOptInSubmitState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationDataOptInSubmitState;
  if ((int *)param_1[7] != (int *)0x0) {
    cVar1 = (**(code **)(*(int *)param_1[7] + 0x1c))();
    if (cVar1 != '\0') {
      (**(code **)(*(int *)param_1[7] + 0x18))();
      (**(code **)(param_1[6] + 4))();
    }
  }
  piVar3 = (int *)param_1[0x21];
  if (param_1[0x20] != 0) {
    if (piVar3 != (int *)0x0) {
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
    }
    param_1[0x20] = 0;
    piVar3 = (int *)0x0;
    param_1[0x21] = 0;
  }
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  thunk_FUN_103fa5c0();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar3 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e27fe0; body size 315 bytes.
#line 1 "ENTRY_10e27fe0"

void __fastcall FUN_10e27fe0(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationLoginPrepState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationLoginPrepState;
  if ((int *)param_1[7] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[7] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[7] + 0x18))();
      (**(code **)(param_1[6] + 4))();
    }
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0x21] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0x21] + 0x18))();
      (**(code **)(param_1[0x20] + 4))();
    }
  }
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x3d))->int_release();
  param_1[0x3d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3c))->int_release();
  param_1[0x3c] = 0;
  piVar1 = (int *)param_1[0x3b];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10d753d0();
  thunk_FUN_10d752e0();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e28170; body size 348 bytes.
#line 1 "ENTRY_10e28170"

void __fastcall FUN_10e28170(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationLoginState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationLoginState;
  param_1[6] = (undefined4)&ghidra_vftable_SCSecureRegistrationLoginState;
  (**(code **)(*(int *)param_1[7] + 0x44))();
  (**(code **)(*(int *)param_1[9] + 0x44))();
  piVar1 = (int *)param_1[0x2b];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10d751f0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xf))->int_release();
  param_1[0xf] = 0;
  piVar1 = (int *)param_1[0xe];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xc];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[10];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e28430; body size 310 bytes.
#line 1 "ENTRY_10e28430"

void __fastcall FUN_10e28430(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationNewAccountState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationNewAccountState;
  param_1[6] = (undefined4)&ghidra_vftable_SCSecureRegistrationNewAccountState;
  thunk_FUN_10e26da0();
  thunk_FUN_10e26f80();
  piVar1 = (int *)param_1[0x10];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xe];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xc];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[10];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e285d0; body size 178 bytes.
#line 1 "ENTRY_10e285d0"

void __fastcall FUN_10e285d0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationPhoneState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationPhoneState;
  piVar1 = (int *)param_1[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  param_1[3] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  
})();

  return;
}


// Reference entry 10e286c0; body size 178 bytes.
#line 1 "ENTRY_10e286c0"

void __fastcall FUN_10e286c0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationPostalState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationPostalState;
  piVar1 = (int *)param_1[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  param_1[3] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  
})();

  return;
}


// Reference entry 10e287d0; body size 153 bytes.
#line 1 "ENTRY_10e287d0"

void __fastcall FUN_10e287d0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationResetPasswordState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationResetPasswordState;
  thunk_FUN_101d19a0();
  piVar1 = (int *)param_1[7];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e288d0; body size 153 bytes.
#line 1 "ENTRY_10e288d0"

void __fastcall FUN_10e288d0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationVerifyEmailState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationVerifyEmailState;
  thunk_FUN_103fa6b0();
  piVar1 = (int *)param_1[7];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e29640; body size 284 bytes.
#line 1 "ENTRY_10e29640"

undefined4 * Recovered_10e29640::FUN_10e29640(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationAccountEmailState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationAccountEmailState;
  param_1[4] = (undefined4)&ghidra_vftable_SCSecureRegistrationAccountEmailState;
  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x26];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x23];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10e26f80();
  param_1[4] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 10e29a90; body size 268 bytes.
#line 1 "ENTRY_10e29a90"

undefined4 * Recovered_10e29a90::FUN_10e29a90(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationCreatePasswordState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationCreatePasswordState;
  param_1[6] = (undefined4)&ghidra_vftable_SCSecureRegistrationCreatePasswordState;
  thunk_FUN_10e26e90();
  thunk_FUN_10e26da0();
  piVar1 = (int *)param_1[0xc];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[10];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x110);
  }
  
})();

  return param_1;
}


// Reference entry 10e2a120; body size 334 bytes.
#line 1 "ENTRY_10e2a120"

undefined4 * Recovered_10e2a120::FUN_10e2a120(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationNewAccountState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationNewAccountState;
  param_1[6] = (undefined4)&ghidra_vftable_SCSecureRegistrationNewAccountState;
  thunk_FUN_10e26da0();
  thunk_FUN_10e26f80();
  piVar1 = (int *)param_1[0x10];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xe];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xc];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[10];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x118);
  }
  
})();

  return param_1;
}


// Reference entry 10e2a300; body size 199 bytes.
#line 1 "ENTRY_10e2a300"

undefined4 * Recovered_10e2a300::FUN_10e2a300(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationPhoneState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationPhoneState;
  piVar1 = (int *)param_1[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x2c);
  }
  
})();

  return param_1;
}


// Reference entry 10e2a400; body size 199 bytes.
#line 1 "ENTRY_10e2a400"

undefined4 * Recovered_10e2a400::FUN_10e2a400(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationPostalState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationPostalState;
  piVar1 = (int *)param_1[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x2c);
  }
  
})();

  return param_1;
}


// Reference entry 10e2a560; body size 177 bytes.
#line 1 "ENTRY_10e2a560"

undefined4 * Recovered_10e2a560::FUN_10e2a560(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationResetPasswordState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationResetPasswordState;
  thunk_FUN_101d19a0();
  piVar1 = (int *)param_1[7];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x88);
  }
  
})();

  return param_1;
}


// Reference entry 10e2a6e0; body size 177 bytes.
#line 1 "ENTRY_10e2a6e0"

undefined4 * Recovered_10e2a6e0::FUN_10e2a6e0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSecureRegistrationVerifyEmailState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSecureRegistrationVerifyEmailState;
  thunk_FUN_103fa6b0();
  piVar1 = (int *)param_1[7];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x90);
  }
  
})();

  return param_1;
}


// Reference entry 10e5b7a0; body size 110 bytes.
#line 1 "ENTRY_10e5b7a0"

void FUN_10e5b7a0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_2 + 2))->int_release();
  param_2[2] = 0;
  piVar1 = (int *)param_2[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10e5e770; body size 157 bytes.
#line 1 "ENTRY_10e5e770"

void __fastcall FUN_10e5e770(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistMSPAlexaEducationState;
  param_1[3] = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistMSPAlexaEducationState;
  piVar1 = (int *)param_1[0x74];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x72];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10e5ef30();
  
})();

  return;
}


// Reference entry 10e5e840; body size 175 bytes.
#line 1 "ENTRY_10e5e840"

void __fastcall FUN_10e5e840(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistVoiceEducationState;
  param_1[3] = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistVoiceEducationState;
  param_1[6] = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistVoiceEducationState;
  thunk_FUN_102cc870();
  thunk_FUN_10e5e6b0();
  param_1[6] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[8];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCNowPlayingEventSink;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e5ef30; body size 183 bytes.
#line 1 "ENTRY_10e5ef30"

void __fastcall FUN_10e5ef30(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlexaAuthReminderState;
  param_1[3] = (undefined4)&ghidra_vftable_SCAlexaAuthReminderState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x6e))->int_release();
  param_1[0x6e] = 0;
  thunk_FUN_102c45c0();
  thunk_FUN_102cc870();
  thunk_FUN_102cc870();
  thunk_FUN_102cc870();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e5f190; body size 229 bytes.
#line 1 "ENTRY_10e5f190"

void __fastcall FUN_10e5f190(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[2] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[10] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[0x12] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[0x13] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[0x34] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[0x55] = (undefined4)&ghidra_vftable_SCVoiceSetupReporter;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x6b))->int_release();
  param_1[0x6b] = 0;
  thunk_FUN_101a2bf0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x66))->int_release();
  param_1[0x66] = 0;
  thunk_FUN_101a2bf0();
  thunk_FUN_102a3ea0(param_1 + 0x52,*(undefined4 *)(param_1[0x52] + 4));
  thunk_FUN_1148a50e((void *)(param_1[0x52]), 0x14);
  thunk_FUN_11007f30();
  
})();

  return;
}


// Reference entry 10e5f440; body size 121 bytes.
#line 1 "ENTRY_10e5f440"

void __fastcall FUN_10e5f440(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCVoiceSetupReporter;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x16))->int_release();
  param_1[0x16] = 0;
  thunk_FUN_101a2bf0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  thunk_FUN_101a2bf0();
  
})();

  return;
}


// Reference entry 10e5f4e0; body size 109 bytes.
#line 1 "ENTRY_10e5f4e0"

void __fastcall FUN_10e5f4e0(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10e60340; body size 181 bytes.
#line 1 "ENTRY_10e60340"

undefined4 * Recovered_10e60340::FUN_10e60340(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistMSPAlexaEducationState;
  param_1[3] = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistMSPAlexaEducationState;
  piVar1 = (int *)param_1[0x74];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x72];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10e5ef30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x1d8);
  }
  
})();

  return param_1;
}


// Reference entry 10e60430; body size 199 bytes.
#line 1 "ENTRY_10e60430"

undefined4 * Recovered_10e60430::FUN_10e60430(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistVoiceEducationState;
  param_1[3] = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistVoiceEducationState;
  param_1[6] = (undefined4)&ghidra_vftable_SCAlexaAuthChecklistVoiceEducationState;
  thunk_FUN_102cc870();
  thunk_FUN_10e5e6b0();
  param_1[6] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[8];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCNowPlayingEventSink;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa0);
  }
  
})();

  return param_1;
}


// Reference entry 10e60bd0; body size 253 bytes.
#line 1 "ENTRY_10e60bd0"

undefined4 * Recovered_10e60bd0::FUN_10e60bd0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[2] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[10] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[0x12] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[0x13] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[0x34] = (undefined4)&ghidra_vftable_SCAlexaAuthWizard;
  param_1[0x55] = (undefined4)&ghidra_vftable_SCVoiceSetupReporter;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x6b))->int_release();
  param_1[0x6b] = 0;
  thunk_FUN_101a2bf0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x66))->int_release();
  param_1[0x66] = 0;
  thunk_FUN_101a2bf0();
  thunk_FUN_102a3ea0(param_1 + 0x52,*(undefined4 *)(param_1[0x52] + 4));
  thunk_FUN_1148a50e((void *)(param_1[0x52]), 0x14);
  thunk_FUN_11007f30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x1b0);
  }
  
})();

  return param_1;
}


// Reference entry 10e60f30; body size 142 bytes.
#line 1 "ENTRY_10e60f30"

undefined4 * Recovered_10e60f30::FUN_10e60f30(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCVoiceSetupReporter;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x16))->int_release();
  param_1[0x16] = 0;
  thunk_FUN_101a2bf0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x11))->int_release();
  param_1[0x11] = 0;
  thunk_FUN_101a2bf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x5c);
  }
  
})();

  return param_1;
}


// Reference entry 10e60ff0; body size 130 bytes.
#line 1 "ENTRY_10e60ff0"

undefined4 * Recovered_10e60ff0::FUN_10e60ff0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10e768a0; body size 385 bytes.
#line 1 "ENTRY_10e768a0"

void __fastcall FUN_10e768a0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSonanceDetectionDetectResultsState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSonanceDetectionDetectResultsState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x42))->int_release();
  param_1[0x42] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x41))->int_release();
  param_1[0x41] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x40))->int_release();
  param_1[0x40] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3f))->int_release();
  param_1[0x3f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3e))->int_release();
  param_1[0x3e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3d))->int_release();
  param_1[0x3d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3c))->int_release();
  param_1[0x3c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3b))->int_release();
  param_1[0x3b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3a))->int_release();
  param_1[0x3a] = 0;
  thunk_FUN_102cc870();
  thunk_FUN_102cc870();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e76f60; body size 409 bytes.
#line 1 "ENTRY_10e76f60"

undefined4 * Recovered_10e76f60::FUN_10e76f60(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSonanceDetectionDetectResultsState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSonanceDetectionDetectResultsState;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x42))->int_release();
  param_1[0x42] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x41))->int_release();
  param_1[0x41] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x40))->int_release();
  param_1[0x40] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3f))->int_release();
  param_1[0x3f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3e))->int_release();
  param_1[0x3e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3d))->int_release();
  param_1[0x3d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3c))->int_release();
  param_1[0x3c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3b))->int_release();
  param_1[0x3b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3a))->int_release();
  param_1[0x3a] = 0;
  thunk_FUN_102cc870();
  thunk_FUN_102cc870();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x118);
  }
  
})();

  return param_1;
}


// Reference entry 10e7fac0; body size 341 bytes.
#line 1 "ENTRY_10e7fac0"

void __fastcall FUN_10e7fac0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCChangeEmailWizMainPageState;
  param_1[3] = (undefined4)&ghidra_vftable_SCChangeEmailWizMainPageState;
  param_1[6] = (undefined4)&ghidra_vftable_SCChangeEmailWizMainPageState;
  param_1[7] = (undefined4)&ghidra_vftable_SCChangeEmailWizMainPageState;
  (**(code **)(*(int *)param_1[10] + 0x44))();
  piVar1 = (int *)param_1[0x45];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_103fa6b0();
  thunk_FUN_10e26f80();
  piVar1 = (int *)param_1[0xf];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xd];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xb];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[7] = (undefined4)&ghidra_vftable_SCUserAccountEventSink;
  piVar1 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCStrPropDelegate;
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e7fcf0; body size 186 bytes.
#line 1 "ENTRY_10e7fcf0"

void __fastcall FUN_10e7fcf0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCChangeEmailWizVerifyState;
  param_1[3] = (undefined4)&ghidra_vftable_SCChangeEmailWizVerifyState;
  thunk_FUN_103fa6b0();
  piVar1 = (int *)param_1[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10e7ff70; body size 210 bytes.
#line 1 "ENTRY_10e7ff70"

undefined4 * Recovered_10e7ff70::FUN_10e7ff70(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCChangeEmailWizVerifyState;
  param_1[3] = (undefined4)&ghidra_vftable_SCChangeEmailWizVerifyState;
  thunk_FUN_103fa6b0();
  piVar1 = (int *)param_1[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x90);
  }
  
})();

  return param_1;
}


// Reference entry 10e95ec0; body size 203 bytes.
#line 1 "ENTRY_10e95ec0"

void __fastcall FUN_10e95ec0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCTVIRRepeaterSettingItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCTVIRRepeaterSettingItem;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCTVIRRepeaterSettingItem;
  piVar1 = (int *)param_1[0x20];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1e))->int_release();
  param_1[0x1e] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  
})();

  return;
}


// Reference entry 10e99100; body size 227 bytes.
#line 1 "ENTRY_10e99100"

undefined4 * Recovered_10e99100::FUN_10e99100(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCTVIRRepeaterSettingItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCTVIRRepeaterSettingItem;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCTVIRRepeaterSettingItem;
  piVar1 = (int *)param_1[0x20];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1e))->int_release();
  param_1[0x1e] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x88);
  }
  
})();

  return param_1;
}


// Reference entry 10eb5280; body size 135 bytes.
#line 1 "ENTRY_10eb5280"

void FUN_10eb5280(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x20);
  
})();

  return;
}


// Reference entry 10eb5330; body size 113 bytes.
#line 1 "ENTRY_10eb5330"

void FUN_10eb5330(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10eb5d70; body size 122 bytes.
#line 1 "ENTRY_10eb5d70"

void FUN_10eb5d70(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10eb5e10; body size 98 bytes.
#line 1 "ENTRY_10eb5e10"

void FUN_10eb5e10(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10eb6b20; body size 121 bytes.
#line 1 "ENTRY_10eb6b20"

void __fastcall FUN_10eb6b20(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10eb6bc0; body size 97 bytes.
#line 1 "ENTRY_10eb6bc0"

void __fastcall FUN_10eb6bc0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10eb6c40; body size 97 bytes.
#line 1 "ENTRY_10eb6c40"

void __fastcall FUN_10eb6c40(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10eb74c0; body size 142 bytes.
#line 1 "ENTRY_10eb74c0"

SCStr * Recovered_10eb74c0::FUN_10eb74c0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 10eb7580; body size 118 bytes.
#line 1 "ENTRY_10eb7580"

SCStr * Recovered_10eb7580::FUN_10eb7580(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10ed0270; body size 135 bytes.
#line 1 "ENTRY_10ed0270"

void FUN_10ed0270(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x28))->int_release();
  *(undefined4 *)(param_2 + 0x28) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x1c))->int_release();
  *(undefined4 *)(param_2 + 0x1c) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x30);
  
})();

  return;
}


// Reference entry 10ed07f0; body size 122 bytes.
#line 1 "ENTRY_10ed07f0"

void FUN_10ed07f0(undefined4 param_1,int param_2)

{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0xc))->int_release();
  *(undefined4 *)(param_2 + 0xc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;
  
})();

  return;
}


// Reference entry 10ed0db0; body size 120 bytes.
#line 1 "ENTRY_10ed0db0"

void __fastcall FUN_10ed0db0(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x18))->int_release();
  *(undefined4 *)(param_1 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10ed0e50; body size 119 bytes.
#line 1 "ENTRY_10ed0e50"

void __fastcall FUN_10ed0e50(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (0x14)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10ed1250; body size 144 bytes.
#line 1 "ENTRY_10ed1250"

int Recovered_10ed1250::FUN_10ed1250(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x18))->int_release();
  *(undefined4 *)(param_1 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x20);
  }
  
})();

  return param_1;
}


// Reference entry 10ef1b10; body size 344 bytes.
#line 1 "ENTRY_10ef1b10"

void __fastcall FUN_10ef1b10(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RSHdmiGetInfoRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RSHdmiGetInfoRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1850))->int_release();
  param_1[0x1850] = 0;
  piVar1 = (int *)param_1[0x184f];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x184e] = 0;
    param_1[0x184f] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184d))->int_release();
  param_1[0x184d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10f0f600; body size 316 bytes.
#line 1 "ENTRY_10f0f600"

void __fastcall FUN_10f0f600(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RGetDiagnosticMetadataRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RGetDiagnosticMetadataRequest;
  piVar1 = (int *)param_1[0x1850];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x184f] = 0;
    param_1[0x1850] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184e))->int_release();
  param_1[0x184e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184d))->int_release();
  param_1[0x184d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10f0f7a0; body size 162 bytes.
#line 1 "ENTRY_10f0f7a0"

void __fastcall FUN_10f0f7a0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RGetLocalSupportDocumentRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RGetLocalSupportDocumentRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10f0f8e0; body size 218 bytes.
#line 1 "ENTRY_10f0f8e0"

void __fastcall FUN_10f0f8e0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RInitiateDiagnosticsRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RInitiateDiagnosticsRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10f0fa30; body size 190 bytes.
#line 1 "ENTRY_10f0fa30"

void __fastcall FUN_10f0fa30(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RReportDiagnosticsStatusRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RReportDiagnosticsStatusRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10f1b590; body size 135 bytes.
#line 1 "ENTRY_10f1b590"

void FUN_10f1b590(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x1c))->int_release();
  *(undefined4 *)(param_2 + 0x1c) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x20);
  
})();

  return;
}


// Reference entry 10f1b640; body size 113 bytes.
#line 1 "ENTRY_10f1b640"

void FUN_10f1b640(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10f1bc90; body size 122 bytes.
#line 1 "ENTRY_10f1bc90"

void FUN_10f1bc90(undefined4 param_1,int param_2)

{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0xc))->int_release();
  *(undefined4 *)(param_2 + 0xc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;
  
})();

  return;
}


// Reference entry 10f1bd30; body size 100 bytes.
#line 1 "ENTRY_10f1bd30"

void FUN_10f1bd30(undefined4 param_1,int param_2)

{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;
  
})();

  return;
}


// Reference entry 10f1c7f0; body size 120 bytes.
#line 1 "ENTRY_10f1c7f0"

void __fastcall FUN_10f1c7f0(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10f1c890; body size 98 bytes.
#line 1 "ENTRY_10f1c890"

void __fastcall FUN_10f1c890(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10f1c910; body size 119 bytes.
#line 1 "ENTRY_10f1c910"

void __fastcall FUN_10f1c910(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (8)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10f1c9b0; body size 97 bytes.
#line 1 "ENTRY_10f1c9b0"

void __fastcall FUN_10f1c9b0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10f1cef0; body size 144 bytes.
#line 1 "ENTRY_10f1cef0"

int Recovered_10f1cef0::FUN_10f1cef0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }
  
})();

  return param_1;
}


// Reference entry 10f1cfb0; body size 122 bytes.
#line 1 "ENTRY_10f1cfb0"

int Recovered_10f1cfb0::FUN_10f1cfb0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10f24320; body size 98 bytes.
#line 1 "ENTRY_10f24320"

void FUN_10f24320(undefined4 param_1,SCStr *param_2)

{

  ([&]() noexcept {

  ((SCStr *)((char *)param_2 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_2 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_2)->int_release();
  *(undefined4 *)param_2 = 0;
  
})();

  return;
}


// Reference entry 10f261b0; body size 97 bytes.
#line 1 "ENTRY_10f261b0"

void __fastcall FUN_10f261b0(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10f26ae0; body size 118 bytes.
#line 1 "ENTRY_10f26ae0"

SCStr * Recovered_10f26ae0::FUN_10f26ae0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }
  
})();

  return param_1;
}


// Reference entry 10f2bc80; body size 143 bytes.
#line 1 "ENTRY_10f2bc80"

void __fastcall FUN_10f2bc80(int param_1) noexcept
{
  int *piVar1;
  SCStr *ghidra_this;
  uint uVar2;

  uVar2 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) + -1;
  ghidra_this = (SCStr *)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar2 >> 1) * 4) +
                  (uVar2 & 1) * 8);
  ([&]() noexcept {

  ((SCStr *)((char *)ghidra_this + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)ghidra_this + (4))) = 0;
  
})();
([&]() noexcept {

  (ghidra_this)->int_release();
  *(undefined4 *)ghidra_this = 0;
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  
})();

  return;
}


// Reference entry 10f31d40; body size 106 bytes.
#line 1 "ENTRY_10f31d40"

void __fastcall FUN_10f31d40(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x20))->int_release();
  *(undefined4 *)(param_1 + 0x20) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1c))->int_release();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  thunk_FUN_11261f10();
  
})();

  return;
}


// Reference entry 10f31e90; body size 330 bytes.
#line 1 "ENTRY_10f31e90"

void __fastcall FUN_10f31e90(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RGetEthernetStatusRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RGetEthernetStatusRequest;
  piVar1 = (int *)param_1[0x1850];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x184f] = 0;
    param_1[0x1850] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184e))->int_release();
  param_1[0x184e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184d))->int_release();
  param_1[0x184d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  piVar1 = (int *)param_1[0x184a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1849] = 0;
    param_1[0x184a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10f32100; body size 330 bytes.
#line 1 "ENTRY_10f32100"

void __fastcall FUN_10f32100(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RGetNetworkConnectivityTestResultRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RGetNetworkConnectivityTestResultRequest;
  piVar1 = (int *)param_1[0x1850];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x184f] = 0;
    param_1[0x1850] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184e))->int_release();
  param_1[0x184e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184d))->int_release();
  param_1[0x184d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  piVar1 = (int *)param_1[0x184a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1849] = 0;
    param_1[0x184a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10f32370; body size 400 bytes.
#line 1 "ENTRY_10f32370"

void __fastcall FUN_10f32370(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RStartNetworkConnectivityTestRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RStartNetworkConnectivityTestRequest;
  piVar1 = (int *)param_1[0x1895];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1894] = 0;
    param_1[0x1895] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x1893];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1892] = 0;
    param_1[0x1893] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188f))->int_release();
  param_1[0x188f] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188e))->int_release();
  param_1[0x188e] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188d))->int_release();
  param_1[0x188d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  piVar1 = (int *)param_1[0x188a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1889] = 0;
    param_1[0x188a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10f32630; body size 288 bytes.
#line 1 "ENTRY_10f32630"

void __fastcall FUN_10f32630(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RTempDisableNetworkRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RTempDisableNetworkRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1887))->int_release();
  param_1[0x1887] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  piVar1 = (int *)param_1[0x1885];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1884] = 0;
    param_1[0x1885] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10f32a90; body size 127 bytes.
#line 1 "ENTRY_10f32a90"

int Recovered_10f32a90::FUN_10f32a90(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x20))->int_release();
  *(undefined4 *)(param_1 + 0x20) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1c))->int_release();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x24);
  }
  
})();

  return param_1;
}


// Reference entry 10f378a0; body size 113 bytes.
#line 1 "ENTRY_10f378a0"

void FUN_10f378a0(undefined4 param_1,int param_2) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10f37ce0; body size 100 bytes.
#line 1 "ENTRY_10f37ce0"

void FUN_10f37ce0(undefined4 param_1,int param_2)

{

  ([&]() noexcept {

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;
  
})();

  return;
}


// Reference entry 10f38390; body size 98 bytes.
#line 1 "ENTRY_10f38390"

void __fastcall FUN_10f38390(int param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 10f38410; body size 97 bytes.
#line 1 "ENTRY_10f38410"

void __fastcall FUN_10f38410(SCStr *param_1) noexcept
{

  ([&]() noexcept {

  ((SCStr *)((char *)param_1 + (4)))->int_release();
  *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
  
})();
([&]() noexcept {

  (param_1)->int_release();
  *(undefined4 *)param_1 = 0;
  
})();

  return;
}


// Reference entry 10f38830; body size 122 bytes.
#line 1 "ENTRY_10f38830"

int Recovered_10f38830::FUN_10f38830(byte param_2) noexcept
{
  int param_1 = (int)this;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 8))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }
  
})();

  return param_1;
}


// Reference entry 10f44b00; body size 592 bytes.
#line 1 "ENTRY_10f44b00"

void __fastcall FUN_10f44b00(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x94] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x95] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x96] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0xa0] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0xa3] = (undefined4)&ghidra_vftable_SCPlayQueueDataSource;
  if ((int *)param_1[0xae] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xae] + 0x20))(param_1[0xa1]);
  }
  if (param_1[0xaa] != 0) {
    piVar1 = (int *)param_1[0xab];
    if (piVar1 != (int *)0x0) {
      param_1[0xaa] = 0;
      param_1[0xab] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
  }
  piVar1 = (int *)param_1[0xba];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xb5))->int_release();
  param_1[0xb5] = 0;
  piVar1 = (int *)param_1[0xb1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xaf];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xad))->int_release();
  param_1[0xad] = 0;
  piVar1 = (int *)param_1[0xab];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  param_1[0xa3] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0xa0] = (undefined4)&ghidra_vftable_SCNowPlayingEventSink;
  piVar1 = (int *)param_1[0xa2];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_102037c0();
  
})();

  return;
}


// Reference entry 10f70dc0; body size 304 bytes.
#line 1 "ENTRY_10f70dc0"

void __fastcall FUN_10f70dc0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RMuseGetUserSettingsRequest;
  param_1[6] = (undefined4)&ghidra_vftable_RMuseGetUserSettingsRequest;
  piVar1 = (int *)param_1[0x184f];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x184e] = 0;
    param_1[0x184f] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184d))->int_release();
  param_1[0x184d] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  thunk_FUN_1124a3d0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 5))->int_release();
  param_1[5] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();

  return;
}


// Reference entry 10f7dd60; body size 246 bytes.
#line 1 "ENTRY_10f7dd60"

void __fastcall FUN_10f7dd60(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RConnectedPartnerRemoveRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RConnectedPartnerRemoveRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10f7e0c0; body size 246 bytes.
#line 1 "ENTRY_10f7e0c0"

void __fastcall FUN_10f7e0c0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest;
  param_1[0x1843] = (undefined4)&ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x184c))->int_release();
  param_1[0x184c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1849))->int_release();
  param_1[0x1849] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1848))->int_release();
  param_1[0x1848] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1846))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();
  
})();

  return;
}


// Reference entry 10f7e7a0; body size 270 bytes.
#line 1 "ENTRY_10f7e7a0"

undefined4 * Recovered_10f7e7a0::FUN_10f7e7a0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_RConnectedPartnerRemoveRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RConnectedPartnerRemoveRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x188c))->int_release();
  param_1[0x188c] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188b))->int_release();
  param_1[0x188b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x188a))->int_release();
  param_1[0x188a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1889))->int_release();
  param_1[0x1889] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x6234);
  }
  
})();

  return param_1;
}


// Reference entry 10f82f10; body size 406 bytes.
#line 1 "ENTRY_10f82f10"

void __fastcall FUN_10f82f10(int *param_1) noexcept
{
  int *piVar1;

  int *piVar3;
  int *local_14;

  *param_1 = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[2] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x1e] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x1f] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x20] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x21] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x22] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x23] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x26] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x38] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x3b] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  param_1[0x3e] = (int)(undefined4)&ghidra_vftable_SCLanScanner;
  local_14 = param_1;
  piVar3 = (int *)abi_call_thunk_FUN_1023ab10((undefined4 *)(&local_14));
  piVar1 = (int *)*piVar3;
  *piVar3 = 0;
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((RecoveredVirtualSlots *)(piVar1))->VirtualSlot3();
  }
  ([&]() noexcept {

  if (local_14 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(local_14))->VirtualSlot2();
  }
  
})();

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(param_1[0x39]);
  }
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  thunk_FUN_10f82b00();
  thunk_FUN_10f82750();
  param_1[0x3e] = (int)(undefined4)&ghidra_vftable_RITQHandler;
  param_1[0x3b] = (int)(undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[0x3d];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x38] = (int)(undefined4)&ghidra_vftable_SCControllerEventSink;
  piVar1 = (int *)param_1[0x3a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10c68c80();
  
})();

  return;
}


// Reference entry 10f8b8c0; body size 190 bytes.
#line 1 "ENTRY_10f8b8c0"

void __fastcall FUN_10f8b8c0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1888))->int_release();
  param_1[0x1888] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1887))->int_release();
  param_1[0x1887] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1885))->int_release();
  param_1[0x1885] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 10f8ba50; body size 220 bytes.
#line 1 "ENTRY_10f8ba50"

void __fastcall FUN_10f8ba50(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_RMusePlayerInfoGetRequest;
  param_1[6] = (undefined4)&ghidra_vftable_RMusePlayerInfoGetRequest;
  piVar1 = (int *)param_1[0x184d];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x184c] = 0;
    param_1[0x184d] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184b))->int_release();
  param_1[0x184b] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x184a))->int_release();
  param_1[0x184a] = 0;
  thunk_FUN_1124a3d0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 5))->int_release();
  param_1[5] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 3))->int_release();
  param_1[3] = 0;
  
})();

  return;
}


// Reference entry 10f97010; body size 223 bytes.
#line 1 "ENTRY_10f97010"

void __fastcall FUN_10f97010(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCLegacySubmitDiagsWizSubmittingState;
  param_1[3] = (undefined4)&ghidra_vftable_SCLegacySubmitDiagsWizSubmittingState;
  if ((int *)param_1[0xb] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[0xb] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0xb] + 0x18))();
      (**(code **)(param_1[10] + 4))();
    }
  }
  thunk_FUN_106cffb0();
  piVar1 = (int *)param_1[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[7];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10f99ca0; body size 131 bytes.
#line 1 "ENTRY_10f99ca0"

void FUN_10f99ca0(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x20);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 0x18);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x24);
  
})();

  return;
}


// Reference entry 10f9a200; body size 120 bytes.
#line 1 "ENTRY_10f9a200"

void FUN_10f9a200(undefined4 param_1,int param_2)

{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10f9b2d0; body size 119 bytes.
#line 1 "ENTRY_10f9b2d0"

void __fastcall FUN_10f9b2d0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10f9b3e0; body size 118 bytes.
#line 1 "ENTRY_10f9b3e0"

void __fastcall FUN_10f9b3e0(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[3];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10f9be40; body size 140 bytes.
#line 1 "ENTRY_10f9be40"

int Recovered_10f9be40::FUN_10f9be40(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 10fa5380; body size 270 bytes.
#line 1 "ENTRY_10fa5380"

void __fastcall FUN_10fa5380(int *param_1) noexcept
{
  int *piVar1;

  int *piVar3;
  int *local_14;

  *param_1 = (int)(undefined4)&ghidra_vftable_SCLifecycleLauncherWizardRetrievingProductsState;
  param_1[3] = (int)(undefined4)&ghidra_vftable_SCLifecycleLauncherWizardRetrievingProductsState;
  param_1[6] = (int)(undefined4)&ghidra_vftable_SCLifecycleLauncherWizardRetrievingProductsState;
  local_14 = param_1;
  piVar3 = (int *)abi_call_thunk_FUN_1037a2b0((undefined4 *)(&local_14));
  piVar1 = (int *)*piVar3;
  *piVar3 = 0;
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((RecoveredVirtualSlots *)(piVar1))->VirtualSlot3();
  }
  ([&]() noexcept {

  if (local_14 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(local_14))->VirtualSlot2();
  }
  
})();

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xcc))(param_1[7]);
  }
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  thunk_FUN_102cc870();
  param_1[6] = (int)(undefined4)&ghidra_vftable_SCHouseholdEventSink;
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (int)(undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (int)(undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10fab730; body size 173 bytes.
#line 1 "ENTRY_10fab730"

void FUN_10fab730(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[6];
    ([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[5] = 0;
      puVar3[6] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    piVar2 = (int *)puVar3[4];
    
})();
([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    
})();

    thunk_FUN_1148a50e((void *)(puVar3), 0x1c);
    puVar3 = puVar1;
  }

  return;
}


// Reference entry 10fab810; body size 173 bytes.
#line 1 "ENTRY_10fab810"

void FUN_10fab810(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[6];
    ([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[5] = 0;
      puVar3[6] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    piVar2 = (int *)puVar3[4];
    
})();
([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    
})();

    thunk_FUN_1148a50e((void *)(puVar3), 0x1c);
    puVar3 = puVar1;
  }

  return;
}


// Reference entry 10fab930; body size 173 bytes.
#line 1 "ENTRY_10fab930"

void FUN_10fab930(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)*param_2;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[6];
    ([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[5] = 0;
      puVar3[6] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    piVar2 = (int *)puVar3[4];
    
})();
([&]() noexcept {

    if (piVar2 != (int *)0x0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    
})();

    thunk_FUN_1148a50e((void *)(puVar3), 0x1c);
    puVar3 = puVar1;
  }

  return;
}


// Reference entry 10faba90; body size 131 bytes.
#line 1 "ENTRY_10faba90"

void FUN_10faba90(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10fabb40; body size 131 bytes.
#line 1 "ENTRY_10fabb40"

void FUN_10fabb40(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10fabc10; body size 131 bytes.
#line 1 "ENTRY_10fabc10"

void FUN_10fabc10(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x18);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 0x10);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return;
}


// Reference entry 10face10; body size 120 bytes.
#line 1 "ENTRY_10face10"

void FUN_10face10(undefined4 param_1,int param_2)

{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10faceb0; body size 120 bytes.
#line 1 "ENTRY_10faceb0"

void FUN_10faceb0(undefined4 param_1,int param_2)

{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10facf60; body size 120 bytes.
#line 1 "ENTRY_10facf60"

void FUN_10facf60(undefined4 param_1,int param_2)

{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fad000; body size 273 bytes.
#line 1 "ENTRY_10fad000"

void Recovered_10fad000::FUN_10fad000(int *param_2,int *param_3)

{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  uint uVar5;

  uVar5 = *(uint *)(param_1 + 0x20) &
          ((((*(byte *)(param_3 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 9))
            * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 10)) * 0x1000193 ^
          (uint)*(byte *)((int)param_3 + 0xb)) * 0x1000193;
  iVar1 = *(int *)(param_1 + 0x14);
  piVar2 = *(int **)(iVar1 + uVar5 * 8);
  if (*(int **)(iVar1 + 4 + uVar5 * 8) == param_3) {
    if (piVar2 == param_3) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar1 + uVar5 * 8) = uVar3;
      *(undefined4 *)(iVar1 + 4 + uVar5 * 8) = uVar3;
    }
    else {
      *(int *)(iVar1 + 4 + uVar5 * 8) = param_3[1];
    }
  }
  else if (piVar2 == param_3) {
    *(int *)(iVar1 + uVar5 * 8) = *param_3;
  }
  iVar1 = *param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)param_3[1] = iVar1;
  *(int *)(iVar1 + 4) = param_3[1];
  piVar2 = (int *)param_3[6];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_3[5] = 0;
    param_3[6] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  piVar2 = (int *)param_3[4];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_3[3] = 0;
    param_3[4] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_3), 0x1c);
  *param_2 = iVar1;
  
})();

  return;
}


// Reference entry 10fad160; body size 273 bytes.
#line 1 "ENTRY_10fad160"

void Recovered_10fad160::FUN_10fad160(int *param_2,int *param_3)

{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  uint uVar5;

  uVar5 = *(uint *)(param_1 + 0x20) &
          ((((*(byte *)(param_3 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 9))
            * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 10)) * 0x1000193 ^
          (uint)*(byte *)((int)param_3 + 0xb)) * 0x1000193;
  iVar1 = *(int *)(param_1 + 0x14);
  piVar2 = *(int **)(iVar1 + uVar5 * 8);
  if (*(int **)(iVar1 + 4 + uVar5 * 8) == param_3) {
    if (piVar2 == param_3) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar1 + uVar5 * 8) = uVar3;
      *(undefined4 *)(iVar1 + 4 + uVar5 * 8) = uVar3;
    }
    else {
      *(int *)(iVar1 + 4 + uVar5 * 8) = param_3[1];
    }
  }
  else if (piVar2 == param_3) {
    *(int *)(iVar1 + uVar5 * 8) = *param_3;
  }
  iVar1 = *param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)param_3[1] = iVar1;
  *(int *)(iVar1 + 4) = param_3[1];
  piVar2 = (int *)param_3[6];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_3[5] = 0;
    param_3[6] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  piVar2 = (int *)param_3[4];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_3[3] = 0;
    param_3[4] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_3), 0x1c);
  *param_2 = iVar1;
  
})();

  return;
}


// Reference entry 10fafe70; body size 119 bytes.
#line 1 "ENTRY_10fafe70"

void __fastcall FUN_10fafe70(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10faff10; body size 119 bytes.
#line 1 "ENTRY_10faff10"

void __fastcall FUN_10faff10(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10faffc0; body size 119 bytes.
#line 1 "ENTRY_10faffc0"

void __fastcall FUN_10faffc0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fb0090; body size 118 bytes.
#line 1 "ENTRY_10fb0090"

void __fastcall FUN_10fb0090(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[3];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fb0130; body size 118 bytes.
#line 1 "ENTRY_10fb0130"

void __fastcall FUN_10fb0130(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[3];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fb01d0; body size 142 bytes.
#line 1 "ENTRY_10fb01d0"

void __fastcall FUN_10fb01d0(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[4];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fb0290; body size 118 bytes.
#line 1 "ENTRY_10fb0290"

void __fastcall FUN_10fb0290(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[3];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fb0330; body size 167 bytes.
#line 1 "ENTRY_10fb0330"

void __fastcall FUN_10fb0330(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestAggregateResultState;
  param_1[3] = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestAggregateResultState;
  param_1[6] = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestAggregateResultState;
  thunk_FUN_10305f70();
  thunk_FUN_10faf960();
  ([&]() noexcept {

  param_1[6] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10fb0500; body size 171 bytes.
#line 1 "ENTRY_10fb0500"

void __fastcall FUN_10fb0500(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestStartWifiState;
  param_1[3] = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestStartWifiState;
  if ((int *)param_1[6] != (int *)0x0) {
    cVar2 = (**(code **)(*(int *)param_1[6] + 0x1c))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[6] + 0x18))();
    }
  }
  piVar1 = (int *)param_1[7];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10fb0660; body size 155 bytes.
#line 1 "ENTRY_10fb0660"

void __fastcall FUN_10fb0660(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestWifiNameState;
  piVar1 = (int *)param_1[8];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10fb0730; body size 286 bytes.
#line 1 "ENTRY_10fb0730"

void __fastcall FUN_10fb0730(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestWifiSubmittingState;
  param_1[3] = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestWifiSubmittingState;
  if (((int *)param_1[0xb] != (int *)0x0) &&
     (cVar2 = (**(code **)(*(int *)param_1[0xb] + 0x1c))(), cVar2 != '\0')) {
    (**(code **)(param_1[10] + 4))();
  }
  if (((int *)param_1[0x25] != (int *)0x0) &&
     (cVar2 = (**(code **)(*(int *)param_1[0x25] + 0x1c))(), cVar2 != '\0')) {
    (**(code **)(param_1[0x24] + 4))();
  }
  if (((int *)param_1[0x3f] != (int *)0x0) &&
     (cVar2 = (**(code **)(*(int *)param_1[0x3f] + 0x1c))(), cVar2 != '\0')) {
    (**(code **)(param_1[0x3e] + 4))();
  }
  thunk_FUN_102cc870();
  thunk_FUN_10461ec0();
  thunk_FUN_102c45c0();
  piVar1 = (int *)param_1[9];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 10fb15b0; body size 140 bytes.
#line 1 "ENTRY_10fb15b0"

int Recovered_10fb15b0::FUN_10fb15b0(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 10fb1670; body size 140 bytes.
#line 1 "ENTRY_10fb1670"

int Recovered_10fb1670::FUN_10fb1670(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 10fb1760; body size 140 bytes.
#line 1 "ENTRY_10fb1760"

int Recovered_10fb1760::FUN_10fb1760(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 10fb1820; body size 191 bytes.
#line 1 "ENTRY_10fb1820"

undefined4 * Recovered_10fb1820::FUN_10fb1820(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestAggregateResultState;
  param_1[3] = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestAggregateResultState;
  param_1[6] = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestAggregateResultState;
  thunk_FUN_10305f70();
  thunk_FUN_10faf960();
  ([&]() noexcept {

  param_1[6] = (undefined4)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x90);
  }
  
})();

  return param_1;
}


// Reference entry 10fb1c40; body size 176 bytes.
#line 1 "ENTRY_10fb1c40"

undefined4 * Recovered_10fb1c40::FUN_10fb1c40(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCLifecycleNetworkTestWifiNameState;
  piVar1 = (int *)param_1[8];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  param_1[4] = 0;
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x28);
  }
  
})();

  return param_1;
}


// Reference entry 10fb3fd0; body size 256 bytes.
#line 1 "ENTRY_10fb3fd0"

int Recovered_10fb3fd0::FUN_10fb3fd0(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;

  piVar1 = (int *)(*(int *)(param_1 + 0x14) +
                  (*(uint *)(param_1 + 0x20) &
                  ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                    (uint)*(byte *)((int)param_2 + 9)) * 0x1000193 ^
                   (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
                  (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193) * 8);
  if ((int *)piVar1[1] == param_2) {
    if ((int *)*piVar1 == param_2) {
      iVar2 = *(int *)(param_1 + 0xc);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
    }
    else {
      piVar1[1] = param_2[1];
    }
  }
  else if ((int *)*piVar1 == param_2) {
    *piVar1 = *param_2;
  }
  iVar2 = *param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)param_2[1] = iVar2;
  *(int *)(iVar2 + 4) = param_2[1];
  piVar1 = (int *)param_2[6];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_2[5] = 0;
    param_2[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_2[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_2[3] = 0;
    param_2[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return iVar2;
}


// Reference entry 10fb4120; body size 256 bytes.
#line 1 "ENTRY_10fb4120"

int Recovered_10fb4120::FUN_10fb4120(int *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;

  piVar1 = (int *)(*(int *)(param_1 + 0x14) +
                  (*(uint *)(param_1 + 0x20) &
                  ((((*(byte *)(param_2 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                    (uint)*(byte *)((int)param_2 + 9)) * 0x1000193 ^
                   (uint)*(byte *)((int)param_2 + 10)) * 0x1000193 ^
                  (uint)*(byte *)((int)param_2 + 0xb)) * 0x1000193) * 8);
  if ((int *)piVar1[1] == param_2) {
    if ((int *)*piVar1 == param_2) {
      iVar2 = *(int *)(param_1 + 0xc);
      *piVar1 = iVar2;
      piVar1[1] = iVar2;
    }
    else {
      piVar1[1] = param_2[1];
    }
  }
  else if ((int *)*piVar1 == param_2) {
    *piVar1 = *param_2;
  }
  iVar2 = *param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)param_2[1] = iVar2;
  *(int *)(iVar2 + 4) = param_2[1];
  piVar1 = (int *)param_2[6];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_2[5] = 0;
    param_2[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_2[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_2[3] = 0;
    param_2[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return iVar2;
}


// Reference entry 10fb4330; body size 153 bytes.
#line 1 "ENTRY_10fb4330"

int Recovered_10fb4330::FUN_10fb4330(int *param_2) noexcept
{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;

  iVar1 = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  piVar2 = (int *)param_2[6];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[5] = 0;
    param_2[6] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  piVar2 = (int *)param_2[4];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[3] = 0;
    param_2[4] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return iVar1;
}


// Reference entry 10fb4400; body size 153 bytes.
#line 1 "ENTRY_10fb4400"

int Recovered_10fb4400::FUN_10fb4400(int *param_2) noexcept
{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;

  iVar1 = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  piVar2 = (int *)param_2[6];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[5] = 0;
    param_2[6] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  piVar2 = (int *)param_2[4];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[3] = 0;
    param_2[4] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return iVar1;
}


// Reference entry 10fb4510; body size 153 bytes.
#line 1 "ENTRY_10fb4510"

int Recovered_10fb4510::FUN_10fb4510(int *param_2) noexcept
{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;

  iVar1 = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  piVar2 = (int *)param_2[6];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[5] = 0;
    param_2[6] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  piVar2 = (int *)param_2[4];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_2[3] = 0;
    param_2[4] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);
  
})();

  return iVar1;
}


// Reference entry 10fb8750; body size 307 bytes.
#line 1 "ENTRY_10fb8750"

undefined4 Recovered_10fb8750::FUN_10fb8750(byte *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  int *piVar2;

  int iVar4;
  uint uVar5;
  undefined1 local_18 [8];

  uVar5 = ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2])
           * 0x1000193 ^ (uint)param_2[3]) * 0x1000193;
  iVar4 = thunk_FUN_10fab6b0(local_18,param_2,uVar5);
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x14) + (*(uint *)(param_1 + 0x20) & uVar5) * 8);
    if ((int *)piVar1[1] == piVar2) {
      if ((int *)*piVar1 == piVar2) {
        iVar4 = *(int *)(param_1 + 0xc);
        *piVar1 = iVar4;
        piVar1[1] = iVar4;
      }
      else {
        piVar1[1] = piVar2[1];
      }
    }
    else if ((int *)*piVar1 == piVar2) {
      *piVar1 = *piVar2;
    }
    iVar4 = *piVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    *(int *)piVar2[1] = iVar4;
    *(int *)(iVar4 + 4) = piVar2[1];
    piVar1 = (int *)piVar2[6];
    ([&]() noexcept {

    if (piVar1 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[6] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    piVar1 = (int *)piVar2[4];
    
})();
([&]() noexcept {

    if (piVar1 != (int *)0x0) {
      piVar2[3] = 0;
      piVar2[4] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    thunk_FUN_1148a50e((void *)(piVar2), 0x1c);
    
})();

    return 1;
  }

  return 0;
}


// Reference entry 10fc0c80; body size 131 bytes.
#line 1 "ENTRY_10fc0c80"

void FUN_10fc0c80(undefined4 param_1,int param_2) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x20);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 0x18);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_1148a50e((void *)(param_2), 0x24);
  
})();

  return;
}


// Reference entry 10fc0f40; body size 120 bytes.
#line 1 "ENTRY_10fc0f40"

void FUN_10fc0f40(undefined4 param_1,int param_2)

{
  int *piVar1;

  piVar1 = *(int **)(param_2 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_2 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fc1ec0; body size 119 bytes.
#line 1 "ENTRY_10fc1ec0"

void __fastcall FUN_10fc1ec0(int param_1) noexcept
{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fc1f60; body size 118 bytes.
#line 1 "ENTRY_10fc1f60"

void __fastcall FUN_10fc1f60(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[3];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fc2810; body size 140 bytes.
#line 1 "ENTRY_10fc2810"

int Recovered_10fc2810::FUN_10fc2810(byte param_2) noexcept
{
  int param_1 = (int)this;
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x10);
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = *(int **)(param_1 + 8);
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 10fca590; body size 131 bytes.
#line 1 "ENTRY_10fca590"

void __fastcall FUN_10fca590(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCBTDevice;
  param_1[3] = (undefined4)&ghidra_vftable_SCBTDevice;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x23))->int_release();
  param_1[0x23] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x22))->int_release();
  param_1[0x22] = 0;
  thunk_FUN_10318ac0();
  
})();

  return;
}


// Reference entry 10fca650; body size 155 bytes.
#line 1 "ENTRY_10fca650"

undefined4 * Recovered_10fca650::FUN_10fca650(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCBTDevice;
  param_1[3] = (undefined4)&ghidra_vftable_SCBTDevice;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x23))->int_release();
  param_1[0x23] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x22))->int_release();
  param_1[0x22] = 0;
  thunk_FUN_10318ac0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x98);
  }
  
})();

  return param_1;
}


// Reference entry 10fcbda0; body size 428 bytes.
#line 1 "ENTRY_10fcbda0"

void __fastcall FUN_10fcbda0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCBTZoneGroup;
  if (param_1[0x12] != 0) {
    piVar1 = (int *)param_1[0x13];
    if (piVar1 != (int *)0x0) {
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)param_1[0x15];
    if (piVar1 != (int *)0x0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  if (param_1[0x16] != 0) {
    piVar1 = (int *)param_1[0x17];
    if (piVar1 != (int *)0x0) {
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if (param_1[0x10] != 0) {
    piVar1 = (int *)param_1[0x11];
    if (piVar1 != (int *)0x0) {
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  if (param_1[5] != 0) {
    piVar1 = (int *)param_1[6];
    if (piVar1 != (int *)0x0) {
      param_1[5] = 0;
      param_1[6] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  piVar1 = (int *)param_1[0x17];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x15];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x13];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x11];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10b6d850();
  
})();

  return;
}


// Reference entry 10fd0a00; body size 179 bytes.
#line 1 "ENTRY_10fd0a00"

void __fastcall FUN_10fd0a00(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicIndexUpdateTimeSettingItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicIndexUpdateTimeSettingItem;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCMusicIndexUpdateTimeSettingItem;
  piVar1 = (int *)param_1[0x20];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  
})();

  return;
}


// Reference entry 10fd10f0; body size 203 bytes.
#line 1 "ENTRY_10fd10f0"

undefined4 * Recovered_10fd10f0::FUN_10fd10f0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCMusicIndexUpdateTimeSettingItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCMusicIndexUpdateTimeSettingItem;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCMusicIndexUpdateTimeSettingItem;
  piVar1 = (int *)param_1[0x20];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x1c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x1a] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x88);
  }
  
})();

  return param_1;
}


// Reference entry 10fd82a0; body size 125 bytes.
#line 1 "ENTRY_10fd82a0"

void __fastcall FUN_10fd82a0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlarmItem;
  piVar1 = (int *)param_1[4];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[2];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fd8850; body size 319 bytes.
#line 1 "ENTRY_10fd8850"

void __fastcall FUN_10fd8850(undefined4 *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0xc] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x22];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  *param_1 = (undefined4)&ghidra_vftable_SCAlarmItem;
  piVar1 = (int *)param_1[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[2];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10fd9970; body size 146 bytes.
#line 1 "ENTRY_10fd9970"

undefined4 * Recovered_10fd9970::FUN_10fd9970(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCAlarmItem;
  piVar1 = (int *)param_1[4];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[2];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x14);
  }
  
})();

  return param_1;
}


// Reference entry 10fd9fa0; body size 343 bytes.
#line 1 "ENTRY_10fd9fa0"

undefined4 * Recovered_10fd9fa0::FUN_10fd9fa0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  piVar1 = (int *)param_1[0x28];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x26))->int_release();
  param_1[0x26] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x25))->int_release();
  param_1[0x25] = 0;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCIObj;
  param_1[6] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0xc] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCSettingsItemBase;
  piVar1 = (int *)param_1[0x22];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x20] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_10cf71a0();
  *param_1 = (undefined4)&ghidra_vftable_SCAlarmItem;
  piVar1 = (int *)param_1[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[2];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xa8);
  }
  
})();

  return param_1;
}


// Reference entry 10fed960; body size 203 bytes.
#line 1 "ENTRY_10fed960"

void __fastcall FUN_10fed960(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCHomePageBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCHomePageBrowseItem;
  piVar1 = (int *)param_1[0xf];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  param_1[0xc] = 0;
  piVar1 = (int *)param_1[0xb];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10fedfd0; body size 381 bytes.
#line 1 "ENTRY_10fedfd0"

void __fastcall FUN_10fedfd0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCHomePagePinnedItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCHomePagePinnedItem;
  param_1[7] = (undefined4)&ghidra_vftable_SCHomePagePinnedItem;
  param_1[8] = (undefined4)&ghidra_vftable_SCHomePagePinnedItem;
  (**(code **)(*(int *)param_1[10] + 0x18))(param_1[0x10]);
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x17))->int_release();
  param_1[0x17] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x16))->int_release();
  param_1[0x16] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x15))->int_release();
  param_1[0x15] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x14))->int_release();
  param_1[0x14] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x13))->int_release();
  param_1[0x13] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x12))->int_release();
  param_1[0x12] = 0;
  piVar1 = (int *)param_1[0x11];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xf];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xd];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0xb];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_110a9ef0();
  param_1[6] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104da760();
  
})();

  return;
}


// Reference entry 10fee1c0; body size 109 bytes.
#line 1 "ENTRY_10fee1c0"

void __fastcall FUN_10fee1c0(undefined4 *param_1) noexcept
{
  int *piVar1;

  ([&]() noexcept {

  ((SCStr *)(param_1 + 2))->int_release();
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();

  return;
}


// Reference entry 10feed80; body size 224 bytes.
#line 1 "ENTRY_10feed80"

undefined4 * Recovered_10feed80::FUN_10feed80(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCHomePageBrowseItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCHomePageBrowseItem;
  piVar1 = (int *)param_1[0xf];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0xc))->int_release();
  param_1[0xc] = 0;
  piVar1 = (int *)param_1[0xb];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[6] = (undefined4)&ghidra_vftable_SCIObj;
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x44);
  }
  
})();

  return param_1;
}


// Reference entry 11003ef0; body size 147 bytes.
#line 1 "ENTRY_11003ef0"

void __fastcall FUN_11003ef0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCBaseHttpAsyncIOOperation;
  param_1[0x18] = (undefined4)&ghidra_vftable_SCBaseHttpAsyncIOOperation;
  if ((undefined4 *)param_1[0x1125] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1125])(1);
  }
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1126))->int_release();
  param_1[0x1126] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1124))->int_release();
  param_1[0x1124] = 0;
  thunk_FUN_111c0a80();
  
})();

  return;
}


// Reference entry 11003fd0; body size 172 bytes.
#line 1 "ENTRY_11003fd0"

void __fastcall FUN_11003fd0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCGetAsyncIOOperation;
  param_1[2] = (undefined4)&ghidra_vftable_SCGetAsyncIOOperation;
  param_1[7] = (undefined4)&ghidra_vftable_SCGetAsyncIOOperation;
  param_1[0x3021] = (undefined4)&ghidra_vftable_SCGetAsyncIOOperation;
  piVar1 = (int *)param_1[0x3024];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x3023] = 0;
    param_1[0x3024] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3022))->int_release();
  param_1[0x3022] = 0;
  param_1[0x3021] = (undefined4)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  thunk_FUN_111fc270();
  
})();

  return;
}


// Reference entry 11004760; body size 196 bytes.
#line 1 "ENTRY_11004760"

undefined4 * Recovered_11004760::FUN_11004760(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCGetAsyncIOOperation;
  param_1[2] = (undefined4)&ghidra_vftable_SCGetAsyncIOOperation;
  param_1[7] = (undefined4)&ghidra_vftable_SCGetAsyncIOOperation;
  param_1[0x3021] = (undefined4)&ghidra_vftable_SCGetAsyncIOOperation;
  piVar1 = (int *)param_1[0x3024];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x3023] = 0;
    param_1[0x3024] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x3022))->int_release();
  param_1[0x3022] = 0;
  param_1[0x3021] = (undefined4)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  thunk_FUN_111fc270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc094);
  }
  
})();

  return param_1;
}


// Reference entry 11010280; body size 131 bytes.
#line 1 "ENTRY_11010280"

void __fastcall FUN_11010280(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSelectRoomsGenericErrorState;
  piVar1 = (int *)param_1[6];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 11010340; body size 197 bytes.
#line 1 "ENTRY_11010340"

void __fastcall FUN_11010340(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSelectRoomsListState;
  piVar1 = (int *)param_1[10];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 11010440; body size 249 bytes.
#line 1 "ENTRY_11010440"

void __fastcall FUN_11010440(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;

  *param_1 = (undefined4)&ghidra_vftable_SCSelectRoomsRemoveVoiceServiceState;
  param_1[3] = (undefined4)&ghidra_vftable_SCSelectRoomsRemoveVoiceServiceState;
  if ((int *)param_1[0xd] != (int *)0x0) {
    cVar3 = (**(code **)(*(int *)param_1[0xd] + 0x1c))();
    if (cVar3 != '\0') {
      (**(code **)(param_1[0xc] + 4))();
    }
  }
  puVar1 = param_1 + 0x26;
  thunk_FUN_10bcda40(*puVar1,param_1[0x27],puVar1);
  param_1[0x27] = *puVar1;
  thunk_FUN_10bd6f00();
  thunk_FUN_10e5df30();
  piVar2 = (int *)param_1[0xb];
  ([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  piVar2 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  param_1[3] = (undefined4)&ghidra_vftable_SCIOpCBDelegate;
  piVar2 = (int *)param_1[5];
  
})();
([&]() noexcept {

  if (piVar2 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  
})();

  return;
}


// Reference entry 11010600; body size 184 bytes.
#line 1 "ENTRY_11010600"

void __fastcall FUN_11010600(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[2] = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[10] = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[0x12] = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[0x13] = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[0x35] = (undefined4)&ghidra_vftable_SCVoiceSetupReporter;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x4b))->int_release();
  param_1[0x4b] = 0;
  thunk_FUN_101a2bf0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x46))->int_release();
  param_1[0x46] = 0;
  thunk_FUN_101a2bf0();
  thunk_FUN_10dd1440();
  
})();

  return;
}


// Reference entry 110108f0; body size 152 bytes.
#line 1 "ENTRY_110108f0"

undefined4 * Recovered_110108f0::FUN_110108f0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSelectRoomsGenericErrorState;
  piVar1 = (int *)param_1[6];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x20);
  }
  
})();

  return param_1;
}


// Reference entry 110109f0; body size 218 bytes.
#line 1 "ENTRY_110109f0"

undefined4 * Recovered_110109f0::FUN_110109f0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCSelectRoomsListState;
  piVar1 = (int *)param_1[10];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[8];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[7] = 0;
    param_1[8] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[6];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[4];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  *param_1 = (undefined4)&ghidra_vftable_SCWizardState;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x30);
  }
  
})();

  return param_1;
}


// Reference entry 11010d10; body size 208 bytes.
#line 1 "ENTRY_11010d10"

undefined4 * Recovered_11010d10::FUN_11010d10(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[2] = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[10] = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[0x12] = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[0x13] = (undefined4)&ghidra_vftable_SCSelectRoomsWizard;
  param_1[0x35] = (undefined4)&ghidra_vftable_SCVoiceSetupReporter;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x4b))->int_release();
  param_1[0x4b] = 0;
  thunk_FUN_101a2bf0();
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x46))->int_release();
  param_1[0x46] = 0;
  thunk_FUN_101a2bf0();
  thunk_FUN_10dd1440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x130);
  }
  
})();

  return param_1;
}


// Reference entry 11012f50; body size 239 bytes.
#line 1 "ENTRY_11012f50"

void Recovered_11012f50::FUN_11012f50(int *param_2,int param_3)

{
  int param_1 = (int)this;
  SCStr *pSVar1;
  undefined4 *puVar2;
  SCStr *ghidra_this;
  undefined4 *puVar3;

  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar3 = (undefined4 *)(param_3 + 0xc);
  if (puVar3 != puVar2) {
    ghidra_this = (SCStr *)(param_3 + 8);
    pSVar1 = (SCStr *)(param_3 + 0x14);
    do {
      *(undefined4 *)((SCStr *)((char *)ghidra_this + (-8))) = *puVar3;
      if (pSVar1 != ghidra_this) {
        ((SCStr *)((char *)ghidra_this + (-4)))->int_release();
        *(undefined4 *)((SCStr *)((char *)ghidra_this + (-4))) = *(undefined4 *)((SCStr *)((char *)pSVar1 + (-4)));
        ((SCStr *)((char *)ghidra_this + (-4)))->int_addref();
        if (pSVar1 != ghidra_this) {
          (ghidra_this)->int_release();
          *(undefined4 *)ghidra_this = *(undefined4 *)pSVar1;
          (ghidra_this)->int_addref();
        }
      }
      puVar3 = puVar3 + 3;
      ghidra_this = ghidra_this + 0xc;
      pSVar1 = pSVar1 + 0xc;
    } while (puVar3 != puVar2);
    puVar2 = *(undefined4 **)(param_1 + 4);
  }
  ([&]() noexcept {

  ((SCStr *)(puVar2 + -1))->int_release();
  puVar2[-1] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(puVar2 + -2))->int_release();
  puVar2[-2] = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -0xc;
  *param_2 = param_3;
  
})();

  return;
}


// Reference entry 1101cd80; body size 160 bytes.
#line 1 "ENTRY_1101cd80"

void __fastcall FUN_1101cd80(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCNowPlayingSourceHTAudioStream;
  param_1[3] = (undefined4)&ghidra_vftable_SCNowPlayingSourceHTAudioStream;
  param_1[4] = (undefined4)&ghidra_vftable_SCNowPlayingSourceHTAudioStream;
  param_1[0x12] = (undefined4)&ghidra_vftable_SCNowPlayingSourceHTAudioStream;
  piVar1 = (int *)param_1[0x16];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x12] = (undefined4)&ghidra_vftable_SCDeviceMusicEqualizationEventSink;
  piVar1 = (int *)param_1[0x14];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_11042880();
  
})();

  return;
}


// Reference entry 1101d270; body size 181 bytes.
#line 1 "ENTRY_1101d270"

undefined4 * Recovered_1101d270::FUN_1101d270(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCNowPlayingSourceHTAudioStream;
  param_1[3] = (undefined4)&ghidra_vftable_SCNowPlayingSourceHTAudioStream;
  param_1[4] = (undefined4)&ghidra_vftable_SCNowPlayingSourceHTAudioStream;
  param_1[0x12] = (undefined4)&ghidra_vftable_SCNowPlayingSourceHTAudioStream;
  piVar1 = (int *)param_1[0x16];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x12] = (undefined4)&ghidra_vftable_SCDeviceMusicEqualizationEventSink;
  piVar1 = (int *)param_1[0x14];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_11042880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x60);
  }
  
})();

  return param_1;
}


// Reference entry 1102f6c0; body size 353 bytes.
#line 1 "ENTRY_1102f6c0"

void __fastcall FUN_1102f6c0(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCPlayQueueItem;
  param_1[6] = (undefined4)&ghidra_vftable_SCPlayQueueItem;
  param_1[0xe] = (undefined4)&ghidra_vftable_SCPlayQueueItem;
  param_1[0xf] = (undefined4)&ghidra_vftable_SCPlayQueueItem;
  param_1[0x10] = (undefined4)&ghidra_vftable_SCPlayQueueItem;
  param_1[0x11] = (undefined4)&ghidra_vftable_SCPlayQueueItem;
  param_1[0x46] = (undefined4)&ghidra_vftable_SCPlayQueueItem;
  param_1[0x48] = (undefined4)&ghidra_vftable_SCPlayQueueItem;
  if ((int *)param_1[0x4d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4d] + 0x20))(param_1[0x49]);
  }
  if (param_1[0x4b] != 0) {
    piVar1 = (int *)param_1[0x4c];
    if (piVar1 != (int *)0x0) {
      param_1[0x4b] = 0;
      param_1[0x4c] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
  }
  thunk_FUN_10202e00();
  piVar1 = (int *)param_1[0x4e];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x4c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[0x48] = (undefined4)&ghidra_vftable_SCNowPlayingEventSink;
  piVar1 = (int *)param_1[0x4a];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10203d60();
  
})();

  return;
}


// Reference entry 1103a600; body size 660 bytes.
#line 1 "ENTRY_1103a600"

void __fastcall FUN_1103a600(undefined4 *param_1) noexcept
{
  int *piVar1;

  *param_1 = (undefined4)&ghidra_vftable_SCBTNowPlaying;
  param_1[3] = (undefined4)&ghidra_vftable_SCBTNowPlaying;
  param_1[4] = (undefined4)&ghidra_vftable_SCBTNowPlaying;
  if (param_1[0x22] != 0) {
    piVar1 = (int *)param_1[0x23];
    if (piVar1 != (int *)0x0) {
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  if (param_1[0x24] != 0) {
    piVar1 = (int *)param_1[0x25];
    if (piVar1 != (int *)0x0) {
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x24] = 0;
    param_1[0x25] = 0;
  }
  if (param_1[0x26] != 0) {
    piVar1 = (int *)param_1[0x27];
    if (piVar1 != (int *)0x0) {
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  if (param_1[0x28] != 0) {
    piVar1 = (int *)param_1[0x29];
    if (piVar1 != (int *)0x0) {
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  piVar1 = (int *)param_1[0x30];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2e];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x2c];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x2a))->int_release();
  param_1[0x2a] = 0;
  piVar1 = (int *)param_1[0x29];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x27];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x25];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x23];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  thunk_FUN_10f41620();
  
})();

  return;
}


// Reference entry 11064e60; body size 190 bytes.
#line 1 "ENTRY_11064e60"

void __fastcall FUN_11064e60(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_RMuseRateItemPostRequest;
  param_1[0x1883] = (undefined4)&ghidra_vftable_RMuseRateItemPostRequest;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x1887))->int_release();
  param_1[0x1887] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1886))->int_release();
  param_1[0x1886] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1885))->int_release();
  param_1[0x1885] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1884))->int_release();
  param_1[0x1884] = 0;
  thunk_FUN_1124a3e0();
  
})();

  return;
}


// Reference entry 110f69f0; body size 144 bytes.
#line 1 "ENTRY_110f69f0"

void __fastcall FUN_110f69f0(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;

  int iVar3;

  *param_1 = (undefined4)&ghidra_vftable_RTrackMetaDataObjCB;
  puVar1 = (undefined4 *)param_1[4];
  ([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)param_1[3];
  
})();
([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  thunk_FUN_11202570();
  
})();

  return;
}


// Reference entry 11172910; body size 144 bytes.
#line 1 "ENTRY_11172910"

void __fastcall FUN_11172910(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;

  int iVar3;

  *param_1 = (undefined4)&ghidra_vftable_SwfObjCM;
  puVar1 = (undefined4 *)param_1[0xe];
  ([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)param_1[0xd];
  
})();
([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  thunk_FUN_1113e6f0();
  
})();

  return;
}


// Reference entry 11172e60; body size 165 bytes.
#line 1 "ENTRY_11172e60"

undefined4 * Recovered_11172e60::FUN_11172e60(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;

  int iVar3;

  *param_1 = (undefined4)&ghidra_vftable_SwfObjCM;
  puVar1 = (undefined4 *)param_1[0xe];
  ([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)param_1[0xd];
  
})();
([&]() noexcept {

  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_1123fcd0(puVar1 + 1);
    if (iVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x3c);
  }
  
})();

  return param_1;
}


// Reference entry 1183f2c0; body size 103 bytes.
#line 1 "ENTRY_1183f2c0"



void FUN_1183f2c0(void)

{

  ([&]() noexcept {

  ((SCStr *)&DAT_121a6014)->int_release();
  _DAT_121a6014 = 0;
  
})();
([&]() noexcept {

  ((SCStr *)&DAT_121a6008)->int_release();
  _DAT_121a6008 = 0;
  
})();

  return;
}


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
extern undefined4 DAT_121a0a18;
extern int* DAT_121a0a1c;
extern undefined4 DAT_121a0be0;
extern undefined4 DAT_121a10c8;
extern undefined4 DAT_121a2650;
extern int* DAT_121a2654;
extern undefined4 DAT_121a5544;
extern undefined4 DAT_121a6008;
extern undefined4 DAT_121a6014;
extern undefined4 _DAT_121a6008;
extern undefined4 _DAT_121a6014;
extern undefined4 g_lSCObjCount;
extern char ghidra_vftable_RAccountAIOOpBase[];
extern char ghidra_vftable_RAccountCreateAIOOp[];
extern char ghidra_vftable_RAddFavoritesAIOOp[];
extern char ghidra_vftable_RAddHTSatellitesOp[];
extern char ghidra_vftable_RAddQueueTracksHelper[];
extern char ghidra_vftable_RAlarmProgramData[];
extern char ghidra_vftable_RAsyncAAGetIOOp[];
extern char ghidra_vftable_RAsyncDataSourceListener[];
extern char ghidra_vftable_RBondingOp[];
extern char ghidra_vftable_RCDDynamicPropertyCB[];
extern char ghidra_vftable_RCPBrowseOperationCB[];
extern char ghidra_vftable_RConnectedPartnerRemoveAIOOp[];
extern char ghidra_vftable_RConnectedPartnerRemoveRequest[];
extern char ghidra_vftable_RConnectedPartnersUserTokenAIOOPBase[];
extern char ghidra_vftable_RControlAIOOpCB[];
extern char ghidra_vftable_RControlAIOOpRef_GetCertBundleAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RAccountCreateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RAccountDeletionAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RAccountLoginAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RAccountRefreshTokensAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RAddFavoritesAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RBondingOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RCPSonosGenericOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_RCPValidateOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_RCheckForControllerUpdatesAsyncOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RConnectedPartnerRemoveAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RConnectedPartnersGetAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RControlAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RControllerOnlySubmitDirectDiagnosticsAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RDeviceDeleteAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RDeviceGetAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RDevicePostAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RDevicePutAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RDownloadServiceManifestFilesAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RFetchTokenAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RFileTransferDownloadAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RGetAllPrefixLocationsAIOOpBase_[];
extern char ghidra_vftable_RControlAIOOpRef_RGetBetaSettingsAIOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RGetDeviceDescriptionAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RGetEthernetStatusAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RGetFormattedMetadataOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_RGetHouseholdSettingAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RGetNetworkConnectivityTestResultAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RHdmiGetInfoAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RHttpDeleteNoRedirectAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RHttpGetNoRedirectAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RHttpPostNoRedirectAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RListAvailableServicesWithGetStringCompoundOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RLookupMetadataAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RLookupV1CertInfoAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RMSLogoFetchIconOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RMSLogoImageFetchOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RMuseGetPlayerInfoAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RMuseGetUserSettingsAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RMuseRateItemAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RMuseSetSettingsAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RNullAsyncIOOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_RRateItemAsyncOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RRegisterSoftwareAndSaveRegDataAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSPGetStringAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegAccountLoginAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegAccountTransferAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegBeginSecureTransferAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegCreateIdentityAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegEmailHintAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegGetEmailAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegGetUserAccountRequestAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegPasswordSetAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegPrepTransferPlayerAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegRegisterPlayerAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegResetPasswordAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegUpdateUserAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegUserEmailAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegValidateEmailAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegVerifyEmailAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSecRegVerifyEmailSubmitAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSelectedItemsPlayNowOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSetHouseholdSettingAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSonosAppLinkOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSonosGetDeviceAuthTokenOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSonosRefreshAuthTokenOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RStartNetworkConnectivityTestAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSubmitDiagnosticsAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RSubmitDirectDiagnosticsAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RTempDisableNetworkAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAIGetLineInLevelAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAISetAudioInputAttributesAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAISetLineInLevelAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAVTAddMultipleURIsToQueueAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAVTAddURIToQueueAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAVTAddURIToSavedQueueAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAVTGetPositionInfoAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAVTPlayAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAVTRemoveTrackRangeFromQueueAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAVTSeekAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAVTSetAVTransportURIAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAddQueueTracksOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpAsyncIOOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpCDBrowseAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpCDCreateObjectAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpCDGetAllPrefixLocationsAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpCMGetProtocolInfoAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpDPAddHTSatelliteAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpDPGetLEDStateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpDPGetZoneAttributesAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpDPGetZoneInfoAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpDPSetAutoplayRoomUUIDAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpDPSetLEDStateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpDPSetUseAutoplayVolumeAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpGetMultiZoneInfoAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpHTCGetIRRepeaterStateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpHTCGetLEDFeedbackStateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpHTCIdentifyIRRemoteAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpHTCIsRemoteConfiguredAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpHTCLearnIRCodeAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpHTCSetIRRepeaterStateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpHTCSetLEDFeedbackStateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpMSDUpdateAvailableServicesAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpQAddMultipleURIsAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpQAddURIAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpQReplaceAllTracksAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpSPAddAccountXAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpSPAddOAuthAccountXAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpSPReplaceAccountXAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RUpnpZGTReportUnresponsiveDeviceAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RVoiceAccountUpdateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RVoiceServiceAlexaROWLocaleAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RVoiceServiceAmazonChallengeAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RVoiceServiceAmazonSkillAuthCodeAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RVoiceServiceAuthenticateAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RVoiceServiceGetAccountInfoAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RVoiceServiceNotifyInitiateOnboardingAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_RZPConnectAIOOp_[];
extern char ghidra_vftable_RControlAIOOpRef_SCConfigLoadAsyncIOOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_SCDeleteAsyncIOOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_SCGetAsyncIOOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_SCOpDeviceVoiceSettingsCompoundSet_[];
extern char ghidra_vftable_RControlAIOOpRef_SCOpVoiceAcctWakeWordCompoundSet_[];
extern char ghidra_vftable_RControlAIOOpRef_SCOpVoiceServiceCompoundDeleteAcct_[];
extern char ghidra_vftable_RControlAIOOpRef_SCPostAsyncIOOperation_[];
extern char ghidra_vftable_RControlAIOOpRef_SCPutAsyncIOOperation_[];
extern char ghidra_vftable_RCustRegRegisterSoftwareAIOOp[];
extern char ghidra_vftable_RCustomZPEnumerator[];
extern char ghidra_vftable_RDataSource[];
extern char ghidra_vftable_RDiagnosticsSubmitFileRequest[];
extern char ghidra_vftable_RFetchTokenAIOOp[];
extern char ghidra_vftable_RGetBetaSettingsAIOp[];
extern char ghidra_vftable_RGetBetaSettingsRequest[];
extern char ghidra_vftable_RGetCertBundleRequest[];
extern char ghidra_vftable_RGetDiagnosticMetadataRequest[];
extern char ghidra_vftable_RGetEthernetStatusAIOOp[];
extern char ghidra_vftable_RGetEthernetStatusRequest[];
extern char ghidra_vftable_RGetLocalSupportDocumentRequest[];
extern char ghidra_vftable_RGetNetworkConnectivityTestResultAIOOp[];
extern char ghidra_vftable_RGetNetworkConnectivityTestResultRequest[];
extern char ghidra_vftable_RHouseholdSettingGetRequest[];
extern char ghidra_vftable_RHouseholdSettingPostRequest[];
extern char ghidra_vftable_RITQHandler[];
extern char ghidra_vftable_RInitiateDiagnosticsRequest[];
extern char ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest[];
extern char ghidra_vftable_RLocationNameExtractorCB[];
extern char ghidra_vftable_RLookupV1CertInfoRequest[];
extern char ghidra_vftable_RMSLogoFetchIconOp[];
extern char ghidra_vftable_RMuseDeviceSetSettingsPostRequest[];
extern char ghidra_vftable_RMuseGetUserSettingsRequest[];
extern char ghidra_vftable_RMusePlayerInfoGetRequest[];
extern char ghidra_vftable_RMuseRateItemPostRequest[];
extern char ghidra_vftable_RNetstartOpCallback[];
extern char ghidra_vftable_RPopup[];
extern char ghidra_vftable_RPostUpdateRequest[];
extern char ghidra_vftable_RPresentationMapDownloadOp[];
extern char ghidra_vftable_RPresentationMapRequest[];
extern char ghidra_vftable_RProgressInfoForSCOp[];
extern char ghidra_vftable_RQualityBadge[];
extern char ghidra_vftable_RQueueSelectedItemsMoveOp[];
extern char ghidra_vftable_RQueueSelectedItemsRemoveOp[];
extern char ghidra_vftable_RRefreshTokenRequest[];
extern char ghidra_vftable_RRegisterSoftwareAndSaveRegDataAIOOp[];
extern char ghidra_vftable_RRegisterSoftwareIfNecessaryOp[];
extern char ghidra_vftable_RReportDiagnosticsStatusRequest[];
extern char ghidra_vftable_RReportUnresponsiveZPorMSAIOOp[];
extern char ghidra_vftable_RReportUploaderClient[];
extern char ghidra_vftable_RSHdmiGetInfoRequest[];
extern char ghidra_vftable_RSecRegAccountLoginAIOOp[];
extern char ghidra_vftable_RSecRegAccountTransferRequest[];
extern char ghidra_vftable_RSecRegBeginSecureTransferRequest[];
extern char ghidra_vftable_RSecRegCreateIdentityAIOOp[];
extern char ghidra_vftable_RSecRegCreateIdentityRequest[];
extern char ghidra_vftable_RSecRegFinalizeRegistrationRequest[];
extern char ghidra_vftable_RSecRegGetEmailAIOOp[];
extern char ghidra_vftable_RSecRegGetRegistrationResult[];
extern char ghidra_vftable_RSecRegGetUserAccountRequest[];
extern char ghidra_vftable_RSecRegGetUserAccountRequestAIOOp[];
extern char ghidra_vftable_RSecRegLoginRequest[];
extern char ghidra_vftable_RSecRegPasswordSetRequest[];
extern char ghidra_vftable_RSecRegPrepTransferPlayerAIOOp[];
extern char ghidra_vftable_RSecRegPrepareRegistrationRequest[];
extern char ghidra_vftable_RSecRegPrepareTransferRequest[];
extern char ghidra_vftable_RSecRegRegisterPlayerAIOOp[];
extern char ghidra_vftable_RSecRegResetPasswordRequest[];
extern char ghidra_vftable_RSecRegUpdateUserRequest[];
extern char ghidra_vftable_RSecRegUserEmailRequest[];
extern char ghidra_vftable_RSecRegUserGetRequest[];
extern char ghidra_vftable_RSecRegValidateEmailRequest[];
extern char ghidra_vftable_RSecRegVerifyEmailRequest[];
extern char ghidra_vftable_RSecRegVerifyEmailSubmitRequest[];
extern char ghidra_vftable_RSelectedBrowseItemsOpBase[];
extern char ghidra_vftable_RSelectedItemsAddToQueueAtIdxOp[];
extern char ghidra_vftable_RSelectedItemsPlayNextOp[];
extern char ghidra_vftable_RSelectedItemsPlayNowOp[];
extern char ghidra_vftable_RServiceAuthHeaderBuilderFactory[];
extern char ghidra_vftable_RServiceManifestGetRequest[];
extern char ghidra_vftable_RSetLineInNameAndAssociatedAttributesOp[];
extern char ghidra_vftable_RStartNetworkConnectivityTestAIOOp[];
extern char ghidra_vftable_RStartNetworkConnectivityTestRequest[];
extern char ghidra_vftable_RStereoZPCandidateEnumerator[];
extern char ghidra_vftable_RStringTableRequest[];
extern char ghidra_vftable_RSurroundZPCandidateEnumerator[];
extern char ghidra_vftable_RTMFetchClientTokenRequest[];
extern char ghidra_vftable_RTempDisableNetworkAIOOp[];
extern char ghidra_vftable_RTempDisableNetworkRequest[];
extern char ghidra_vftable_RTrackMetaDataObjCB[];
extern char ghidra_vftable_RTrackRatingsEventHandler[];
extern char ghidra_vftable_RUpdateManifestProvider[];
extern char ghidra_vftable_RUpnpAddQueueTracksOp[];
extern char ghidra_vftable_RUpnpAsyncIOOperationConnectCB[];
extern char ghidra_vftable_RVSAlexaChallengeRequest[];
extern char ghidra_vftable_RVSAlexaROWLocaleRequest[];
extern char ghidra_vftable_RVSAmazonSkillAuthCodeRequest[];
extern char ghidra_vftable_RVSAuthenticateRequest[];
extern char ghidra_vftable_RVSDeleteAccountRequest[];
extern char ghidra_vftable_RVSGetAllAccountsInfoRequest[];
extern char ghidra_vftable_RVSNotifyInitiateOnboardingRequest[];
extern char ghidra_vftable_RVoiceServiceAmazonChallengeAIOOp[];
extern char ghidra_vftable_RVoiceServiceDeleteAccountAIOOp[];
extern char ghidra_vftable_RVoiceServiceGetAccountInfoAIOOp[];
extern char ghidra_vftable_RZPConnectAIOOp[];
extern char ghidra_vftable_SCAccountEmailItem[];
extern char ghidra_vftable_SCAccountManagerEventSink[];
extern char ghidra_vftable_SCAccountSettingsDataSource[];
extern char ghidra_vftable_SCAccountSignInInitState[];
extern char ghidra_vftable_SCAccountSignInMainPageState[];
extern char ghidra_vftable_SCActionContext[];
extern char ghidra_vftable_SCActionOnGroupWrapperActionDescriptor[];
extern char ghidra_vftable_SCActionWrapperActionDescriptor[];
extern char ghidra_vftable_SCAddCustomRadioActionFactory[];
extern char ghidra_vftable_SCAddFavoriteActionFactory[];
extern char ghidra_vftable_SCAddFavoriteDescriptor[];
extern char ghidra_vftable_SCAddPlaylistDescriptor[];
extern char ghidra_vftable_SCAddToAction[];
extern char ghidra_vftable_SCAddToActionDescriptor[];
extern char ghidra_vftable_SCAddToPlaylistAction[];
extern char ghidra_vftable_SCAddToPlaylistActionDescriptor[];
extern char ghidra_vftable_SCAddToPlaylistDescriptor[];
extern char ghidra_vftable_SCAddToQueueUIAction[];
extern char ghidra_vftable_SCAggregateSearchDataSource[];
extern char ghidra_vftable_SCAlarmContentDataSource[];
extern char ghidra_vftable_SCAlarmDeleteActionDescriptor[];
extern char ghidra_vftable_SCAlarmItem[];
extern char ghidra_vftable_SCAlarmMusic[];
extern char ghidra_vftable_SCAlarmMusicDataSource[];
extern char ghidra_vftable_SCAlarmMusicRootDataSource[];
extern char ghidra_vftable_SCAlarmSaveActionDescriptor[];
extern char ghidra_vftable_SCAlarmsDataSource[];
extern char ghidra_vftable_SCAlarmsSettingsDataSource[];
extern char ghidra_vftable_SCAlarmsSettingsZonesDataSource[];
extern char ghidra_vftable_SCAlexaAuthChecklistMSPAlexaEducationState[];
extern char ghidra_vftable_SCAlexaAuthChecklistVoiceEducationState[];
extern char ghidra_vftable_SCAlexaAuthLWAState[];
extern char ghidra_vftable_SCAlexaAuthReminderState[];
extern char ghidra_vftable_SCAlexaAuthWizard[];
extern char ghidra_vftable_SCAllNodeBrowseItemBase[];
extern char ghidra_vftable_SCAllNodeSaveActionFactory[];
extern char ghidra_vftable_SCAllNodeSaveGroupDescriptor[];
extern char ghidra_vftable_SCAllNodeSaveNoArgDescriptor[];
extern char ghidra_vftable_SCAllNodeSaveQueueDescriptor[];
extern char ghidra_vftable_SCAppReporting[];
extern char ghidra_vftable_SCAppReportingActionDescriptor[];
extern char ghidra_vftable_SCAppReportingActionOnGroupDescriptor[];
extern char ghidra_vftable_SCArea[];
extern char ghidra_vftable_SCAreaAction[];
extern char ghidra_vftable_SCAreaActionDescriptor[];
extern char ghidra_vftable_SCAreaManager[];
extern char ghidra_vftable_SCArtworkCacheManager[];
extern char ghidra_vftable_SCArtworkData[];
extern char ghidra_vftable_SCAsyncBrowseDataSource[];
extern char ghidra_vftable_SCAsyncBrowseDataSourceBase[];
extern char ghidra_vftable_SCAsyncBrowseItemBase[];
extern char ghidra_vftable_SCAudioCompressionSettingItem[];
extern char ghidra_vftable_SCAudioInputResource[];
extern char ghidra_vftable_SCAutoplayVolumeSettingItem[];
extern char ghidra_vftable_SCAutoplayZoneSelectAction[];
extern char ghidra_vftable_SCAutoplayZoneSelectActionDescriptor[];
extern char ghidra_vftable_SCAutoplayZoneSettingItem[];
extern char ghidra_vftable_SCAvailableServicesMenuDataSource[];
extern char ghidra_vftable_SCBTDevice[];
extern char ghidra_vftable_SCBTHouseholdAdapter[];
extern char ghidra_vftable_SCBTNowPlaying[];
extern char ghidra_vftable_SCBTZoneGroup[];
extern char ghidra_vftable_SCBadgeResource[];
extern char ghidra_vftable_SCBagStrProp[];
extern char ghidra_vftable_SCBaseConnector[];
extern char ghidra_vftable_SCBaseHttpAsyncIOOperation[];
extern char ghidra_vftable_SCBooleanSettingsItemBase[];
extern char ghidra_vftable_SCBrowseDataSourceEventSink[];
extern char ghidra_vftable_SCBrowseDataSourceProxy[];
extern char ghidra_vftable_SCBrowseItemEventSink[];
extern char ghidra_vftable_SCBrowsePageExtension[];
extern char ghidra_vftable_SCBrowsePickerDescriptor[];
extern char ghidra_vftable_SCBrowseStackManagerEventSink[];
extern char ghidra_vftable_SCBrowseToServiceRootActionFactory[];
extern char ghidra_vftable_SCButtonLockToggleActionDescriptor[];
extern char ghidra_vftable_SCCPInfoListDataSource[];
extern char ghidra_vftable_SCCachedHousehold[];
extern char ghidra_vftable_SCChangeEmailWizMainPageState[];
extern char ghidra_vftable_SCChangeEmailWizVerifyState[];
extern char ghidra_vftable_SCCloudDiscovery[];
extern char ghidra_vftable_SCCompilationAlbumsSettingItem[];
extern char ghidra_vftable_SCCompoundAction[];
extern char ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface_SCNewWizComponent_[];
extern char ghidra_vftable_SCConfirmHideOfflineDevice[];
extern char ghidra_vftable_SCConnectedPartnersCache[];
extern char ghidra_vftable_SCContentPageDataSource[];
extern char ghidra_vftable_SCContentRequestInfo[];
extern char ghidra_vftable_SCContentSession[];
extern char ghidra_vftable_SCContentViewBrowseItem[];
extern char ghidra_vftable_SCController__LimitedAccessStateData[];
extern char ghidra_vftable_SCControllerConfigReporter[];
extern char ghidra_vftable_SCControllerEventSink[];
extern char ghidra_vftable_SCControllerTest[];
extern char ghidra_vftable_SCCountry[];
extern char ghidra_vftable_SCCrashReportManager[];
extern char ghidra_vftable_SCCreateIdentityPostRequest[];
extern char ghidra_vftable_SCCustomUIActionDescriptor[];
extern char ghidra_vftable_SCDCAppLoadAsyncIOOperation[];
extern char ghidra_vftable_SCDateTimeManagerEventSink[];
extern char ghidra_vftable_SCDeferredEvtHelper[];
extern char ghidra_vftable_SCDeleteFavoriteActionFactory[];
extern char ghidra_vftable_SCDeleteItemAction[];
extern char ghidra_vftable_SCDeleteItemDescriptor[];
extern char ghidra_vftable_SCDeletePlaylistAction[];
extern char ghidra_vftable_SCDeletePlaylistDescriptor[];
extern char ghidra_vftable_SCDeleteVoiceAccountAction[];
extern char ghidra_vftable_SCDevice[];
extern char ghidra_vftable_SCDeviceListDataSource[];
extern char ghidra_vftable_SCDeviceMusicEqualizationEventSink[];
extern char ghidra_vftable_SCDeviceSettingsDataSource[];
extern char ghidra_vftable_SCDiagnostics[];
extern char ghidra_vftable_SCDisplayCustomControlActionDescriptor[];
extern char ghidra_vftable_SCDisplayHelpSheetActionDescriptor[];
extern char ghidra_vftable_SCDisplayMessageDescriptor[];
extern char ghidra_vftable_SCDisplaySubmitDiagnosticsMessageAction[];
extern char ghidra_vftable_SCDisplayTextDescriptor[];
extern char ghidra_vftable_SCDisplayWizardActionDescriptor[];
extern char ghidra_vftable_SCDisplayWizardActionDescriptorBase[];
extern char ghidra_vftable_SCDisplayWizardState_SCAlexaAuthWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCBridgeRemovalWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCLegacySonanceDetectionWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCLegacyWelcomeLoginWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCLifecycleLauncherWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCLifecycleModernWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCLifecyclePlayerRemovalWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCOnlineUpdateWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCSecureTransferWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCXMLSecureExistingWizard_[];
extern char ghidra_vftable_SCDisplayWizardState_SCXMLSecurePlayerWizard_[];
extern char ghidra_vftable_SCEditCustomRadioActionFactory[];
extern char ghidra_vftable_SCEditCustomRadioDescriptor[];
extern char ghidra_vftable_SCEulaManager[];
extern char ghidra_vftable_SCEventSinkDelegate[];
extern char ghidra_vftable_SCExternalLinkWithGroupActionDescriptor[];
extern char ghidra_vftable_SCFavoritesBrowseDataSource[];
extern char ghidra_vftable_SCFeatureManagerEventSink[];
extern char ghidra_vftable_SCFetchAndDisplayMessageAction[];
extern char ghidra_vftable_SCFetchLifecycleDevicesOp[];
extern char ghidra_vftable_SCFetchTokenOpActionWrapper[];
extern char ghidra_vftable_SCFetchUpdateManifestOp[];
extern char ghidra_vftable_SCForgetHouseholdActionDescriptor[];
extern char ghidra_vftable_SCGetAsyncIOOperation[];
extern char ghidra_vftable_SCGroupQueueSaveAction[];
extern char ghidra_vftable_SCGroupSaveAction[];
extern char ghidra_vftable_SCGroupVolume[];
extern char ghidra_vftable_SCHDMIAlertActionFactory[];
extern char ghidra_vftable_SCHDMIAlertCheckDescriptor[];
extern char ghidra_vftable_SCHTAudioBrowseItem[];
extern char ghidra_vftable_SCHideOfflineDeviceSignIn[];
extern char ghidra_vftable_SCHistoryBrowseDataSource[];
extern char ghidra_vftable_SCHistoryDeleteActionFactory[];
extern char ghidra_vftable_SCHomePageBrowseItem[];
extern char ghidra_vftable_SCHomePagePinnedItem[];
extern char ghidra_vftable_SCHouseholdAdapter[];
extern char ghidra_vftable_SCHouseholdEventSink[];
extern char ghidra_vftable_SCHouseholdManagerEventSink[];
extern char ghidra_vftable_SCIActionDelegateCB[];
extern char ghidra_vftable_SCIObj[];
extern char ghidra_vftable_SCIObjImpl_SCIAction_[];
extern char ghidra_vftable_SCIObjImpl_SCIActionContext_[];
extern char ghidra_vftable_SCIObjImpl_SCIActionDelegate_[];
extern char ghidra_vftable_SCIObjImpl_SCIActionNoArgDescriptor_[];
extern char ghidra_vftable_SCIObjImpl_SCIActionOnGroupDescriptor_[];
extern char ghidra_vftable_SCIObjImpl_SCIActionSelectableDescriptor_[];
extern char ghidra_vftable_SCIObjImpl_SCIActionWithIntDescriptor_[];
extern char ghidra_vftable_SCIObjImpl_SCIAddToQueueAtNumberDescriptor_[];
extern char ghidra_vftable_SCIObjImpl_SCIAlarmMusic_[];
extern char ghidra_vftable_SCIObjImpl_SCIAppReporting_[];
extern char ghidra_vftable_SCIObjImpl_SCIArea_[];
extern char ghidra_vftable_SCIObjImpl_SCIAreaManager_[];
extern char ghidra_vftable_SCIObjImpl_SCIArtworkCacheManager_[];
extern char ghidra_vftable_SCIObjImpl_SCIArtworkData_[];
extern char ghidra_vftable_SCIObjImpl_SCIAudioInputResource_[];
extern char ghidra_vftable_SCIObjImpl_SCIBadgeResource_[];
extern char ghidra_vftable_SCIObjImpl_SCIBrowsePageExtension_[];
extern char ghidra_vftable_SCIObjImpl_SCICachedHousehold_[];
extern char ghidra_vftable_SCIObjImpl_SCIControllerTest_[];
extern char ghidra_vftable_SCIObjImpl_SCICountry_[];
extern char ghidra_vftable_SCIObjImpl_SCICrashReportManager_[];
extern char ghidra_vftable_SCIObjImpl_SCIData_[];
extern char ghidra_vftable_SCIObjImpl_SCIDevice_[];
extern char ghidra_vftable_SCIObjImpl_SCIElapsedTimeMeasurement_[];
extern char ghidra_vftable_SCIObjImpl_SCIEnumerator_[];
extern char ghidra_vftable_SCIObjImpl_SCIEulaManager_[];
extern char ghidra_vftable_SCIObjImpl_SCIEventSink_[];
extern char ghidra_vftable_SCIObjImpl_SCIGroupVolume_[];
extern char ghidra_vftable_SCIObjImpl_SCIInAppProduct_[];
extern char ghidra_vftable_SCIObjImpl_SCIIndexManager_[];
extern char ghidra_vftable_SCIObjImpl_SCIInfoViewHeaderItem_[];
extern char ghidra_vftable_SCIObjImpl_SCIInnerActionFactory_[];
extern char ghidra_vftable_SCIObjImpl_SCILandingPage_[];
extern char ghidra_vftable_SCIObjImpl_SCILandingPageSection_[];
extern char ghidra_vftable_SCIObjImpl_SCILandingPageTile_[];
extern char ghidra_vftable_SCIObjImpl_SCIMusicServiceMenuItem_[];
extern char ghidra_vftable_SCIObjImpl_SCINetworkManagement_[];
extern char ghidra_vftable_SCIObjImpl_SCINowPlayingRatings_[];
extern char ghidra_vftable_SCIObjImpl_SCINowPlayingSource_[];
extern char ghidra_vftable_SCIObjImpl_SCINowPlayingTransport_[];
extern char ghidra_vftable_SCIObjImpl_SCIObj_[];
extern char ghidra_vftable_SCIObjImpl_SCIOp_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpAVTransportAddURIToSavedQueue_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpAddFavorites_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpAddServiceAccount_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpAddTracksToQueue_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpAlarmSave_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpAudioInGetLineInLevel_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpAudioInSetLineInLevel_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpCB_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpCheckForControllerUpdates_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpConnectionManagerGetProtocolInfo_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpDeviceDelete_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpDeviceGet_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpDevicePost_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpDevicePropertiesGetLEDState_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpDevicePropertiesSetLEDState_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpDevicePut_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpGenericUpdateQueue_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpGetAboutSonosString_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpGetTrackPositionInfo_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpGetUsageDataShareOption_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpHTControlGetIRRepeaterState_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpHTControlGetLEDFeedbackState_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpHTControlIdentifyIRRemote_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpHTControlIsRemoteConfigured_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpHTControlLearnIRCode_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpHTControlSetIRRepeaterState_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpHTControlSetLEDFeedbackState_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpJoinHousehold_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpLoadLogo_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpNetstartGetScanList_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpNetstartSendRevert_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpQueueReplaceAllTracks_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpReplaceAccount_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpSecRegRegisterPlayer_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpSubmitDiagnostics_[];
extern char ghidra_vftable_SCIObjImpl_SCIOpValidateServiceCredentials_[];
extern char ghidra_vftable_SCIObjImpl_SCIPlayQueue_[];
extern char ghidra_vftable_SCIObjImpl_SCIPlayQueueMgr_[];
extern char ghidra_vftable_SCIObjImpl_SCIProperty_[];
extern char ghidra_vftable_SCIObjImpl_SCIResource_[];
extern char ghidra_vftable_SCIObjImpl_SCIRoomResource_[];
extern char ghidra_vftable_SCIObjImpl_SCISearchParameters_[];
extern char ghidra_vftable_SCIObjImpl_SCISearchResultBrowseItem_[];
extern char ghidra_vftable_SCIObjImpl_SCISearchable_[];
extern char ghidra_vftable_SCIObjImpl_SCISearchableCategory_[];
extern char ghidra_vftable_SCIObjImpl_SCISecurityContext_[];
extern char ghidra_vftable_SCIObjImpl_SCIServiceAccount_[];
extern char ghidra_vftable_SCIObjImpl_SCIServiceAccountManager_[];
extern char ghidra_vftable_SCIObjImpl_SCIServiceAppInteropResponseDelegate_[];
extern char ghidra_vftable_SCIObjImpl_SCIServiceDescriptorManager_[];
extern char ghidra_vftable_SCIObjImpl_SCIServicePopup_[];
extern char ghidra_vftable_SCIObjImpl_SCISettingsMenu_[];
extern char ghidra_vftable_SCIObjImpl_SCISettingsMenuItem_[];
extern char ghidra_vftable_SCIObjImpl_SCISettingsSection_[];
extern char ghidra_vftable_SCIObjImpl_SCIShareManager_[];
extern char ghidra_vftable_SCIObjImpl_SCISonosPlaylist_[];
extern char ghidra_vftable_SCIObjImpl_SCISpinnerSettingsProperty_[];
extern char ghidra_vftable_SCIObjImpl_SCIStringFromCustomSettingsProperty_[];
extern char ghidra_vftable_SCIObjImpl_SCIStringFromListSettingsProperty_[];
extern char ghidra_vftable_SCIObjImpl_SCIStringInput_[];
extern char ghidra_vftable_SCIObjImpl_SCISystemStatus_[];
extern char ghidra_vftable_SCIObjImpl_SCITimeSettingsProperty_[];
extern char ghidra_vftable_SCIObjImpl_SCITimeZone_[];
extern char ghidra_vftable_SCIObjImpl_SCIUrbanAirshipListener_[];
extern char ghidra_vftable_SCIObjImpl_SCIUrlConnection_[];
extern char ghidra_vftable_SCIObjImpl_SCIUrlRequest_[];
extern char ghidra_vftable_SCIObjImpl_SCIUrlSessionCallback_[];
extern char ghidra_vftable_SCIObjImpl_SCIVersionRange_[];
extern char ghidra_vftable_SCIObjImpl_SCIWifiListener_[];
extern char ghidra_vftable_SCIObjImpl_SCIZoneGroup_[];
extern char ghidra_vftable_SCIObjImpl_SCIZoneGroupMgr_[];
extern char ghidra_vftable_SCIObjImpl_SCStrProp_[];
extern char ghidra_vftable_SCIOpCBDelegate[];
extern char ghidra_vftable_SCIStackedItemImpl[];
extern char ghidra_vftable_SCInAppProduct[];
extern char ghidra_vftable_SCIncludeGroupedZoneToggleActionDescriptor[];
extern char ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardAction[];
extern char ghidra_vftable_SCIndexListenerCallback[];
extern char ghidra_vftable_SCIndexManager[];
extern char ghidra_vftable_SCIndexManagerEventSink[];
extern char ghidra_vftable_SCInfoTextViewDataSource[];
extern char ghidra_vftable_SCInfoViewDynamicCPMenu[];
extern char ghidra_vftable_SCInfoViewHeaderItem[];
extern char ghidra_vftable_SCInfoViewMiniMenuAction[];
extern char ghidra_vftable_SCInfoViewPushAsyncBrowseAction[];
extern char ghidra_vftable_SCInfoViewPushAsyncBrowsePageActionDescriptor[];
extern char ghidra_vftable_SCInfoViewPushInfoViewPageActionDescriptor[];
extern char ghidra_vftable_SCInfoViewPushTextPageActionDescriptor[];
extern char ghidra_vftable_SCInfoviewMenuInfo[];
extern char ghidra_vftable_SCInstantPlayAction[];
extern char ghidra_vftable_SCLANHouseholdAdapter[];
extern char ghidra_vftable_SCLanScanner[];
extern char ghidra_vftable_SCLandingPage[];
extern char ghidra_vftable_SCLandingPagePremiumSonosRadio[];
extern char ghidra_vftable_SCLandingPageSection[];
extern char ghidra_vftable_SCLandingPageTile[];
extern char ghidra_vftable_SCLaunchDirectControlAppAction[];
extern char ghidra_vftable_SCLaunchDirectControlAppActionDescriptor[];
extern char ghidra_vftable_SCLaunchSoundLabAction[];
extern char ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState[];
extern char ghidra_vftable_SCLegacySubmitDiagsWizSubmittingState[];
extern char ghidra_vftable_SCLibraryDefaultURLHandler[];
extern char ghidra_vftable_SCLifecycleLauncherWizardRetrievingProductsState[];
extern char ghidra_vftable_SCLifecycleManager[];
extern char ghidra_vftable_SCLifecycleManagerEventSink[];
extern char ghidra_vftable_SCLifecycleModernBridgeRemovalDisplayState[];
extern char ghidra_vftable_SCLifecycleNetworkTestAggregateResultState[];
extern char ghidra_vftable_SCLifecycleNetworkTestStartWifiState[];
extern char ghidra_vftable_SCLifecycleNetworkTestWifiNameState[];
extern char ghidra_vftable_SCLifecycleNetworkTestWifiSubmittingState[];
extern char ghidra_vftable_SCLineInAutoplayVolumeToggleActionDescriptor[];
extern char ghidra_vftable_SCLineInBrowseItem[];
extern char ghidra_vftable_SCLineInMenuDataSource[];
extern char ghidra_vftable_SCLineInSourceLevelSelectActionDescriptor[];
extern char ghidra_vftable_SCLineInSourceLevelSettingItem[];
extern char ghidra_vftable_SCLineOutLevelSelectActionDescriptor[];
extern char ghidra_vftable_SCLineOutLevelSettingItem[];
extern char ghidra_vftable_SCLocalMusicBrowseDataSource[];
extern char ghidra_vftable_SCLocalMusicBrowseItem[];
extern char ghidra_vftable_SCLoggingHelper[];
extern char ghidra_vftable_SCLogoArtworkData[];
extern char ghidra_vftable_SCMOAPIRateTrackAction[];
extern char ghidra_vftable_SCMediaItemCollectionEnumerator[];
extern char ghidra_vftable_SCMenuSelectSettingActionBase[];
extern char ghidra_vftable_SCMenuSelectSettingActionDescriptorBase[];
extern char ghidra_vftable_SCMissingPlayerAction[];
extern char ghidra_vftable_SCMissingPlayerActionDescriptor[];
extern char ghidra_vftable_SCMusicIndexUpdateTimeSettingItem[];
extern char ghidra_vftable_SCMusicLibraryBrowseDataSource[];
extern char ghidra_vftable_SCMusicLibraryBrowseItem[];
extern char ghidra_vftable_SCMusicLibraryManagementDataSource[];
extern char ghidra_vftable_SCMusicServerData[];
extern char ghidra_vftable_SCMusicService[];
extern char ghidra_vftable_SCMusicServiceAppLinkFailState[];
extern char ghidra_vftable_SCMusicServiceBrowseItem[];
extern char ghidra_vftable_SCMusicServiceCallToActionAppLinkState[];
extern char ghidra_vftable_SCMusicServiceIntroState[];
extern char ghidra_vftable_SCMusicServiceLaunchAppLinkState[];
extern char ghidra_vftable_SCMusicServiceLinkCodeState[];
extern char ghidra_vftable_SCMusicServiceListState[];
extern char ghidra_vftable_SCMusicServiceLoadMSInfoState[];
extern char ghidra_vftable_SCMusicServiceMenuItem[];
extern char ghidra_vftable_SCMusicServiceResultErrorState[];
extern char ghidra_vftable_SCMusicServiceSetNicknameState[];
extern char ghidra_vftable_SCMusicServiceWorkingState[];
extern char ghidra_vftable_SCMusicSourceBrowseItem[];
extern char ghidra_vftable_SCMyPlaylistsDataSource[];
extern char ghidra_vftable_SCNamePlaylistAction[];
extern char ghidra_vftable_SCNetworkListObj[];
extern char ghidra_vftable_SCNetworkManagement[];
extern char ghidra_vftable_SCNewDisableWifiAction[];
extern char ghidra_vftable_SCNewDisableWifiActionDescriptor[];
extern char ghidra_vftable_SCNewSessionPlayActionDescriptor[];
extern char ghidra_vftable_SCNewSessionPlayActionFactory[];
extern char ghidra_vftable_SCNewWizAccountManagerEventSource[];
extern char ghidra_vftable_SCNewWizEventSource[];
extern char ghidra_vftable_SCNewWizLifecycleManagerEventSource[];
extern char ghidra_vftable_SCNewWizMuseBleClientEventSource[];
extern char ghidra_vftable_SCNewWizPageFor_SCAccountChangeEmailWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCAccountEmailVerificationWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCAccountLoginWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCAccountResetPasswordWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCAccountWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCAppVersionCheckWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCAutoApConnectTestWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCBondingMemberSelectWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCBondingWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCChirpTestWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCFixUnconfiguredWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCLegacyTVSetupWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCNfcTestWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCSonanceDetectionWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCSonosVoiceConfigWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCSonosVoiceSetupWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCSystemConfigWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCTVRemoteControlWizard_[];
extern char ghidra_vftable_SCNewWizPageFor_SCWifiConfigWizard_[];
extern char ghidra_vftable_SCNewWizWifiDelegateCallback[];
extern char ghidra_vftable_SCNoArgSaveAction[];
extern char ghidra_vftable_SCNowPlayingEventSink[];
extern char ghidra_vftable_SCNowPlayingRatingsEnhanced[];
extern char ghidra_vftable_SCNowPlayingRatingsProxy[];
extern char ghidra_vftable_SCNowPlayingSource[];
extern char ghidra_vftable_SCNowPlayingSourceHTAudioStream[];
extern char ghidra_vftable_SCNowPlayingSourceProxy[];
extern char ghidra_vftable_SCNowPlayingTransportProxy[];
extern char ghidra_vftable_SCNullParamRX[];
extern char ghidra_vftable_SCOfflineDeviceHiddenConfirmation[];
extern char ghidra_vftable_SCOfflineTroubleshootAction[];
extern char ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState[];
extern char ghidra_vftable_SCOnlineUpdateFinishSecureReg[];
extern char ghidra_vftable_SCOpAddLinkCodeAccount[];
extern char ghidra_vftable_SCOpAddShare[];
extern char ghidra_vftable_SCOpCheckForUpdate[];
extern char ghidra_vftable_SCOpConnectToProduct[];
extern char ghidra_vftable_SCOpImpl_SCIOp_GetCertBundleAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RAccountCreateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RAccountDeletionAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RAccountLoginAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RAccountRefreshTokensAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RBondingOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RConnectedPartnerRemoveAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RConnectedPartnersGetAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RControlAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RDownloadServiceManifestFilesAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RFetchTokenAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RFileTransferDownloadAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RGetBetaSettingsAIOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RGetEthernetStatusAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RGetHouseholdSettingAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RGetNetworkConnectivityTestResultAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RHdmiGetInfoAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RHttpPostNoRedirectAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RLookupMetadataAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RLookupV1CertInfoAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RMuseGetPlayerInfoAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RMuseGetUserSettingsAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RMuseRateItemAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RMuseSetSettingsAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegAccountLoginAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegAccountTransferAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegBeginSecureTransferAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegCreateIdentityAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegEmailHintAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegGetEmailAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegGetUserAccountRequestAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegPasswordSetAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegPrepTransferPlayerAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegResetPasswordAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegUpdateUserAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegUserEmailAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegValidateEmailAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegVerifyEmailAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSecRegVerifyEmailSubmitAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RSetHouseholdSettingAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RStartNetworkConnectivityTestAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RTempDisableNetworkAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RUpnpCDCreateObjectAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RVoiceAccountUpdateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RVoiceServiceAlexaROWLocaleAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RVoiceServiceAmazonChallengeAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RVoiceServiceAmazonSkillAuthCodeAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RVoiceServiceAuthenticateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RVoiceServiceGetAccountInfoAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_RVoiceServiceNotifyInitiateOnboardingAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_SCOpDeviceVoiceSettingsCompoundSet_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_SCOpVoiceAcctWakeWordCompoundSet_[];
extern char ghidra_vftable_SCOpImpl_SCIOp_SCOpVoiceServiceCompoundDeleteAcct_[];
extern char ghidra_vftable_SCOpImpl_SCIOpAVTransportAddURIToSavedQueue_RUpnpAVTAddURIToSavedQueueAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpAddFavorites_RAddFavoritesAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpAddServiceAccount_RUpnpSPAddAccountXAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpAddServiceAccount_RUpnpSPAddOAuthAccountXAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpAddTracksToQueue_RUpnpAddQueueTracksOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpAlarmSave_RUpnpAsyncIOOperation_[];
extern char ghidra_vftable_SCOpImpl_SCIOpAudioInGetLineInLevel_RUpnpAIGetLineInLevelAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpAudioInSetLineInLevel_RUpnpAISetLineInLevelAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpCheckForControllerUpdates_RCheckForControllerUpdatesAsyncOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpConnectionManagerGetProtocolInfo_RUpnpCMGetProtocolInfoAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpDeviceDelete_RDeviceDeleteAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpDeviceGet_RDeviceGetAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpDevicePost_RDevicePostAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpDevicePropertiesGetLEDState_RUpnpDPGetLEDStateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpDevicePropertiesSetLEDState_RUpnpDPSetLEDStateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpDevicePut_RDevicePutAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpGenericUpdateQueue_RControlAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpGetAboutSonosString_RUpnpGetMultiZoneInfoAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpGetTrackPositionInfo_RUpnpAVTGetPositionInfoAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpGetUsageDataShareOption_RSPGetStringAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpHTControlGetIRRepeaterState_RUpnpHTCGetIRRepeaterStateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpHTControlGetLEDFeedbackState_RUpnpHTCGetLEDFeedbackStateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpHTControlIdentifyIRRemote_RUpnpHTCIdentifyIRRemoteAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpHTControlIsRemoteConfigured_RUpnpHTCIsRemoteConfiguredAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpHTControlLearnIRCode_RUpnpHTCLearnIRCodeAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpHTControlSetIRRepeaterState_RUpnpHTCSetIRRepeaterStateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpHTControlSetLEDFeedbackState_RUpnpHTCSetLEDFeedbackStateAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpQueueReplaceAllTracks_RUpnpQReplaceAllTracksAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpReplaceAccount_RUpnpSPReplaceAccountXAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpSecRegRegisterPlayer_RSecRegRegisterPlayerAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpSubmitDiagnostics_RControllerOnlySubmitDirectDiagnosticsAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpSubmitDiagnostics_RSubmitDiagnosticsAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpSubmitDiagnostics_RSubmitDirectDiagnosticsAIOOp_[];
extern char ghidra_vftable_SCOpImpl_SCIOpValidateServiceCredentials_RCPValidateOperation_[];
extern char ghidra_vftable_SCOpJoinHousehold[];
extern char ghidra_vftable_SCOpLegacyApConnectJoinNetwork[];
extern char ghidra_vftable_SCOpLoadLogo[];
extern char ghidra_vftable_SCOpNetstartGetAlive[];
extern char ghidra_vftable_SCOpNetstartGetCurrentChannel[];
extern char ghidra_vftable_SCOpNetstartGetScanList[];
extern char ghidra_vftable_SCOpNetstartSendQuery[];
extern char ghidra_vftable_SCOpNetstartSendRevert[];
extern char ghidra_vftable_SCOpPerformAction[];
extern char ghidra_vftable_SCOpPerformQueue[];
extern char ghidra_vftable_SCOpSendSetupMessage[];
extern char ghidra_vftable_SCOpSsidResponseObj[];
extern char ghidra_vftable_SCOpValidateServiceCredentials[];
extern char ghidra_vftable_SCOpenMusicServiceLinkActionDescriptor[];
extern char ghidra_vftable_SCOpenURIAction[];
extern char ghidra_vftable_SCOpenURIActionDescriptor[];
extern char ghidra_vftable_SCOpenUrlActionDescriptor[];
extern char ghidra_vftable_SCPlayContainerFactory[];
extern char ghidra_vftable_SCPlayMenuPlayContainerDescriptor[];
extern char ghidra_vftable_SCPlayNextUIAction[];
extern char ghidra_vftable_SCPlayNowUIAction[];
extern char ghidra_vftable_SCPlayQueue[];
extern char ghidra_vftable_SCPlayQueueDataSource[];
extern char ghidra_vftable_SCPlayQueueItem[];
extern char ghidra_vftable_SCPlayQueueMgr[];
extern char ghidra_vftable_SCPlaylistsBrowseDataSource[];
extern char ghidra_vftable_SCPlaylistsBrowseItem[];
extern char ghidra_vftable_SCPopulateLocalRadioAction[];
extern char ghidra_vftable_SCPopulateSonosRadioFavoritesAction[];
extern char ghidra_vftable_SCPostalCodeInput[];
extern char ghidra_vftable_SCPromptActionWrapper[];
extern char ghidra_vftable_SCProperty[];
extern char ghidra_vftable_SCPushUriDescriptor[];
extern char ghidra_vftable_SCQueueDeleteItemAction[];
extern char ghidra_vftable_SCQueueDeleteItemDescriptor[];
extern char ghidra_vftable_SCQueueMoveItemAction[];
extern char ghidra_vftable_SCQueueMoveItemDescriptor[];
extern char ghidra_vftable_SCRadioSetCityAction[];
extern char ghidra_vftable_SCRadioSetCityDescriptor[];
extern char ghidra_vftable_SCRadioSetZIPAction[];
extern char ghidra_vftable_SCRadioTimeSetRadioLocation[];
extern char ghidra_vftable_SCRateTrackAction[];
extern char ghidra_vftable_SCReceiptSessionVerify[];
extern char ghidra_vftable_SCRecentlyPlayedToggleActionFactory[];
extern char ghidra_vftable_SCRemoveConnectedPartnerAction[];
extern char ghidra_vftable_SCRemoveConnectedPartnerDescriptor[];
extern char ghidra_vftable_SCRemoveMeSettingsMenu[];
extern char ghidra_vftable_SCRemoveSSIDAction[];
extern char ghidra_vftable_SCRemoveSSIDDescriptor[];
extern char ghidra_vftable_SCRemoveServiceAction[];
extern char ghidra_vftable_SCRenameLineInAction[];
extern char ghidra_vftable_SCRenameLineInActionDescriptor[];
extern char ghidra_vftable_SCRenamePlaylistDescriptor[];
extern char ghidra_vftable_SCReplaceQueueUIAction[];
extern char ghidra_vftable_SCReportEventWithPropsAction[];
extern char ghidra_vftable_SCReportEventWithPropsCompoundAction[];
extern char ghidra_vftable_SCReportEventWithPropsOnGroupCompoundAction[];
extern char ghidra_vftable_SCReportManager[];
extern char ghidra_vftable_SCReportUploaderAIOClient[];
extern char ghidra_vftable_SCReportableActionDescriptor[];
extern char ghidra_vftable_SCResource[];
extern char ghidra_vftable_SCRoomResource[];
extern char ghidra_vftable_SCSearchHistoryViewBrowseItem[];
extern char ghidra_vftable_SCSearchPageDataSource[];
extern char ghidra_vftable_SCSearchParameters[];
extern char ghidra_vftable_SCSearchResultBrowseItem[];
extern char ghidra_vftable_SCSearchTypeDataSource[];
extern char ghidra_vftable_SCSearchTypeNonSonosItem[];
extern char ghidra_vftable_SCSearchTypeSonosItem[];
extern char ghidra_vftable_SCSearchViewBrowseItem[];
extern char ghidra_vftable_SCSearchViewDataSource[];
extern char ghidra_vftable_SCSearchable[];
extern char ghidra_vftable_SCSearchableCategory[];
extern char ghidra_vftable_SCSecureExistingEmailState[];
extern char ghidra_vftable_SCSecureExistingFinishSecureRegState[];
extern char ghidra_vftable_SCSecureExistingLookupState[];
extern char ghidra_vftable_SCSecureExistingWizardActionDescriptor[];
extern char ghidra_vftable_SCSecurePasswordInput[];
extern char ghidra_vftable_SCSecurePlayerWizardActionDescriptor[];
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
extern char ghidra_vftable_SCSecurityContext[];
extern char ghidra_vftable_SCSelectRoomsGenericErrorState[];
extern char ghidra_vftable_SCSelectRoomsListState[];
extern char ghidra_vftable_SCSelectRoomsRemoveVoiceServiceState[];
extern char ghidra_vftable_SCSelectRoomsWizard[];
extern char ghidra_vftable_SCSelectedItemsAddToQueueAtIdxDescriptor[];
extern char ghidra_vftable_SCSelectedItemsAddToQueueDescriptor[];
extern char ghidra_vftable_SCSelectedItemsPlayNextDescriptor[];
extern char ghidra_vftable_SCSelectedItemsPlayNowAction[];
extern char ghidra_vftable_SCSelectedItemsReplaceQueueDescriptor[];
extern char ghidra_vftable_SCSeparateStereoPairAction[];
extern char ghidra_vftable_SCServiceAccount[];
extern char ghidra_vftable_SCServiceAccountManager[];
extern char ghidra_vftable_SCServiceAppInteropAction[];
extern char ghidra_vftable_SCServiceAppInteropActionDescriptor[];
extern char ghidra_vftable_SCServiceDescriptorManager[];
extern char ghidra_vftable_SCServiceDescriptorManagerEventSink[];
extern char ghidra_vftable_SCServiceManifest[];
extern char ghidra_vftable_SCServiceOutageManager[];
extern char ghidra_vftable_SCServicePopup[];
extern char ghidra_vftable_SCSetAlarmMusicFactory[];
extern char ghidra_vftable_SCSetAutoplayVolumeAction[];
extern char ghidra_vftable_SCSetDateTimeActionBase[];
extern char ghidra_vftable_SCSetDateTimeActionDescriptorBase[];
extern char ghidra_vftable_SCSetDefaultAccountAction[];
extern char ghidra_vftable_SCSetDefaultAccountDescriptor[];
extern char ghidra_vftable_SCSetGroupMembersActionFactory[];
extern char ghidra_vftable_SCSettingsIndicatorItem[];
extern char ghidra_vftable_SCSettingsItemBase[];
extern char ghidra_vftable_SCSettingsMenu[];
extern char ghidra_vftable_SCSettingsMenuAlarm[];
extern char ghidra_vftable_SCSettingsMenuAlarmRoom[];
extern char ghidra_vftable_SCSettingsMenuAlarms[];
extern char ghidra_vftable_SCSettingsMenuApp[];
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
extern char ghidra_vftable_SCSettingsMenuInbox[];
extern char ghidra_vftable_SCSettingsMenuItem[];
extern char ghidra_vftable_SCSettingsMenuItemBrowse[];
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
extern char ghidra_vftable_SCSetupEngine[];
extern char ghidra_vftable_SCSetupFileUploadHelper__MultipartUploader[];
extern char ghidra_vftable_SCShareManager[];
extern char ghidra_vftable_SCShareManagerEventSink[];
extern char ghidra_vftable_SCShowEphemeralMessageActionFactory[];
extern char ghidra_vftable_SCShowUpdateMessageActionFactory[];
extern char ghidra_vftable_SCSimpleHTTPAction[];
extern char ghidra_vftable_SCSimpleHTTPActionDescriptor[];
extern char ghidra_vftable_SCSimpleStringValidator[];
extern char ghidra_vftable_SCSliderSettingActionBase[];
extern char ghidra_vftable_SCSliderSettingActionDescriptorBase[];
extern char ghidra_vftable_SCSocialSharingActionDescriptor[];
extern char ghidra_vftable_SCSonanceDetectionDetectResultsState[];
extern char ghidra_vftable_SCSonarCalibrationItem[];
extern char ghidra_vftable_SCSonarCalibrationToggleActionDescriptor[];
extern char ghidra_vftable_SCSonarWizardActionDescriptor[];
extern char ghidra_vftable_SCSonosAddToLibraryActionDescriptor[];
extern char ghidra_vftable_SCSonosAddToLibraryActionFactory[];
extern char ghidra_vftable_SCSonosDynamicListDataSource[];
extern char ghidra_vftable_SCSonosDynamicViewDataSource[];
extern char ghidra_vftable_SCSonosPlaylist[];
extern char ghidra_vftable_SCSonosRemoveFromLibraryActionDescriptor[];
extern char ghidra_vftable_SCSonosRemoveFromLibraryActionFactory[];
extern char ghidra_vftable_SCSortFoldersBySettingItem[];
extern char ghidra_vftable_SCSpinnerSettingsItem[];
extern char ghidra_vftable_SCSpinnerSettingsProperty[];
extern char ghidra_vftable_SCStartupReporter[];
extern char ghidra_vftable_SCStaticBrowseItem[];
extern char ghidra_vftable_SCStereoDualMonoSelectAction[];
extern char ghidra_vftable_SCStrPropDelegate[];
extern char ghidra_vftable_SCStrPropInputBase[];
extern char ghidra_vftable_SCStringFromCustomSettingsProperty[];
extern char ghidra_vftable_SCStringFromListSettingsProperty[];
extern char ghidra_vftable_SCStringTemplateNode[];
extern char ghidra_vftable_SCSwfObjACListener[];
extern char ghidra_vftable_SCSwfObjBCListener[];
extern char ghidra_vftable_SCSwfObjDDListener[];
extern char ghidra_vftable_SCSwfObjHHListener[];
extern char ghidra_vftable_SCSwfObjHTListener[];
extern char ghidra_vftable_SCSwfObjJHHListener[];
extern char ghidra_vftable_SCSwfObjMSDiscoveryListener[];
extern char ghidra_vftable_SCSwfObjQListener[];
extern char ghidra_vftable_SCSwfObjUMListener[];
extern char ghidra_vftable_SCSystemStatus[];
extern char ghidra_vftable_SCTVAutoplayToggleActionDescriptor[];
extern char ghidra_vftable_SCTVAutoplayZoneSettingItem[];
extern char ghidra_vftable_SCTVIRRepeaterSettingItem[];
extern char ghidra_vftable_SCTVIRRepeaterToggleActionDescriptor[];
extern char ghidra_vftable_SCTVIRSignalLightSettingItem[];
extern char ghidra_vftable_SCTVIRSignalLightToggleActionDescriptor[];
extern char ghidra_vftable_SCTVUngroupAutoplayToggleActionDescriptor[];
extern char ghidra_vftable_SCTextInputActionBase[];
extern char ghidra_vftable_SCTimeSettingsProperty[];
extern char ghidra_vftable_SCTimerUser[];
extern char ghidra_vftable_SCTmpMusicServiceDetailDataSource[];
extern char ghidra_vftable_SCTmpMusicServicesDataSource[];
extern char ghidra_vftable_SCToggleBooleanSettingActionBase[];
extern char ghidra_vftable_SCToggleBooleanSettingActionDescriptorBase[];
extern char ghidra_vftable_SCToggleScrobbleAction[];
extern char ghidra_vftable_SCToggleScrobblingBrowseItem[];
extern char ghidra_vftable_SCTuneinAddToRadioFavoritesActionDescriptor[];
extern char ghidra_vftable_SCTuneinAddToRadioFavoritesActionFactory[];
extern char ghidra_vftable_SCTuneinDeleteFromRadioFavoritesActionDescriptor[];
extern char ghidra_vftable_SCTuneinDeleteFromRadioFavoritesActionFactory[];
extern char ghidra_vftable_SCUpdateMusicIndexAction[];
extern char ghidra_vftable_SCUpdateNowBrowseItem[];
extern char ghidra_vftable_SCUpnpSubscriptionManager__Client[];
extern char ghidra_vftable_SCUrl[];
extern char ghidra_vftable_SCUrlConnection[];
extern char ghidra_vftable_SCUrlRequest[];
extern char ghidra_vftable_SCUrlResponse[];
extern char ghidra_vftable_SCUserAccountEventSink[];
extern char ghidra_vftable_SCVoiceAuthWizardActionDescriptor[];
extern char ghidra_vftable_SCVoiceSetupReporter[];
extern char ghidra_vftable_SCWhiteLEDToggleActionDescriptor[];
extern char ghidra_vftable_SCWifiConnector[];
extern char ghidra_vftable_SCWizStrProp[];
extern char ghidra_vftable_SCWizardState[];
extern char ghidra_vftable_SCZPInfo[];
extern char ghidra_vftable_SCZoneGroup[];
extern char ghidra_vftable_SCZoneGroupMgr[];
extern char ghidra_vftable_SwfObjAVTAdapter[];
extern char ghidra_vftable_SwfObjAlarm[];
extern char ghidra_vftable_SwfObjCM[];
extern char ghidra_vftable_SwfObjCP[];
extern char ghidra_vftable_SwfObjJoinHHMgr[];
extern char ghidra_vftable_SwfObjMSDevice[];
extern char ghidra_vftable_SwfObjMusicServiceDiscovery[];
extern char ghidra_vftable_SwfObjServiceAccount[];
extern char ghidra_vftable_SwfObjTrackRatingsModel[];
extern char ghidra_vftable_SwfObjUpnpService[];
extern char ghidra_vftable_SwfUpnpEventHandler[];
extern char ghidra_vftable_SwfWrappedObj_SwfObjAlarm_[];
extern char ghidra_vftable_SwfWrappedObj_SwfObjMusicServiceDiscovery_[];
extern char ghidra_vftable_SwfWrappedObj_SwfObjServiceAccount_[];
extern void thunk_FUN_1148a50e(void *allocation, unsigned int bytes) noexcept;
struct CallABI_thunk_FUN_10223600 { void thunk_FUN_10223600(undefined4); };
extern void __fastcall abi_call_thunk_FUN_101ba0d0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103d60a0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_101eb1b0(int *);
extern void __fastcall abi_call_thunk_FUN_10120220(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_101ec4a0(int *);
extern void __fastcall abi_call_thunk_FUN_104da760(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10202e00(int *);
extern void __fastcall abi_call_thunk_FUN_10203970(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_110a9ef0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_104d76e0(undefined4 *);
extern void __cdecl abi_call_thunk_FUN_113cfb70(undefined1 *, int);
extern void __fastcall abi_call_thunk_FUN_104dce00(int);
extern void __fastcall abi_call_thunk_FUN_1059c050(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1059d800(int);
extern undefined4 * __cdecl abi_call_thunk_FUN_10292c70(undefined4 *);
struct CallABI_thunk_FUN_1059d940 { void thunk_FUN_1059d940(uint); };
extern void __fastcall abi_call_thunk_FUN_10247e10(int *);
struct CallABI_thunk_FUN_102460b0 { undefined4 thunk_FUN_102460b0(undefined4, int *); };
struct CallABI_thunk_FUN_10246290 { undefined4 thunk_FUN_10246290(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_103d0880(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_104dec20(int);
extern void __fastcall abi_call_thunk_FUN_10266ff0(int *);
extern void __fastcall abi_call_thunk_FUN_10267120(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10267070(int *);
extern void __fastcall abi_call_thunk_FUN_1011f5e0(int);
extern void __fastcall abi_call_thunk_FUN_102c45c0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_102c44d0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_104ed870(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_102cceb0(int *);
extern void __fastcall abi_call_thunk_FUN_10b8e5c0(undefined4 *);
struct CallABI_thunk_FUN_102a3ea0 { undefined4 thunk_FUN_102a3ea0(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_102cc960(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_102cc870(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_102cf330(int);
extern void __fastcall abi_call_thunk_FUN_10b7b6a0(int);
extern void __fastcall abi_call_thunk_FUN_10b8ea90(int);
struct CallABI_thunk_FUN_102e6ae0 { undefined4 thunk_FUN_102e6ae0(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_112794c0(undefined4 *);
extern void __cdecl abi_call_thunk_FUN_112a7f20(undefined4 *);
extern undefined4 __cdecl abi_call_thunk_FUN_112a7c30(int);
struct CallABI_thunk_FUN_103447b0 { void thunk_FUN_103447b0(undefined4); };
extern void __fastcall abi_call_thunk_FUN_111c0af0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_11261f10(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10371ff0(int);
extern void __fastcall abi_call_thunk_FUN_1039fa00(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103a81d0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_102037c0(undefined4 *);
extern undefined1 __cdecl abi_call_thunk_FUN_101dce50(void);
extern void __cdecl abi_call_thunk_FUN_111fd590(void *);
extern void __fastcall abi_call_thunk_FUN_103e0ee0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e6620(int);
extern void __fastcall abi_call_thunk_FUN_103e20a0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e2cc0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e1d30(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e6690(int);
extern void __fastcall abi_call_thunk_FUN_103e15a0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e1890(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e6940(int);
extern void __fastcall abi_call_thunk_FUN_103e6a80(int);
extern void __fastcall abi_call_thunk_FUN_103e6af0(int);
extern void __fastcall abi_call_thunk_FUN_103e25c0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e6cd0(int);
extern void __fastcall abi_call_thunk_FUN_103e2440(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e1a50(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103e6d40(int);
extern void __fastcall abi_call_thunk_FUN_101eb2b0(undefined4 *);
struct CallABI_thunk_FUN_10432ee0 { undefined4 thunk_FUN_10432ee0(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_1127e5b0(int);
extern void __fastcall abi_call_thunk_FUN_104392d0(int);
extern void __fastcall abi_call_thunk_FUN_1043a670(undefined4 *);
extern undefined4 * __cdecl abi_call_thunk_FUN_10292cf0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10461ec0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_101f53d0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1022de20(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_104ad290(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_104fb0d0(int *);
extern void __fastcall abi_call_thunk_FUN_105036b0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10503a10(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10520f40(int);
extern void __fastcall abi_call_thunk_FUN_1051c870(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1053d930(int);
extern void __fastcall abi_call_thunk_FUN_1053f780(int);
extern void __fastcall abi_call_thunk_FUN_112818d0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10203d60(undefined4 *);
struct CallABI_thunk_FUN_10593d10 { undefined4 thunk_FUN_10593d10(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_10595470(int *);
extern void __fastcall abi_call_thunk_FUN_10def0d0(SCStr *);
extern void __fastcall abi_call_thunk_FUN_105d8de0(int);
extern void __fastcall abi_call_thunk_FUN_105d3a20(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_104ccb60(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_105a1c80(int *);
extern void __fastcall abi_call_thunk_FUN_105a1d20(int *);
extern void __fastcall abi_call_thunk_FUN_10eb6cc0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_106da680(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1036e480(int *);
extern void __fastcall abi_call_thunk_FUN_10655080(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_106842f0(int *);
extern void __fastcall abi_call_thunk_FUN_10688910(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_111482f0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_104ddf90(int);
extern void __fastcall abi_call_thunk_FUN_10692670(int *);
struct CallABI_thunk_FUN_106ab5b0 { undefined4 thunk_FUN_106ab5b0(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_106bab80(int *);
extern void __fastcall abi_call_thunk_FUN_106b3bd0(int *);
extern void __fastcall abi_call_thunk_FUN_101a2bf0(int *);
extern void __fastcall abi_call_thunk_FUN_106b36d0(int);
extern void __fastcall abi_call_thunk_FUN_1047a750(undefined4 *);
struct CallABI_thunk_FUN_106ab4f0 { undefined4 thunk_FUN_106ab4f0(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_106cffb0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_112665b0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10604820(int *);
extern void __fastcall abi_call_thunk_FUN_10604790(int *);
struct CallABI_thunk_FUN_108288d0 { undefined4 thunk_FUN_108288d0(undefined4, int *); };
extern void __cdecl abi_call_thunk_FUN_1086f2f0(undefined4, int *);
extern void __fastcall abi_call_thunk_FUN_10b98980(int);
extern void __fastcall abi_call_thunk_FUN_10b98450(undefined4 *);
struct CallABI_thunk_FUN_10bcf040 { undefined4 thunk_FUN_10bcf040(undefined4, int *); };
struct CallABI_thunk_FUN_10bceec0 { undefined4 thunk_FUN_10bceec0(undefined4, int *); };
extern void __cdecl abi_call_thunk_FUN_112af4e0(undefined4, undefined4, undefined4);
extern void __fastcall abi_call_thunk_FUN_10c24160(int *);
extern void __fastcall abi_call_thunk_FUN_10c23ed0(int);
extern void __fastcall abi_call_thunk_FUN_10c41180(int);
struct CallABI_thunk_FUN_101b8020 { uint thunk_FUN_101b8020(int); };
extern void __fastcall abi_call_thunk_FUN_10c67230(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10c892d0(int);
extern void __fastcall abi_call_thunk_FUN_10c89350(int);
struct CallABI_thunk_FUN_1028c030 { undefined4 thunk_FUN_1028c030(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_10ccb140(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10cce2f0(int);
extern void __fastcall abi_call_thunk_FUN_10ccb8a0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10ccb720(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10cce440(int);
extern void __fastcall abi_call_thunk_FUN_10cce510(int);
extern void __fastcall abi_call_thunk_FUN_10cdbe30(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_111a4f00(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10ce0370(int);
extern void __fastcall abi_call_thunk_FUN_10ce6fd0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10ce6ee0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10ce7220(int);
extern void __fastcall abi_call_thunk_FUN_10cee770(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10cf58e0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10cf71a0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10ce3510(int *);
extern void __fastcall abi_call_thunk_FUN_10fcd150(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10203dc0(undefined4 *);
extern undefined4 * __cdecl abi_call_thunk_FUN_1037bed0(undefined4 *, int);
extern void __fastcall abi_call_thunk_FUN_10d15c80(int *);
extern void __fastcall abi_call_thunk_FUN_104ddc70(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10cf7110(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10d43400(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10d53ba0(int *);
extern undefined4 * __cdecl abi_call_thunk_FUN_101da4a0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_102c03d0(undefined4 *);
struct CallABI_thunk_FUN_10d684f0 { undefined4 thunk_FUN_10d684f0(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_10d752e0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10d753d0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10d751f0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10d81060(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10d82d30(int);
extern void __fastcall abi_call_thunk_FUN_106845c0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_101eb3f0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10db8010(int *);
struct CallABI_thunk_FUN_10dec580 { undefined4 thunk_FUN_10dec580(undefined4, int *); };
extern undefined4 * __cdecl abi_call_thunk_FUN_10436cd0(undefined4 *);
extern undefined4 * __cdecl abi_call_thunk_FUN_10e01b60(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e26f80(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e26da0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e26e90(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103fa5c0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_101d19a0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103fa6b0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e5ef30(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e5e6b0(int *);
extern void __fastcall abi_call_thunk_FUN_10e5dc60(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e5dd50(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e5df30(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e5db70(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_11007f30(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e93360(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e93270(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e93180(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10e93450(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10edf790(undefined4 *);
struct CallABI_thunk_FUN_103434a0 { undefined1 thunk_FUN_103434a0(int); };
struct CallABI_thunk_FUN_10f23a20 { undefined4 thunk_FUN_10f23a20(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_10f25cd0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f31e90(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f33200(int);
extern void __fastcall abi_call_thunk_FUN_10f32100(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f33270(int);
extern void __fastcall abi_call_thunk_FUN_10f32370(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f332e0(int);
extern void __fastcall abi_call_thunk_FUN_10f32630(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f33350(int);
extern void __fastcall abi_call_thunk_FUN_10c83c80(int);
extern void __fastcall abi_call_thunk_FUN_10f46590(int);
extern void __fastcall abi_call_thunk_FUN_10f4a7a0(int *);
struct CallABI_FUN_10065348 { undefined4 FUN_10065348(int); };
extern void __fastcall abi_call_thunk_FUN_10f7dfd0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f7f140(int);
extern void __fastcall abi_call_thunk_FUN_10f7f220(int);
extern void __fastcall abi_call_thunk_FUN_10c68c80(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f82750(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f82b00(int *);
extern undefined4 * __cdecl abi_call_thunk_FUN_1023ab10(undefined4 *);
extern undefined4 * __cdecl abi_call_thunk_FUN_1037a2b0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10faf960(int);
extern void __fastcall abi_call_thunk_FUN_10305f70(int);
extern void __fastcall abi_call_thunk_FUN_10318ac0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10b6d850(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10f65c90(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_105d44d0(undefined4 *);
struct CallABI_thunk_FUN_111a05e0 { void thunk_FUN_111a05e0(int); };
extern void __fastcall abi_call_thunk_FUN_111c0a80(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_111fc270(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10bd6f00(int *);
extern void __fastcall abi_call_thunk_FUN_10dd1440(int *);
extern void __fastcall abi_call_thunk_FUN_11042880(undefined4 *);
struct CallABI_thunk_FUN_103d6930 { undefined4 thunk_FUN_103d6930(int); };
extern void __fastcall abi_call_thunk_FUN_11029220(int);
extern void __fastcall abi_call_thunk_FUN_110292a0(int);
extern void __fastcall abi_call_thunk_FUN_10f41620(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1103c2d0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1103d370(undefined4 *);
extern void __cdecl abi_call_thunk_FUN_111a6f10(void);
extern void __fastcall abi_call_thunk_FUN_112818e0(int);
extern void __fastcall abi_call_thunk_FUN_1118dfd0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_10207220(int *);
extern void __cdecl abi_call_thunk_FUN_110ee070(undefined4, int *);
extern void __fastcall abi_call_thunk_FUN_111054d0(int);
struct CallABI_thunk_FUN_110adac0 { undefined1 thunk_FUN_110adac0(int); };
struct CallABI_thunk_FUN_110b0460 { int thunk_FUN_110b0460(char); };
extern void __fastcall abi_call_thunk_FUN_1110b4d0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_111236c0(int);
extern void __fastcall abi_call_FUN_1003d5d7(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1111f330(int);
extern void __fastcall abi_call_thunk_FUN_1112ebd0(int);
extern void __fastcall abi_call_thunk_FUN_11079440(int *);
extern void __cdecl abi_call_thunk_FUN_1106b1c0(undefined4);
extern void __fastcall abi_call_thunk_FUN_111320a0(int *);
struct CallABI_thunk_FUN_111401c0 { void thunk_FUN_111401c0(undefined4); };
extern void __fastcall abi_call_thunk_FUN_11142290(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_11143170(int);
extern void __fastcall abi_call_thunk_FUN_1113e6f0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1050fff0(int *);
extern void __fastcall abi_call_thunk_FUN_110d9da0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_11234530(undefined4 *);
extern int FUN_10065348(...);
extern int thunk_FUN_1011be40(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b8020(...);
extern int thunk_FUN_10223600(...);
extern int thunk_FUN_102460b0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_1028c030(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102cf330(...);
extern int thunk_FUN_102e6ae0(...);
extern int thunk_FUN_103434a0(...);
extern int thunk_FUN_103447b0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_10432ee0(...);
extern int thunk_FUN_104d7a00(...);
extern int thunk_FUN_1052e8a0(...);
extern int thunk_FUN_10593d10(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_106ab4f0(...);
extern int thunk_FUN_106ab5b0(...);
extern int thunk_FUN_108288d0(...);
extern int thunk_FUN_10bcda40(...);
extern int thunk_FUN_10bceec0(...);
extern int thunk_FUN_10bcf040(...);
extern int thunk_FUN_10ce2c30(...);
extern int thunk_FUN_10d684f0(...);
extern int thunk_FUN_10dec580(...);
extern int thunk_FUN_10f23a20(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11095e00(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_1113c260(...);
extern int thunk_FUN_111401c0(...);
extern int thunk_FUN_111a05e0(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_1124a3d0(...);
extern int thunk_FUN_1124a3e0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1125d9d0(...);
extern int thunk_FUN_1127a080(...);
extern int thunk_FUN_11285a90(...);
extern int thunk_FUN_1145d260(...);
extern int SCLibFixCpUdnInUri(...);
extern int _eh_vector_destructor_iterator_(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int fclose(...);
extern int free(...);
struct Recovered_101263e0 { int FUN_101263e0(byte param_2) noexcept; };
struct Recovered_101269f0 { int FUN_101269f0(byte param_2) noexcept; };
struct Recovered_101b1680 { SCStr * FUN_101b1680(byte param_2) noexcept; };
struct Recovered_101b27d0 { int * FUN_101b27d0(int *param_2,int *param_3) noexcept; };
struct Recovered_101d5880 { SCStr * FUN_101d5880(byte param_2) noexcept; };
struct Recovered_101f5180 { undefined4 * FUN_101f5180(byte param_2) noexcept; };
struct Recovered_10205910 { undefined4 * FUN_10205910(byte param_2) noexcept; };
struct Recovered_10205d10 { undefined4 * FUN_10205d10(byte param_2) noexcept; };
struct Recovered_10205e00 { undefined4 * FUN_10205e00(byte param_2) noexcept; };
struct Recovered_10205f00 { undefined4 * FUN_10205f00(byte param_2) noexcept; };
struct Recovered_10206230 { undefined4 * FUN_10206230(byte param_2) noexcept; };
struct Recovered_10206310 { undefined4 * FUN_10206310(byte param_2) noexcept; };
struct Recovered_102063e0 { undefined4 * FUN_102063e0(byte param_2) noexcept; };
struct Recovered_102064b0 { undefined4 * FUN_102064b0(byte param_2) noexcept; };
struct Recovered_10206580 { undefined4 * FUN_10206580(byte param_2) noexcept; };
struct Recovered_10230bd0 { undefined4 * FUN_10230bd0(byte param_2) noexcept; };
struct Recovered_102313d0 { undefined4 * FUN_102313d0(byte param_2) noexcept; };
struct Recovered_10247a30 { SCStr * FUN_10247a30(byte param_2) noexcept; };
struct Recovered_10247b00 { SCStr * FUN_10247b00(byte param_2) noexcept; };
struct Recovered_10247ba0 { SCStr * FUN_10247ba0(byte param_2) noexcept; };
struct Recovered_1024c520 { undefined4 * FUN_1024c520(byte param_2) noexcept; };
struct Recovered_10259bd0 { SCStr * FUN_10259bd0(byte param_2) noexcept; };
struct Recovered_10259d90 { undefined4 * FUN_10259d90(byte param_2) noexcept; };
struct Recovered_1025fef0 { undefined4 * FUN_1025fef0(byte param_2) noexcept; };
struct Recovered_1025ffc0 { undefined4 * FUN_1025ffc0(byte param_2) noexcept; };
struct Recovered_10260090 { undefined4 * FUN_10260090(byte param_2) noexcept; };
struct Recovered_10260230 { undefined4 * FUN_10260230(byte param_2) noexcept; };
struct Recovered_102603a0 { undefined4 * FUN_102603a0(byte param_2) noexcept; };
struct Recovered_10297430 { SCStr * FUN_10297430(byte param_2) noexcept; };
struct Recovered_102978c0 { undefined4 * FUN_102978c0(byte param_2) noexcept; };
struct Recovered_102979c0 { undefined4 * FUN_102979c0(byte param_2) noexcept; };
struct Recovered_10297ac0 { undefined4 * FUN_10297ac0(byte param_2) noexcept; };
struct Recovered_10297bc0 { undefined4 * FUN_10297bc0(byte param_2) noexcept; };
struct Recovered_10297d10 { undefined4 * FUN_10297d10(byte param_2) noexcept; };
struct Recovered_102bdf30 { undefined4 * FUN_102bdf30(byte param_2) noexcept; };
struct Recovered_102c1a50 { undefined4 * FUN_102c1a50(byte param_2) noexcept; };
struct Recovered_102da130 { undefined4 * FUN_102da130(byte param_2) noexcept; };
struct Recovered_102da330 { undefined4 * FUN_102da330(byte param_2) noexcept; };
struct Recovered_102da3f0 { undefined4 * FUN_102da3f0(byte param_2) noexcept; };
struct Recovered_102da4b0 { undefined4 * FUN_102da4b0(byte param_2) noexcept; };
struct Recovered_102da560 { undefined4 * FUN_102da560(byte param_2) noexcept; };
struct Recovered_102ee850 { int * FUN_102ee850(byte param_2) noexcept; };
struct Recovered_102eeaf0 { undefined4 * FUN_102eeaf0(byte param_2) noexcept; };
struct Recovered_102eec40 { undefined4 * FUN_102eec40(byte param_2) noexcept; };
struct Recovered_102ef090 { undefined4 * FUN_102ef090(byte param_2) noexcept; };
struct Recovered_103027f0 { undefined4 * FUN_103027f0(byte param_2) noexcept; };
struct Recovered_10319c10 { undefined4 * FUN_10319c10(byte param_2) noexcept; };
struct Recovered_10337f50 { int FUN_10337f50(byte param_2) noexcept; };
struct Recovered_10337ff0 { int FUN_10337ff0(byte param_2) noexcept; };
struct Recovered_10338110 { SCStr * FUN_10338110(byte param_2) noexcept; };
struct Recovered_10339200 { void FUN_10339200(char param_2) noexcept; };
struct Recovered_103393e0 { void FUN_103393e0(char param_2) noexcept; };
struct Recovered_10368f60 { SCStr * FUN_10368f60(byte param_2) noexcept; };
struct Recovered_10369010 { SCStr * FUN_10369010(byte param_2) noexcept; };
struct Recovered_103696b0 { undefined4 * FUN_103696b0(byte param_2) noexcept; };
struct Recovered_1036a100 { undefined4 * FUN_1036a100(byte param_2) noexcept; };
struct Recovered_1036a510 { int FUN_1036a510(byte param_2) noexcept; };
struct Recovered_103a0360 { undefined4 * FUN_103a0360(byte param_2) noexcept; };
struct Recovered_103a97d0 { SCStr * FUN_103a97d0(byte param_2) noexcept; };
struct Recovered_103a9880 { undefined4 * FUN_103a9880(byte param_2) noexcept; };
struct Recovered_103c3e70 { int FUN_103c3e70(byte param_2) noexcept; };
struct Recovered_103e4ac0 { undefined4 * FUN_103e4ac0(byte param_2) noexcept; };
struct Recovered_10417200 { undefined4 * FUN_10417200(byte param_2) noexcept; };
struct Recovered_1042b2d0 { undefined4 * FUN_1042b2d0(byte param_2) noexcept; };
struct Recovered_1042b6d0 { undefined4 * FUN_1042b6d0(byte param_2) noexcept; };
struct Recovered_1042b8c0 { undefined4 * FUN_1042b8c0(byte param_2) noexcept; };
struct Recovered_1043abc0 { undefined4 * FUN_1043abc0(byte param_2) noexcept; };
struct Recovered_1043d320 { undefined4 * FUN_1043d320(byte param_2) noexcept; };
struct Recovered_1043e9c0 { undefined4 * FUN_1043e9c0(byte param_2) noexcept; };
struct Recovered_10441e80 { undefined4 * FUN_10441e80(byte param_2) noexcept; };
struct Recovered_104442c0 { undefined4 * FUN_104442c0(byte param_2) noexcept; };
struct Recovered_104443f0 { undefined4 * FUN_104443f0(byte param_2) noexcept; };
struct Recovered_104444b0 { undefined4 * FUN_104444b0(byte param_2) noexcept; };
struct Recovered_1044fe50 { undefined4 * FUN_1044fe50(byte param_2) noexcept; };
struct Recovered_1044ff40 { undefined4 * FUN_1044ff40(byte param_2) noexcept; };
struct Recovered_10457630 { undefined4 * FUN_10457630(byte param_2) noexcept; };
struct Recovered_10457720 { undefined4 * FUN_10457720(byte param_2) noexcept; };
struct Recovered_1045f750 { undefined4 * FUN_1045f750(byte param_2) noexcept; };
struct Recovered_10462820 { undefined4 * FUN_10462820(byte param_2) noexcept; };
struct Recovered_10462990 { undefined4 * FUN_10462990(byte param_2) noexcept; };
struct Recovered_10462a90 { undefined4 * FUN_10462a90(byte param_2) noexcept; };
struct Recovered_10468050 { undefined4 * FUN_10468050(byte param_2) noexcept; };
struct Recovered_104681b0 { undefined4 * FUN_104681b0(byte param_2) noexcept; };
struct Recovered_1046c6f0 { undefined4 * FUN_1046c6f0(byte param_2) noexcept; };
struct Recovered_10473040 { undefined4 * FUN_10473040(byte param_2) noexcept; };
struct Recovered_10475e20 { undefined4 * FUN_10475e20(byte param_2) noexcept; };
struct Recovered_10475f30 { undefined4 * FUN_10475f30(byte param_2) noexcept; };
struct Recovered_10476000 { undefined4 * FUN_10476000(byte param_2) noexcept; };
struct Recovered_1047a060 { undefined4 * FUN_1047a060(byte param_2) noexcept; };
struct Recovered_10498850 { undefined4 * FUN_10498850(byte param_2) noexcept; };
struct Recovered_10498910 { undefined4 * FUN_10498910(byte param_2) noexcept; };
struct Recovered_10498a10 { undefined4 * FUN_10498a10(byte param_2) noexcept; };
struct Recovered_10498b30 { undefined4 * FUN_10498b30(byte param_2) noexcept; };
struct Recovered_1049ffd0 { undefined4 * FUN_1049ffd0(byte param_2) noexcept; };
struct Recovered_104a0190 { undefined4 * FUN_104a0190(byte param_2) noexcept; };
struct Recovered_104a02b0 { undefined4 * FUN_104a02b0(byte param_2) noexcept; };
struct Recovered_104a03d0 { undefined4 * FUN_104a03d0(byte param_2) noexcept; };
struct Recovered_104a0550 { undefined4 * FUN_104a0550(byte param_2) noexcept; };
struct Recovered_104a06f0 { undefined4 * FUN_104a06f0(byte param_2) noexcept; };
struct Recovered_104a07f0 { undefined4 * FUN_104a07f0(byte param_2) noexcept; };
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
struct Recovered_104c44b0 { undefined4 * FUN_104c44b0(byte param_2) noexcept; };
struct Recovered_104c9c40 { undefined4 * FUN_104c9c40(byte param_2) noexcept; };
struct Recovered_104cd110 { undefined4 * FUN_104cd110(byte param_2) noexcept; };
struct Recovered_104cd3c0 { undefined4 * FUN_104cd3c0(byte param_2) noexcept; };
struct Recovered_104cd4c0 { undefined4 * FUN_104cd4c0(byte param_2) noexcept; };
struct Recovered_104cd6a0 { SCStr * FUN_104cd6a0(byte param_2) noexcept; };
struct Recovered_104fbc10 { SCStr * FUN_104fbc10(byte param_2) noexcept; };
struct Recovered_10504e60 { undefined4 * FUN_10504e60(byte param_2) noexcept; };
struct Recovered_105051d0 { undefined4 * FUN_105051d0(byte param_2) noexcept; };
struct Recovered_1051d7c0 { undefined4 * FUN_1051d7c0(byte param_2) noexcept; };
struct Recovered_1051d980 { undefined4 * FUN_1051d980(byte param_2) noexcept; };
struct Recovered_1051db10 { undefined4 * FUN_1051db10(byte param_2) noexcept; };
struct Recovered_1051ded0 { undefined4 * FUN_1051ded0(byte param_2) noexcept; };
struct Recovered_1052aef0 { undefined4 * FUN_1052aef0(byte param_2) noexcept; };
struct Recovered_1052b080 { undefined4 * FUN_1052b080(byte param_2) noexcept; };
struct Recovered_1052b150 { undefined4 * FUN_1052b150(byte param_2) noexcept; };
struct Recovered_1052b4d0 { undefined4 * FUN_1052b4d0(byte param_2) noexcept; };
struct Recovered_1052b5a0 { undefined4 * FUN_1052b5a0(byte param_2) noexcept; };
struct Recovered_1052b960 { undefined4 * FUN_1052b960(byte param_2) noexcept; };
struct Recovered_1052be20 { undefined4 * FUN_1052be20(byte param_2) noexcept; };
struct Recovered_1052bf00 { undefined4 * FUN_1052bf00(byte param_2) noexcept; };
struct Recovered_1052c3e0 { undefined4 * FUN_1052c3e0(byte param_2) noexcept; };
struct Recovered_1052c600 { undefined4 * FUN_1052c600(byte param_2) noexcept; };
struct Recovered_10550910 { SCStr * FUN_10550910(byte param_2) noexcept; };
struct Recovered_10550b80 { undefined4 * FUN_10550b80(byte param_2) noexcept; };
struct Recovered_1055a5d0 { undefined4 * FUN_1055a5d0(byte param_2) noexcept; };
struct Recovered_1055a6d0 { undefined4 * FUN_1055a6d0(byte param_2) noexcept; };
struct Recovered_1055a830 { undefined4 * FUN_1055a830(byte param_2) noexcept; };
struct Recovered_1055a960 { undefined4 * FUN_1055a960(byte param_2) noexcept; };
struct Recovered_1055ac80 { undefined4 * FUN_1055ac80(byte param_2) noexcept; };
struct Recovered_1055ada0 { undefined4 * FUN_1055ada0(byte param_2) noexcept; };
struct Recovered_1055b010 { undefined4 * FUN_1055b010(byte param_2) noexcept; };
struct Recovered_10560580 { undefined4 * FUN_10560580(byte param_2) noexcept; };
struct Recovered_10560690 { undefined4 * FUN_10560690(byte param_2) noexcept; };
struct Recovered_10567070 { undefined4 * FUN_10567070(byte param_2) noexcept; };
struct Recovered_105671e0 { undefined4 * FUN_105671e0(byte param_2) noexcept; };
struct Recovered_10567360 { undefined4 * FUN_10567360(byte param_2) noexcept; };
struct Recovered_105676a0 { undefined4 * FUN_105676a0(byte param_2) noexcept; };
struct Recovered_105677f0 { undefined4 * FUN_105677f0(byte param_2) noexcept; };
struct Recovered_10567960 { undefined4 * FUN_10567960(byte param_2) noexcept; };
struct Recovered_10567bb0 { undefined4 * FUN_10567bb0(byte param_2) noexcept; };
struct Recovered_10567e80 { undefined4 * FUN_10567e80(byte param_2) noexcept; };
struct Recovered_10568060 { undefined4 * FUN_10568060(byte param_2) noexcept; };
struct Recovered_105681a0 { undefined4 * FUN_105681a0(byte param_2) noexcept; };
struct Recovered_1057c320 { undefined4 * FUN_1057c320(byte param_2) noexcept; };
struct Recovered_1057c4b0 { undefined4 * FUN_1057c4b0(byte param_2) noexcept; };
struct Recovered_1057c5e0 { undefined4 * FUN_1057c5e0(byte param_2) noexcept; };
struct Recovered_1057c700 { undefined4 * FUN_1057c700(byte param_2) noexcept; };
struct Recovered_1057c830 { undefined4 * FUN_1057c830(byte param_2) noexcept; };
struct Recovered_1057cc60 { undefined4 * FUN_1057cc60(byte param_2) noexcept; };
struct Recovered_1057ce20 { undefined4 * FUN_1057ce20(byte param_2) noexcept; };
struct Recovered_1057cf00 { undefined4 * FUN_1057cf00(byte param_2) noexcept; };
struct Recovered_1057cfd0 { undefined4 * FUN_1057cfd0(byte param_2) noexcept; };
struct Recovered_105890b0 { undefined4 * FUN_105890b0(byte param_2) noexcept; };
struct Recovered_10589220 { undefined4 * FUN_10589220(byte param_2) noexcept; };
struct Recovered_105892f0 { undefined4 * FUN_105892f0(byte param_2) noexcept; };
struct Recovered_105894d0 { undefined4 * FUN_105894d0(byte param_2) noexcept; };
struct Recovered_10595ae0 { SCStr * FUN_10595ae0(byte param_2) noexcept; };
struct Recovered_1059e400 { undefined4 * FUN_1059e400(byte param_2) noexcept; };
struct Recovered_105a9a40 { SCStr * FUN_105a9a40(byte param_2) noexcept; };
struct Recovered_105a9bf0 { int FUN_105a9bf0(byte param_2) noexcept; };
struct Recovered_105c4560 { undefined4 * FUN_105c4560(byte param_2) noexcept; };
struct Recovered_105c4660 { undefined4 * FUN_105c4660(byte param_2) noexcept; };
struct Recovered_105c4790 { undefined4 * FUN_105c4790(byte param_2) noexcept; };
struct Recovered_105c4860 { undefined4 * FUN_105c4860(byte param_2) noexcept; };
struct Recovered_105d4f10 { SCStr * FUN_105d4f10(byte param_2) noexcept; };
struct Recovered_105d55d0 { undefined4 * FUN_105d55d0(byte param_2) noexcept; };
struct Recovered_105d5790 { undefined4 * FUN_105d5790(byte param_2) noexcept; };
struct Recovered_105d5a00 { undefined4 * FUN_105d5a00(byte param_2) noexcept; };
struct Recovered_105d5ad0 { undefined4 * FUN_105d5ad0(byte param_2) noexcept; };
struct Recovered_105d5ff0 { undefined4 * FUN_105d5ff0(byte param_2) noexcept; };
struct Recovered_105d61c0 { undefined4 * FUN_105d61c0(byte param_2) noexcept; };
struct Recovered_105d6320 { undefined4 * FUN_105d6320(byte param_2) noexcept; };
struct Recovered_105d6440 { undefined4 * FUN_105d6440(byte param_2) noexcept; };
struct Recovered_105d6750 { undefined4 * FUN_105d6750(byte param_2) noexcept; };
struct Recovered_105e7e40 { undefined4 * FUN_105e7e40(byte param_2) noexcept; };
struct Recovered_10602780 { undefined4 * FUN_10602780(byte param_2) noexcept; };
struct Recovered_10602f40 { undefined4 * FUN_10602f40(byte param_2) noexcept; };
struct Recovered_10603a60 { int FUN_10603a60(byte param_2) noexcept; };
struct Recovered_1061cf50 { undefined4 * FUN_1061cf50(byte param_2) noexcept; };
struct Recovered_1065a110 { int FUN_1065a110(byte param_2) noexcept; };
struct Recovered_10684d60 { SCStr * FUN_10684d60(byte param_2) noexcept; };
struct Recovered_106892b0 { undefined4 * FUN_106892b0(byte param_2) noexcept; };
struct Recovered_10697b00 { undefined4 * FUN_10697b00(byte param_2) noexcept; };
struct Recovered_10697cc0 { undefined4 * FUN_10697cc0(byte param_2) noexcept; };
struct Recovered_1069d350 { SCStr * FUN_1069d350(byte param_2) noexcept; };
struct Recovered_106a16e0 { undefined4 * FUN_106a16e0(byte param_2) noexcept; };
struct Recovered_106af410 { void FUN_106af410(int *param_2,int *param_3); };
struct Recovered_106b6d90 { undefined4 * FUN_106b6d90(byte param_2) noexcept; };
struct Recovered_106b7050 { undefined4 * FUN_106b7050(byte param_2) noexcept; };
struct Recovered_106b7120 { undefined4 * FUN_106b7120(byte param_2) noexcept; };
struct Recovered_106b71f0 { undefined4 * FUN_106b71f0(byte param_2) noexcept; };
struct Recovered_106b72c0 { undefined4 * FUN_106b72c0(byte param_2) noexcept; };
struct Recovered_106b7390 { undefined4 * FUN_106b7390(byte param_2) noexcept; };
struct Recovered_106b7490 { undefined4 * FUN_106b7490(byte param_2) noexcept; };
struct Recovered_106b7560 { undefined4 * FUN_106b7560(byte param_2) noexcept; };
struct Recovered_106b76d0 { undefined4 * FUN_106b76d0(byte param_2) noexcept; };
struct Recovered_106b77a0 { undefined4 * FUN_106b77a0(byte param_2) noexcept; };
struct Recovered_106b7870 { undefined4 * FUN_106b7870(byte param_2) noexcept; };
struct Recovered_106b7940 { undefined4 * FUN_106b7940(byte param_2) noexcept; };
struct Recovered_106b7a10 { undefined4 * FUN_106b7a10(byte param_2) noexcept; };
struct Recovered_106b7ae0 { undefined4 * FUN_106b7ae0(byte param_2) noexcept; };
struct Recovered_106b7d50 { undefined4 * FUN_106b7d50(byte param_2) noexcept; };
struct Recovered_106b7e20 { undefined4 * FUN_106b7e20(byte param_2) noexcept; };
struct Recovered_106b7ef0 { undefined4 * FUN_106b7ef0(byte param_2) noexcept; };
struct Recovered_106b8060 { undefined4 * FUN_106b8060(byte param_2) noexcept; };
struct Recovered_106bb440 { int FUN_106bb440(int *param_2); };
struct Recovered_106bb540 { int FUN_106bb540(int *param_2) noexcept; };
struct Recovered_106d0310 { undefined4 * FUN_106d0310(byte param_2) noexcept; };
struct Recovered_106d3450 { SCStr * FUN_106d3450(byte param_2) noexcept; };
struct Recovered_106e63a0 { undefined4 * FUN_106e63a0(byte param_2) noexcept; };
struct Recovered_106e6ac0 { int FUN_106e6ac0(byte param_2) noexcept; };
struct Recovered_106e6d30 { undefined4 * FUN_106e6d30(byte param_2) noexcept; };
struct Recovered_106e6df0 { undefined4 * FUN_106e6df0(byte param_2) noexcept; };
struct Recovered_106f8c50 { undefined4 * FUN_106f8c50(byte param_2) noexcept; };
struct Recovered_106f8f20 { int FUN_106f8f20(byte param_2) noexcept; };
struct Recovered_10703fc0 { undefined4 * FUN_10703fc0(byte param_2) noexcept; };
struct Recovered_107041f0 { int FUN_107041f0(byte param_2) noexcept; };
struct Recovered_10704350 { undefined4 * FUN_10704350(byte param_2) noexcept; };
struct Recovered_1070aca0 { undefined4 * FUN_1070aca0(byte param_2) noexcept; };
struct Recovered_1070adf0 { undefined4 * FUN_1070adf0(byte param_2) noexcept; };
struct Recovered_1070b070 { int FUN_1070b070(byte param_2) noexcept; };
struct Recovered_10713540 { undefined4 * FUN_10713540(byte param_2) noexcept; };
struct Recovered_1071a200 { int FUN_1071a200(byte param_2) noexcept; };
struct Recovered_1072ccc0 { int FUN_1072ccc0(byte param_2) noexcept; };
struct Recovered_1072dba0 { int FUN_1072dba0(byte param_2) noexcept; };
struct Recovered_1072dcd0 { undefined4 * FUN_1072dcd0(byte param_2) noexcept; };
struct Recovered_1072e090 { void FUN_1072e090(char param_2) noexcept; };
struct Recovered_1074b910 { int FUN_1074b910(byte param_2) noexcept; };
struct Recovered_1074d250 { int FUN_1074d250(byte param_2) noexcept; };
struct Recovered_1075a9d0 { undefined4 * FUN_1075a9d0(byte param_2) noexcept; };
struct Recovered_1075ab40 { int FUN_1075ab40(byte param_2) noexcept; };
struct Recovered_10763a90 { int FUN_10763a90(byte param_2) noexcept; };
struct Recovered_107685d0 { int FUN_107685d0(byte param_2) noexcept; };
struct Recovered_10774b30 { int FUN_10774b30(byte param_2) noexcept; };
struct Recovered_1077c550 { int FUN_1077c550(byte param_2) noexcept; };
struct Recovered_10791090 { undefined4 * FUN_10791090(byte param_2) noexcept; };
struct Recovered_10791260 { undefined4 * FUN_10791260(byte param_2) noexcept; };
struct Recovered_10792010 { undefined4 * FUN_10792010(byte param_2) noexcept; };
struct Recovered_10792170 { undefined4 * FUN_10792170(byte param_2) noexcept; };
struct Recovered_10792780 { undefined4 * FUN_10792780(byte param_2) noexcept; };
struct Recovered_107928f0 { undefined4 * FUN_107928f0(byte param_2) noexcept; };
struct Recovered_107d01f0 { undefined4 * FUN_107d01f0(byte param_2) noexcept; };
struct Recovered_107d0330 { undefined4 * FUN_107d0330(byte param_2) noexcept; };
struct Recovered_107d0db0 { int FUN_107d0db0(byte param_2) noexcept; };
struct Recovered_107ecf70 { int FUN_107ecf70(byte param_2) noexcept; };
struct Recovered_108039d0 { int FUN_108039d0(byte param_2) noexcept; };
struct Recovered_10813510 { int FUN_10813510(byte param_2) noexcept; };
struct Recovered_1082c370 { SCStr * FUN_1082c370(byte param_2) noexcept; };
struct Recovered_10830680 { void FUN_10830680(int *param_2,int param_3); };
struct Recovered_10847b50 { undefined4 * FUN_10847b50(byte param_2) noexcept; };
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
struct Recovered_109b8370 { undefined4 * FUN_109b8370(byte param_2) noexcept; };
struct Recovered_109b8690 { int FUN_109b8690(byte param_2) noexcept; };
struct Recovered_109c0d80 { int FUN_109c0d80(byte param_2) noexcept; };
struct Recovered_109c51d0 { undefined4 * FUN_109c51d0(byte param_2) noexcept; };
struct Recovered_109c5520 { int FUN_109c5520(byte param_2) noexcept; };
struct Recovered_109ccb40 { int FUN_109ccb40(byte param_2) noexcept; };
struct Recovered_109da830 { int FUN_109da830(byte param_2) noexcept; };
struct Recovered_109e4330 { undefined4 * FUN_109e4330(byte param_2) noexcept; };
struct Recovered_109e47a0 { int FUN_109e47a0(byte param_2) noexcept; };
struct Recovered_109efaa0 { int FUN_109efaa0(byte param_2) noexcept; };
struct Recovered_109f9820 { undefined4 * FUN_109f9820(byte param_2) noexcept; };
struct Recovered_109f99e0 { undefined4 * FUN_109f99e0(byte param_2) noexcept; };
struct Recovered_10a0a3a0 { int FUN_10a0a3a0(byte param_2) noexcept; };
struct Recovered_10a0e190 { int FUN_10a0e190(byte param_2) noexcept; };
struct Recovered_10a41b60 { int FUN_10a41b60(byte param_2) noexcept; };
struct Recovered_10a45320 { int FUN_10a45320(byte param_2) noexcept; };
struct Recovered_10a49a70 { int FUN_10a49a70(byte param_2) noexcept; };
struct Recovered_10a77390 { undefined4 * FUN_10a77390(byte param_2) noexcept; };
struct Recovered_10a77610 { int FUN_10a77610(byte param_2) noexcept; };
struct Recovered_10a81050 { undefined4 * FUN_10a81050(byte param_2) noexcept; };
struct Recovered_10a8a360 { int FUN_10a8a360(byte param_2) noexcept; };
struct Recovered_10a9c2f0 { int FUN_10a9c2f0(byte param_2) noexcept; };
struct Recovered_10b00220 { undefined4 * FUN_10b00220(byte param_2) noexcept; };
struct Recovered_10b053c0 { undefined4 * FUN_10b053c0(byte param_2) noexcept; };
struct Recovered_10b0f030 { int FUN_10b0f030(byte param_2) noexcept; };
struct Recovered_10b35b70 { int FUN_10b35b70(byte param_2) noexcept; };
struct Recovered_10b35d10 { undefined4 * FUN_10b35d10(byte param_2) noexcept; };
struct Recovered_10b76fd0 { undefined4 * FUN_10b76fd0(byte param_2) noexcept; };
struct Recovered_10b770d0 { undefined4 * FUN_10b770d0(byte param_2) noexcept; };
struct Recovered_10b771c0 { undefined4 * FUN_10b771c0(byte param_2) noexcept; };
struct Recovered_10b7ddc0 { undefined4 * FUN_10b7ddc0(byte param_2) noexcept; };
struct Recovered_10b7e0e0 { undefined4 * FUN_10b7e0e0(byte param_2) noexcept; };
struct Recovered_10b9a240 { undefined4 * FUN_10b9a240(byte param_2) noexcept; };
struct Recovered_10bb6110 { SCStr * FUN_10bb6110(byte param_2) noexcept; };
struct Recovered_10bb6290 { undefined4 * FUN_10bb6290(byte param_2) noexcept; };
struct Recovered_10bbb910 { undefined4 * FUN_10bbb910(byte param_2) noexcept; };
struct Recovered_10bc0900 { undefined4 * FUN_10bc0900(byte param_2) noexcept; };
struct Recovered_10bd9220 { int FUN_10bd9220(byte param_2) noexcept; };
struct Recovered_10bee0b0 { undefined4 * FUN_10bee0b0(byte param_2) noexcept; };
struct Recovered_10bf0830 { undefined4 * FUN_10bf0830(byte param_2) noexcept; };
struct Recovered_10bf2f00 { undefined4 * FUN_10bf2f00(byte param_2) noexcept; };
struct Recovered_10bf3390 { undefined4 * FUN_10bf3390(byte param_2) noexcept; };
struct Recovered_10bfefb0 { undefined4 * FUN_10bfefb0(byte param_2) noexcept; };
struct Recovered_10c026e0 { undefined4 * FUN_10c026e0(byte param_2) noexcept; };
struct Recovered_10c065d0 { undefined4 * FUN_10c065d0(byte param_2) noexcept; };
struct Recovered_10c066b0 { undefined4 * FUN_10c066b0(byte param_2) noexcept; };
struct Recovered_10c24820 { SCStr * FUN_10c24820(byte param_2) noexcept; };
struct Recovered_10c248d0 { undefined4 * FUN_10c248d0(byte param_2) noexcept; };
struct Recovered_10c29640 { undefined4 * FUN_10c29640(byte param_2) noexcept; };
struct Recovered_10c2c170 { undefined4 * FUN_10c2c170(byte param_2) noexcept; };
struct Recovered_10c36850 { undefined4 * FUN_10c36850(byte param_2) noexcept; };
struct Recovered_10c421a0 { undefined4 * FUN_10c421a0(byte param_2) noexcept; };
struct Recovered_10c87bc0 { void FUN_10c87bc0(int *param_2,int *param_3); };
struct Recovered_10c87d20 { void FUN_10c87d20(int *param_2,int *param_3); };
struct Recovered_10c8a290 { int FUN_10c8a290(byte param_2) noexcept; };
struct Recovered_10c8a340 { int FUN_10c8a340(byte param_2) noexcept; };
struct Recovered_10c8b9e0 { int FUN_10c8b9e0(int *param_2); };
struct Recovered_10c8bb20 { int FUN_10c8bb20(int *param_2); };
struct Recovered_10c8bc70 { int FUN_10c8bc70(int *param_2) noexcept; };
struct Recovered_10c8bd30 { int FUN_10c8bd30(int *param_2) noexcept; };
struct Recovered_10ca2540 { undefined4 * FUN_10ca2540(byte param_2) noexcept; };
struct Recovered_10ca2640 { undefined4 * FUN_10ca2640(byte param_2) noexcept; };
struct Recovered_10ca2710 { undefined4 * FUN_10ca2710(byte param_2) noexcept; };
struct Recovered_10ca27e0 { undefined4 * FUN_10ca27e0(byte param_2) noexcept; };
struct Recovered_10ca2aa0 { undefined4 * FUN_10ca2aa0(byte param_2) noexcept; };
struct Recovered_10cbe7d0 { undefined4 * FUN_10cbe7d0(byte param_2) noexcept; };
struct Recovered_10cc1b50 { undefined4 * FUN_10cc1b50(byte param_2) noexcept; };
struct Recovered_10cdca00 { undefined4 * FUN_10cdca00(byte param_2) noexcept; };
struct Recovered_10cf5d20 { undefined4 * FUN_10cf5d20(byte param_2) noexcept; };
struct Recovered_10d029f0 { undefined4 * FUN_10d029f0(byte param_2) noexcept; };
struct Recovered_10d02ea0 { undefined4 * FUN_10d02ea0(byte param_2) noexcept; };
struct Recovered_10d12aa0 { undefined4 * FUN_10d12aa0(byte param_2) noexcept; };
struct Recovered_10d161f0 { undefined4 * FUN_10d161f0(byte param_2) noexcept; };
struct Recovered_10d1ad40 { undefined4 * FUN_10d1ad40(byte param_2) noexcept; };
struct Recovered_10d1aed0 { undefined4 * FUN_10d1aed0(byte param_2) noexcept; };
struct Recovered_10d1afa0 { undefined4 * FUN_10d1afa0(byte param_2) noexcept; };
struct Recovered_10d1df70 { undefined4 * FUN_10d1df70(byte param_2) noexcept; };
struct Recovered_10d1f6e0 { undefined4 * FUN_10d1f6e0(byte param_2) noexcept; };
struct Recovered_10d1f7d0 { undefined4 * FUN_10d1f7d0(byte param_2) noexcept; };
struct Recovered_10d22fa0 { undefined4 * FUN_10d22fa0(byte param_2) noexcept; };
struct Recovered_10d28120 { undefined4 * FUN_10d28120(byte param_2) noexcept; };
struct Recovered_10d28600 { undefined4 * FUN_10d28600(byte param_2) noexcept; };
struct Recovered_10d287a0 { undefined4 * FUN_10d287a0(byte param_2) noexcept; };
struct Recovered_10d30460 { undefined4 * FUN_10d30460(byte param_2) noexcept; };
struct Recovered_10d30520 { int FUN_10d30520(byte param_2) noexcept; };
struct Recovered_10d30700 { undefined4 * FUN_10d30700(byte param_2) noexcept; };
struct Recovered_10d30810 { undefined4 * FUN_10d30810(byte param_2) noexcept; };
struct Recovered_10d3b490 { undefined4 * FUN_10d3b490(byte param_2) noexcept; };
struct Recovered_10d3b560 { undefined4 * FUN_10d3b560(byte param_2) noexcept; };
struct Recovered_10d3e930 { undefined4 * FUN_10d3e930(byte param_2) noexcept; };
struct Recovered_10d3eb90 { undefined4 * FUN_10d3eb90(byte param_2) noexcept; };
struct Recovered_10d3ec90 { undefined4 * FUN_10d3ec90(byte param_2) noexcept; };
struct Recovered_10d43de0 { undefined4 * FUN_10d43de0(byte param_2) noexcept; };
struct Recovered_10d4c600 { undefined4 * FUN_10d4c600(byte param_2) noexcept; };
struct Recovered_10d4c750 { undefined4 * FUN_10d4c750(byte param_2) noexcept; };
struct Recovered_10d4c830 { undefined4 * FUN_10d4c830(byte param_2) noexcept; };
struct Recovered_10d4c910 { undefined4 * FUN_10d4c910(byte param_2) noexcept; };
struct Recovered_10d4c9f0 { undefined4 * FUN_10d4c9f0(byte param_2) noexcept; };
struct Recovered_10d4cb00 { undefined4 * FUN_10d4cb00(byte param_2) noexcept; };
struct Recovered_10d4cc70 { undefined4 * FUN_10d4cc70(byte param_2) noexcept; };
struct Recovered_10d61250 { undefined4 * FUN_10d61250(byte param_2) noexcept; };
struct Recovered_10d65210 { undefined4 * FUN_10d65210(byte param_2) noexcept; };
struct Recovered_10d6a220 { undefined4 * FUN_10d6a220(byte param_2) noexcept; };
struct Recovered_10d6a3d0 { undefined4 * FUN_10d6a3d0(byte param_2) noexcept; };
struct Recovered_10d6a520 { undefined4 * FUN_10d6a520(byte param_2) noexcept; };
struct Recovered_10d6a6b0 { undefined4 * FUN_10d6a6b0(byte param_2) noexcept; };
struct Recovered_10d764c0 { undefined4 * FUN_10d764c0(byte param_2) noexcept; };
struct Recovered_10d88d00 { int FUN_10d88d00(byte param_2) noexcept; };
struct Recovered_10d88de0 { int FUN_10d88de0(byte param_2) noexcept; };
struct Recovered_10d89780 { undefined4 * FUN_10d89780(byte param_2) noexcept; };
struct Recovered_10d8d170 { undefined4 * FUN_10d8d170(byte param_2) noexcept; };
struct Recovered_10d8d2c0 { undefined4 * FUN_10d8d2c0(byte param_2) noexcept; };
struct Recovered_10d94670 { undefined4 * FUN_10d94670(byte param_2) noexcept; };
struct Recovered_10d94830 { undefined4 * FUN_10d94830(byte param_2) noexcept; };
struct Recovered_10d9bfd0 { undefined4 * FUN_10d9bfd0(byte param_2) noexcept; };
struct Recovered_10da8130 { undefined4 * FUN_10da8130(byte param_2) noexcept; };
struct Recovered_10dae380 { undefined4 * FUN_10dae380(byte param_2) noexcept; };
struct Recovered_10dae4a0 { undefined4 * FUN_10dae4a0(byte param_2) noexcept; };
struct Recovered_10db9110 { SCStr * FUN_10db9110(byte param_2) noexcept; };
struct Recovered_10db91c0 { undefined4 * FUN_10db91c0(byte param_2) noexcept; };
struct Recovered_10db92e0 { undefined4 * FUN_10db92e0(byte param_2) noexcept; };
struct Recovered_10db93f0 { undefined4 * FUN_10db93f0(byte param_2) noexcept; };
struct Recovered_10db94e0 { undefined4 * FUN_10db94e0(byte param_2) noexcept; };
struct Recovered_10db9790 { undefined4 * FUN_10db9790(byte param_2) noexcept; };
struct Recovered_10dc3c90 { void FUN_10dc3c90(int *param_2,int param_3); };
struct Recovered_10dcaaf0 { undefined4 * FUN_10dcaaf0(byte param_2) noexcept; };
struct Recovered_10dcabb0 { undefined4 * FUN_10dcabb0(byte param_2) noexcept; };
struct Recovered_10dcacc0 { undefined4 * FUN_10dcacc0(byte param_2) noexcept; };
struct Recovered_10dcad80 { undefined4 * FUN_10dcad80(byte param_2) noexcept; };
struct Recovered_10dce430 { undefined4 * FUN_10dce430(byte param_2) noexcept; };
struct Recovered_10dcf500 { undefined4 * FUN_10dcf500(byte param_2) noexcept; };
struct Recovered_10dd8ab0 { undefined4 * FUN_10dd8ab0(byte param_2) noexcept; };
struct Recovered_10dd8d80 { undefined4 * FUN_10dd8d80(byte param_2) noexcept; };
struct Recovered_10de3830 { undefined4 * FUN_10de3830(byte param_2) noexcept; };
struct Recovered_10de3920 { undefined4 * FUN_10de3920(byte param_2) noexcept; };
struct Recovered_10de3a60 { undefined4 * FUN_10de3a60(byte param_2) noexcept; };
struct Recovered_10de58d0 { undefined4 * FUN_10de58d0(byte param_2) noexcept; };
struct Recovered_10df29f0 { undefined4 * FUN_10df29f0(byte param_2) noexcept; };
struct Recovered_10df2aa0 { undefined4 * FUN_10df2aa0(byte param_2) noexcept; };
struct Recovered_10e000d0 { undefined4 * FUN_10e000d0(byte param_2) noexcept; };
struct Recovered_10e0cb00 { int FUN_10e0cb00(byte param_2) noexcept; };
struct Recovered_10e138a0 { undefined4 * FUN_10e138a0(byte param_2) noexcept; };
struct Recovered_10e13be0 { undefined4 * FUN_10e13be0(byte param_2) noexcept; };
struct Recovered_10e13cb0 { undefined4 * FUN_10e13cb0(byte param_2) noexcept; };
struct Recovered_10e13d80 { undefined4 * FUN_10e13d80(byte param_2) noexcept; };
struct Recovered_10e13f70 { undefined4 * FUN_10e13f70(byte param_2) noexcept; };
struct Recovered_10e23590 { undefined4 * FUN_10e23590(byte param_2) noexcept; };
struct Recovered_10e23780 { undefined4 * FUN_10e23780(byte param_2) noexcept; };
struct Recovered_10e29270 { undefined4 * FUN_10e29270(byte param_2) noexcept; };
struct Recovered_10e29340 { undefined4 * FUN_10e29340(byte param_2) noexcept; };
struct Recovered_10e29410 { undefined4 * FUN_10e29410(byte param_2) noexcept; };
struct Recovered_10e29520 { undefined4 * FUN_10e29520(byte param_2) noexcept; };
struct Recovered_10e29640 { undefined4 * FUN_10e29640(byte param_2) noexcept; };
struct Recovered_10e29a90 { undefined4 * FUN_10e29a90(byte param_2) noexcept; };
struct Recovered_10e2a120 { undefined4 * FUN_10e2a120(byte param_2) noexcept; };
struct Recovered_10e2a300 { undefined4 * FUN_10e2a300(byte param_2) noexcept; };
struct Recovered_10e2a400 { undefined4 * FUN_10e2a400(byte param_2) noexcept; };
struct Recovered_10e2a560 { undefined4 * FUN_10e2a560(byte param_2) noexcept; };
struct Recovered_10e2a6e0 { undefined4 * FUN_10e2a6e0(byte param_2) noexcept; };
struct Recovered_10e47a10 { undefined4 * FUN_10e47a10(byte param_2) noexcept; };
struct Recovered_10e47e00 { undefined4 * FUN_10e47e00(byte param_2) noexcept; };
struct Recovered_10e51840 { undefined4 * FUN_10e51840(byte param_2) noexcept; };
struct Recovered_10e51b00 { undefined4 * FUN_10e51b00(byte param_2) noexcept; };
struct Recovered_10e51ea0 { undefined4 * FUN_10e51ea0(byte param_2) noexcept; };
struct Recovered_10e5ff80 { undefined4 * FUN_10e5ff80(byte param_2) noexcept; };
struct Recovered_10e60340 { undefined4 * FUN_10e60340(byte param_2) noexcept; };
struct Recovered_10e60430 { undefined4 * FUN_10e60430(byte param_2) noexcept; };
struct Recovered_10e60a10 { undefined4 * FUN_10e60a10(byte param_2) noexcept; };
struct Recovered_10e60bd0 { undefined4 * FUN_10e60bd0(byte param_2) noexcept; };
struct Recovered_10e60f30 { undefined4 * FUN_10e60f30(byte param_2) noexcept; };
struct Recovered_10e60ff0 { undefined4 * FUN_10e60ff0(byte param_2) noexcept; };
struct Recovered_10e76d10 { undefined4 * FUN_10e76d10(byte param_2) noexcept; };
struct Recovered_10e76f60 { undefined4 * FUN_10e76f60(byte param_2) noexcept; };
struct Recovered_10e772d0 { undefined4 * FUN_10e772d0(byte param_2) noexcept; };
struct Recovered_10e7ff70 { undefined4 * FUN_10e7ff70(byte param_2) noexcept; };
struct Recovered_10e839a0 { undefined4 * FUN_10e839a0(byte param_2) noexcept; };
struct Recovered_10e83aa0 { undefined4 * FUN_10e83aa0(byte param_2) noexcept; };
struct Recovered_10e97390 { undefined4 * FUN_10e97390(byte param_2) noexcept; };
struct Recovered_10e974d0 { undefined4 * FUN_10e974d0(byte param_2) noexcept; };
struct Recovered_10e97690 { undefined4 * FUN_10e97690(byte param_2) noexcept; };
struct Recovered_10e97770 { undefined4 * FUN_10e97770(byte param_2) noexcept; };
struct Recovered_10e978f0 { undefined4 * FUN_10e978f0(byte param_2) noexcept; };
struct Recovered_10e97ab0 { undefined4 * FUN_10e97ab0(byte param_2) noexcept; };
struct Recovered_10e97c20 { undefined4 * FUN_10e97c20(byte param_2) noexcept; };
struct Recovered_10e97cf0 { undefined4 * FUN_10e97cf0(byte param_2) noexcept; };
struct Recovered_10e97dc0 { undefined4 * FUN_10e97dc0(byte param_2) noexcept; };
struct Recovered_10e97f20 { undefined4 * FUN_10e97f20(byte param_2) noexcept; };
struct Recovered_10e97ff0 { undefined4 * FUN_10e97ff0(byte param_2) noexcept; };
struct Recovered_10e98230 { undefined4 * FUN_10e98230(byte param_2) noexcept; };
struct Recovered_10e985c0 { undefined4 * FUN_10e985c0(byte param_2) noexcept; };
struct Recovered_10e988e0 { undefined4 * FUN_10e988e0(byte param_2) noexcept; };
struct Recovered_10e98a50 { undefined4 * FUN_10e98a50(byte param_2) noexcept; };
struct Recovered_10e98bc0 { undefined4 * FUN_10e98bc0(byte param_2) noexcept; };
struct Recovered_10e98da0 { undefined4 * FUN_10e98da0(byte param_2) noexcept; };
struct Recovered_10e98ed0 { undefined4 * FUN_10e98ed0(byte param_2) noexcept; };
struct Recovered_10e98fa0 { undefined4 * FUN_10e98fa0(byte param_2) noexcept; };
struct Recovered_10e99100 { undefined4 * FUN_10e99100(byte param_2) noexcept; };
struct Recovered_10e99230 { undefined4 * FUN_10e99230(byte param_2) noexcept; };
struct Recovered_10e99300 { undefined4 * FUN_10e99300(byte param_2) noexcept; };
struct Recovered_10e99460 { undefined4 * FUN_10e99460(byte param_2) noexcept; };
struct Recovered_10e99530 { undefined4 * FUN_10e99530(byte param_2) noexcept; };
struct Recovered_10e996a0 { undefined4 * FUN_10e996a0(byte param_2) noexcept; };
struct Recovered_10eb74c0 { SCStr * FUN_10eb74c0(byte param_2) noexcept; };
struct Recovered_10eb7580 { SCStr * FUN_10eb7580(byte param_2) noexcept; };
struct Recovered_10ed1250 { int FUN_10ed1250(byte param_2) noexcept; };
struct Recovered_10edfc00 { undefined4 * FUN_10edfc00(byte param_2) noexcept; };
struct Recovered_10f04e80 { undefined4 * FUN_10f04e80(byte param_2) noexcept; };
struct Recovered_10f1cef0 { int FUN_10f1cef0(byte param_2) noexcept; };
struct Recovered_10f1cfb0 { int FUN_10f1cfb0(byte param_2) noexcept; };
struct Recovered_10f21b30 { undefined4 * FUN_10f21b30(byte param_2) noexcept; };
struct Recovered_10f26ae0 { SCStr * FUN_10f26ae0(byte param_2) noexcept; };
struct Recovered_10f32a90 { int FUN_10f32a90(byte param_2) noexcept; };
struct Recovered_10f38830 { int FUN_10f38830(byte param_2) noexcept; };
struct Recovered_10f3d1b0 { undefined4 * FUN_10f3d1b0(byte param_2) noexcept; };
struct Recovered_10f3d310 { undefined4 * FUN_10f3d310(byte param_2) noexcept; };
struct Recovered_10f48500 { undefined4 * FUN_10f48500(byte param_2) noexcept; };
struct Recovered_10f7e7a0 { undefined4 * FUN_10f7e7a0(byte param_2) noexcept; };
struct Recovered_10f9bd40 { undefined4 * FUN_10f9bd40(byte param_2) noexcept; };
struct Recovered_10f9be40 { int FUN_10f9be40(byte param_2) noexcept; };
struct Recovered_10f9c340 { undefined4 * FUN_10f9c340(byte param_2) noexcept; };
struct Recovered_10fa55a0 { undefined4 * FUN_10fa55a0(byte param_2) noexcept; };
struct Recovered_10fa57c0 { undefined4 * FUN_10fa57c0(byte param_2) noexcept; };
struct Recovered_10fa5890 { undefined4 * FUN_10fa5890(byte param_2) noexcept; };
struct Recovered_10fad000 { void FUN_10fad000(int *param_2,int *param_3); };
struct Recovered_10fad160 { void FUN_10fad160(int *param_2,int *param_3); };
struct Recovered_10fb15b0 { int FUN_10fb15b0(byte param_2) noexcept; };
struct Recovered_10fb1670 { int FUN_10fb1670(byte param_2) noexcept; };
struct Recovered_10fb1760 { int FUN_10fb1760(byte param_2) noexcept; };
struct Recovered_10fb1820 { undefined4 * FUN_10fb1820(byte param_2) noexcept; };
struct Recovered_10fb1c40 { undefined4 * FUN_10fb1c40(byte param_2) noexcept; };
struct Recovered_10fb1fc0 { undefined4 * FUN_10fb1fc0(byte param_2) noexcept; };
struct Recovered_10fb3fd0 { int FUN_10fb3fd0(int *param_2); };
struct Recovered_10fb4120 { int FUN_10fb4120(int *param_2); };
struct Recovered_10fb4330 { int FUN_10fb4330(int *param_2) noexcept; };
struct Recovered_10fb4400 { int FUN_10fb4400(int *param_2) noexcept; };
struct Recovered_10fb4510 { int FUN_10fb4510(int *param_2) noexcept; };
struct Recovered_10fc2710 { undefined4 * FUN_10fc2710(byte param_2) noexcept; };
struct Recovered_10fc2810 { int FUN_10fc2810(byte param_2) noexcept; };
struct Recovered_10fc28d0 { undefined4 * FUN_10fc28d0(byte param_2) noexcept; };
struct Recovered_10fca650 { undefined4 * FUN_10fca650(byte param_2) noexcept; };
struct Recovered_10fd0ee0 { undefined4 * FUN_10fd0ee0(byte param_2) noexcept; };
struct Recovered_10fd10f0 { undefined4 * FUN_10fd10f0(byte param_2) noexcept; };
struct Recovered_10fd13e0 { undefined4 * FUN_10fd13e0(byte param_2) noexcept; };
struct Recovered_10fd9970 { undefined4 * FUN_10fd9970(byte param_2) noexcept; };
struct Recovered_10fd9a30 { undefined4 * FUN_10fd9a30(byte param_2) noexcept; };
struct Recovered_10fd9be0 { undefined4 * FUN_10fd9be0(byte param_2) noexcept; };
struct Recovered_10fd9da0 { undefined4 * FUN_10fd9da0(byte param_2) noexcept; };
struct Recovered_10fd9fa0 { undefined4 * FUN_10fd9fa0(byte param_2) noexcept; };
struct Recovered_10fda160 { undefined4 * FUN_10fda160(byte param_2) noexcept; };
struct Recovered_10fda320 { undefined4 * FUN_10fda320(byte param_2) noexcept; };
struct Recovered_10fda4e0 { undefined4 * FUN_10fda4e0(byte param_2) noexcept; };
struct Recovered_10fda6c0 { undefined4 * FUN_10fda6c0(byte param_2) noexcept; };
struct Recovered_10fda880 { undefined4 * FUN_10fda880(byte param_2) noexcept; };
struct Recovered_10fdaae0 { undefined4 * FUN_10fdaae0(byte param_2) noexcept; };
struct Recovered_10fe77d0 { undefined4 * FUN_10fe77d0(byte param_2) noexcept; };
struct Recovered_10fe78b0 { undefined4 * FUN_10fe78b0(byte param_2) noexcept; };
struct Recovered_10feed80 { undefined4 * FUN_10feed80(byte param_2) noexcept; };
struct Recovered_10ffc7b0 { undefined4 * FUN_10ffc7b0(byte param_2) noexcept; };
struct Recovered_10ffeac0 { undefined4 * FUN_10ffeac0(byte param_2) noexcept; };
struct Recovered_10fffaa0 { undefined4 * FUN_10fffaa0(byte param_2) noexcept; };
struct Recovered_11004760 { undefined4 * FUN_11004760(byte param_2) noexcept; };
struct Recovered_110108f0 { undefined4 * FUN_110108f0(byte param_2) noexcept; };
struct Recovered_110109f0 { undefined4 * FUN_110109f0(byte param_2) noexcept; };
struct Recovered_11010d10 { undefined4 * FUN_11010d10(byte param_2) noexcept; };
struct Recovered_11012f50 { void FUN_11012f50(int *param_2,int param_3); };
struct Recovered_1101d270 { undefined4 * FUN_1101d270(byte param_2) noexcept; };
struct Recovered_11028070 { undefined4 * FUN_11028070(byte param_2) noexcept; };
struct Recovered_110281d0 { undefined4 * FUN_110281d0(byte param_2) noexcept; };
struct Recovered_11036550 { undefined4 * FUN_11036550(byte param_2) noexcept; };
struct Recovered_11036630 { undefined4 * FUN_11036630(byte param_2) noexcept; };
struct Recovered_11036870 { undefined4 * FUN_11036870(byte param_2) noexcept; };
struct Recovered_11036950 { undefined4 * FUN_11036950(byte param_2) noexcept; };
struct Recovered_11066e90 { undefined4 * FUN_11066e90(byte param_2) noexcept; };
struct Recovered_110c0fc0 { undefined4 * FUN_110c0fc0(byte param_2) noexcept; };
struct Recovered_110da0c0 { undefined4 * FUN_110da0c0(byte param_2) noexcept; };
struct Recovered_111200a0 { int FUN_111200a0(byte param_2) noexcept; };
struct Recovered_11132550 { undefined4 * FUN_11132550(byte param_2) noexcept; };
struct Recovered_11132650 { undefined4 * FUN_11132650(byte param_2) noexcept; };
struct Recovered_111398f0 { undefined4 * FUN_111398f0(byte param_2) noexcept; };
struct Recovered_111669d0 { undefined4 * FUN_111669d0(byte param_2) noexcept; };
struct Recovered_1116b7c0 { undefined4 * FUN_1116b7c0(byte param_2) noexcept; };
struct Recovered_11172e60 { undefined4 * FUN_11172e60(byte param_2) noexcept; };
struct Recovered_11182190 { undefined4 * FUN_11182190(byte param_2) noexcept; };
struct Recovered_111822e0 { undefined4 * FUN_111822e0(byte param_2) noexcept; };
struct Recovered_1118e4e0 { undefined4 * FUN_1118e4e0(byte param_2) noexcept; };
struct RecoveredVirtualArgumentsSlot5Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Invoke(void *, void *, void *); };
struct RecoveredVirtualArgumentsSlot10Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Invoke(void *, void *, void *); };
struct RecoveredVirtualArgumentsSlot6Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Invoke(void *, void *, void *); };
struct RecoveredVirtualArgumentsSlot8Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Invoke(void *, void *, void *); };
struct RecoveredVirtualArgumentsSlot8Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot5Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot7Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot10Count4 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Invoke(void *, void *, void *, void *); };
struct RecoveredVirtualArgumentsSlot9Count4 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Invoke(void *, void *, void *, void *); };
struct RecoveredVirtualArgumentsSlot7Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Invoke(void *, void *, void *); };
struct RecoveredVirtualArgumentsSlot16Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot15Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Invoke(void *, void *, void *); };
struct RecoveredVirtualArgumentsSlot9Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot15Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot13Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot10Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot9Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Invoke(void *); };
struct RecoveredVirtualArgumentsSlot11Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot53Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Invoke(void *, void *); };
struct RecoveredVirtualArgumentsSlot4Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Invoke(void *); };
struct RecoveredVirtualArgumentsSlot6Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Invoke(void *); };
struct RecoveredVirtualArgumentsSlot51Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Invoke(void *); };
struct RecoveredVirtualArgumentsSlot14Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Invoke(void *); };
struct RecoveredVirtualArgumentsSlot10Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Invoke(void *); };
// Reference entry 101519e0; body size 144 bytes.
#line 1 "ENTRY_101519e0"

void FUN_101519e0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{

  undefined4 local_14;

  local_14 = 0;
  ((SCStr *)&local_14)->setFromUTF16(param_2);
  param_2 = (ushort *)0x0;
  ((SCStr *)&param_2)->setFromUTF16(param_3);
  ((RecoveredVirtualArgumentsSlot5Count3 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2), (void *)(param_4));
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
  uVar2 = ((RecoveredVirtualArgumentsSlot10Count3 *)param_1)->Invoke((void *)(param_2), (void *)(&local_14), (void *)(&param_3));
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
  ((RecoveredVirtualArgumentsSlot6Count3 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2), (void *)(param_4));
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
  uVar1 = ((RecoveredVirtualArgumentsSlot10Count3 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2), (void *)(param_4));
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
  ((RecoveredVirtualArgumentsSlot8Count3 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2), (void *)(param_4));
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
  uVar1 = ((RecoveredVirtualArgumentsSlot8Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  uVar1 = ((RecoveredVirtualArgumentsSlot8Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  uVar2 = ((RecoveredVirtualArgumentsSlot5Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot7Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  fVar2 = (float10)((RecoveredVirtualArgumentsSlot10Count4 *)param_1)->Invoke((void *)(&local_18), (void *)(&local_14), (void *)(&param_2), (void *)(param_5));
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
  uVar2 = ((RecoveredVirtualArgumentsSlot9Count4 *)param_1)->Invoke((void *)(&local_18), (void *)(&local_14), (void *)(&param_2), (void *)(param_5));
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
  uVar1 = ((RecoveredVirtualArgumentsSlot7Count3 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2), (void *)(param_4));
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
  uVar1 = ((RecoveredVirtualArgumentsSlot16Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot15Count3 *)param_1)->Invoke((void *)(&local_18), (void *)(&local_14), (void *)(&param_2));
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
  fVar2 = (float10)((RecoveredVirtualArgumentsSlot9Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  uVar2 = ((RecoveredVirtualArgumentsSlot8Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot15Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  uVar1 = ((RecoveredVirtualArgumentsSlot13Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot8Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot9Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot9Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot10Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  pSVar1 = (SCStr *)((RecoveredVirtualArgumentsSlot9Count1 *)param_1)->Invoke((void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot11Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot7Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot16Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot15Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  uVar1 = ((RecoveredVirtualArgumentsSlot5Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
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
  ((RecoveredVirtualArgumentsSlot9Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
})();

  return;
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
  ((RecoveredVirtualArgumentsSlot6Count3 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2), (void *)(param_4));
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
  ((RecoveredVirtualArgumentsSlot6Count3 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2), (void *)(60000));
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
  ((RecoveredVirtualArgumentsSlot53Count2 *)param_1)->Invoke((void *)(&local_14), (void *)(&param_2));
  ([&]() noexcept {

  ((SCStr *)&param_2)->int_release();
  param_2 = (ushort *)0x0;
  
})();
([&]() noexcept {

  ((SCStr *)&local_14)->int_release();
  
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
    ((CallABI_thunk_FUN_1059d940 *)(param_1))->thunk_FUN_1059d940((uint)(param_1[8]));
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
    ((RecoveredVirtualArgumentsSlot15Count3 *)piVar1)->Invoke((void *)(param_1[7]), (void *)(0), (void *)(1));
    param_1[7] = 0;
  }
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  *param_1 = (int)(undefined4)&ghidra_vftable_SCTimerUser;
  abi_call_thunk_FUN_1059d800((int)(param_1));
  abi_call_thunk_FUN_1059c050((undefined4 *)(param_1));
  
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
    ((RecoveredVirtualArgumentsSlot4Count1 *)piVar1)->Invoke((void *)(piVar1 != (int *)(param_1 + 8)));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 4))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  
})();

  return;
}


// Reference entry 103c27c0; body size 479 bytes.
#line 1 "ENTRY_103c27c0"

void __fastcall FUN_103c27c0(undefined4 *param_1) noexcept
{
  int *piVar1;
  char cVar2;

  *param_1 = (undefined4)&ghidra_vftable_RFetchTokenAIOOp;
  param_1[2] = (undefined4)&ghidra_vftable_RFetchTokenAIOOp;
  param_1[7] = (undefined4)&ghidra_vftable_RFetchTokenAIOOp;
  param_1[10] = (undefined4)&ghidra_vftable_RFetchTokenAIOOp;
  cVar2 = abi_call_thunk_FUN_101dce50();
  if (cVar2 == '\0') {
    if (*(int **)(param_1[0xd] + 0x100) != (int *)0x0) {
      ((RecoveredVirtualArgumentsSlot6Count1 *)*(int **)(param_1[0xd] + 0x100))->Invoke((void *)(param_1[0xb]));
    }
  }
  else if (param_1[0x13] != 0) {
    piVar1 = (int *)param_1[0x14];
    if (piVar1 != (int *)0x0) {
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  piVar1 = (int *)param_1[0x21];
  ([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x1a))->int_release();
  param_1[0x1a] = 0;
  
})();
([&]() noexcept {

  ((SCStr *)(param_1 + 0x19))->int_release();
  param_1[0x19] = 0;
  param_1[0x15] = (undefined4)&ghidra_vftable_RControlAIOOpRef_RControlAIOOp_;
  abi_call_thunk_FUN_101ba0d0((undefined4 *)(param_1));
  piVar1 = (int *)param_1[0x14];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x12];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  piVar1 = (int *)param_1[0x10];
  
})();
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
  param_1[10] = (undefined4)&ghidra_vftable_SCEventSinkDelegate;
  piVar1 = (int *)param_1[0xc];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  param_1[7] = (undefined4)&ghidra_vftable_SCIActionDelegateCB;
  piVar1 = (int *)param_1[9];
  
})();
([&]() noexcept {

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
  }
  abi_call_thunk_FUN_11261f10((undefined4 *)(param_1));
  
})();

  return;
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
    ((RecoveredVirtualArgumentsSlot4Count1 *)piVar1)->Invoke((void *)(piVar1 != (int *)(param_1 + 0x110)));
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
  abi_call_thunk_FUN_106da680((undefined4 *)(param_1));
  
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
    ((RecoveredVirtualArgumentsSlot4Count1 *)piVar1)->Invoke((void *)(piVar1 != (int *)(param_1 + 0x110)));
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
  abi_call_thunk_FUN_106da680((undefined4 *)(param_1));
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x150);
  }
  
})();

  return param_1;
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
    ((RecoveredVirtualArgumentsSlot51Count1 *)piVar1)->Invoke((void *)(param_1[0x23]));
  }
  abi_call_thunk_FUN_104dec20((int)(param_1));
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
  abi_call_thunk_FUN_104d76e0((undefined4 *)(param_1));
  
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
    ((RecoveredVirtualArgumentsSlot14Count1 *)piVar1)->Invoke((void *)(param_1[0x25]));
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
  abi_call_thunk_FUN_10ce3510((int *)(param_1));
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
  abi_call_thunk_FUN_104d76e0((undefined4 *)(param_1));
  
})();

  return;
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
  ((RecoveredVirtualArgumentsSlot14Count1 *)local_14)->Invoke((void *)(param_1[5]));
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
    ((RecoveredVirtualArgumentsSlot10Count1 *)piVar1)->Invoke((void *)(param_1[0x39]));
  }
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  abi_call_thunk_FUN_10f82b00((int *)(param_1));
  abi_call_thunk_FUN_10f82750((undefined4 *)(param_1));
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
  abi_call_thunk_FUN_10c68c80((undefined4 *)(param_1));
  
})();

  return;
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
    ((RecoveredVirtualArgumentsSlot51Count1 *)piVar1)->Invoke((void *)(param_1[7]));
  }
  ([&]() noexcept {

  if (piVar3 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  abi_call_thunk_FUN_102cc870((undefined4 *)(param_1));
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



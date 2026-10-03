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
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _Xbad_alloc(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int _Xlength_error(...);
extern __declspec(dllimport) int __stdio_common_vsprintf_p(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int addRange(...);
extern int failed(...);
extern __declspec(dllimport) int fclose(...);
extern int func_0x1005ee94(...);
extern int func_0x10075a36(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int length(...);
extern __declspec(dllimport) int memmove(...);
extern int op_assign(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101a9be0(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_101eb1b0(...);
extern int thunk_FUN_10200aa0(...);
extern int thunk_FUN_10203dc0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6a60(...);
extern int thunk_FUN_1047fdf0(...);
extern int thunk_FUN_104c1380(...);
extern int thunk_FUN_104c1a00(...);
extern int thunk_FUN_104c49a0(...);
extern int thunk_FUN_104c4c30(...);
extern int thunk_FUN_104c4c80(...);
extern int thunk_FUN_104d4930(...);
extern int thunk_FUN_104d5150(...);
extern int thunk_FUN_104d53b0(...);
extern int thunk_FUN_104db6f0(...);
extern int thunk_FUN_104dd350(...);
extern int thunk_FUN_104df920(...);
extern int thunk_FUN_104dfcb0(...);
extern int thunk_FUN_104e0760(...);
extern int thunk_FUN_104e0880(...);
extern int thunk_FUN_104e0aa0(...);
extern int thunk_FUN_104e1f30(...);
extern int thunk_FUN_104e2030(...);
extern int thunk_FUN_104e3e20(...);
extern int thunk_FUN_104e7560(...);
extern int thunk_FUN_104e7990(...);
extern int thunk_FUN_104f8cb0(...);
extern int thunk_FUN_104f9920(...);
extern int thunk_FUN_104fa330(...);
extern int thunk_FUN_104fb0d0(...);
extern int thunk_FUN_10525750(...);
extern int thunk_FUN_10533e90(...);
extern int thunk_FUN_1054dba0(...);
extern int thunk_FUN_1057a360(...);
extern int thunk_FUN_10593590(...);
extern int thunk_FUN_10594e60(...);
extern int thunk_FUN_10596a70(...);
extern int thunk_FUN_10596a80(...);
extern int thunk_FUN_1059b760(...);
extern int thunk_FUN_1059e8c0(...);
extern int thunk_FUN_1059ea10(...);
extern int thunk_FUN_1059ee10(...);
extern int thunk_FUN_1059ef60(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a1f20(...);
extern int thunk_FUN_105a1f40(...);
extern int thunk_FUN_105a1fb0(...);
extern int thunk_FUN_105a4960(...);
extern int thunk_FUN_105a4bf0(...);
extern int thunk_FUN_105a5110(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad910(...);
extern int thunk_FUN_105b9d30(...);
extern int thunk_FUN_105b9e80(...);
extern int thunk_FUN_105bb550(...);
extern int thunk_FUN_105bc210(...);
extern int thunk_FUN_106dc530(...);
extern int thunk_FUN_10916c20(...);
extern int thunk_FUN_10961ad0(...);
extern int thunk_FUN_10973080(...);
extern int thunk_FUN_10999150(...);
extern int thunk_FUN_109b6e80(...);
extern int thunk_FUN_109cb7a0(...);
extern int thunk_FUN_109f3c80(...);
extern int thunk_FUN_10a08d00(...);
extern int thunk_FUN_10a4dc00(...);
extern int thunk_FUN_10b31d30(...);
extern int thunk_FUN_10de8ec0(...);
extern int thunk_FUN_10dec580(...);
extern int thunk_FUN_10deea50(...);
extern int thunk_FUN_10deeb70(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def210(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106df60(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_11082860(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b2900(...);
extern int thunk_FUN_110c1f30(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_11131cc0(...);
extern int thunk_FUN_1113eda0(...);
extern int thunk_FUN_111a06b0(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a0e70(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111ca9f0(...);
extern int thunk_FUN_111ccae0(...);
extern int thunk_FUN_111cd540(...);
extern int thunk_FUN_111d15e0(...);
extern int thunk_FUN_111dd660(...);
extern int thunk_FUN_11202480(...);
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
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_112859a0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145cb70(...);
extern int thunk_FUN_1145cf60(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_1187b440;
extern int DAT_11880fb0;
extern int DAT_118823e4;
extern int DAT_11882ff0;
extern int DAT_11884fb0;
extern int DAT_1188e99c;
extern int DAT_118a52bc;
extern int DAT_118b3060;
extern int DAT_11d330dc;
extern int DAT_12126b84;
extern int DAT_122f1250;
extern int DAT_122f55e4;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAsyncDataSource;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RFileTransferDownloadAIOOp;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RLocationNameExtractorCB;
extern int ghidra_vftable_RServiceManifestGetRequest;
extern int ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTPlayAIOOp;
extern int ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDDestroyObjectAIOOp;
extern int ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
extern int ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp;
extern int ghidra_vftable_RZPWifiModeDevicesEnumerator;
extern int ghidra_vftable_SCActionContext;
extern int ghidra_vftable_SCAddPlaylistAction;
extern int ghidra_vftable_SCAddQueueOp;
extern int ghidra_vftable_SCAddToQueueAtNumberDescriptor;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAssetSet;
extern int ghidra_vftable_SCAsyncBrowseItem;
extern int ghidra_vftable_SCBrowseDataSourceEventSinkInternal;
extern int ghidra_vftable_SCBrowseDataSourceSettingsSink;
extern int ghidra_vftable_SCContentSession;
extern int ghidra_vftable_SCContentSessionBrowse;
extern int ghidra_vftable_SCDeviceNameStandaloneInput;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCFileTransferDownloadOp;
extern int ghidra_vftable_SCGroupNameStandaloneInput;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCIStackedItemImpl;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCInteractionActionContext;
extern int ghidra_vftable_SCLineInNameStandaloneInput;
extern int ghidra_vftable_SCMuseHouseholdNameStandaloneInput;
extern int ghidra_vftable_SCMusicServiceAccountNeededState;
extern int ghidra_vftable_SCMusicServiceCompleteState;
extern int ghidra_vftable_SCMusicServiceGetAppLinkRetryState;
extern int ghidra_vftable_SCMusicServiceGetShareUsageState;
extern int ghidra_vftable_SCMusicServiceInitState;
extern int ghidra_vftable_SCMusicServiceIntroState;
extern int ghidra_vftable_SCMusicServiceLoginPasswordState;
extern int ghidra_vftable_SCMusicServiceMultipleAccountsAddedState;
extern int ghidra_vftable_SCMusicServicePasswordState;
extern int ghidra_vftable_SCMusicServicePromotedIntroState;
extern int ghidra_vftable_SCMusicServiceResultState;
extern int ghidra_vftable_SCMusicServiceSetNicknameErrorState;
extern int ghidra_vftable_SCMusicServiceSetShareUsageState;
extern int ghidra_vftable_SCNamePlaylistAction;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNullParamRX;
extern int ghidra_vftable_SCNumPlayersUnavailableMessageDescriptor;
extern int ghidra_vftable_SCOpAddFavorites;
extern int ghidra_vftable_SCOpFileDownload;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpLookupMetadata;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpWithProgressInfo;
extern int ghidra_vftable_SCRadioPickCityBrowseItem;
extern int ghidra_vftable_SCRadioSetZIPDescriptor;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCRenamePlaylistAction;
extern int ghidra_vftable_SCSearchTermStandaloneInput;
extern int ghidra_vftable_SCServiceDescriptorManagerEventSinkInternal;
extern int ghidra_vftable_SCServiceInfoDownloadRetryState;
extern int ghidra_vftable_SCSettingBalanceValueFormatter;
extern int ghidra_vftable_SCSettingFractionToPercentValueFormatter;
extern int ghidra_vftable_SCSettingHzValueFormatter;
extern int ghidra_vftable_SCSettingIntToPlusMinusValueFormatter;
extern int ghidra_vftable_SCSettingVolumeLimitFormatter;
extern int ghidra_vftable_SCSettingsMenu;
extern int ghidra_vftable_SCSetupFileUploadHelper_SCFileTransferUploadOp;
extern int ghidra_vftable_SCToggleExplicitFilterActionDescriptor;
extern int ghidra_vftable_SCUnregisteredDeviceMessageDescriptor;
extern int ghidra_vftable_SCUpdateMusicIndexActionDescriptor;
extern int ghidra_vftable_SCUpdatePopoverActionFactory;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_4;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_10552558[];
extern undefined1 LAB_105584bb[];
extern undefined1 LAB_105a12ad[];
extern undefined1 LAB_114f5b00[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_114fe7e0[];
extern undefined1 LAB_11584640[];
extern undefined1 LAB_115868c0[];
extern undefined1 LAB_11587ed0[];
extern undefined1 LAB_1158a1a0[];
extern undefined1 LAB_1159c5d0[];
extern undefined1 LAB_115a0a10[];
extern undefined1 LAB_115a2ce0[];
extern undefined1 LAB_115aab40[];
extern undefined1 LAB_1172c5b0[];
extern undefined1 LAB_1172d640[];
extern undefined1 LAB_117c174c[];
extern undefined1 LAB_117c17f0[];
extern undefined1 LAB_117c45e8[];
extern undefined1 LAB_117c46c8[];
extern undefined1 LAB_117c4c58[];
extern int *PTR_DAT_12126b6c;
extern int *PTR_s_https___www__119e5428;
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0x00000010;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std { template<class... A> int _Xbad_alloc(A...); template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xlength_error(A...);}
struct SCIndexRange { char _pad; SCIndexRange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int op_assign(A...); template<class... A> int op_lt(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); template<class... A> int op_ctor(A...); template<class... A> int op_eq(A...); template<class... A> int op_lt(A...); };
typedef void *E9;
typedef void *LOCK;
typedef void *UNLOCK;
typedef void *WARNING;
typedef void *_File;
typedef void *_Size;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AVTransportURI { char _pad; AVTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AddMultipleURIsToQueue { char _pad; AddMultipleURIsToQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CreateSavedQueue { char _pad; CreateSavedQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CurrentTrackURI { char _pad; CurrentTrackURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DestroyObject { char _pad; DestroyObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DirectControlClientID { char _pad; DirectControlClientID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct EnqueuedTransportURI { char _pad; EnqueuedTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Now { char _pad; Now(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Playing { char _pad; Playing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIInfoViewHeaderDataSource { char _pad; SCIInfoViewHeaderDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIVoiceService { char _pad; SCIVoiceService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSettingsMenuVoiceService { char _pad; SCSettingsMenuVoiceService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSettingsMenuVoiceServiceSettings { char _pad; SCSettingsMenuVoiceServiceSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SelectionManager { char _pad; SelectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ServiceOutageManager { char _pad; ServiceOutageManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetAVTransportURI { char _pad; SetAVTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetAccountNicknameX { char _pad; SetAccountNicknameX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unable { char _pad; Unable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UpdateObject { char _pad; UpdateObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Wrote { char _pad; Wrote(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_104625f0(int param_2); template<class... A> int FUN_104625f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10462ce0(int param_2); template<class... A> int FUN_10462ce0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10465200(uint param_2); template<class... A> int FUN_10465200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10465fe0(undefined4 param_2); template<class... A> int FUN_10465fe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1046a350(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1046a350(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10471e80(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10471e80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10473360(int param_2); template<class... A> int FUN_10473360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104762d0(int param_2); template<class... A> int FUN_104762d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10481690(undefined4 *param_2); template<class... A> int FUN_10481690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10482930(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10482930(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104829b0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_104829b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10482a30(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10482a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10482ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10482ab0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10482b30(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10482b30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10486cb0(uint param_2); template<class... A> int FUN_10486cb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104882a0(int param_2); template<class... A> int FUN_104882a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104882c0(int param_2); template<class... A> int FUN_104882c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104882e0(int param_2); template<class... A> int FUN_104882e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10488300(int param_2); template<class... A> int FUN_10488300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10488320(int param_2); template<class... A> int FUN_10488320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104966b0(undefined4 *param_2); template<class... A> int FUN_104966b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1049d740(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_1049d740(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104a0a60(int param_2); template<class... A> int FUN_104a0a60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104ab2d0(int *param_2); template<class... A> int FUN_104ab2d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104ac230(int *param_2); template<class... A> int FUN_104ac230(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104acb10(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_104acb10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104ae050(int param_2); template<class... A> int FUN_104ae050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104ae070(int param_2); template<class... A> int FUN_104ae070(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104ae090(int param_2); template<class... A> int FUN_104ae090(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104ae0b0(int *param_2); template<class... A> int FUN_104ae0b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104ae110(int *param_2); template<class... A> int FUN_104ae110(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104b5700(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_104b5700(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104b9240(int param_2); template<class... A> int FUN_104b9240(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104c0f60(SCStr *param_2); template<class... A> int FUN_104c0f60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104c10d0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_104c10d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104c12a0(SCStr *param_2); template<class... A> int FUN_104c12a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104c1300(SCStr *param_2); template<class... A> int FUN_104c1300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104c24a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_104c24a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104c25a0(SCStr *param_2); template<class... A> int FUN_104c25a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104c25c0(SCStr *param_2); template<class... A> int FUN_104c25c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104c26a0(SCStr *param_2); template<class... A> int FUN_104c26a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104c26c0(SCStr *param_2); template<class... A> int FUN_104c26c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104c2a10(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104c2a10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104c35b0(SCStr *param_2); template<class... A> int FUN_104c35b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104c35e0(SCStr *param_2); template<class... A> int FUN_104c35e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104c45b0(uint param_2); template<class... A> int FUN_104c45b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104c4660(int param_2); template<class... A> int FUN_104c4660(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104c4690(uint param_2); template<class... A> int FUN_104c4690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104c4740(uint param_2); template<class... A> int FUN_104c4740(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104cc170(undefined4 param_2); template<class... A> int FUN_104cc170(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104d4800(undefined4 param_2); template<class... A> int FUN_104d4800(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104d4910(undefined4 param_2); template<class... A> int FUN_104d4910(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104d4f50(undefined4 param_2); template<class... A> int FUN_104d4f50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104d55a0(uint param_2); template<class... A> int FUN_104d55a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104d6360(uint param_2); template<class... A> int FUN_104d6360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104d6400(undefined4 param_2); template<class... A> int FUN_104d6400(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104d7500(undefined4 param_2); template<class... A> int FUN_104d7500(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104d7d20(uint param_2); template<class... A> int FUN_104d7d20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104dbaa0(undefined4 *param_2,SCIndexRange *param_3,undefined4 *param_4); template<class... A> int FUN_104dbaa0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104dbb70(undefined4 *param_2); template<class... A> int FUN_104dbb70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104dbe60(undefined4 param_2); template<class... A> int FUN_104dbe60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104dc450(int *param_2,int param_3); template<class... A> int FUN_104dc450(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104dc740(uint param_2); template<class... A> int FUN_104dc740(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104dc9c0(SCIndexRange *param_2); template<class... A> int FUN_104dc9c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104dcc00(undefined4 *param_2); template<class... A> int FUN_104dcc00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104dcf50(undefined4 *param_2,SCIndexRange *param_3); template<class... A> int FUN_104dcf50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_104dd060(SCIndexRange *param_2,char param_3); template<class... A> int FUN_104dd060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104dd280(undefined4 *param_2,SCIndexRange *param_3,undefined4 *param_4); template<class... A> int FUN_104dd280(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104dd620(undefined4 *param_2); template<class... A> int FUN_104dd620(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104ddbe0(int *param_2); template<class... A> int FUN_104ddbe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104ddc00(int *param_2); template<class... A> int FUN_104ddc00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_104ddd90(int param_2); template<class... A> int FUN_104ddd90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_104ddf50(int param_2); template<class... A> int FUN_104ddf50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104ded00(undefined4 param_2,int *param_3); template<class... A> int FUN_104ded00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104ded50(undefined4 param_2,int *param_3); template<class... A> int FUN_104ded50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104df190(undefined4 param_2,int *param_3); template<class... A> int FUN_104df190(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104df2e0(undefined4 *param_2); template<class... A> int FUN_104df2e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104df330(undefined4 *param_2); template<class... A> int FUN_104df330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104df380(undefined4 *param_2); template<class... A> int FUN_104df380(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_104df400(int param_2); template<class... A> int FUN_104df400(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104e1de0(int *param_2,int *param_3); template<class... A> int FUN_104e1de0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104e4720(undefined4 *param_2); template<class... A> int FUN_104e4720(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104e4920(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_104e4920(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_104e4940(uint param_2); template<class... A> int FUN_104e4940(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104e4c00(int *param_2,int param_3); template<class... A> int FUN_104e4c00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104e54c0(int param_2); template<class... A> int FUN_104e54c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104e54f0(uint param_2); template<class... A> int FUN_104e54f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104e5530(uint param_2); template<class... A> int FUN_104e5530(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104e5810(uint param_2); template<class... A> int FUN_104e5810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104e5c00(int *param_2,int param_3); template<class... A> int FUN_104e5c00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104e6630(uint param_2,int param_3,int *param_4); template<class... A> int FUN_104e6630(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104e66b0(uint param_2,int param_3,int *param_4); template<class... A> int FUN_104e66b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104e6730(uint param_2,int param_3,int *param_4); template<class... A> int FUN_104e6730(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_104e6c20(uint param_2,char param_3); template<class... A> int FUN_104e6c20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_104e6c70(uint param_2); template<class... A> int FUN_104e6c70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_104e7360(int *param_2); template<class... A> int FUN_104e7360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104e73f0(int *param_2,int *param_3); template<class... A> int FUN_104e73f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104ea1a0(int param_2); template<class... A> int FUN_104ea1a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104eafc0(int param_2); template<class... A> int FUN_104eafc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104ed5c0(int *param_2); template<class... A> int FUN_104ed5c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104ed5d0(int *param_2); template<class... A> int FUN_104ed5d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104eee80(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104eee80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104efe20(undefined4 *param_2); template<class... A> int FUN_104efe20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_104efff0(int *param_2); template<class... A> int FUN_104efff0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104f7050(int *param_2); template<class... A> int FUN_104f7050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104f7060(int *param_2); template<class... A> int FUN_104f7060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104f7070(int *param_2); template<class... A> int FUN_104f7070(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104f7080(int *param_2); template<class... A> int FUN_104f7080(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104f82a0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_104f82a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104f82d0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_104f82d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104f8360(undefined4 *param_2); template<class... A> int FUN_104f8360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_104f83a0(undefined4 *param_2); template<class... A> int FUN_104f83a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_104fa540(undefined4 param_2); template<class... A> int FUN_104fa540(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_104fc170(uint param_2); template<class... A> int FUN_104fc170(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_104fcb60(uint param_2,int param_3,int *param_4); template<class... A> int FUN_104fcb60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10500550(undefined4 param_2); template<class... A> int FUN_10500550(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10500590(undefined4 param_2); template<class... A> int FUN_10500590(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1050b7b0(int *param_2); template<class... A> int FUN_1050b7b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1050b7c0(int *param_2); template<class... A> int FUN_1050b7c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1050eae0(undefined4 param_2); template<class... A> int FUN_1050eae0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1050eb20(undefined4 param_2); template<class... A> int FUN_1050eb20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10510840(int param_2); template<class... A> int FUN_10510840(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1051a400(int *param_2); template<class... A> int FUN_1051a400(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1051c170(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_1051c170(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105259f0(undefined4 *param_2); template<class... A> int FUN_105259f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10525cc0(undefined4 param_2); template<class... A> int FUN_10525cc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10525d60(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10525d60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10525ed0(undefined4 param_2); template<class... A> int FUN_10525ed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526060(undefined4 param_2); template<class... A> int FUN_10526060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526080(undefined4 param_2); template<class... A> int FUN_10526080(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526160(undefined4 param_2); template<class... A> int FUN_10526160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105261f0(undefined4 param_2); template<class... A> int FUN_105261f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526210(undefined4 param_2); template<class... A> int FUN_10526210(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105269f0(undefined4 param_2); template<class... A> int FUN_105269f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526a30(undefined4 param_2); template<class... A> int FUN_10526a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526b90(undefined4 param_2); template<class... A> int FUN_10526b90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526bd0(undefined4 param_2); template<class... A> int FUN_10526bd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526d80(undefined4 param_2,undefined4 param_3,undefined2 param_4); template<class... A> int FUN_10526d80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10526dc0(undefined4 param_2); template<class... A> int FUN_10526dc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10527150(undefined4 param_2); template<class... A> int FUN_10527150(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10528c10(undefined4 param_2); template<class... A> int FUN_10528c10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10528c50(undefined4 param_2); template<class... A> int FUN_10528c50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_1052c740(uint param_2); template<class... A> int FUN_1052c740(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1052c9a0(int *param_2); template<class... A> int FUN_1052c9a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1052dcd0(undefined4 *param_2); template<class... A> int FUN_1052dcd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1053d520(SCStr *param_2); template<class... A> int FUN_1053d520(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105452e0(undefined4 *param_2); template<class... A> int FUN_105452e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1054c0e0(int *param_2); template<class... A> int FUN_1054c0e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1054c300(int *param_2); template<class... A> int FUN_1054c300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1054d860(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_1054d860(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1054d8b0(undefined4 *param_2); template<class... A> int FUN_1054d8b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1054ea30(undefined4 *param_2); template<class... A> int FUN_1054ea30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10550cd0(uint param_2); template<class... A> int FUN_10550cd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10550d10(uint param_2); template<class... A> int FUN_10550d10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10551fd0(int param_2); template<class... A> int FUN_10551fd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10552ea0(undefined4 *param_2,void *param_3); template<class... A> int FUN_10552ea0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10553b10(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10553b10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10554050(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10554050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10556c10(undefined4 *param_2); template<class... A> int FUN_10556c10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10557070(int param_2); template<class... A> int FUN_10557070(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10558410(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_10558410(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10558940(undefined1 *param_2,int param_3); template<class... A> int FUN_10558940(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105590e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_105590e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10563240(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10563240(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105632e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_105632e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10563380(undefined4 param_2); template<class... A> int FUN_10563380(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10563600(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10563600(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1056d4e0(int param_2); template<class... A> int FUN_1056d4e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105799c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_105799c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10579a90(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10579a90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10579b40(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_10579b40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10579bf0(undefined4 param_2,undefined4 param_3,byte param_4); template<class... A> int FUN_10579bf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10579c40(undefined4 param_2,undefined4 param_3,byte param_4,
            undefined4 param_5); template<class... A> int FUN_10579c40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1057d810(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); template<class... A> int FUN_1057d810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1057d820(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_1057d820(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1057fc20(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int FUN_1057fc20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10586140(uint param_2,int *param_3); template<class... A> int FUN_10586140(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall FUN_10586750(int param_2,char *param_3); template<class... A> int FUN_10586750(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105868a0(uint param_2,int *param_3); template<class... A> int FUN_105868a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10588cf0(int *param_2); template<class... A> int FUN_10588cf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105899d0(uint param_2); template<class... A> int FUN_105899d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10589a80(uint param_2); template<class... A> int FUN_10589a80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10592940(int *param_2); template<class... A> int FUN_10592940(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10593cc0(undefined4 param_2); template<class... A> int FUN_10593cc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10595800(undefined4 *param_2); template<class... A> int FUN_10595800(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10595bf0(uint param_2); template<class... A> int FUN_10595bf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10595ca0(uint param_2); template<class... A> int FUN_10595ca0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10595d50(uint param_2); template<class... A> int FUN_10595d50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10596c60(uint param_2); template<class... A> int FUN_10596c60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10596ca0(uint param_2); template<class... A> int FUN_10596ca0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1059e650(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_1059e650(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1059e850(undefined4 *param_2); template<class... A> int FUN_1059e850(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1059edb0(undefined4 param_2); template<class... A> int FUN_1059edb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1059f880(undefined4 *param_2); template<class... A> int FUN_1059f880(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1059f8b0(undefined4 *param_2); template<class... A> int FUN_1059f8b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a07e0(undefined4 *param_2); template<class... A> int FUN_105a07e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a0810(undefined4 *param_2); template<class... A> int FUN_105a0810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a0e20(int param_2); template<class... A> int FUN_105a0e20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a0e50(int param_2); template<class... A> int FUN_105a0e50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a0e80(uint param_2); template<class... A> int FUN_105a0e80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a0f30(uint param_2); template<class... A> int FUN_105a0f30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105a0fe0(uint param_2); template<class... A> int FUN_105a0fe0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105a1020(uint param_2); template<class... A> int FUN_105a1020(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105a1060(uint param_2); template<class... A> int FUN_105a1060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105a10a0(uint param_2); template<class... A> int FUN_105a10a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a11f0(uint param_2); template<class... A> int FUN_105a11f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a3300(undefined4 *param_2); template<class... A> int FUN_105a3300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a3330(undefined4 *param_2); template<class... A> int FUN_105a3330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a49f0(int *param_2,undefined4 param_3); template<class... A> int FUN_105a49f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105a4f30(int *param_2,uint *param_3); template<class... A> int FUN_105a4f30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a6f00(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105a6f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a6f40(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105a6f40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_105a7670(SCStr *param_2); template<class... A> int FUN_105a7670(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_105a76d0(SCStr *param_2,SCStr param_3); template<class... A> int FUN_105a76d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a77c0(undefined4 param_2); template<class... A> int FUN_105a77c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a7810(undefined4 param_2); template<class... A> int FUN_105a7810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a7860(undefined4 param_2); template<class... A> int FUN_105a7860(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a78b0(undefined4 *param_2); template<class... A> int FUN_105a78b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a78f0(int *param_2,undefined4 param_3); template<class... A> int FUN_105a78f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105a7c10(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105a7c10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105a8980(int *param_2); template<class... A> int FUN_105a8980(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105a89d0(int *param_2); template<class... A> int FUN_105a89d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_105a8a20(int *param_2); template<class... A> int FUN_105a8a20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_105a8b20(SCStr *param_2); template<class... A> int FUN_105a8b20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_105af670(uint param_2); template<class... A> int FUN_105af670(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b0580(int *param_2); template<class... A> int FUN_105b0580(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b07b0(int *param_2); template<class... A> int FUN_105b07b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b0ef0(int *param_2); template<class... A> int FUN_105b0ef0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b17e0(undefined4 param_2); template<class... A> int FUN_105b17e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b25b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105b25b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b25e0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105b25e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b2e20(int param_2); template<class... A> int FUN_105b2e20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b2e40(int param_2); template<class... A> int FUN_105b2e40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b2e60(int *param_2); template<class... A> int FUN_105b2e60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105b33f0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105b33f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_105b84c0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105b84c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b84f0(undefined4 *param_2); template<class... A> int FUN_105b84f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_105b85f0(int param_2); template<class... A> int FUN_105b85f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b8760(undefined4 *param_2); template<class... A> int FUN_105b8760(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b9160(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_105b9160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b9200(int param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_105b9200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_105b9260(int param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_105b9260(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105ba640(int *param_2); template<class... A> int FUN_105ba640(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_105bad10(int param_2); template<class... A> int FUN_105bad10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105bad40(uint param_2); template<class... A> int FUN_105bad40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_105bad80(uint param_2); template<class... A> int FUN_105bad80(A...); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1044eda0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1044eda0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10451e00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10451e00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10453dc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10453dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10455b70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10455b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1045cd10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1045cd10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1045ec80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1045ec80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10460fb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10460fb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10461120(SCStr *param_1,SCStr *param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10461120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10461370(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10461370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104614c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104614c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10465d00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10465d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10467c30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10467c30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1046b480(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1046b480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1046e740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1046e740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10472040(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10472040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10472d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10472d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10475bd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10475bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1047fd70(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1047fd70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10481550(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10481550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10483060(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10483060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485d80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485da0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485dc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485de0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485e00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10485e00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10488550(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10488550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10488580(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10488580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104885b0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104885b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10495540(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10495540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d8a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d8a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d8d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d8d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d900(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1049d930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1049fc10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1049fc10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104a81a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104a81a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ac030(int param_1,undefined4 *param_2,ushort *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ac030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ac870(int param_1,undefined4 *param_2,ushort *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ac870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104acb90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104acb90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad480(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad7a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ad7a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104b0840(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104b0840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b0990(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b0990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104b5880(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104b5880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b89b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104b89b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0e50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0e90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0ed0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c0ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c1460(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c1460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c2320(undefined4 param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c2320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c2480(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c2480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104c4860(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c4860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104c4d00(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104c4d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104c6150(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104c6150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c9640(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104c9640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_104c9680(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_104c9680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104cb7b0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104cb7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb880(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104cb880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d47d0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d47d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4e20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4e40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4f40(undefined4 param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104d4f40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d4fd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d4fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d5230(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d5230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104d5c00(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104d5c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d5d70(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d5d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d6350(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104d6350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d6f10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104d6f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104d81e0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104d81e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104da3f0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104da3f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104da430(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104da430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104da470(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104da470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCIndexRange * FUN_104db900(SCIndexRange *param_1,SCIndexRange *param_2,SCIndexRange *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCIndexRange * FUN_104db900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCIndexRange * FUN_104db940(SCIndexRange *param_1,SCIndexRange *param_2,SCIndexRange *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCIndexRange * FUN_104db940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104db990(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104db990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104db9d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104db9d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbc00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbc00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbc50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104dbc50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc8e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dc8e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc920(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dc920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dc960(undefined4 *param_1,undefined4 *param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dc960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104dcb90(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104dcb90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104dcc80(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104dcc80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de330(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de340(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de710(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de720(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104de720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104deb30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0840(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0a80(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e0a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_104e0bf0(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_104e0bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e1860(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1b90(undefined4 param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e1b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e2390(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e2390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e23c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e23c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e23f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e23f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e5690(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e5690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e56b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e56b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e56d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e56d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e56f0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e56f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e5750(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e5750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e57b0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104e57b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e5990(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e5990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e7480(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e7480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e74c0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e74c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e7500(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e7500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7820(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7890(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7910(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7a00(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7a70(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7ae0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7b50(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104e7b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e9a10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e9a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e9b00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104e9b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9d30(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9d80(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9dd0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e9e20(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e9e70(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e9ec0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104e9fb0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104e9fb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104ea000(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ea000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104ea050(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ea050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ea120(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104ea120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104eadd0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104eadd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec060(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ec060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ec0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104ec0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed6f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed7d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104ed7d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ed990(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104ed990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104eeaa0(char *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104eeaa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_104eec40(uint *param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_104eec40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 __fastcall FUN_104ef220(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 __fastcall FUN_104ef220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ef360(char *param_1,char *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104ef360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_104ef3d0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_104ef3d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104effe0(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_104effe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f6750(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f6750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f68f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f68f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104f6a30(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104f6a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_104f79a0(undefined1 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_104f79a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8580(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f8580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f8f00(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104f8f00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_104f8f30(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_104f8f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f9580(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f9580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f9a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104f9a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9ad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104f9ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fa0d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104fa0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fb330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fb330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fbfc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fbfc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fc240(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fc240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fc260(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fc260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104fc280(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104fc280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104fcee0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_104fcee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fd510(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fd510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd6a0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd6a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd710(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd790(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd800(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104fd800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fd8e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fd8e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fd9a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fd9a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fdcc0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fdcc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fdd10(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fdd10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fdd60(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fdd60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fddb0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fddb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fde00(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fde00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104fdeb0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104fdeb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fdf50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104fdf50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500000(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500020(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10500020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105004c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105004c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105004f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105004f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500520(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500840(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500890(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10500890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105008e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105008e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10504560(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10504560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105056c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105056c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505710(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505730(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505750(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10505780(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10505780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505790(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105057e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105057e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505830(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505850(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505870(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505890(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105058c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105058c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105058e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105058e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505900(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505920(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505940(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505960(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10505980(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10505980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105059a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105059a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105059d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105059d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10505be0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10505be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10505c10(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10505c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10505c90(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10505c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105070d0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105070d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10507120(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10507120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1050aa30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1050aa30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050ab20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050ab20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050ab50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050ab50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050ab90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1050ab90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1050abc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1050abc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050e550(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050e550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050e570(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_1050e570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1050ea90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1050ea90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10510c90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10510c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10511150(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10511150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10513700(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10513700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10516e60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10516e60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b7f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b7f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b820(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b850(...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_1051c790(undefined4 *param_1);
/* WARNING: Removing unreachable block_1051c7a0 (ram,0x101ba14a) */ void __fastcall FUN_1051c7a0(undefined4 *param_1);
/* WARNING: Removing unreachable block_1051c7c0 (ram,0x101ba14a) */ void __fastcall FUN_1051c7c0(undefined4 *param_1);
/* WARNING: Removing unreachable block_1051c7f0 (ram,0x101ba14a) */ void __fastcall FUN_1051c7f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051d150(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051d150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051d190(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051d190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10520dc0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10520dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105256f0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105256f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10525910(undefined4 *param_1,undefined4 param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10525910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10525940(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10525940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525a40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525a40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525a70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525ad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525ad0(...);
/* WARNING: Removing unreachable block_10528d90 (ram,0x101ba14a) */ void __fastcall FUN_10528d90(undefined4 *param_1);
/* WARNING: Removing unreachable block_10528db0 (ram,0x101ba14a) */ void __fastcall FUN_10528db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10529240(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10529240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1052ac40(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1052ac40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_1052c910(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1052c910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1052c940(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1052c940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1052c970(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1052c970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1052dc60(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1052dc60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1052e140(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1052e140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10532840(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10532840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10532ef0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10532ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10533bc0(undefined1 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10533bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10535d80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10535d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105367f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105367f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1053d900(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1053d900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1053e480(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1053e480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10540fe0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10540fe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10541070(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10541070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105418b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105418b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1054b270(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054b270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1054b290(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054b290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1054b2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054b2b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054c330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054c330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054c360(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054c360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054d9c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054d9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054da00(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054da00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e3b0(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e3b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054e3e0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054e3e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1054e410(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1054e410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1054e690(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1054e690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054e9c0(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054e9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f0b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f0b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f470(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f470(...);
/* WARNING: Removing unreachable block_1054f910 (ram,0x101ba14a) */ void __fastcall FUN_1054f910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10550c80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10550c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10550e50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10550e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10551820(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10551820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10551a30(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10551a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10551b00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10551b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10551bd0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10551bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10552060(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10552060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105520d0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105520d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10552150(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10552150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105524c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105524c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105525b0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105525b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10552600(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10552600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10552650(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10552650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10553a10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10553a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10554030(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10554030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10557d90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10557d90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10557fa0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10557fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105586d0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105586d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10558710(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10558710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10558750(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10558750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10558790(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10558790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105593f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105593f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10559e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10559e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562a00(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10562a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562ac0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10562ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562b40(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10562b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562b80(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10562b80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562bc0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10562bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562c00(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10562c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10562d00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10562d00(...);
/* WARNING: Removing unreachable block_105650a0 (ram,0x101ba14a) */ void __fastcall FUN_105650a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10565950(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10565950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10565980(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10565980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105659b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105659b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105659e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105659e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10566360(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10566360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105797d0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105797d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10579810(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10579810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1057a330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1057a330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b150(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b180(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b1b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b1b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057bd90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057bd90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10585740(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10585740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586030(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105860a0(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105860a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10586110(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10586110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105862b0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105862b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105862f0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105862f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586330(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586380(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105864b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105864b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105864e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105864e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10587d50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10587d50(...);
/* WARNING: Removing unreachable block_10588050 (ram,0x101ba14a) */ void __fastcall FUN_10588050(undefined4 *param_1);
/* WARNING: Removing unreachable block_10588060 (ram,0x101ba14a) */ void __fastcall FUN_10588060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105883a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105883a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10588b30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10588b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1058c450(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1058c450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10592920(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10592920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10592950(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10592950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593750(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593930(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10593f70(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10593f70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10594330(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10594330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105944c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105944c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105945f0(undefined4 param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105945f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10594c00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10594c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10595ba0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10595ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10595da0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10595da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10595f50(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10595f50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105967f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105967f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596ae0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596b60(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596be0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10597050(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10597050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105970a0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105970a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059a820(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059a820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_1059a930(uint *param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_1059a930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059b380(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059b380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b620(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1059b810(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1059b810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059bca0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059bca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c5d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c5d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c620(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c640(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059cdd0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059cdd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059ced0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059ced0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059cf70(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059cf70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1059cfc0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059cfc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ebf0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ebf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec30(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec60(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec90(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ecc0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ecc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ed70(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ed70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1059f2a0(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1059f2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_1059f440(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_1059f470(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f580(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f5b0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f5b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f670(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f6a0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f6a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1059f770(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1059f790(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f7d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f7d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f7f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f820(undefined4 param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f830(undefined4 param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fbe0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fbe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a00a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a00a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a00b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a00b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a0dd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a0dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a11d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a11d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a14d0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a14d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a14f0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a14f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_105a1de0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105a1de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_105a1e10(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105a1e10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1e40(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a1e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1e70(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a1e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1ea0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a1ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1ed0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a1ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105a2020(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105a2020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105a20a0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105a20a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a21f0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a21f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a2240(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a2240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a2290(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a2290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a22e0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a22e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a2330(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a2330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a2a50(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a2a50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4540(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4560(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4580(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a45a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a45a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105a5a60(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105a5a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105a5a90(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105a5a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5ac0(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5af0(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5af0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a6570(undefined4 param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a6570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105a6840(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105a6840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a6c50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a6c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a72e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a72e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7590(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a8f10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a8f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e70(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9eb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab5d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab5d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab600(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab630(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab660(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac080(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac100(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac170(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac1f0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105aceb0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105aceb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acf00(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acf00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acf50(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acf50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acfa0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acfa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105acff0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ad040(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105ad040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ad090(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105ad090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ad0f0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105ad0f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b0a50(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b0a50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b0b90(int param_1,undefined4 *param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b0b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b1100(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b1100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b1240(int param_1,undefined4 *param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b1240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b1580(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b1580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b1ef0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b1ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b1f20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b1f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b3da0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b3da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b3dc0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b3dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6350(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6370(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6530(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6fb0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b6fb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105b7050(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105b7050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b70b0(int param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b70b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_105b7110(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_105b7110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b7520(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b7520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b7690(undefined4 param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b7690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b7f60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b7f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b7f90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b7f90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8550(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b8550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b85a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b85a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b91d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b91d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b9960(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105b9960(...);
/* WARNING: Removing unreachable block_105b9980 (ram,0x101ba14a) */ void __fastcall FUN_105b9980(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b99a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b99a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ba420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ba420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105bac90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105bac90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105bacc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105bacc0(...);
// Reference entry 1044eda0; body size 40 bytes.
#line 1 "ENTRY_1044eda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1044eda0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchTermStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 10451e00; body size 27 bytes.
#line 1 "ENTRY_10451e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10451e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10453dc0; body size 25 bytes.
#line 1 "ENTRY_10453dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10453dc0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  piVar1 = (int *)((int *)param_1[0x20]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x1f] = (undefined4)(0);
    param_1[0x20] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  param_1[0x1c] = (undefined4)(0);
  thunk_FUN_10120220();
  piVar1 = (int *)((int *)param_1[0x12]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x11] = (undefined4)(0);
    param_1[0x12] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101eb1b0();
  thunk_FUN_101eb1b0();
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10455b70; body size 40 bytes.
#line 1 "ENTRY_10455b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10455b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGroupNameStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 1045cd10; body size 40 bytes.
#line 1 "ENTRY_1045cd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1045cd10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMuseHouseholdNameStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 1045ec80; body size 25 bytes.
#line 1 "ENTRY_1045ec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1045ec80(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  piVar1 = (int *)((int *)param_1[0x20]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x1f] = (undefined4)(0);
    param_1[0x20] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  param_1[0x1c] = (undefined4)(0);
  thunk_FUN_10120220();
  piVar1 = (int *)((int *)param_1[0x12]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x11] = (undefined4)(0);
    param_1[0x12] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101eb1b0();
  thunk_FUN_101eb1b0();
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10460fb0; body size 91 bytes.
#line 1 "ENTRY_10460fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10460fb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = (int)(thunk_FUN_110b0460(1));
  if (iVar1 != 0) {
    iVar1 = (int)(param_1 + 0x90);
    iVar2 = (int)(iVar1);
    if (param_1 == 0) {
      iVar2 = (int)(0);
    }
    thunk_FUN_110adac0(iVar2);
    if (param_1 == 0) {
      iVar1 = (int)(0);
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x9c) != (undefined1 *)(0x0)) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x9c));
    }
    thunk_FUN_110b2900(iVar1,puVar3,&DAT_118a52bc,0);
  }
  return;
}


// Reference entry 10461120; body size 120 bytes.
#line 1 "ENTRY_10461120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10461120(SCStr *param_1,SCStr *param_2,int param_3)

{
  SCStr *pSVar1;
  SCStr *pSVar2;
  SCStr *this_;
  
  if ((SCStr *)(param_1) != (SCStr *)(param_2)) {
    this_ = (SCStr *)((SCStr *)(param_3 + 8));
    pSVar2 = (SCStr *)(param_1 + 8);
    do {
      if ((SCStr *)(pSVar2) != (SCStr *)(this_)) {
        ((SCStr *)(this_ + -4))->int_release();
        *(undefined4*)(this_ + -4) = (undefined4)(*(undefined4 *)(pSVar2 + -4));
        ((SCStr *)(this_ + -4))->int_addref();
        if ((SCStr *)(pSVar2) != (SCStr *)(this_)) {
          ((SCStr *)(this_))->int_release();
          *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar2));
          ((SCStr *)(this_))->int_addref();
        }
      }
      param_3 = (int)(param_3 + 0x10);
      *(undefined4*)(this_ + 4) = (undefined4)(*(undefined4 *)(pSVar2 + 4));
      this_ = (SCStr *)(this_ + 0x10);
      pSVar1 = (SCStr *)(pSVar2 + 8);
      pSVar2 = (SCStr *)(pSVar2 + 0x10);
    } while ((SCStr *)(pSVar1) != (SCStr *)(param_2));
    return (int)(param_3);
  }
  return (int)(param_3);
}


// Reference entry 10461370; body size 11 bytes.
#line 1 "ENTRY_10461370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10461370(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)(0);
  return;
}


// Reference entry 104614c0; body size 70 bytes.
#line 1 "ENTRY_104614c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104614c0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xf] = (undefined4)(0);
  param_1[0x19] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104625f0; body size 83 bytes.
#line 1 "ENTRY_104625f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_104625f0(int param_2)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 4));
  if ((SCStr *)((param_2 + 4)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 8));
  if ((SCStr *)((param_2 + 8)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 8)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  return (int)(param_1);
}


// Reference entry 10462ce0; body size 26 bytes.
#line 1 "ENTRY_10462ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10462ce0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10465200; body size 155 bytes.
#line 1 "ENTRY_10465200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10465200(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  SCStr *this_;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4)) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
    iVar2 = (int)(param_2 * 0x10 + 0x10 + *(int *)(param_1 + 8));
    if (iVar2 != iVar1) {
      this_ = (SCStr *)((SCStr *)(iVar2 + -8));
      do {
        if (this_ + 0xc != this_ + -4) {
          ((SCStr *)(this_ + -4))->int_release();
          *(undefined4*)(this_ + -4) = (undefined4)(*(undefined4 *)(this_ + 0xc));
          ((SCStr *)(this_ + -4))->int_addref();
        }
        if (this_ + 0x10 != this_) {
          ((SCStr *)(this_))->int_release();
          *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(this_ + 0x10)));
          ((SCStr *)(this_))->int_addref();
        }
        iVar2 = (int)(iVar2 + 0x10);
        *(undefined4*)(this_ + 4) = (undefined4)(*(undefined4 *)(this_ + 0x14));
        this_ = (SCStr *)(this_ + 0x10);
      } while (iVar2 != iVar1);
      iVar1 = (int)(*(int *)(param_1 + 0xc));
    }
    (*(code *)**(undefined4 **)(iVar1 + -0x10))(0);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + -0x10);
  }
  return;
}


// Reference entry 10465d00; body size 25 bytes.
#line 1 "ENTRY_10465d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10465d00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  piVar1 = (int *)((int *)param_1[0x20]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x1f] = (undefined4)(0);
    param_1[0x20] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  param_1[0x1c] = (undefined4)(0);
  thunk_FUN_10120220();
  piVar1 = (int *)((int *)param_1[0x12]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x11] = (undefined4)(0);
    param_1[0x12] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101eb1b0();
  thunk_FUN_101eb1b0();
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10465fe0; body size 24 bytes.
#line 1 "ENTRY_10465fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10465fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  func_0x10075a36(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10467c30; body size 33 bytes.
#line 1 "ENTRY_10467c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10467c30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1046a350; body size 41 bytes.
#line 1 "ENTRY_1046a350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1046a350(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0(param_2,2,0);
  param_1[8] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPWifiModeDevicesEnumerator);
  return (undefined4 *)(param_1);
}


// Reference entry 1046b480; body size 61 bytes.
#line 1 "ENTRY_1046b480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1046b480(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 8);
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


// Reference entry 1046e740; body size 33 bytes.
#line 1 "ENTRY_1046e740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1046e740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleExplicitFilterActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10471e80; body size 95 bytes.
#line 1 "ENTRY_10471e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10471e80(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10999150());
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


// Reference entry 10472040; body size 40 bytes.
#line 1 "ENTRY_10472040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10472040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceNameStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 10472d50; body size 25 bytes.
#line 1 "ENTRY_10472d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10472d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10473360; body size 26 bytes.
#line 1 "ENTRY_10473360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10473360(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10475bd0; body size 25 bytes.
#line 1 "ENTRY_10475bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10475bd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104762d0; body size 26 bytes.
#line 1 "ENTRY_104762d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104762d0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1047fd70; body size 33 bytes.
#line 1 "ENTRY_1047fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1047fd70(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10481550; body size 36 bytes.
#line 1 "ENTRY_10481550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10481550(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10481690; body size 36 bytes.
#line 1 "ENTRY_10481690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10481690(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1047fdf0(puVar1,param_2);
  return;
}


// Reference entry 10482930; body size 95 bytes.
#line 1 "ENTRY_10482930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10482930(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10961ad0());
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


// Reference entry 104829b0; body size 95 bytes.
#line 1 "ENTRY_104829b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104829b0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10b31d30());
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


// Reference entry 10482a30; body size 95 bytes.
#line 1 "ENTRY_10482a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10482a30(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_109cb7a0());
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


// Reference entry 10482ab0; body size 95 bytes.
#line 1 "ENTRY_10482ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10482ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_109f3c80());
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


// Reference entry 10482b30; body size 95 bytes.
#line 1 "ENTRY_10482b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10482b30(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10a08d00());
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


// Reference entry 10483060; body size 33 bytes.
#line 1 "ENTRY_10483060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10483060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingVolumeLimitFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 10485d80; body size 25 bytes.
#line 1 "ENTRY_10485d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485d80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10485da0; body size 25 bytes.
#line 1 "ENTRY_10485da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485da0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10485dc0; body size 25 bytes.
#line 1 "ENTRY_10485dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485dc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10485de0; body size 25 bytes.
#line 1 "ENTRY_10485de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485de0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10485e00; body size 25 bytes.
#line 1 "ENTRY_10485e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10485e00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10486cb0; body size 49 bytes.
#line 1 "ENTRY_10486cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10486cb0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 104882a0; body size 26 bytes.
#line 1 "ENTRY_104882a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104882a0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104882c0; body size 26 bytes.
#line 1 "ENTRY_104882c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104882c0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104882e0; body size 26 bytes.
#line 1 "ENTRY_104882e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104882e0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10488300; body size 26 bytes.
#line 1 "ENTRY_10488300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10488300(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10488320; body size 26 bytes.
#line 1 "ENTRY_10488320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10488320(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10488550; body size 38 bytes.
#line 1 "ENTRY_10488550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10488550(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10488580; body size 27 bytes.
#line 1 "ENTRY_10488580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10488580(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 104885b0; body size 27 bytes.
#line 1 "ENTRY_104885b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104885b0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10495540; body size 20 bytes.
#line 1 "ENTRY_10495540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10495540(int param_1)

{
  if ((param_1 != 1) && (param_1 - 3U != 0)) {
    return (uint)(param_1 - 3U & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 104966b0; body size 36 bytes.
#line 1 "ENTRY_104966b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104966b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1047fdf0(puVar1,param_2);
  return;
}


// Reference entry 1049d740; body size 95 bytes.
#line 1 "ENTRY_1049d740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1049d740(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10973080());
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


// Reference entry 1049d8a0; body size 33 bytes.
#line 1 "ENTRY_1049d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1049d8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingBalanceValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1049d8d0; body size 33 bytes.
#line 1 "ENTRY_1049d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1049d8d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingFractionToPercentValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1049d900; body size 33 bytes.
#line 1 "ENTRY_1049d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1049d900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingHzValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1049d930; body size 33 bytes.
#line 1 "ENTRY_1049d930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1049d930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingIntToPlusMinusValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1049fc10; body size 25 bytes.
#line 1 "ENTRY_1049fc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1049fc10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104a0a60; body size 26 bytes.
#line 1 "ENTRY_104a0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104a0a60(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104a81a0; body size 40 bytes.
#line 1 "ENTRY_104a81a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104a81a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLineInNameStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 104ab2d0; body size 106 bytes.
#line 1 "ENTRY_104ab2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104ab2d0(int *param_2)
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


// Reference entry 104ac030; body size 52 bytes.
#line 1 "ENTRY_104ac030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104ac030(int param_1,undefined4 *param_2,ushort *param_3)

{
  param_3 = (ushort *)((ushort *)(uint)*param_3);
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,&param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 104ac230; body size 122 bytes.
#line 1 "ENTRY_104ac230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104ac230(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2[9] != 0) {
    puVar2 = (undefined4 *)(operator_new(0x30));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    puVar2[0xb] = (undefined4)(0);
    piVar1 = (int *)((int *)param_2[9]);
    if ((int *)(piVar1) != (int *)0x0) {
      if ((int *)(piVar1) == (int *)(param_2)) {
        uVar3 = (undefined4)((**(code **)(*piVar1 + 4))(puVar2 + 2));
        puVar2[0xb] = (undefined4)(uVar3);
        piVar1 = (int *)((int *)param_2[9]);
        if ((int *)(piVar1) != (int *)0x0) {
          (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
          param_2[9] = (int)(0);
          *(undefined4**)(param_1 + 0x24) = (undefined4 *)(puVar2);
          return;
        }
      }
      else {
        puVar2[0xb] = (undefined4)(piVar1);
        param_2[9] = (int)(0);
      }
    }
    *(undefined4**)(param_1 + 0x24) = (undefined4 *)(puVar2);
  }
  return;
}


// Reference entry 104ac870; body size 52 bytes.
#line 1 "ENTRY_104ac870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104ac870(int param_1,undefined4 *param_2,ushort *param_3)

{
  param_3 = (ushort *)((ushort *)(uint)*param_3);
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,&param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 104acb10; body size 95 bytes.
#line 1 "ENTRY_104acb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104acb10(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10916c20());
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


// Reference entry 104acb90; body size 70 bytes.
#line 1 "ENTRY_104acb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104acb90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xf] = (undefined4)(0);
  param_1[0x19] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104ad480; body size 34 bytes.
#line 1 "ENTRY_104ad480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ad480(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 104ad770; body size 30 bytes.
#line 1 "ENTRY_104ad770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ad770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004,&stack0x00000008);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104ad7a0; body size 25 bytes.
#line 1 "ENTRY_104ad7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ad7a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104ae050; body size 26 bytes.
#line 1 "ENTRY_104ae050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104ae050(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104ae070; body size 26 bytes.
#line 1 "ENTRY_104ae070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104ae070(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104ae090; body size 26 bytes.
#line 1 "ENTRY_104ae090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104ae090(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104ae0b0; body size 76 bytes.
#line 1 "ENTRY_104ae0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104ae0b0(int *param_2)
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


// Reference entry 104ae110; body size 76 bytes.
#line 1 "ENTRY_104ae110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104ae110(int *param_2)
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


// Reference entry 104b0840; body size 33 bytes.
#line 1 "ENTRY_104b0840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104b0840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUnregisteredDeviceMessageDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 104b0990; body size 35 bytes.
#line 1 "ENTRY_104b0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104b0990(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenu);
  piVar1 = (int *)((int *)param_1[0x20]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x1f] = (undefined4)(0);
    param_1[0x20] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  param_1[0x1c] = (undefined4)(0);
  thunk_FUN_10120220();
  piVar1 = (int *)((int *)param_1[0x12]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x11] = (undefined4)(0);
    param_1[0x12] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101eb1b0();
  thunk_FUN_101eb1b0();
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104b5700; body size 95 bytes.
#line 1 "ENTRY_104b5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104b5700(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10a4dc00());
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


// Reference entry 104b5880; body size 33 bytes.
#line 1 "ENTRY_104b5880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104b5880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNumPlayersUnavailableMessageDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 104b89b0; body size 25 bytes.
#line 1 "ENTRY_104b89b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104b89b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104b9240; body size 26 bytes.
#line 1 "ENTRY_104b9240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104b9240(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104c0e50; body size 50 bytes.
#line 1 "ENTRY_104c0e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104c0e50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x94));
  if (iVar1 != 1) {
    uVar2 = (uint)(0);
    if ((iVar1 != 2) && (uVar2 = 0, iVar1 != 3)) {
      uVar2 = thunk_FUN_112af4e0("SCSettingsMenuVoiceService",1,
                                 "No account settings available mapping for SCIVoiceService %i",
                                 iVar1);
    }
    return (uint)(uVar2 & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 104c0e90; body size 50 bytes.
#line 1 "ENTRY_104c0e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104c0e90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x94));
  if ((iVar1 != 1) && (iVar1 != 2)) {
    uVar2 = (uint)(0);
    if (iVar1 != 3) {
      uVar2 = thunk_FUN_112af4e0("SCSettingsMenuVoiceService",2,
                                 "No music services settings available for SCIVoiceService %i",iVar1
                                );
    }
    return (uint)(uVar2 & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 104c0ed0; body size 50 bytes.
#line 1 "ENTRY_104c0ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104c0ed0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x94));
  uVar2 = (uint)(0);
  if ((iVar1 != 1) && (uVar2 = 0, iVar1 != 2)) {
    if (iVar1 == 3) {
      return (uint)(1);
    }
    uVar2 = thunk_FUN_112af4e0("SCSettingsMenuVoiceService",1,
                               "No preferred settings available mapping for SCIVoiceService %i",
                               iVar1);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 104c0f60; body size 24 bytes.
#line 1 "ENTRY_104c0f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104c0f60(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c10d0; body size 24 bytes.
#line 1 "ENTRY_104c10d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104c10d0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  return (SCStr *)(param_1);
}


// Reference entry 104c12a0; body size 72 bytes.
#line 1 "ENTRY_104c12a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104c12a0(SCStr *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)param_1[1]);
  if (param_2 + 4 != pSVar1) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)*param_1);
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104c1300; body size 101 bytes.
#line 1 "ENTRY_104c1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104c1300(SCStr *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)param_1[2]);
  if (param_2 + 8 != pSVar1) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 8)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)param_1[1]);
  if (param_2 + 4 != pSVar1) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)*param_1);
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104c1460; body size 33 bytes.
#line 1 "ENTRY_104c1460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104c1460(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    thunk_FUN_104c49a0();
  }
  return;
}


// Reference entry 104c2320; body size 9 bytes.
#line 1 "ENTRY_104c2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104c2320(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_2 != 0) {
    thunk_FUN_104c1380(*param_2,param_2[1],param_2);
    iVar1 = (int)(*param_2);
    uVar2 = (uint)(((param_2[2] - iVar1) / 0xc) * 0xc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_2 = (int)(0);
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
  }
  return;
}


// Reference entry 104c2480; body size 25 bytes.
#line 1 "ENTRY_104c2480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104c2480(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = (undefined4)(param_4);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_2);
  return;
}


// Reference entry 104c24a0; body size 95 bytes.
#line 1 "ENTRY_104c24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104c24a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_109b6e80());
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


// Reference entry 104c25a0; body size 24 bytes.
#line 1 "ENTRY_104c25a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104c25a0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c25c0; body size 24 bytes.
#line 1 "ENTRY_104c25c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104c25c0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c26a0; body size 24 bytes.
#line 1 "ENTRY_104c26a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104c26a0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c26c0; body size 24 bytes.
#line 1 "ENTRY_104c26c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104c26c0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 104c2a10; body size 46 bytes.
#line 1 "ENTRY_104c2a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104c2a10(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  thunk_FUN_104c1a00(param_2,param_3,param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104c35b0; body size 33 bytes.
#line 1 "ENTRY_104c35b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104c35b0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 104c35e0; body size 33 bytes.
#line 1 "ENTRY_104c35e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104c35e0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 104c45b0; body size 136 bytes.
#line 1 "ENTRY_104c45b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104c45b0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x15555556) {
    param_2 = (uint)(param_2 * 0xc);
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
  else {
    thunk_FUN_104c4c30();
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 104c4660; body size 33 bytes.
#line 1 "ENTRY_104c4660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104c4660(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_104c4c80(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 0xc);
  return;
}


// Reference entry 104c4690; body size 131 bytes.
#line 1 "ENTRY_104c4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104c4690(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x15555556) {
    param_2 = (uint)(param_2 * 0xc);
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


// Reference entry 104c4740; body size 62 bytes.
#line 1 "ENTRY_104c4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104c4740(uint param_2)
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


// Reference entry 104c4860; body size 35 bytes.
#line 1 "ENTRY_104c4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104c4860(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    thunk_FUN_104c49a0();
  }
  return;
}


// Reference entry 104c4d00; body size 90 bytes.
#line 1 "ENTRY_104c4d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104c4d00(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x15555556) {
    param_1 = (uint)(param_1 * 0xc);
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


// Reference entry 104c6150; body size 60 bytes.
#line 1 "ENTRY_104c6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104c6150(int param_1,int param_2)

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


// Reference entry 104c9640; body size 50 bytes.
#line 1 "ENTRY_104c9640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104c9640(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x98));
  uVar2 = (uint)(0);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      return (uint)(1);
    }
    uVar2 = (uint)(0);
    if (iVar1 != 3) {
      uVar2 = thunk_FUN_112af4e0("SCSettingsMenuVoiceServiceSettings",1,
                                 "No account settings mapping for SCIVoiceService %i",iVar1);
    }
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 104c9680; body size 54 bytes.
#line 1 "ENTRY_104c9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_104c9680(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x98));
  if (iVar1 == 0) {
    thunk_FUN_112af4e0("SCSettingsMenuVoiceServiceSettings",1,
                       "No wake word chime mapping for SCIVoiceService %i",0);
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 104cb7b0; body size 40 bytes.
#line 1 "ENTRY_104cb7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104cb7b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 104cb880; body size 54 bytes.
#line 1 "ENTRY_104cb880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104cb880(undefined4 *param_1)

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


// Reference entry 104cc170; body size 70 bytes.
#line 1 "ENTRY_104cc170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104cc170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[8] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdatePopoverActionFactory);
  param_1[4] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d47d0; body size 33 bytes.
#line 1 "ENTRY_104d47d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d47d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    thunk_FUN_104d53b0();
  }
  return;
}


// Reference entry 104d4800; body size 23 bytes.
#line 1 "ENTRY_104d4800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104d4800(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_104d5150(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x28);
  return;
}


// Reference entry 104d4910; body size 23 bytes.
#line 1 "ENTRY_104d4910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104d4910(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_104d5150(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x28);
  return;
}


// Reference entry 104d4e20; body size 14 bytes.
#line 1 "ENTRY_104d4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d4e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_104d5150(param_3);
  return;
}


// Reference entry 104d4e40; body size 14 bytes.
#line 1 "ENTRY_104d4e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d4e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_104d5150(param_3);
  return;
}


// Reference entry 104d4f40; body size 9 bytes.
#line 1 "ENTRY_104d4f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104d4f40(undefined4 param_1,SCStr *param_2)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  ((SCStr *)(param_2 + 0x24))->int_release();
  *(undefined4*)(param_2 + 0x24) = (undefined4)(0);

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4*)(param_2 + 4) = (undefined4)(0);

  ((SCStr *)(param_2))->int_release();
  *(undefined4*)param_2 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 104d4f50; body size 40 bytes.
#line 1 "ENTRY_104d4f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104d4f50(undefined4 param_2)
{
  int param_1 = (int )this;
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_104d5150(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x28);
    return;
  }
  thunk_FUN_104d4930(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 104d4fd0; body size 27 bytes.
#line 1 "ENTRY_104d4fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d4fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104d5230; body size 42 bytes.
#line 1 "ENTRY_104d5230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d5230(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d55a0; body size 63 bytes.
#line 1 "ENTRY_104d55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104d55a0(uint param_2)
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


// Reference entry 104d5c00; body size 90 bytes.
#line 1 "ENTRY_104d5c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104d5c00(uint param_1)

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


// Reference entry 104d5d70; body size 9 bytes.
#line 1 "ENTRY_104d5d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d5d70(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)((int *)(*param_1) == (int *)(param_1)[1])));
}


// Reference entry 104d6350; body size 10 bytes.
#line 1 "ENTRY_104d6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104d6350(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)((int)((param_1 + 8)) == *(int *)(param_1 + 0xc))));
}


// Reference entry 104d6360; body size 100 bytes.
#line 1 "ENTRY_104d6360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104d6360(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8));
  iVar1 = (int)(iVar3 >> 0x1f);
  iVar5 = (int)(iVar3 / 0x28 + iVar1);
  if (iVar5 == iVar1) {
    return (uint)(((uint)((int3)((ulonglong)((longlong)iVar3 * 0x66666667) >> 8)) << 8 | (uint)(param_2 == iVar5 - iVar1)));
  }
  uVar2 = (uint)(0);
  uVar6 = (uint)(0);
  if (iVar5 != iVar1) {
    puVar4 = (uint *)((uint *)(*(int *)(param_1 + 8) + 0x20));
    do {
      if (((uVar2 != 0) && (*puVar4 < uVar2)) ||
         ((uVar2 = *puVar4, param_2 <= uVar2 && ((uVar2 != 0 || (param_2 != 0)))))) {
        return (uint)(uVar2 & 0xffffff00);
      }
      uVar6 = (uint)(uVar6 + 1);
      puVar4 = (uint *)(puVar4 + 10);
    } while (uVar6 < (uint)(iVar5 - iVar1));
  }
  return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 104d6400; body size 40 bytes.
#line 1 "ENTRY_104d6400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104d6400(undefined4 param_2)
{
  int param_1 = (int )this;
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_104d5150(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x28);
    return;
  }
  thunk_FUN_104d4930(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 104d6f10; body size 27 bytes.
#line 1 "ENTRY_104d6f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104d6f10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104d7500; body size 42 bytes.
#line 1 "ENTRY_104d7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104d7500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseDataSourceSettingsSink);
  return (undefined4 *)(param_1);
}


// Reference entry 104d7d20; body size 49 bytes.
#line 1 "ENTRY_104d7d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104d7d20(uint param_2)
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


// Reference entry 104d81e0; body size 87 bytes.
#line 1 "ENTRY_104d81e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104d81e0(uint param_1)

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


// Reference entry 104da3f0; body size 40 bytes.
#line 1 "ENTRY_104da3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104da3f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 104da430; body size 40 bytes.
#line 1 "ENTRY_104da430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104da430(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 104da470; body size 27 bytes.
#line 1 "ENTRY_104da470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104da470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104db900; body size 50 bytes.
#line 1 "ENTRY_104db900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCIndexRange * FUN_104db900(SCIndexRange *param_1,SCIndexRange *param_2,SCIndexRange *param_3)

{
  if ((SCIndexRange *)((param_2)) == (SCIndexRange *)(param_1)) {
    return (SCIndexRange *)(param_3);
  }
  do {
    param_2 = (SCIndexRange *)(param_2 + -8);
    param_3 = (SCIndexRange *)(param_3 + -8);
    ((SCIndexRange *)(param_3))->op_assign(param_2);
  } while ((SCIndexRange *)((param_2)) != (SCIndexRange *)(param_1));
  return (SCIndexRange *)(param_3);
}


// Reference entry 104db940; body size 50 bytes.
#line 1 "ENTRY_104db940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCIndexRange * FUN_104db940(SCIndexRange *param_1,SCIndexRange *param_2,SCIndexRange *param_3)

{
  if ((SCIndexRange *)(param_1) == (SCIndexRange *)(param_2)) {
    return (SCIndexRange *)(param_3);
  }
  do {
    ((SCIndexRange *)(param_3))->op_assign(param_1);
    param_1 = (SCIndexRange *)(param_1 + 8);
    param_3 = (SCIndexRange *)(param_3 + 8);
  } while ((SCIndexRange *)(param_1) != (SCIndexRange *)(param_2));
  return (SCIndexRange *)(param_3);
}


// Reference entry 104db990; body size 46 bytes.
#line 1 "ENTRY_104db990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104db990(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    puVar2 = (undefined4 *)(param_3);
    puVar3 = (undefined4 *)(param_1);
    do {
      uVar1 = (undefined4)(*puVar3);
      puVar3 = (undefined4 *)(puVar3 + 2);
      *puVar2 = (undefined4)(uVar1);
      puVar2[1] = (undefined4)(*(undefined4 *)((int)param_1 + (4 - (int)param_3) + (int)puVar2));
      puVar2 = (undefined4 *)(puVar2 + 2);
    } while ((undefined4 *)(puVar3) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104db9d0; body size 46 bytes.
#line 1 "ENTRY_104db9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104db9d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    puVar2 = (undefined4 *)(param_3);
    puVar3 = (undefined4 *)(param_1);
    do {
      uVar1 = (undefined4)(*puVar3);
      puVar3 = (undefined4 *)(puVar3 + 2);
      *puVar2 = (undefined4)(uVar1);
      puVar2[1] = (undefined4)(*(undefined4 *)((int)param_1 + (4 - (int)param_3) + (int)puVar2));
      puVar2 = (undefined4 *)(puVar2 + 2);
    } while ((undefined4 *)(puVar3) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104dbaa0; body size 159 bytes.
#line 1 "ENTRY_104dbaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104dbaa0(undefined4 *param_2,SCIndexRange *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  SCIndexRange *pSVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pSVar1 = (SCIndexRange *)(*(SCIndexRange **)(param_1 + 4));
  if ((SCIndexRange *)(pSVar1) == *(SCIndexRange **)(param_1 + 8)) {
    uVar2 = (undefined4)(thunk_FUN_104db6f0(param_3,param_4));
    *param_2 = (undefined4)(uVar2);
    return (undefined4 *)(param_2);
  }
  uStack_8 = (undefined4)(*param_4);
  if ((SCIndexRange *)((param_3)) != (SCIndexRange *)(pSVar1)) {
    uStack_4 = (undefined4)(param_4[1]);
    *(undefined4*)pSVar1 = (undefined4)((SCIndexRange *)(*(undefined4 *)(pSVar1 + -8)));
    *(undefined4*)(pSVar1 + 4) = (undefined4)(*(undefined4 *)(pSVar1 + -4));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    pSVar1 = (SCIndexRange *)(pSVar1 + -8);
    while ((SCIndexRange *)(pSVar1) != (SCIndexRange *)(param_3)) {
      ((SCIndexRange *)(pSVar1))->op_assign(pSVar1 + -8);
      pSVar1 = (SCIndexRange *)(pSVar1 + -8);
    }
    ((SCIndexRange *)(param_3))->op_assign((SCIndexRange *)&uStack_8);
    *param_2 = (undefined4)(param_3);
    return (undefined4 *)(param_2);
  }
  *(undefined4*)pSVar1 = (undefined4)((SCIndexRange *)(uStack_8));
  *(undefined4*)(pSVar1 + 4) = (undefined4)(param_4[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  *param_2 = (undefined4)(param_3);
  return (undefined4 *)(param_2);
}


// Reference entry 104dbb70; body size 45 bytes.
#line 1 "ENTRY_104dbb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104dbb70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(param_2[1]);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104db6f0(puVar1,param_2);
  return;
}


// Reference entry 104dbc00; body size 54 bytes.
#line 1 "ENTRY_104dbc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dbc00(undefined4 *param_1)

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


// Reference entry 104dbc50; body size 27 bytes.
#line 1 "ENTRY_104dbc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104dbc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104dbe60; body size 42 bytes.
#line 1 "ENTRY_104dbe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104dbe60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseDataSourceEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 104dc450; body size 18 bytes.
#line 1 "ENTRY_104dc450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104dc450(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 104dc740; body size 49 bytes.
#line 1 "ENTRY_104dc740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104dc740(uint param_2)
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


// Reference entry 104dc8e0; body size 48 bytes.
#line 1 "ENTRY_104dc8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc8e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    puVar2 = (undefined4 *)(param_3);
    puVar3 = (undefined4 *)(param_1);
    do {
      uVar1 = (undefined4)(*puVar3);
      puVar3 = (undefined4 *)(puVar3 + 2);
      *puVar2 = (undefined4)(uVar1);
      puVar2[1] = (undefined4)(*(undefined4 *)((int)param_1 + (4 - (int)param_3) + (int)puVar2));
      puVar2 = (undefined4 *)(puVar2 + 2);
    } while ((undefined4 *)(puVar3) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104dc920; body size 42 bytes.
#line 1 "ENTRY_104dc920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc920(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      *(undefined4*)(param_3 + (int)param_1) = (undefined4)(*param_1);
      *(undefined4*)(param_3 + 4 + (int)param_1) = (undefined4)(param_1[1]);
      param_1 = (undefined4 *)(param_1 + 2);
    } while ((undefined4 *)(param_1) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104dc960; body size 42 bytes.
#line 1 "ENTRY_104dc960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dc960(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      *(undefined4*)(param_3 + (int)param_1) = (undefined4)(*param_1);
      *(undefined4*)(param_3 + 4 + (int)param_1) = (undefined4)(param_1[1]);
      param_1 = (undefined4 *)(param_1 + 2);
    } while ((undefined4 *)(param_1) != (undefined4 *)(param_2));
  }
  return;
}


// Reference entry 104dc9c0; body size 157 bytes.
#line 1 "ENTRY_104dc9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104dc9c0(SCIndexRange *param_2)
{
  int param_1 = (int )this;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    thunk_FUN_112af4e0("SelectionManager",1,"addRange(): failed (locked)");
    return;
  }
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24));
  iVar3 = (int)(*(int *)(param_1 + 0x20));
  uVar4 = (uint)(0);
  if ((int)puVar2 - iVar3 >> 3 != 0) {
    do {
      bVar1 = (bool)(((SCIndexRange *)(param_2))->op_lt((SCIndexRange *)(iVar3 + uVar4 * 8)));
      if (bVar1) {
        thunk_FUN_104dd350(uVar4,param_2);
        return;
      }
      puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24));
      uVar4 = (uint)(uVar4 + 1);
      iVar3 = (int)(*(int *)(param_1 + 0x20));
    } while (uVar4 < (uint)((int)puVar2 - iVar3 >> 3));
  }
  if ((undefined4 *)(puVar2) == *(undefined4 **)(param_1 + 0x28)) {
    thunk_FUN_104db6f0(puVar2,param_2);
    return;
  }
  *puVar2 = (undefined4)(*(undefined4 *)param_2);
  puVar2[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(int*)(param_1 + 0x24) = (int)(*(int *)(param_1 + 0x24) + 8);
  return;
}


// Reference entry 104dcb90; body size 87 bytes.
#line 1 "ENTRY_104dcb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104dcb90(uint param_1)

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


// Reference entry 104dcc00; body size 50 bytes.
#line 1 "ENTRY_104dcc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104dcc00(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(param_2[1]);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_104db6f0(puVar1,param_2);
  return;
}


// Reference entry 104dcc80; body size 61 bytes.
#line 1 "ENTRY_104dcc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104dcc80(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 8);
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


// Reference entry 104dcf50; body size 77 bytes.
#line 1 "ENTRY_104dcf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104dcf50(undefined4 *param_2,SCIndexRange *param_3)
{
  int param_1 = (int )this;
  SCIndexRange *pSVar1;
  SCIndexRange *pSVar2;
  SCIndexRange *this_;
  
  pSVar2 = (SCIndexRange *)(param_3 + 8);
  pSVar1 = (SCIndexRange *)(*(SCIndexRange **)(param_1 + 4));
  this_ = (SCIndexRange *)(param_3);
  if ((SCIndexRange *)((pSVar2)) != (SCIndexRange *)(pSVar1)) {
    do {
      ((SCIndexRange *)(this_))->op_assign(pSVar2);
      pSVar2 = (SCIndexRange *)(pSVar2 + 8);
      this_ = (SCIndexRange *)(this_ + 8);
    } while ((SCIndexRange *)((pSVar2)) != (SCIndexRange *)(pSVar1));
    pSVar1 = (SCIndexRange *)(*(SCIndexRange **)(param_1 + 4));
  }
  *(SCIndexRange**)(param_1 + 4) = (SCIndexRange *)(pSVar1 + -8);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 104dd060; body size 92 bytes.
#line 1 "ENTRY_104dd060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_104dd060(SCIndexRange *param_2,char param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)(param_1 + 0x2c));
  *piVar1 = (int)(*piVar1 + 1);
  uVar2 = (uint)(*(uint *)(param_1 + 0x2c));
  if (*piVar1 < 0) {
    return (undefined4)(0);
  }
  iVar3 = (int)(*(int *)(param_1 + 0x20));
  uVar4 = (uint)(*(int *)(param_1 + 0x24) - iVar3 >> 3);
  if (uVar2 < uVar4) {
    if (param_3 != '\0') {
      ((SCIndexRange *)(param_2))->op_assign((SCIndexRange *)(iVar3 + ((uVar4 - uVar2) + -1) * 8));
      return (undefined4)(1);
    }
    ((SCIndexRange *)(param_2))->op_assign((SCIndexRange *)(iVar3 + uVar2 * 8));
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 104dd280; body size 159 bytes.
#line 1 "ENTRY_104dd280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104dd280(undefined4 *param_2,SCIndexRange *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  SCIndexRange *pSVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pSVar1 = (SCIndexRange *)(*(SCIndexRange **)(param_1 + 4));
  if ((SCIndexRange *)(pSVar1) == *(SCIndexRange **)(param_1 + 8)) {
    uVar2 = (undefined4)(thunk_FUN_104db6f0(param_3,param_4));
    *param_2 = (undefined4)(uVar2);
    return (undefined4 *)(param_2);
  }
  uStack_8 = (undefined4)(*param_4);
  if ((SCIndexRange *)((param_3)) != (SCIndexRange *)(pSVar1)) {
    uStack_4 = (undefined4)(param_4[1]);
    *(undefined4*)pSVar1 = (undefined4)((SCIndexRange *)(*(undefined4 *)(pSVar1 + -8)));
    *(undefined4*)(pSVar1 + 4) = (undefined4)(*(undefined4 *)(pSVar1 + -4));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    pSVar1 = (SCIndexRange *)(pSVar1 + -8);
    while ((SCIndexRange *)(pSVar1) != (SCIndexRange *)(param_3)) {
      ((SCIndexRange *)(pSVar1))->op_assign(pSVar1 + -8);
      pSVar1 = (SCIndexRange *)(pSVar1 + -8);
    }
    ((SCIndexRange *)(param_3))->op_assign((SCIndexRange *)&uStack_8);
    *param_2 = (undefined4)(param_3);
    return (undefined4 *)(param_2);
  }
  *(undefined4*)pSVar1 = (undefined4)((SCIndexRange *)(uStack_8));
  *(undefined4*)(pSVar1 + 4) = (undefined4)(param_4[1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  *param_2 = (undefined4)(param_3);
  return (undefined4 *)(param_2);
}


// Reference entry 104dd620; body size 45 bytes.
#line 1 "ENTRY_104dd620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104dd620(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(param_2[1]);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_104db6f0(puVar1,param_2);
  return;
}


// Reference entry 104ddbe0; body size 21 bytes.
#line 1 "ENTRY_104ddbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104ddbe0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 104ddc00; body size 21 bytes.
#line 1 "ENTRY_104ddc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104ddc00(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 104ddd90; body size 8 bytes.
#line 1 "ENTRY_104ddd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_104ddd90(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18));
  puVar2 = (undefined4 *)((undefined4 *)0x0);
  while( true ) {
    puVar1 = (undefined4 *)(puVar4);
    if ((undefined4 *)(puVar1) == (undefined4 *)0x0) {

      puVar4 = (undefined4 *)(operator_new(8));
      if ((undefined4 *)(puVar4) == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        *puVar4 = (undefined4)(0);

        puVar4[1] = (undefined4)(param_2);
        if (param_2 != 0) {
          thunk_FUN_1123fce0(param_2 + 4,uVar3);
        }
      }
      if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
        *(undefined4**)(param_1 + 0x18) = (undefined4 *)(puVar4);
      }
      else {
        *puVar2 = (undefined4)(puVar4);
      }

      return (undefined4)(1);
    }
    if (puVar1[1] == param_2) break;
    puVar4 = (undefined4 *)((undefined4 *)*puVar1);
    puVar2 = (undefined4 *)(puVar1);
  }
  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 104ddf50; body size 8 bytes.
#line 1 "ENTRY_104ddf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_104ddf50(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x18));
  puVar3 = (undefined4 *)((undefined4 *)0x0);
  do {
    puVar2 = (undefined4 *)(puVar3);
    puVar3 = (undefined4 *)(puVar1);
    if ((undefined4 *)(puVar3) == (undefined4 *)0x0) {
      return (undefined4)(0);
    }
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
  } while (puVar3[1] != param_2);

  if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
    *(undefined4**)(param_1 + 0x18) = (undefined4 *)(puVar1);
  }
  else {
    *puVar2 = (undefined4)(puVar1);
  }
  if ((undefined4 *)(puVar3) == *(undefined4 **)(param_1 + 0x1c)) {
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(**(undefined4 **)(param_1 + 0x1c));
  }
  puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);

  if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar1 + 1,uVar4), iVar5 == 0)) {
    (**(code **)*puVar1)(1);
  }
  thunk_FUN_1148a50e(puVar3,8);

  return (undefined4)(1);

 } catch (...) { }
}


// Reference entry 104de310; body size 13 bytes.
#line 1 "ENTRY_104de310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x40))();
  return (undefined4)(0);
}


// Reference entry 104de320; body size 13 bytes.
#line 1 "ENTRY_104de320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x38))();
  return (undefined4)(0);
}


// Reference entry 104de330; body size 13 bytes.
#line 1 "ENTRY_104de330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de330(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
  return (undefined4)(0);
}


// Reference entry 104de340; body size 13 bytes.
#line 1 "ENTRY_104de340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de340(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x44))();
  return (undefined4)(0);
}


// Reference entry 104de530; body size 13 bytes.
#line 1 "ENTRY_104de530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  return (undefined4)(0);
}


// Reference entry 104de540; body size 13 bytes.
#line 1 "ENTRY_104de540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))();
  return (undefined4)(0);
}


// Reference entry 104de6a0; body size 13 bytes.
#line 1 "ENTRY_104de6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
  return (undefined4)(0);
}


// Reference entry 104de6b0; body size 13 bytes.
#line 1 "ENTRY_104de6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x54))();
  return (undefined4)(0);
}


// Reference entry 104de6c0; body size 13 bytes.
#line 1 "ENTRY_104de6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
  return (undefined4)(0);
}


// Reference entry 104de6d0; body size 13 bytes.
#line 1 "ENTRY_104de6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))();
  return (undefined4)(0);
}


// Reference entry 104de6e0; body size 13 bytes.
#line 1 "ENTRY_104de6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  return (undefined4)(0);
}


// Reference entry 104de6f0; body size 13 bytes.
#line 1 "ENTRY_104de6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de6f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x58))();
  return (undefined4)(0);
}


// Reference entry 104de700; body size 13 bytes.
#line 1 "ENTRY_104de700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x28))();
  return (undefined4)(0);
}


// Reference entry 104de710; body size 13 bytes.
#line 1 "ENTRY_104de710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de710(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 8))();
  return (undefined4)(0);
}


// Reference entry 104de720; body size 13 bytes.
#line 1 "ENTRY_104de720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104de720(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x48))();
  return (undefined4)(0);
}


// Reference entry 104deb10; body size 13 bytes.
#line 1 "ENTRY_104deb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104deb10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))();
  return (undefined4)(0);
}


// Reference entry 104deb20; body size 13 bytes.
#line 1 "ENTRY_104deb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104deb20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  return (undefined4)(0);
}


// Reference entry 104deb30; body size 13 bytes.
#line 1 "ENTRY_104deb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104deb30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x50))();
  return (undefined4)(0);
}


// Reference entry 104ded00; body size 54 bytes.
#line 1 "ENTRY_104ded00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104ded00(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104ded50; body size 61 bytes.
#line 1 "ENTRY_104ded50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104ded50(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104df190; body size 68 bytes.
#line 1 "ENTRY_104df190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104df190(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  param_1[3] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104df2e0; body size 56 bytes.
#line 1 "ENTRY_104df2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104df2e0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104df330; body size 63 bytes.
#line 1 "ENTRY_104df330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104df330(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104df380; body size 70 bytes.
#line 1 "ENTRY_104df380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104df380(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  param_1[3] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 104df400; body size 76 bytes.
#line 1 "ENTRY_104df400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_104df400(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  thunk_FUN_101ba530(param_2);
  iVar2 = (int)(*(int *)(param_2 + 4));
  if ((int)(iVar2) != *(int *)(param_1 + 4)) {
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if ((int *)(piVar1) != (int *)0x0) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*(int *)(param_2 + 4));
    }
    *(int*)(param_1 + 4) = (int)(iVar2);
    piVar1 = (int *)(*(int **)(param_2 + 8));
    *(int**)(param_1 + 8) = (int *)(piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int)(param_1);
}


// Reference entry 104e0840; body size 51 bytes.
#line 1 "ENTRY_104e0840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0840(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_104e3e20();
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 104e0a80; body size 26 bytes.
#line 1 "ENTRY_104e0a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e0a80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_104e3e20();
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 104e0bf0; body size 92 bytes.
#line 1 "ENTRY_104e0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_104e0bf0(int *param_1,int *param_2,int *param_3)

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


// Reference entry 104e1860; body size 20 bytes.
#line 1 "ENTRY_104e1860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e1860(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_104df920(param_1,param_2,param_2);
  return;
}


// Reference entry 104e1b90; body size 9 bytes.
#line 1 "ENTRY_104e1b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e1b90(undefined4 param_1,int *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[2]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_2);

  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4*)(iVar2 + -8) = (undefined4)(0);
      *(undefined4*)(iVar2 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 104e1de0; body size 132 bytes.
#line 1 "ENTRY_104e1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104e1de0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(undefined1 *)(param_3[2]) != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)param_3[2]);
  }
  uVar4 = (uint)(thunk_FUN_101c82e0(puVar5));
  uVar4 = (uint)(*(uint *)(param_1 + 0x18) & uVar4);
  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + uVar4 * 8));
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + uVar4 * 8));
  if ((int *)(int *)(piVar1[1]) == (int *)(param_3)) {
    if ((int *)(piVar2) == (int *)(param_3)) {
      iVar3 = (int)(*(int *)(param_1 + 4));
      *piVar1 = (int)(iVar3);
      piVar1[1] = (int)(iVar3);
    }
    else {
      piVar1[1] = (int)(param_3[1]);
    }
  }
  else if ((int *)(piVar2) == (int *)(param_3)) {
    *piVar1 = (int)(*param_3);
  }
  iVar3 = (int)(*param_3);
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
  *(int*)param_3[1] = (int)((int)(iVar3));
  *(int*)(iVar3 + 4) = (int)(param_3[1]);
  thunk_FUN_104e0aa0(param_1 + 4,param_3);
  *param_2 = (int)(iVar3);
  return;
}


// Reference entry 104e2390; body size 30 bytes.
#line 1 "ENTRY_104e2390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e2390(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 104e23c0; body size 30 bytes.
#line 1 "ENTRY_104e23c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e23c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 104e23f0; body size 30 bytes.
#line 1 "ENTRY_104e23f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e23f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 104e4720; body size 31 bytes.
#line 1 "ENTRY_104e4720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104e4720(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_104df920(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e4920; body size 16 bytes.
#line 1 "ENTRY_104e4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104e4920(undefined4 *param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  *param_2 = (undefined4)(param_1);
  param_2[1] = (undefined4)(param_3);
  return;
}


// Reference entry 104e4940; body size 32 bytes.
#line 1 "ENTRY_104e4940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_104e4940(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(1 << ((byte)param_2 & 0x1f));
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((*(uint *)(param_1 + (param_2 >> 5) * 4) & uVar1) != 0)));
}


// Reference entry 104e4c00; body size 18 bytes.
#line 1 "ENTRY_104e4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104e4c00(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 104e54c0; body size 30 bytes.
#line 1 "ENTRY_104e54c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104e54c0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_104e7990(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 104e54f0; body size 49 bytes.
#line 1 "ENTRY_104e54f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104e54f0(uint param_2)
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


// Reference entry 104e5530; body size 49 bytes.
#line 1 "ENTRY_104e5530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104e5530(uint param_2)
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


// Reference entry 104e5690; body size 20 bytes.
#line 1 "ENTRY_104e5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e5690(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104e56b0; body size 20 bytes.
#line 1 "ENTRY_104e56b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e56b0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104e56d0; body size 20 bytes.
#line 1 "ENTRY_104e56d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e56d0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104e56f0; body size 66 bytes.
#line 1 "ENTRY_104e56f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104e56f0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 104e5750; body size 66 bytes.
#line 1 "ENTRY_104e5750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104e5750(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 104e57b0; body size 66 bytes.
#line 1 "ENTRY_104e57b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104e57b0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 104e5810; body size 182 bytes.
#line 1 "ENTRY_104e5810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104e5810(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_104e7560();
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
    thunk_FUN_104dfcb0(iVar2,param_1[1],param_1);
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
  iVar2 = (int)(thunk_FUN_104e7990(uVar3));
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 104e5990; body size 21 bytes.
#line 1 "ENTRY_104e5990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e5990(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_104df920(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 104e5c00; body size 54 bytes.
#line 1 "ENTRY_104e5c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104e5c00(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + param_3 * 8));
  if ((int *)(int *)(piVar1[1]) != (int *)(param_2)) {
    if ((int *)(int *)(*piVar1) == (int *)((param_2))) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)(int *)(*piVar1) == (int *)((param_2))) {
    iVar2 = (int)(*(int *)(param_1 + 4));
    *piVar1 = (int)(iVar2);
    piVar1[1] = (int)(iVar2);
    return;
  }
  piVar1[1] = (int)(param_2[1]);
  return;
}


// Reference entry 104e6630; body size 92 bytes.
#line 1 "ENTRY_104e6630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104e6630(uint param_2,int param_3,int *param_4)
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


// Reference entry 104e66b0; body size 92 bytes.
#line 1 "ENTRY_104e66b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104e66b0(uint param_2,int param_3,int *param_4)
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


// Reference entry 104e6730; body size 92 bytes.
#line 1 "ENTRY_104e6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104e6730(uint param_2,int param_3,int *param_4)
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


// Reference entry 104e6c20; body size 56 bytes.
#line 1 "ENTRY_104e6c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_104e6c20(uint param_2,char param_3)
{
  int param_1 = (int )this;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((uint *)(param_1 + (param_2 >> 5) * 4));
  uVar2 = (uint)(1 << ((byte)param_2 & 0x1f));
  if (param_3 != '\0') {
    *puVar1 = (uint)(*puVar1 | uVar2);
    return (int)(param_1);
  }
  *puVar1 = (uint)(~uVar2 & *puVar1);
  return (int)(param_1);
}


// Reference entry 104e6c70; body size 32 bytes.
#line 1 "ENTRY_104e6c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_104e6c70(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(1 << ((byte)param_2 & 0x1f));
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((*(uint *)(param_1 + (param_2 >> 5) * 4) & uVar1) != 0)));
}


// Reference entry 104e7360; body size 114 bytes.
#line 1 "ENTRY_104e7360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_104e7360(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(undefined1 *)(param_2[2]) != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)param_2[2]);
  }
  uVar3 = (uint)(thunk_FUN_101c82e0(puVar4));
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & uVar3) * 8));
  if ((int *)(int *)(piVar1[1]) == (int *)(param_2)) {
    if ((int *)(int *)(*piVar1) == (int *)((param_2))) {
      iVar2 = (int)(*(int *)(param_1 + 4));
      *piVar1 = (int)(iVar2);
      piVar1[1] = (int)(iVar2);
    }
    else {
      piVar1[1] = (int)(param_2[1]);
    }
  }
  else if ((int *)(int *)(*piVar1) == (int *)((param_2))) {
    *piVar1 = (int)(*param_2);
  }
  iVar2 = (int)(*param_2);
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -1);
  *(int*)param_2[1] = (int)((int)(iVar2));
  *(int*)(iVar2 + 4) = (int)(param_2[1]);
  thunk_FUN_104e0aa0(param_1 + 4,param_2);
  return (int)(iVar2);
}


// Reference entry 104e73f0; body size 77 bytes.
#line 1 "ENTRY_104e73f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104e73f0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int *)(param_2) != (int *)(param_3)) {
    puVar1 = (undefined4 *)((undefined4 *)param_2[1]);
    iVar3 = (int)(0);
    *puVar1 = (undefined4)(param_3);
    param_3[1] = (int)((int)puVar1);
    do {
      piVar2 = (int *)((int *)*param_2);
      thunk_FUN_104e3e20();
      thunk_FUN_1148a50e(param_2,0x14);
      iVar3 = (int)(iVar3 + 1);
      param_2 = (int *)(piVar2);
    } while ((int *)(piVar2) != (int *)(param_3));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) - iVar3);
  }
  return (int *)(param_3);
}


// Reference entry 104e7480; body size 43 bytes.
#line 1 "ENTRY_104e7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e7480(int param_1,int param_2,int param_3)

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


// Reference entry 104e74c0; body size 43 bytes.
#line 1 "ENTRY_104e74c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e74c0(int param_1,int param_2,int param_3)

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


// Reference entry 104e7500; body size 43 bytes.
#line 1 "ENTRY_104e7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e7500(int param_1,int param_2,int param_3)

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


// Reference entry 104e7820; body size 87 bytes.
#line 1 "ENTRY_104e7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7820(uint param_1)

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


// Reference entry 104e7890; body size 90 bytes.
#line 1 "ENTRY_104e7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7890(uint param_1)

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


// Reference entry 104e7910; body size 90 bytes.
#line 1 "ENTRY_104e7910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7910(uint param_1)

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


// Reference entry 104e7a00; body size 87 bytes.
#line 1 "ENTRY_104e7a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7a00(uint param_1)

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


// Reference entry 104e7a70; body size 87 bytes.
#line 1 "ENTRY_104e7a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7a70(uint param_1)

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


// Reference entry 104e7ae0; body size 87 bytes.
#line 1 "ENTRY_104e7ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7ae0(uint param_1)

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


// Reference entry 104e7b50; body size 87 bytes.
#line 1 "ENTRY_104e7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104e7b50(uint param_1)

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


// Reference entry 104e9a10; body size 68 bytes.
#line 1 "ENTRY_104e9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e9a10(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_104e0760(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_104e1f30(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 104e9b00; body size 68 bytes.
#line 1 "ENTRY_104e9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104e9b00(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_104e0880(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_104e2030(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 104e9d30; body size 54 bytes.
#line 1 "ENTRY_104e9d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e9d30(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104e9d80; body size 57 bytes.
#line 1 "ENTRY_104e9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e9d80(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104e9dd0; body size 57 bytes.
#line 1 "ENTRY_104e9dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104e9dd0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104e9e20; body size 57 bytes.
#line 1 "ENTRY_104e9e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e9e20(int param_1,int param_2)

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


// Reference entry 104e9e70; body size 60 bytes.
#line 1 "ENTRY_104e9e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e9e70(int param_1,int param_2)

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


// Reference entry 104e9ec0; body size 60 bytes.
#line 1 "ENTRY_104e9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e9ec0(int param_1,int param_2)

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


// Reference entry 104e9fb0; body size 61 bytes.
#line 1 "ENTRY_104e9fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104e9fb0(int param_1,int param_2)

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


// Reference entry 104ea000; body size 61 bytes.
#line 1 "ENTRY_104ea000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104ea000(int param_1,int param_2)

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


// Reference entry 104ea050; body size 61 bytes.
#line 1 "ENTRY_104ea050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104ea050(int param_1,int param_2)

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


// Reference entry 104ea120; body size 9 bytes.
#line 1 "ENTRY_104ea120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104ea120(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)((int *)(*param_1) == (int *)(param_1)[1])));
}


// Reference entry 104ea1a0; body size 126 bytes.
#line 1 "ENTRY_104ea1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104ea1a0(int param_2)
{
  int param_1 = (int )this;
  bool bVar1;
  uint in_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  if (param_2 != 0) {
    bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 8)))->op_eq((SCStr *)(param_2 + 8)));
    in_EAX = (uint)(((uint)(extraout_var) << 8 | (uint)(bVar1)));
    if (bVar1) {
      bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0xc)))->op_eq((SCStr *)(param_2 + 0xc)));
      in_EAX = (uint)(((uint)(extraout_var_00) << 8 | (uint)(bVar1)));
      if (bVar1) {
        bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x10)))->op_eq((SCStr *)(param_2 + 0x10)));
        in_EAX = (uint)(((uint)(extraout_var_01) << 8 | (uint)(bVar1)));
        if (bVar1) {
          in_EAX = (uint)(thunk_FUN_1106df60(param_2 + 0x14));
          if ((char)in_EAX != '\0') {
            in_EAX = (uint)(thunk_FUN_1106df60(param_2 + 0xb0));
            if (((char)in_EAX != '\0') &&
               (in_EAX = *(uint *)(param_1 + 0x14c),(uint)( in_EAX) == *(uint *)(param_2 + 0x14c))) {
              return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
            }
          }
        }
      }
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 104eadd0; body size 24 bytes.
#line 1 "ENTRY_104eadd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104eadd0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x260)) {
  case 0:
    return (undefined4)(2000);
  case 1:
    return (undefined4)(5000);
  case 2:
    return (undefined4)(10000);
  case 3:
    return (undefined4)(15000);
  case 4:
    return (undefined4)(30000);
  default:
    return (undefined4)(60000);
  }
}


// Reference entry 104eafc0; body size 94 bytes.
#line 1 "ENTRY_104eafc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104eafc0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar2 = (uint)(0);
  piVar4 = (int *)((int *)(param_1 + 0x1c8));
  uVar3 = (uint)(1);
  do {
    if ((*(uint *)(param_2 + (uVar2 >> 5) * 4) & uVar3) != 0) {
      uVar5 = (uint)(0);
      iVar1 = (int)(*piVar4);
      if (piVar4[1] - iVar1 >> 3 != 0) {
        do {
          (**(code **)(**(int **)(iVar1 + uVar5 * 8) + 0x18))(uVar2);
          uVar5 = (uint)(uVar5 + 1);
          iVar1 = (int)(*piVar4);
        } while (uVar5 < (uint)(piVar4[1] - iVar1 >> 3));
      }
    }
    uVar2 = (uint)(uVar2 + 1);
    uVar3 = (uint)(uVar3 << 1 | (uint)((int)uVar3 < 0));
    piVar4 = (int *)(piVar4 + 3);
  } while (uVar2 < 0xc);
  return;
}


// Reference entry 104ec060; body size 83 bytes.
#line 1 "ENTRY_104ec060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ec060(int param_1)

{
  char cVar1;
  
  if ((((param_1 != 0) && (cVar1 = thunk_FUN_111a0720("RINCON_AssociatedZPUDN"), cVar1 != '\0')) &&
      (cVar1 = thunk_FUN_110a5ba0(param_1 + 0xb8,"object.container.playlistContainer"),
      cVar1 != '\0')) && (cVar1 = thunk_FUN_111a0e70(&DAT_118823e4), cVar1 != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 104ec0d0; body size 26 bytes.
#line 1 "ENTRY_104ec0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104ec0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)(uint)(DAT_122f55e4) + 4))(param_1,param_2,param_3);
  return;
}


// Reference entry 104ed5c0; body size 8 bytes.
#line 1 "ENTRY_104ed5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104ed5c0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x3c));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104ed5d0; body size 8 bytes.
#line 1 "ENTRY_104ed5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104ed5d0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 8));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104ed6f0; body size 27 bytes.
#line 1 "ENTRY_104ed6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104ed6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104ed7d0; body size 93 bytes.
#line 1 "ENTRY_104ed7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104ed7d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  *(undefined1*)(param_1 + 10) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInteractionActionContext);
  return (undefined4 *)(param_1);
}


// Reference entry 104ed990; body size 11 bytes.
#line 1 "ENTRY_104ed990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104ed990(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInteractionActionContext);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCActionContext);
  piVar1 = (int *)((int *)param_1[9]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[8] = (undefined4)(0);
    param_1[9] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[7]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[6] = (undefined4)(0);
    param_1[7] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[5]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[4] = (undefined4)(0);
    param_1[5] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
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


// Reference entry 104eeaa0; body size 67 bytes.
#line 1 "ENTRY_104eeaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104eeaa0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  pcVar2 = (char *)(pcVar2 + (1 - (int)(param_1 + 1)));
  _Dst = (void *)(calloc((size_t)pcVar2,1));
  if ((void *)(_Dst) != (void *)0x0) {
    if ((char *)(pcVar2) != (char *)0x0) {
      memcpy(_Dst,param_1,(size_t)pcVar2);
    }
    return (void *)(_Dst);
  }
                    
  std::_Xbad_alloc();
}


// Reference entry 104eec40; body size 16 bytes.
#line 1 "ENTRY_104eec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * FUN_104eec40(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = (uint *)(param_2);
  }
  return (uint *)(param_1);
}


// Reference entry 104eee80; body size 40 bytes.
#line 1 "ENTRY_104eee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104eee80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104ef220; body size 12 bytes.
#line 1 "ENTRY_104ef220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 __fastcall FUN_104ef220(uint *param_1)

{
  return (undefined8)(((unsigned long long)(param_1[3] + param_1[1] + (uint)((uint)(param_1[2]) + (uint)(*param_1) < (uint)(param_1[2]))) << 32 | (unsigned long long)(param_1[2] + *param_1)));
}


// Reference entry 104ef360; body size 66 bytes.
#line 1 "ENTRY_104ef360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104ef360(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  iVar2 = (int)(strncmp(param_1,param_2,(int)pcVar3 - (int)(param_2 + 1)));
  if (iVar2 == 0) {
    if ((param_1[(int)pcVar3 - (int)(param_2 + 1)] == '.') ||
       (param_1[(int)pcVar3 - (int)(param_2 + 1)] == '\0')) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 104ef3d0; body size 52 bytes.
#line 1 "ENTRY_104ef3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_104ef3d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((~param_1 & 1) << 2);
  uVar1 = (uint)(uVar2 | 2);
  if ((param_1 & 2) != 0) {
    uVar1 = (uint)(uVar2);
  }
  uVar2 = (uint)(uVar1 | 8);
  if ((param_1 & 8) == 0) {
    uVar2 = (uint)(uVar1);
  }
  uVar1 = (uint)(uVar2 | 0x10);
  if ((param_1 & 4) == 0) {
    uVar1 = (uint)(uVar2);
  }
  return (uint)(uVar1);
}


// Reference entry 104efe20; body size 17 bytes.
#line 1 "ENTRY_104efe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104efe20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)((undefined4 *)*param_1);
  }
  *param_2 = (undefined4)(param_1);
  return;
}


// Reference entry 104effe0; body size 8 bytes.
#line 1 "ENTRY_104effe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_104effe0(uint *param_1)

{
  return (uint)(*param_1 >> 3 & 0xffffff01);
}


// Reference entry 104efff0; body size 24 bytes.
#line 1 "ENTRY_104efff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_104efff0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
  }
  *param_2 = (int)(param_1[4] + (int)puVar1);
  return;
}


// Reference entry 104f6750; body size 23 bytes.
#line 1 "ENTRY_104f6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f6750(int param_1)

{
  *(uint*)(param_1 + 0x14) = (uint)(*(uint *)(param_1 + 0x14) & 0xfffff9ff | 0x800);
  return;
}


// Reference entry 104f68f0; body size 20 bytes.
#line 1 "ENTRY_104f68f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f68f0(int param_1)

{
  if ((param_1 != 0xc) && (param_1 != 9)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 104f6a30; body size 15 bytes.
#line 1 "ENTRY_104f6a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_104f6a30(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  if (iVar1 == -1) {
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 104f7050; body size 8 bytes.
#line 1 "ENTRY_104f7050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104f7050(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 4));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104f7060; body size 8 bytes.
#line 1 "ENTRY_104f7060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104f7060(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x50));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104f7070; body size 8 bytes.
#line 1 "ENTRY_104f7070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104f7070(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x38));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104f7080; body size 8 bytes.
#line 1 "ENTRY_104f7080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104f7080(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x44));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 104f79a0; body size 8 bytes.
#line 1 "ENTRY_104f79a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_104f79a0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 104f82a0; body size 38 bytes.
#line 1 "ENTRY_104f82a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104f82a0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 104f82d0; body size 28 bytes.
#line 1 "ENTRY_104f82d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104f82d0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  param_1[4] = (SCStr)((SCStr)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 104f8360; body size 40 bytes.
#line 1 "ENTRY_104f8360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104f8360(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 104f83a0; body size 30 bytes.
#line 1 "ENTRY_104f83a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_104f83a0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  param_1[4] = (SCStr)((SCStr)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 104f8580; body size 25 bytes.
#line 1 "ENTRY_104f8580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f8580(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 104f8f00; body size 37 bytes.
#line 1 "ENTRY_104f8f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104f8f00(int param_1,SCStr *param_2)

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


// Reference entry 104f8f30; body size 92 bytes.
#line 1 "ENTRY_104f8f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_104f8f30(int *param_1,int *param_2,int *param_3)

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


// Reference entry 104f9580; body size 24 bytes.
#line 1 "ENTRY_104f9580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f9580(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  param_2[4] = (SCStr)((SCStr)0x0);
  return;
}


// Reference entry 104f9a70; body size 30 bytes.
#line 1 "ENTRY_104f9a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104f9a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 104f9aa0; body size 28 bytes.
#line 1 "ENTRY_104f9aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f9aa0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 104f9ad0; body size 27 bytes.
#line 1 "ENTRY_104f9ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104f9ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa0d0; body size 52 bytes.
#line 1 "ENTRY_104fa0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104fa0d0(undefined4 *param_1)

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


// Reference entry 104fa540; body size 44 bytes.
#line 1 "ENTRY_104fa540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_104fa540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_104fa330(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  return (undefined4 *)(param_1);
}


// Reference entry 104fb330; body size 25 bytes.
#line 1 "ENTRY_104fb330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fb330(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCContentSessionBrowse);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSession);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentSession);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCContentSession);
  if ((int *)(int *)(param_1[8]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x1c))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[8]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[8] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_104fb0d0();

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 104fbfc0; body size 31 bytes.
#line 1 "ENTRY_104fbfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fbfc0(undefined4 *param_1)

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


// Reference entry 104fc170; body size 49 bytes.
#line 1 "ENTRY_104fc170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_104fc170(uint param_2)
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


// Reference entry 104fc240; body size 14 bytes.
#line 1 "ENTRY_104fc240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fc240(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 104fc260; body size 20 bytes.
#line 1 "ENTRY_104fc260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fc260(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xfffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104fc280; body size 66 bytes.
#line 1 "ENTRY_104fc280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104fc280(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 104fcb60; body size 92 bytes.
#line 1 "ENTRY_104fcb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_104fcb60(uint param_2,int param_3,int *param_4)
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


// Reference entry 104fcee0; body size 30 bytes.
#line 1 "ENTRY_104fcee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_104fcee0(int param_1)

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


// Reference entry 104fd510; body size 43 bytes.
#line 1 "ENTRY_104fd510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104fd510(int param_1,int param_2,int param_3)

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


// Reference entry 104fd6a0; body size 87 bytes.
#line 1 "ENTRY_104fd6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104fd6a0(uint param_1)

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


// Reference entry 104fd710; body size 97 bytes.
#line 1 "ENTRY_104fd710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104fd710(uint param_1)

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


// Reference entry 104fd790; body size 87 bytes.
#line 1 "ENTRY_104fd790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104fd790(uint param_1)

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


// Reference entry 104fd800; body size 87 bytes.
#line 1 "ENTRY_104fd800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104fd800(uint param_1)

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


// Reference entry 104fd8e0; body size 68 bytes.
#line 1 "ENTRY_104fd8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fd8e0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_104f8cb0(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_104f9920(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 104fd9a0; body size 13 bytes.
#line 1 "ENTRY_104fd9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fd9a0(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)(0x0)) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    return;
  }
  return;
}


// Reference entry 104fdcc0; body size 54 bytes.
#line 1 "ENTRY_104fdcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104fdcc0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104fdd10; body size 63 bytes.
#line 1 "ENTRY_104fdd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104fdd10(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104fdd60; body size 61 bytes.
#line 1 "ENTRY_104fdd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fdd60(int param_1,int param_2)

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


// Reference entry 104fddb0; body size 57 bytes.
#line 1 "ENTRY_104fddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fddb0(int param_1,int param_2)

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


// Reference entry 104fde00; body size 66 bytes.
#line 1 "ENTRY_104fde00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fde00(int param_1,int param_2)

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


// Reference entry 104fdeb0; body size 61 bytes.
#line 1 "ENTRY_104fdeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104fdeb0(int param_1,int param_2)

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


// Reference entry 104fdf50; body size 13 bytes.
#line 1 "ENTRY_104fdf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104fdf50(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)(0x0)) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))();
    return;
  }
  return;
}


// Reference entry 10500000; body size 25 bytes.
#line 1 "ENTRY_10500000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500000(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10500020; body size 25 bytes.
#line 1 "ENTRY_10500020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10500020(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10500490; body size 28 bytes.
#line 1 "ENTRY_10500490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500490(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105004c0; body size 28 bytes.
#line 1 "ENTRY_105004c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105004c0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105004f0; body size 27 bytes.
#line 1 "ENTRY_105004f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105004f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10500520; body size 27 bytes.
#line 1 "ENTRY_10500520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10500550; body size 42 bytes.
#line 1 "ENTRY_10500550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10500550(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10500590; body size 42 bytes.
#line 1 "ENTRY_10500590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10500590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10500840; body size 52 bytes.
#line 1 "ENTRY_10500840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500840(undefined4 *param_1)

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


// Reference entry 10500890; body size 52 bytes.
#line 1 "ENTRY_10500890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10500890(undefined4 *param_1)

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


// Reference entry 105008e0; body size 27 bytes.
#line 1 "ENTRY_105008e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105008e0(undefined4 *param_1)

{
  *(undefined2*)(param_1 + 2) = (undefined2)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncDataSource);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10504560; body size 17 bytes.
#line 1 "ENTRY_10504560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10504560(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_111a0720(param_1));
  return (bool)(cVar1 == '\0');
}


// Reference entry 105056c0; body size 21 bytes.
#line 1 "ENTRY_105056c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105056c0(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"AVTransportURI");
  return (undefined4)(param_1);
}


// Reference entry 10505710; body size 21 bytes.
#line 1 "ENTRY_10505710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505710(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"upnp:album");
  return (undefined4)(param_1);
}


// Reference entry 10505730; body size 21 bytes.
#line 1 "ENTRY_10505730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505730(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"upnp:albumArtURI");
  return (undefined4)(param_1);
}


// Reference entry 10505750; body size 21 bytes.
#line 1 "ENTRY_10505750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505750(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:albumArtist");
  return (undefined4)(param_1);
}


// Reference entry 10505780; body size 11 bytes.
#line 1 "ENTRY_10505780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10505780(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (**(int **)(param_1 + 4) == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 4));
  }
  return (int *)(piVar1);
}


// Reference entry 10505790; body size 21 bytes.
#line 1 "ENTRY_10505790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505790(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"dc:creator");
  return (undefined4)(param_1);
}


// Reference entry 105057e0; body size 21 bytes.
#line 1 "ENTRY_105057e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105057e0(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"CurrentTrackURI");
  return (undefined4)(param_1);
}


// Reference entry 10505830; body size 21 bytes.
#line 1 "ENTRY_10505830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505830(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:EnqueuedTransportURI");
  return (undefined4)(param_1);
}


// Reference entry 10505850; body size 21 bytes.
#line 1 "ENTRY_10505850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505850(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,&DAT_1187b440);
  return (undefined4)(param_1);
}


// Reference entry 10505870; body size 21 bytes.
#line 1 "ENTRY_10505870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505870(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"parentId");
  return (undefined4)(param_1);
}


// Reference entry 10505890; body size 21 bytes.
#line 1 "ENTRY_10505890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505890(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:podcast");
  return (undefined4)(param_1);
}


// Reference entry 105058c0; body size 21 bytes.
#line 1 "ENTRY_105058c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105058c0(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:tags");
  return (undefined4)(param_1);
}


// Reference entry 105058e0; body size 21 bytes.
#line 1 "ENTRY_105058e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105058e0(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:tags");
  return (undefined4)(param_1);
}


// Reference entry 10505900; body size 21 bytes.
#line 1 "ENTRY_10505900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505900(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"dc:title");
  return (undefined4)(param_1);
}


// Reference entry 10505920; body size 21 bytes.
#line 1 "ENTRY_10505920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505920(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"dc:title");
  return (undefined4)(param_1);
}


// Reference entry 10505940; body size 21 bytes.
#line 1 "ENTRY_10505940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505940(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"upnp:class");
  return (undefined4)(param_1);
}


// Reference entry 10505960; body size 21 bytes.
#line 1 "ENTRY_10505960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505960(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"upnp:class");
  return (undefined4)(param_1);
}


// Reference entry 10505980; body size 21 bytes.
#line 1 "ENTRY_10505980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10505980(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:radioShowMd");
  return (undefined4)(param_1);
}


// Reference entry 105059a0; body size 31 bytes.
#line 1 "ENTRY_105059a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105059a0(undefined4 *param_1)

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


// Reference entry 105059d0; body size 31 bytes.
#line 1 "ENTRY_105059d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105059d0(undefined4 *param_1)

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


// Reference entry 10505be0; body size 21 bytes.
#line 1 "ENTRY_10505be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10505be0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (*piVar1 != 0) {
    piVar1 = (int *)((int *)0x0);
  }
  if ((int *)(piVar1) != (int *)0x0) {
    return (int)(piVar1[0x16]);
  }
  return (int)(0);
}


// Reference entry 10505c10; body size 90 bytes.
#line 1 "ENTRY_10505c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10505c10(uint param_1)

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


// Reference entry 10505c90; body size 90 bytes.
#line 1 "ENTRY_10505c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10505c90(uint param_1)

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


// Reference entry 105070d0; body size 57 bytes.
#line 1 "ENTRY_105070d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105070d0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10507120; body size 57 bytes.
#line 1 "ENTRY_10507120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10507120(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1050aa30; body size 10 bytes.
#line 1 "ENTRY_1050aa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1050aa30(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int **)(param_1 + 4) >> 8)) << 8 | (uint)(**(int **)(param_1 + 4) == 0)));
}


// Reference entry 1050ab20; body size 36 bytes.
#line 1 "ENTRY_1050ab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1050ab20(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x13c));
  if (((((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) &&
      (pcVar1 = *(char **)(param_1 + 0x138),(char *)( pcVar1) != (char *)0x0)) && (*pcVar1 != '\0')) {
    return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)((uint)pcVar1 & 0xffffff00);
}


// Reference entry 1050ab50; body size 51 bytes.
#line 1 "ENTRY_1050ab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1050ab50(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x140));
  if (((((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) &&
      (pcVar1 = *(char **)(param_1 + 0x13c),(char *)( pcVar1) != (char *)0x0)) &&
     (((*pcVar1 != '\0' && (pcVar1 = *(char **)(param_1 + 0x138),(char *)( pcVar1) != (char *)0x0)) &&
      (*pcVar1 != '\0')))) {
    return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)((uint)pcVar1 & 0xffffff00);
}


// Reference entry 1050ab90; body size 39 bytes.
#line 1 "ENTRY_1050ab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1050ab90(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iStack_10 = (int)(*(int *)(param_1 + 0x88));
  if (iStack_10 != 0) {
    uStack_c = (undefined4)(0);
    iStack_14 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 1050abc0; body size 31 bytes.
#line 1 "ENTRY_1050abc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1050abc0(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 1050b7b0; body size 8 bytes.
#line 1 "ENTRY_1050b7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1050b7b0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0xc));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 1050b7c0; body size 8 bytes.
#line 1 "ENTRY_1050b7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1050b7c0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x20));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 1050e550; body size 12 bytes.
#line 1 "ENTRY_1050e550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1050e550(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 9 & 0xffffff01);
}


// Reference entry 1050e570; body size 12 bytes.
#line 1 "ENTRY_1050e570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_1050e570(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 0x17 & 0xffffff01);
}


// Reference entry 1050ea90; body size 54 bytes.
#line 1 "ENTRY_1050ea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1050ea90(undefined4 *param_1)

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


// Reference entry 1050eae0; body size 42 bytes.
#line 1 "ENTRY_1050eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1050eae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 1050eb20; body size 42 bytes.
#line 1 "ENTRY_1050eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1050eb20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 10510840; body size 33 bytes.
#line 1 "ENTRY_10510840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10510840(int param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101ba530(param_2);
  thunk_FUN_101ba530(param_2 + 4);
  return (undefined4)(param_1);
}


// Reference entry 10510c90; body size 21 bytes.
#line 1 "ENTRY_10510c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10510c90(undefined4 param_1)

{
  thunk_FUN_1113eda0(param_1,"r:DirectControlClientID");
  return (undefined4)(param_1);
}


// Reference entry 10511150; body size 25 bytes.
#line 1 "ENTRY_10511150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10511150(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_101c42f0(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10513700; body size 9 bytes.
#line 1 "ENTRY_10513700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10513700(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)((int *)(*param_1) == (int *)(param_1)[1])));
}


// Reference entry 10516e60; body size 10 bytes.
#line 1 "ENTRY_10516e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10516e60(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)((int)((param_1 + 8)) == *(int *)(param_1 + 0xc))));
}


// Reference entry 1051a400; body size 105 bytes.
#line 1 "ENTRY_1051a400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1051a400(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  if (((int *)(param_2) != (int *)0x0) && ((int *)(int *)(param_1[0xc]) != (int *)(param_2))) {
    piVar2 = (int *)((int *)param_1[0xd]);
    if ((int *)(piVar2) != (int *)0x0) {
      param_1[0xc] = (int)(0);
      param_1[0xd] = (int)(0);
      uStack_c = (undefined4)(0x1051a42b);
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0xc] = (int)((int)param_2);
    uStack_c = (undefined4)(0x1051a435);
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[0xd] = (int)((int)piVar2);
    uStack_c = (undefined4)(0x1051a43f);
    (**(code **)(*piVar2 + 4))();
    uStack_c = (undefined4)(0x1051a448);
    cVar1 = (char)((**(code **)(*param_1 + 0x20))());
    if (cVar1 != '\0') {
      uStack_c = (undefined4)(0);
      piStack_10 = (int *)(param_1);
      ((SCStr *)(aSStack_14))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
      thunk_FUN_103d65f0();
    }
  }
  return;
}


// Reference entry 1051b7f0; body size 28 bytes.
#line 1 "ENTRY_1051b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051b7f0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1051b820; body size 28 bytes.
#line 1 "ENTRY_1051b820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051b820(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1051b850; body size 28 bytes.
#line 1 "ENTRY_1051b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051b850(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1051c170; body size 167 bytes.
#line 1 "ENTRY_1051c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1051c170(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","AddMultipleURIsToQueue",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x35f4] = (undefined4)(0);
  param_1[0x35f5] = (undefined4)(0);
  param_1[0x35f6] = (undefined4)(0);
  param_1[0x35f7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1051c790; body size 11 bytes.
#line 1 "ENTRY_1051c790"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051c790(undefined4 *param_1)

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


// Reference entry 1051c7a0; body size 11 bytes.
#line 1 "ENTRY_1051c7a0"

/* WARNING: Removing unreachable block_1051c7a0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051c7a0(undefined4 *param_1)

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


// Reference entry 1051c7c0; body size 11 bytes.
#line 1 "ENTRY_1051c7c0"

/* WARNING: Removing unreachable block_1051c7c0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051c7c0(undefined4 *param_1)

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


// Reference entry 1051c7f0; body size 11 bytes.
#line 1 "ENTRY_1051c7f0"

/* WARNING: Removing unreachable block_1051c7f0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051c7f0(undefined4 *param_1)

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


// Reference entry 1051d150; body size 28 bytes.
#line 1 "ENTRY_1051d150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051d150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
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


// Reference entry 1051d190; body size 25 bytes.
#line 1 "ENTRY_1051d190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051d190(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCIObj);


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


// Reference entry 10520dc0; body size 22 bytes.
#line 1 "ENTRY_10520dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10520dc0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6c));
  if (iVar1 < 0) {
    if (*(int **)(param_1 + 0x38) != (int *)(0x0)) {
                    
                    
      iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x38) + 0x24))());
      return (int)(iVar1);
    }
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 105256f0; body size 33 bytes.
#line 1 "ENTRY_105256f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105256f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10525910; body size 19 bytes.
#line 1 "ENTRY_10525910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10525910(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3 + -1);
  return;
}


// Reference entry 10525940; body size 36 bytes.
#line 1 "ENTRY_10525940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10525940(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 105259f0; body size 36 bytes.
#line 1 "ENTRY_105259f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105259f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10525750(puVar1,param_2);
  return;
}


// Reference entry 10525a40; body size 28 bytes.
#line 1 "ENTRY_10525a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525a40(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10525a70; body size 28 bytes.
#line 1 "ENTRY_10525a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525a70(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10525aa0; body size 28 bytes.
#line 1 "ENTRY_10525aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525aa0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10525ad0; body size 54 bytes.
#line 1 "ENTRY_10525ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525ad0(undefined4 *param_1)

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


// Reference entry 10525cc0; body size 26 bytes.
#line 1 "ENTRY_10525cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10525cc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10525d60; body size 127 bytes.
#line 1 "ENTRY_10525d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10525d60(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:SystemProperties:1","SetAccountNicknameX",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10525ed0; body size 33 bytes.
#line 1 "ENTRY_10525ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10525ed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceAccountNeededState);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10526060; body size 26 bytes.
#line 1 "ENTRY_10526060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526080; body size 26 bytes.
#line 1 "ENTRY_10526080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetAppLinkRetryState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526160; body size 110 bytes.
#line 1 "ENTRY_10526160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105261f0; body size 26 bytes.
#line 1 "ENTRY_105261f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105261f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526210; body size 54 bytes.
#line 1 "ENTRY_10526210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526210(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceIntroState);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105269f0; body size 40 bytes.
#line 1 "ENTRY_105269f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105269f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginPasswordState);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10526a30; body size 26 bytes.
#line 1 "ENTRY_10526a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526a30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceMultipleAccountsAddedState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526b90; body size 40 bytes.
#line 1 "ENTRY_10526b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526b90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePasswordState);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10526bd0; body size 216 bytes.
#line 1 "ENTRY_10526bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526bd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePromotedIntroState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServicePromotedIntroState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  param_1[0x21] = (undefined4)(0);
  param_1[0x22] = (undefined4)(0);
  param_1[0x24] = (undefined4)(0);
  param_1[0x25] = (undefined4)(0);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x2f] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x3a) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0xea) = (undefined1)(0);
  param_1[0x3b] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10526d80; body size 42 bytes.
#line 1 "ENTRY_10526d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526d80(undefined4 param_2,undefined4 param_3,undefined2 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(param_3);
  *(undefined2*)(param_1 + 4) = (undefined2)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceResultState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526dc0; body size 26 bytes.
#line 1 "ENTRY_10526dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10526dc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetNicknameErrorState);
  return (undefined4 *)(param_1);
}


// Reference entry 10527150; body size 117 bytes.
#line 1 "ENTRY_10527150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10527150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x20) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10528c10; body size 42 bytes.
#line 1 "ENTRY_10528c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10528c10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 10528c50; body size 26 bytes.
#line 1 "ENTRY_10528c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10528c50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceInfoDownloadRetryState);
  return (undefined4 *)(param_1);
}


// Reference entry 10528d90; body size 11 bytes.
#line 1 "ENTRY_10528d90"

/* WARNING: Removing unreachable block_10528d90 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10528d90(undefined4 *param_1)

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


// Reference entry 10528db0; body size 11 bytes.
#line 1 "ENTRY_10528db0"

/* WARNING: Removing unreachable block_10528db0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10528db0(undefined4 *param_1)

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


// Reference entry 10529240; body size 28 bytes.
#line 1 "ENTRY_10529240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10529240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
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


// Reference entry 1052ac40; body size 31 bytes.
#line 1 "ENTRY_1052ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1052ac40(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 2) * 4
                 ) + (param_1[1] & 3U) * 4);
}


// Reference entry 1052c740; body size 49 bytes.
#line 1 "ENTRY_1052c740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_1052c740(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 1052c910; body size 38 bytes.
#line 1 "ENTRY_1052c910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_1052c910(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1052c940; body size 27 bytes.
#line 1 "ENTRY_1052c940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1052c940(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 1052c970; body size 27 bytes.
#line 1 "ENTRY_1052c970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1052c970(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 1052c9a0; body size 18 bytes.
#line 1 "ENTRY_1052c9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1052c9a0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  *param_2 = (int)(param_1);
  param_2[1] = (int)(iVar1 + iVar2);
  return;
}


// Reference entry 1052dc60; body size 87 bytes.
#line 1 "ENTRY_1052dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1052dc60(uint param_1)

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


// Reference entry 1052dcd0; body size 39 bytes.
#line 1 "ENTRY_1052dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1052dcd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
    return;
  }
  thunk_FUN_10525750(puVar1,param_2);
  return;
}


// Reference entry 1052e140; body size 8 bytes.
#line 1 "ENTRY_1052e140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1052e140(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 300));
}


// Reference entry 10532840; body size 61 bytes.
#line 1 "ENTRY_10532840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10532840(int param_1,int param_2)

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


// Reference entry 10532ef0; body size 9 bytes.
#line 1 "ENTRY_10532ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10532ef0(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)((int *)(*param_1) == (int *)(param_1)[1])));
}


// Reference entry 10533bc0; body size 66 bytes.
#line 1 "ENTRY_10533bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10533bc0(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((undefined1 *)(param_1) != (undefined1 *)0x0) {
    *param_1 = (undefined1)(0);
    iVar1 = (int)(thunk_FUN_110828b0());
    if ((iVar1 != 0) && (piVar2 = (int *)thunk_FUN_11082860(),(int *)( piVar2) != (int *)0x0)) {
      iVar1 = (int)(*piVar2);
      uVar3 = (undefined4)(thunk_FUN_10533e90(param_1,param_2));
      (**(code **)(iVar1 + 0x24))(uVar3);
    }
  }
  return;
}


// Reference entry 10535d80; body size 11 bytes.
#line 1 "ENTRY_10535d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10535d80(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x28))();
  return;
}


// Reference entry 105367f0; body size 41 bytes.
#line 1 "ENTRY_105367f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105367f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xe8));
  if (iVar1 == 8) {
    return (undefined4)(3);
  }
  if (iVar1 == 9) {
    return (undefined4)(4);
  }
  uVar2 = (undefined4)(1);
  if (iVar1 == 10) {
    uVar2 = (undefined4)(6);
  }
  return (undefined4)(uVar2);
}


// Reference entry 1053d520; body size 53 bytes.
#line 1 "ENTRY_1053d520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1053d520(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xec) == 5) {
    uVar2 = (undefined4)(0x2077);
  }
  else {
    uVar2 = (undefined4)(0x206e);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(uVar2,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 1053d900; body size 31 bytes.
#line 1 "ENTRY_1053d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1053d900(int param_1)

{
  *(undefined1*)(param_1 + 0x104) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x505) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x906) = (undefined1)(0);
  *(undefined2*)(param_1 + 0xd07) = (undefined2)(1);
  return;
}


// Reference entry 1053e480; body size 13 bytes.
#line 1 "ENTRY_1053e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1053e480(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x6c) + 8));
  return (undefined4)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)((int)(iVar1) != *(int *)(*(int *)(param_1 + 0x6c) + 0xc))));
}


// Reference entry 10540fe0; body size 10 bytes.
#line 1 "ENTRY_10540fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10540fe0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)((int)((param_1 + 8)) == *(int *)(param_1 + 0xc))));
}


// Reference entry 10541070; body size 17 bytes.
#line 1 "ENTRY_10541070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10541070(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(uint *)(param_1 + 4) & 0x7f) - 1 & 0xfffffffe);
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(uVar1 == 10)));
}


// Reference entry 105418b0; body size 27 bytes.
#line 1 "ENTRY_105418b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105418b0(uint param_1)

{
  uint in_EAX;
  
  if (((param_1 != 0) && (in_EAX = param_1 & 0xffffff81, (char)in_EAX != -0x80)) &&
     ((param_1 & 1) == 0)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 105452e0; body size 36 bytes.
#line 1 "ENTRY_105452e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105452e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10525750(puVar1,param_2);
  return;
}


// Reference entry 1054b270; body size 24 bytes.
#line 1 "ENTRY_1054b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1054b270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1054b290; body size 24 bytes.
#line 1 "ENTRY_1054b290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1054b290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1054b2b0; body size 24 bytes.
#line 1 "ENTRY_1054b2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1054b2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1054c0e0; body size 21 bytes.
#line 1 "ENTRY_1054c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1054c0e0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1054c300; body size 21 bytes.
#line 1 "ENTRY_1054c300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1054c300(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1054c330; body size 28 bytes.
#line 1 "ENTRY_1054c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054c330(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1054c360; body size 27 bytes.
#line 1 "ENTRY_1054c360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054c360(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1054d860; body size 38 bytes.
#line 1 "ENTRY_1054d860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1054d860(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1054d8b0; body size 40 bytes.
#line 1 "ENTRY_1054d8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1054d8b0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1054d9c0; body size 25 bytes.
#line 1 "ENTRY_1054d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054d9c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1054da00; body size 33 bytes.
#line 1 "ENTRY_1054da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1054da00(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1054e3b0; body size 37 bytes.
#line 1 "ENTRY_1054e3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e3b0(int param_1,SCStr *param_2)

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


// Reference entry 1054e3e0; body size 33 bytes.
#line 1 "ENTRY_1054e3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1054e3e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1054e410; body size 92 bytes.
#line 1 "ENTRY_1054e410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1054e410(int *param_1,int *param_2,int *param_3)

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


// Reference entry 1054e690; body size 36 bytes.
#line 1 "ENTRY_1054e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1054e690(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1054e9c0; body size 86 bytes.
#line 1 "ENTRY_1054e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1054e9c0(int *param_1,int *param_2)

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


// Reference entry 1054ea30; body size 36 bytes.
#line 1 "ENTRY_1054ea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1054ea30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1054dba0(puVar1,param_2);
  return;
}


// Reference entry 1054f0b0; body size 52 bytes.
#line 1 "ENTRY_1054f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f0b0(undefined4 *param_1)

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


// Reference entry 1054f470; body size 84 bytes.
#line 1 "ENTRY_1054f470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  thunk_FUN_1124a160(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceManifestGetRequest);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RServiceManifestGetRequest);
  param_1[0x1844] = (undefined4)(0);
  param_1[0x1845] = (undefined4)(0);
  param_1[0x1846] = (undefined4)(0);
  param_1[0x1847] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f910; body size 11 bytes.
#line 1 "ENTRY_1054f910"

/* WARNING: Removing unreachable block_1054f910 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1054f910(undefined4 *param_1)

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


// Reference entry 10550c80; body size 31 bytes.
#line 1 "ENTRY_10550c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10550c80(undefined4 *param_1)

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


// Reference entry 10550cd0; body size 49 bytes.
#line 1 "ENTRY_10550cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10550cd0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10550d10; body size 49 bytes.
#line 1 "ENTRY_10550d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10550d10(uint param_2)
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


// Reference entry 10550e50; body size 14 bytes.
#line 1 "ENTRY_10550e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10550e50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10551820; body size 30 bytes.
#line 1 "ENTRY_10551820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10551820(int param_1)

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


// Reference entry 10551a30; body size 38 bytes.
#line 1 "ENTRY_10551a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10551a30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10551b00; body size 27 bytes.
#line 1 "ENTRY_10551b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10551b00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10551bd0; body size 27 bytes.
#line 1 "ENTRY_10551bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10551bd0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10551fd0; body size 42 bytes.
#line 1 "ENTRY_10551fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10551fd0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x4c));
    if ((int *)(piVar1) != *(int **)(param_1 + 0x50)) {
      *piVar1 = (int)(param_2);
      *(int*)(param_1 + 0x4c) = (int)(*(int *)(param_1 + 0x4c) + 4);
      return;
    }
    thunk_FUN_1054dba0(piVar1,&param_2);
  }
  return;
}


// Reference entry 10552060; body size 87 bytes.
#line 1 "ENTRY_10552060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10552060(uint param_1)

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


// Reference entry 105520d0; body size 97 bytes.
#line 1 "ENTRY_105520d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105520d0(uint param_1)

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


// Reference entry 10552150; body size 87 bytes.
#line 1 "ENTRY_10552150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10552150(uint param_1)

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


// Reference entry 105524c0; body size 183 bytes.
#line 1 "ENTRY_105524c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105524c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_108 [260];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_108);
  if (*(char *)(param_1 + 0x34) == '\0') {
    thunk_FUN_1145c720(auStack_108,0x101,"%s/%s",PTR_DAT_12126b6c,"manifests");
    iVar4 = (int)(0);
    do {
      iVar2 = (int)(thunk_FUN_1145cf60(auStack_108,0x1ed));
      piVar3 = (int *)(_errno());
      iVar1 = (int)(*piVar3);
      if ((iVar2 == 0) || (iVar1 == 0x11)) {
        *(undefined1*)(param_1 + 0x34) = (undefined1)(1);
        goto LAB_10552558;
      }
      iVar4 = (int)(iVar4 + 1);
    } while ((iVar1 == 0xb) && (iVar4 < 5));
    if (*(char *)(param_1 + 0x34) == '\0') {
      thunk_FUN_112af4e0("svcmanifest",1,"Could not create manifest directory, error: %d",iVar1);
    }
  }
LAB_10552558:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105525b0; body size 63 bytes.
#line 1 "ENTRY_105525b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105525b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10552600; body size 61 bytes.
#line 1 "ENTRY_10552600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10552600(int param_1,int param_2)

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


// Reference entry 10552650; body size 66 bytes.
#line 1 "ENTRY_10552650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10552650(int param_1,int param_2)

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


// Reference entry 10552ea0; body size 42 bytes.
#line 1 "ENTRY_10552ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10552ea0(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(void *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10553a10; body size 31 bytes.
#line 1 "ENTRY_10553a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10553a10(undefined4 param_1)

{
  int iVar1;
  
  thunk_FUN_110c2c60();
  iVar1 = (int)(thunk_FUN_110c1f30(param_1));
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 4));
  }
  return (undefined4)(0);
}


// Reference entry 10553b10; body size 11 bytes.
#line 1 "ENTRY_10553b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10553b10(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(&PTR_s_https___www__119e5428);
  if ((undefined *)(PTR_s_https___www__119e5428) != (undefined *)0x0) {
    do {
      if ((char)((ppuVar1 + 2)) == *(char *)(param_1 + 0xa0)) {
        thunk_FUN_1145c720(param_2,param_3,&DAT_1188e99c,*ppuVar1,param_1 + 0xa1);
        return (undefined4)(param_2);
      }
      ppuVar1 = (undefined **)(ppuVar1 + 3);
    } while ((undefined *)(*ppuVar1) != (undefined *)0x0);
  }
  thunk_FUN_1106a8d0(param_2,(char *)(param_1 + 0xa0),param_3);
  return (undefined4)(param_2);
}


// Reference entry 10554030; body size 16 bytes.
#line 1 "ENTRY_10554030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10554030(int param_1)

{
  return (uint)(-(uint)(*(int *)(param_1 + 0x198c) != 0) & *(int *)(param_1 + 0x198c) + 8U);
}


// Reference entry 10554050; body size 8 bytes.
#line 1 "ENTRY_10554050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10554050(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(&PTR_s_https___www__119e5428);
  if ((undefined *)(PTR_s_https___www__119e5428) != (undefined *)0x0) {
    do {
      if ((char)((ppuVar1 + 2)) == *(char *)(param_1 + 0x60)) {
        thunk_FUN_1145c720(param_2,param_3,&DAT_1188e99c,*ppuVar1,param_1 + 0x61);
        return (undefined4)(param_2);
      }
      ppuVar1 = (undefined **)(ppuVar1 + 3);
    } while ((undefined *)(*ppuVar1) != (undefined *)0x0);
  }
  thunk_FUN_1106a8d0(param_2,(char *)(param_1 + 0x60),param_3);
  return (undefined4)(param_2);
}


// Reference entry 10556c10; body size 36 bytes.
#line 1 "ENTRY_10556c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10556c10(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1054dba0(puVar1,param_2);
  return;
}


// Reference entry 10557070; body size 58 bytes.
#line 1 "ENTRY_10557070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10557070(int param_2)
{
  int param_1 = (int )this;
  int *_Src;
  int *piVar1;
  int *_Dst;
  
  _Dst = (int *)(*(int **)(param_1 + 0x48));
  piVar1 = (int *)(*(int **)(param_1 + 0x4c));
  if ((int *)((_Dst)) != (int *)(piVar1)) {
    while (_Src = _Dst + 1, (int *)(*_Dst) != (int *)(param_2)) {
      _Dst = (int *)(_Src);
      if ((int *)(_Src) == (int *)(piVar1)) {
        return;
      }
    }
    memmove(_Dst,_Src,(int)piVar1 - (int)_Src);
    *(int*)(param_1 + 0x4c) = (int)(*(int *)(param_1 + 0x4c) + -4);
  }
  return;
}


// Reference entry 10557d90; body size 12 bytes.
#line 1 "ENTRY_10557d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10557d90(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 0x16 & 0xffffff01);
}


// Reference entry 10557fa0; body size 12 bytes.
#line 1 "ENTRY_10557fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10557fa0(int param_1)

{
  return (uint)(*(uint *)(param_1 + 0x130) >> 0x16 & 0xffffff01);
}


// Reference entry 10558410; body size 376 bytes.
#line 1 "ENTRY_10558410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10558410(undefined4 *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  SCStr *this_;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  FILE *_File;
  uint uVar5;
  size_t sVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  FILE *_File_00;
  SCStr *pSStack_110;
  undefined4 *puStack_10c;
  undefined1 auStack_108 [260];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&pSStack_110);
  puStack_10c = (undefined4 *)(param_2);
  pSStack_110 = (SCStr *)(param_3);
  if (*(char *)(param_1 + 0x34) == '\0') {
    thunk_FUN_1145c720(auStack_108,0x101,"%s/%s",PTR_DAT_12126b6c,"manifests");
    iVar8 = (int)(0);
    do {
      iVar3 = (int)(thunk_FUN_1145cf60(auStack_108,0x1ed));
      piVar4 = (int *)(_errno());
      iVar1 = (int)(*piVar4);
      if ((iVar3 == 0) || (iVar1 == 0x11)) {
        *(undefined1*)(param_1 + 0x34) = (undefined1)(1);
        goto LAB_105584bb;
      }
      iVar8 = (int)(iVar8 + 1);
    } while ((iVar1 == 0xb) && (iVar8 < 5));
    if (*(char *)(param_1 + 0x34) == '\0') {
      thunk_FUN_112af4e0("svcmanifest",1,"Could not create manifest directory, error: %d",iVar1);
    }
  }
LAB_105584bb:
  puVar2 = (undefined4 *)(puStack_10c);
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(undefined1 *)(*puStack_10c) != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)((undefined1 *)*puStack_10c);
  }
  _File = (FILE *)((FILE *)thunk_FUN_1145cb70(puVar7,&DAT_118b3060));
  if ((FILE *)(_File) == (FILE *)0x0) {
    puVar7 = (undefined1 *)((undefined1 *)*puVar2);
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar7) != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)(puVar7);
    }
    thunk_FUN_112af4e0("svcmanifest",1,"Could not open manifest file for writing: %s",puVar9);
  }
  else {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)pSStack_110 != (undefined1 *)(0x0)) {
      puVar7 = (undefined1 *)(*(undefined1 **)pSStack_110);
    }
    _File_00 = (FILE *)(_File);
    uVar5 = (uint)(((SCStr *)(pSStack_110))->length());
    sVar6 = (size_t)(fwrite(puVar7,1,uVar5,_File_00));
    fclose(_File);
    this_ = (SCStr *)(pSStack_110);
    uVar5 = (uint)(((SCStr *)(pSStack_110))->length());
    if (sVar6 != uVar5) {
      puVar7 = (undefined1 *)((undefined1 *)*puVar2);
      puVar9 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)(puVar7) != (undefined1 *)0x0) {
        puVar9 = (undefined1 *)(puVar7);
      }
      uVar5 = (uint)(((SCStr *)(this_))->length());
      thunk_FUN_112af4e0("svcmanifest",1,
                         "Failed to write manifest file %s. Wrote %lu out of %lu bytes",puVar9,sVar6
                         ,uVar5);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105586d0; body size 40 bytes.
#line 1 "ENTRY_105586d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105586d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10558710; body size 40 bytes.
#line 1 "ENTRY_10558710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10558710(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10558750; body size 40 bytes.
#line 1 "ENTRY_10558750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10558750(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10558790; body size 40 bytes.
#line 1 "ENTRY_10558790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10558790(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10558940; body size 47 bytes.
#line 1 "ENTRY_10558940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10558940(undefined1 *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLocationNameExtractorCB);
  param_1[1] = (undefined4)(param_2);
  if (param_3 != 0) {
    *param_2 = (undefined1)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105590e0; body size 87 bytes.
#line 1 "ENTRY_105590e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105590e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10200aa0(param_2,param_3,param_4,param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 105593f0; body size 33 bytes.
#line 1 "ENTRY_105593f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105593f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioSetZIPDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10559e70; body size 56 bytes.
#line 1 "ENTRY_10559e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10559e70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
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


// Reference entry 10562a00; body size 40 bytes.
#line 1 "ENTRY_10562a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562a00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562ac0; body size 40 bytes.
#line 1 "ENTRY_10562ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562ac0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562b40; body size 40 bytes.
#line 1 "ENTRY_10562b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562b40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562b80; body size 40 bytes.
#line 1 "ENTRY_10562b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562b80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562bc0; body size 40 bytes.
#line 1 "ENTRY_10562bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562bc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562c00; body size 40 bytes.
#line 1 "ENTRY_10562c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562c00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562d00; body size 27 bytes.
#line 1 "ENTRY_10562d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10562d00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10563240; body size 127 bytes.
#line 1 "ENTRY_10563240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10563240(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1",&DAT_11884fb0,uVar3,param_3,
                     param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105632e0; body size 127 bytes.
#line 1 "ENTRY_105632e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105632e0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","SetAVTransportURI",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10563380; body size 37 bytes.
#line 1 "ENTRY_10563380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10563380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_101b94f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10563600; body size 82 bytes.
#line 1 "ENTRY_10563600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10563600(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddToQueueAtNumberDescriptor);
  thunk_FUN_1145c250(param_1 + 2,param_2,0x401);
  thunk_FUN_1145c250((int)param_1 + 0x409,param_3,0x1001);
  return (undefined4 *)(param_1);
}


// Reference entry 105650a0; body size 11 bytes.
#line 1 "ENTRY_105650a0"

/* WARNING: Removing unreachable block_105650a0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105650a0(undefined4 *param_1)

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


// Reference entry 10565950; body size 28 bytes.
#line 1 "ENTRY_10565950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10565950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
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


// Reference entry 10565980; body size 28 bytes.
#line 1 "ENTRY_10565980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10565980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
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


// Reference entry 105659b0; body size 28 bytes.
#line 1 "ENTRY_105659b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105659b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
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


// Reference entry 105659e0; body size 18 bytes.
#line 1 "ENTRY_105659e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105659e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);


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


// Reference entry 10566360; body size 18 bytes.
#line 1 "ENTRY_10566360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10566360(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLookupMetadata);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpLookupMetadata);


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


// Reference entry 1056d4e0; body size 59 bytes.
#line 1 "ENTRY_1056d4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1056d4e0(int param_2)
{
  int param_1 = (int )this;
  if (*(byte *)(param_2 + 1) < *(byte *)(param_1 + 1)) {
    return (undefined4)(1);
  }
  if ((byte)((param_1 + 1)) == *(byte *)(param_2 + 1)) {
    if (*(byte *)(param_2 + 2) < *(byte *)(param_1 + 2)) {
      return (undefined4)(1);
    }
    if ((byte)((param_1 + 2)) == *(byte *)(param_2 + 2)) {
      if (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) {
        return (undefined4)(1);
      }
      if ((uint)((param_1 + 4)) == *(uint *)(param_2 + 4)) {
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 105797d0; body size 40 bytes.
#line 1 "ENTRY_105797d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105797d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10579810; body size 40 bytes.
#line 1 "ENTRY_10579810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10579810(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 105799c0; body size 164 bytes.
#line 1 "ENTRY_105799c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105799c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","CreateSavedQueue",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x35f4] = (undefined4)(0);
  param_1[0x35f5] = (undefined4)(0);
  param_1[0x36f6] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x35f6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10579a90; body size 140 bytes.
#line 1 "ENTRY_10579a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10579a90(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  iVar1 = (int)(*(int *)(*(int *)(param_2 + 4) + 4));
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  pcVar5 = (char *)("DestroyObject");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("DestroyObject",uVar3));
  thunk_FUN_111c0760(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10579b40; body size 140 bytes.
#line 1 "ENTRY_10579b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10579b40(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  iVar1 = (int)(*(int *)(*(int *)(param_2 + 4) + 4));
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  pcVar5 = (char *)("UpdateObject");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("UpdateObject",uVar3));
  thunk_FUN_111c0760(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10579bf0; body size 53 bytes.
#line 1 "ENTRY_10579bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10579bf0(undefined4 param_2,undefined4 param_3,byte param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1057a360(param_2,param_3,param_4 ^ 1,0);
  *(byte*)(param_1 + 0x18) = (byte)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistAction);
  return (undefined4 *)(param_1);
}


// Reference entry 10579c40; body size 55 bytes.
#line 1 "ENTRY_10579c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10579c40(undefined4 param_2,undefined4 param_3,byte param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1057a360(param_2,param_3,param_4 ^ 1,param_5);
  *(byte*)(param_1 + 0x18) = (byte)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistAction);
  return (undefined4 *)(param_1);
}


// Reference entry 1057a330; body size 28 bytes.
#line 1 "ENTRY_1057a330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1057a330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStackedItemImpl);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1057b150; body size 28 bytes.
#line 1 "ENTRY_1057b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1057b150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
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


// Reference entry 1057b180; body size 28 bytes.
#line 1 "ENTRY_1057b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1057b180(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
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


// Reference entry 1057b1b0; body size 28 bytes.
#line 1 "ENTRY_1057b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1057b1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
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


// Reference entry 1057bd90; body size 11 bytes.
#line 1 "ENTRY_1057bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1057bd90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRenamePlaylistAction);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNamePlaylistAction);
  piVar1 = (int *)((int *)param_1[0x16]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x15] = (undefined4)(0);
    param_1[0x16] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x14]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x13] = (undefined4)(0);
    param_1[0x14] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x12]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x11] = (undefined4)(0);
    param_1[0x12] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xe]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xd] = (undefined4)(0);
    param_1[0xe] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xc]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xb] = (undefined4)(0);
    param_1[0xc] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[10]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[9] = (undefined4)(0);
    param_1[10] = (undefined4)(0);
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


// Reference entry 1057d810; body size 11 bytes.
#line 1 "ENTRY_1057d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1057d810(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1688));


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x11e38));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_2);
    uVar6 = (undefined4)(param_3);
    uVar7 = (undefined4)(param_4);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,param_4,iVar8,uVar2));
    uVar5 = (undefined4)(thunk_FUN_111ccae0(uVar4,uVar5,uVar6,uVar7,iVar8));
  }

  pvVar3 = (void *)(operator_new(0x11e38));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar6 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,param_4,iVar8));
    uVar6 = (undefined4)(thunk_FUN_111ccae0(uVar6,param_2,param_3,param_4,iVar8));
  }

  uVar7 = (undefined4)(thunk_FUN_111dd660());
  uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  pvVar3 = (void *)(operator_new(100));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0(uVar5,uVar6,uVar7,uVar4,&DAT_122f1250));
  }
  *param_5 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1057d820; body size 11 bytes.
#line 1 "ENTRY_1057d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1057d820(undefined4 param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1688));


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x11908));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_2);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,iVar8,uVar2));
    uVar5 = (undefined4)(thunk_FUN_111cd540(uVar4,uVar5,iVar8));
  }

  pvVar3 = (void *)(operator_new(0x11908));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,iVar8));
    uVar4 = (undefined4)(thunk_FUN_111cd540(uVar4,param_2,iVar8));
  }

  uVar6 = (undefined4)(thunk_FUN_111dd660());
  uVar7 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  pvVar3 = (void *)(operator_new(100));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0(uVar5,uVar4,uVar6,uVar7,&DAT_122f1250));
  }
  *param_3 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1057fc20; body size 11 bytes.
#line 1 "ENTRY_1057fc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1057fc20(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1688));


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x11908));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_2);
    uVar6 = (undefined4)(param_3);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,iVar8,uVar2));
    uVar5 = (undefined4)(thunk_FUN_111d15e0(uVar4,uVar5,uVar6,iVar8));
  }

  pvVar3 = (void *)(operator_new(0x11908));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar6 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,iVar8));
    uVar6 = (undefined4)(thunk_FUN_111d15e0(uVar6,param_2,param_3,iVar8));
  }

  uVar4 = (undefined4)(thunk_FUN_111dd660());
  uVar7 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  pvVar3 = (void *)(operator_new(100));

  if ((void *)(pvVar3) == (void *)0x0) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0(uVar5,uVar6,uVar4,uVar7,&DAT_122f1250));
  }
  *param_4 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10585740; body size 8 bytes.
#line 1 "ENTRY_10585740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10585740(uint *param_1)

{
  return (uint)(*param_1 >> 0xb & 0xffffff01);
}


// Reference entry 10586030; body size 82 bytes.
#line 1 "ENTRY_10586030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586030(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_1[1]);
  iVar3 = (int)(*param_1);
  if (((param_2[1] - iVar4 ^ iVar1 - iVar3) & 0xfffffffcU) == 0) {
    while( true ) {
      if (iVar3 == iVar1) {
        return (undefined4)(1);
      }
      cVar2 = (char)(thunk_FUN_111a06b0(iVar4));
      if (cVar2 == '\0') break;
      iVar3 = (int)(iVar3 + 4);
      iVar4 = (int)(iVar4 + 4);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105860a0; body size 82 bytes.
#line 1 "ENTRY_105860a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105860a0(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_1[1]);
  iVar3 = (int)(*param_1);
  if (((param_2[1] - iVar4 ^ iVar1 - iVar3) & 0xfffffffcU) == 0) {
    while( true ) {
      if (iVar3 == iVar1) {
        return (undefined4)(0);
      }
      cVar2 = (char)(thunk_FUN_111a06b0(iVar4));
      if (cVar2 == '\0') break;
      iVar3 = (int)(iVar3 + 4);
      iVar4 = (int)(iVar4 + 4);
    }
  }
  return (undefined4)(1);
}


// Reference entry 10586110; body size 16 bytes.
#line 1 "ENTRY_10586110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10586110(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_111a06b0(param_2);
  return;
}


// Reference entry 10586140; body size 195 bytes.
#line 1 "ENTRY_10586140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10586140(uint param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint _Size;
  void *pvVar1;
  int *_Dst;
  
  if (param_2 != 0) {
    if (0x3fffffff < param_2) {
                    
      thunk_FUN_101a9be0();
    }
    _Size = (uint)(param_2 * 4);
    if (_Size < 0x1000) {
      if (_Size == 0) {
        _Dst = (int *)((int *)0x0);
      }
      else {
        _Dst = (int *)(operator_new(_Size));
      }
    }
    else {
      if (_Size + 0x23 <= _Size) {
                    
        thunk_FUN_1012a2a0();
      }
      pvVar1 = (void *)(operator_new(_Size + 0x23));
      if ((void *)(pvVar1) == (void *)0x0) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (int *)((int *)((int)pvVar1 + 0x23U & 0xffffffe0));
      _Dst[-1] = (int)((int)pvVar1);
    }
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)(_Dst + param_2);
    if (*param_3 == 0) {
      memset(_Dst,0,_Size);
      param_1[1] = (undefined4)(_Dst + param_2);
      return;
    }
    do {
      *_Dst = (int)(*param_3);
      _Dst = (int *)(_Dst + 1);
      param_2 = (uint)(param_2 - 1);
    } while (param_2 != 0);
    param_1[1] = (undefined4)(_Dst);
  }
  return;
}


// Reference entry 105862b0; body size 40 bytes.
#line 1 "ENTRY_105862b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105862b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 105862f0; body size 40 bytes.
#line 1 "ENTRY_105862f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105862f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10586330; body size 55 bytes.
#line 1 "ENTRY_10586330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586330(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (param_1 != param_2) {
    param_3 = (int)(param_3 - param_1);
    do {
      cVar1 = (char)(thunk_FUN_111a06b0(param_3 + param_1));
      if (cVar1 == '\0') {
        return (undefined4)(0);
      }
      param_1 = (int)(param_1 + 4);
    } while (param_1 != param_2);
  }
  return (undefined4)(1);
}


// Reference entry 10586380; body size 55 bytes.
#line 1 "ENTRY_10586380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586380(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (param_1 != param_2) {
    param_3 = (int)(param_3 - param_1);
    do {
      cVar1 = (char)(thunk_FUN_111a06b0(param_3 + param_1));
      if (cVar1 == '\0') {
        return (undefined4)(0);
      }
      param_1 = (int)(param_1 + 4);
    } while (param_1 != param_2);
  }
  return (undefined4)(1);
}


// Reference entry 105864b0; body size 28 bytes.
#line 1 "ENTRY_105864b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105864b0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105864e0; body size 27 bytes.
#line 1 "ENTRY_105864e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105864e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10586750; body size 251 bytes.
#line 1 "ENTRY_10586750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall Recovered_Bulk::FUN_10586750(int param_2,char *param_3)
{
  uint *param_1 = (uint *)this;
  uint _Size;
  char cVar1;
  int *_Dst;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  cVar1 = (char)(*param_3);
  uVar5 = (uint)(param_2 + 0x1fU >> 5);
  *param_1 = (uint)(0);
  param_1[1] = (uint)(0);
  param_1[2] = (uint)(0);
  if (uVar5 != 0) {
    _Size = (uint)(uVar5 * 4);
    if (_Size < 0x1000) {
      if (uVar5 == 0) {
        pvVar3 = (void *)((void *)0x0);
      }
      else {
        pvVar3 = (void *)(operator_new(_Size));
      }
    }
    else {
      if (_Size + 0x23 <= _Size) {
                    
        thunk_FUN_1012a2a0();
      }
      pvVar2 = (void *)(operator_new(_Size + 0x23));
      if ((void *)(pvVar2) == (void *)0x0) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (void *)((void *)((int)pvVar2 + 0x23U & 0xffffffe0));
      *(void**)((int)pvVar3 - 4) = (void *)(pvVar2);
    }
    *param_1 = (uint)((uint)pvVar3);
    param_1[1] = (uint)((uint)pvVar3);
    param_1[2] = (uint)((uint)((int)pvVar3 + _Size));
    _Dst = (int *)((int *)*param_1);
    uVar4 = (uint)(uVar5);
    piVar6 = (int *)(_Dst);
    if (-(uint)(cVar1 != '\0') == 0) {
      memset(_Dst,0,_Size);
      param_1[1] = (uint)((uint)(_Dst + uVar5));
      param_1[3] = (uint)(0);
      return (uint *)(param_1);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar6 = (int)(-(uint)(cVar1 != '\0'));
      piVar6 = (int *)(piVar6 + 1);
    }
    param_1[1] = (uint)((uint)(_Dst + uVar5));
  }
  param_1[3] = (uint)(0);
  return (uint *)(param_1);
}


// Reference entry 105868a0; body size 220 bytes.
#line 1 "ENTRY_105868a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105868a0(uint param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint _Size;
  void *pvVar1;
  int *_Dst;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  if (param_2 != 0) {
    if (0x3fffffff < param_2) {
                    
      thunk_FUN_101a9be0();
    }
    _Size = (uint)(param_2 * 4);
    if (_Size < 0x1000) {
      if (_Size == 0) {
        _Dst = (int *)((int *)0x0);
      }
      else {
        _Dst = (int *)(operator_new(_Size));
      }
    }
    else {
      if (_Size + 0x23 <= _Size) {
                    
        thunk_FUN_1012a2a0();
      }
      pvVar1 = (void *)(operator_new(_Size + 0x23));
      if ((void *)(pvVar1) == (void *)0x0) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (int *)((int *)((int)pvVar1 + 0x23U & 0xffffffe0));
      _Dst[-1] = (int)((int)pvVar1);
    }
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)(_Dst + param_2);
    if (*param_3 == 0) {
      memset(_Dst,0,_Size);
      param_1[1] = (undefined4)(_Dst + param_2);
      return (undefined4 *)(param_1);
    }
    do {
      *_Dst = (int)(*param_3);
      _Dst = (int *)(_Dst + 1);
      param_2 = (uint)(param_2 - 1);
    } while (param_2 != 0);
    param_1[1] = (undefined4)(_Dst);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10587d50; body size 24 bytes.
#line 1 "ENTRY_10587d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10587d50(undefined4 *param_1)

{
  thunk_FUN_112859a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNullParamRX);
  return (undefined4 *)(param_1);
}


// Reference entry 10588050; body size 11 bytes.
#line 1 "ENTRY_10588050"

/* WARNING: Removing unreachable block_10588050 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10588050(undefined4 *param_1)

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


// Reference entry 10588060; body size 11 bytes.
#line 1 "ENTRY_10588060"

/* WARNING: Removing unreachable block_10588060 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10588060(undefined4 *param_1)

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


// Reference entry 105883a0; body size 16 bytes.
#line 1 "ENTRY_105883a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105883a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)((int *)*param_1);
  if ((int *)(piVar2) == (int *)0x0) {
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
    piVar2[1] = (int)(0);
    piVar2[2] = (int)(0);
  }
  return;
}


// Reference entry 10588b30; body size 18 bytes.
#line 1 "ENTRY_10588b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10588b30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);


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


// Reference entry 10588cf0; body size 132 bytes.
#line 1 "ENTRY_10588cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10588cf0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int *)(param_1) != (int *)(param_2)) {
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
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    *param_1 = (int)(*param_2);
    param_1[1] = (int)(param_2[1]);
    param_1[2] = (int)(param_2[2]);
    *param_2 = (int)(0);
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 105899d0; body size 134 bytes.
#line 1 "ENTRY_105899d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105899d0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_101a9be0();
  }
  param_2 = (uint)(param_2 * 4);
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
  if (param_2 + 0x23 <= param_2) {
                    
    thunk_FUN_1012a2a0();
  }
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


// Reference entry 10589a80; body size 129 bytes.
#line 1 "ENTRY_10589a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10589a80(uint param_2)
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


// Reference entry 1058c450; body size 39 bytes.
#line 1 "ENTRY_1058c450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1058c450(int param_1)

{
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(-(uint)(param_1 != 0) & param_1 + 0x118U);
  return;
}


// Reference entry 10592920; body size 24 bytes.
#line 1 "ENTRY_10592920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10592920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10592940; body size 8 bytes.
#line 1 "ENTRY_10592940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10592940(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x2c));
  if ((int *)((param_2)) != (int *)(piVar3)) {
    iVar1 = (int)(*piVar3);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *piVar3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(piVar3);
}


// Reference entry 10592950; body size 26 bytes.
#line 1 "ENTRY_10592950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10592950(undefined4 param_1)

{
  thunk_FUN_101ba530(param_1);
  thunk_FUN_1106f6e0();
  return;
}


// Reference entry 10593750; body size 25 bytes.
#line 1 "ENTRY_10593750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593750(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10593930; body size 33 bytes.
#line 1 "ENTRY_10593930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593930(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    thunk_FUN_10de8ec0();
  }
  return;
}


// Reference entry 10593cc0; body size 23 bytes.
#line 1 "ENTRY_10593cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10593cc0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10594e60(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
  return;
}


// Reference entry 10593f70; body size 37 bytes.
#line 1 "ENTRY_10593f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10593f70(int param_1,SCStr *param_2)

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


// Reference entry 10594330; body size 20 bytes.
#line 1 "ENTRY_10594330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10594330(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10593590(param_1,param_2,param_2);
  return;
}


// Reference entry 105944c0; body size 14 bytes.
#line 1 "ENTRY_105944c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105944c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10594e60(param_3);
  return;
}


// Reference entry 105945f0; body size 9 bytes.
#line 1 "ENTRY_105945f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105945f0(undefined4 param_1,SCStr *param_2)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);

  ((SCStr *)(param_2 + 0xc))->int_release();
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4*)(param_2 + 8) = (undefined4)(0);

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4*)(param_2 + 4) = (undefined4)(0);

  ((SCStr *)(param_2))->int_release();
  *(undefined4*)param_2 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 10594c00; body size 52 bytes.
#line 1 "ENTRY_10594c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10594c00(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10595800; body size 31 bytes.
#line 1 "ENTRY_10595800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10595800(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10593590(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10595ba0; body size 31 bytes.
#line 1 "ENTRY_10595ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10595ba0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10595bf0; body size 131 bytes.
#line 1 "ENTRY_10595bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10595bf0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x15555556) {
    param_2 = (uint)(param_2 * 0xc);
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


// Reference entry 10595ca0; body size 137 bytes.
#line 1 "ENTRY_10595ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10595ca0(uint param_2)
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


// Reference entry 10595d50; body size 62 bytes.
#line 1 "ENTRY_10595d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10595d50(uint param_2)
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


// Reference entry 10595da0; body size 14 bytes.
#line 1 "ENTRY_10595da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10595da0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5555555) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10595f50; body size 21 bytes.
#line 1 "ENTRY_10595f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10595f50(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10593590(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 105967f0; body size 30 bytes.
#line 1 "ENTRY_105967f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105967f0(int param_1)

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


// Reference entry 10596ae0; body size 90 bytes.
#line 1 "ENTRY_10596ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10596ae0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5555556) {
    param_1 = (uint)(param_1 * 0x30);
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


// Reference entry 10596b60; body size 90 bytes.
#line 1 "ENTRY_10596b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10596b60(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x15555556) {
    param_1 = (uint)(param_1 * 0xc);
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


// Reference entry 10596be0; body size 97 bytes.
#line 1 "ENTRY_10596be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10596be0(uint param_1)

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


// Reference entry 10596c60; body size 47 bytes.
#line 1 "ENTRY_10596c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10596c60(uint param_2)
{
  int *param_1 = (int *)this;
  if (param_2 < (uint)((param_1[1] - *param_1) / 0xc)) {
    return (int)(*param_1 + param_2 * 0xc);
  }
                    
  thunk_FUN_10596a70();
}


// Reference entry 10596ca0; body size 56 bytes.
#line 1 "ENTRY_10596ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10596ca0(uint param_2)
{
  int *param_1 = (int *)this;
  if (param_2 < (uint)((param_1[1] - *param_1) / 0x1c)) {
    return (int)(*param_1 + param_2 * 0x1c);
  }
                    
  thunk_FUN_10596a80();
}


// Reference entry 10597050; body size 57 bytes.
#line 1 "ENTRY_10597050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10597050(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105970a0; body size 60 bytes.
#line 1 "ENTRY_105970a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105970a0(int param_1,int param_2)

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


// Reference entry 1059a820; body size 30 bytes.
#line 1 "ENTRY_1059a820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059a820(void)

{
  char cVar1;
  
  cVar1 = (char)(func_0x1005ee94());
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("ServiceOutageManager",1,"Unable to subscribe to Now Playing events.");
  }
  return;
}


// Reference entry 1059a930; body size 16 bytes.
#line 1 "ENTRY_1059a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * FUN_1059a930(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = (uint *)(param_2);
  }
  return (uint *)(param_1);
}


// Reference entry 1059b380; body size 47 bytes.
#line 1 "ENTRY_1059b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059b380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,&stack0x00000010));
  iVar2 = (int)(__stdio_common_vsprintf_p(*puVar1,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 1059b620; body size 25 bytes.
#line 1 "ENTRY_1059b620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059b620(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1059b810; body size 31 bytes.
#line 1 "ENTRY_1059b810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1059b810(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1059bca0; body size 52 bytes.
#line 1 "ENTRY_1059bca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059bca0(undefined4 *param_1)

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


// Reference entry 1059c5d0; body size 31 bytes.
#line 1 "ENTRY_1059c5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059c5d0(undefined4 *param_1)

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


// Reference entry 1059c620; body size 14 bytes.
#line 1 "ENTRY_1059c620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059c620(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 1059c640; body size 47 bytes.
#line 1 "ENTRY_1059c640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059c640(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int **)(param_1 + 4));
  if ((int *)(piVar2) != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = (int)(iVar3);
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
        return;
      }
    }
  }
  return;
}


// Reference entry 1059cdd0; body size 30 bytes.
#line 1 "ENTRY_1059cdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059cdd0(int param_1)

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


// Reference entry 1059ced0; body size 90 bytes.
#line 1 "ENTRY_1059ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059ced0(uint param_1)

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


// Reference entry 1059cf70; body size 57 bytes.
#line 1 "ENTRY_1059cf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059cf70(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1059cfc0; body size 60 bytes.
#line 1 "ENTRY_1059cfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1059cfc0(int param_1,int param_2)

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


// Reference entry 1059e650; body size 27 bytes.
#line 1 "ENTRY_1059e650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1059e650(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  thunk_FUN_103d6a60(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e850; body size 29 bytes.
#line 1 "ENTRY_1059e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1059e850(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  thunk_FUN_103d6a60(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059ebf0; body size 25 bytes.
#line 1 "ENTRY_1059ebf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ebf0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1059ec30; body size 33 bytes.
#line 1 "ENTRY_1059ec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059ec30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1059ec60; body size 33 bytes.
#line 1 "ENTRY_1059ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059ec60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1059ec90; body size 33 bytes.
#line 1 "ENTRY_1059ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059ec90(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1059ecc0; body size 50 bytes.
#line 1 "ENTRY_1059ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059ecc0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return (int)(param_3);
  }
  do {
    thunk_FUN_10def210(param_1);
    param_1 = (int)(param_1 + 0x18);
    param_3 = (int)(param_3 + 0x18);
  } while (param_1 != param_2);
  return (int)(param_3);
}


// Reference entry 1059ed70; body size 45 bytes.
#line 1 "ENTRY_1059ed70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ed70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)(param_1 + 4);
    do {
      thunk_FUN_105a1d20();
      thunk_FUN_105a1c80();
      iVar1 = (int)(iVar2 + 0x18);
      iVar2 = (int)(iVar2 + 0x1c);
    } while (iVar1 != param_2);
  }
  return;
}


// Reference entry 1059edb0; body size 23 bytes.
#line 1 "ENTRY_1059edb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1059edb0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10deea50(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x18);
  return;
}


// Reference entry 1059f2a0; body size 31 bytes.
#line 1 "ENTRY_1059f2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1059f2a0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1059f440; body size 38 bytes.
#line 1 "ENTRY_1059f440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_1059f440(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f470; body size 38 bytes.
#line 1 "ENTRY_1059f470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_1059f470(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f580; body size 36 bytes.
#line 1 "ENTRY_1059f580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059f580(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f5b0; body size 36 bytes.
#line 1 "ENTRY_1059f5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059f5b0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f670; body size 36 bytes.
#line 1 "ENTRY_1059f670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059f670(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f6a0; body size 36 bytes.
#line 1 "ENTRY_1059f6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059f6a0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f770; body size 20 bytes.
#line 1 "ENTRY_1059f770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1059f770(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1059e8c0(param_1,param_2,param_2);
  return;
}


// Reference entry 1059f790; body size 20 bytes.
#line 1 "ENTRY_1059f790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1059f790(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1059ea10(param_1,param_2,param_2);
  return;
}


// Reference entry 1059f7d0; body size 25 bytes.
#line 1 "ENTRY_1059f7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f7d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  thunk_FUN_103d6a60(0);
  return;
}


// Reference entry 1059f7f0; body size 14 bytes.
#line 1 "ENTRY_1059f7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10deea50(param_3);
  return;
}


// Reference entry 1059f820; body size 9 bytes.
#line 1 "ENTRY_1059f820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f820(undefined4 param_1,SCStr *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_10dec580(param_2 + 0x10,*(undefined4 *)(*(int *)(param_2 + 0x10) + 4));
  thunk_FUN_1148a50e(*(undefined4 *)(param_2 + 0x10),0x1c,uVar2);
  piVar1 = (int *)(*(int **)(param_2 + 0xc));

  if ((int *)(piVar1) != (int *)0x0) {
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)(param_2))->int_release();
  *(undefined4*)param_2 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 1059f830; body size 22 bytes.
#line 1 "ENTRY_1059f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f830(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  thunk_FUN_105a1d20();
  piVar1 = (int *)((int *)(param_2 + 4));
  iVar3 = (int)(*piVar1);
  if (iVar3 != 0) {
    iVar4 = (int)(*(int *)(param_2 + 8));
    if (iVar3 != iVar4) {
      do {
        thunk_FUN_10def0d0();
        iVar3 = (int)(iVar3 + 0x18);
      } while (iVar3 != iVar4);
      iVar3 = (int)(*piVar1);
    }
    uVar2 = (uint)(((*(int *)(param_2 + 0xc) - iVar3) / 0x18) * 0x18);
    iVar4 = (int)(iVar3);
    if (0xfff < uVar2) {
      iVar4 = (int)(*(int *)(iVar3 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar3 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar2);
    *piVar1 = (int)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 1059f880; body size 36 bytes.
#line 1 "ENTRY_1059f880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1059f880(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1059ee10(puVar1,param_2);
  return;
}


// Reference entry 1059f8b0; body size 36 bytes.
#line 1 "ENTRY_1059f8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1059f8b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1059ef60(puVar1,param_2);
  return;
}


// Reference entry 1059fbe0; body size 52 bytes.
#line 1 "ENTRY_1059fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fbe0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fed0; body size 49 bytes.
#line 1 "ENTRY_1059fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a00a0; body size 16 bytes.
#line 1 "ENTRY_105a00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a00a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) == (int *)0x0) {
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
    piVar1[1] = (int)(0);
    piVar1[2] = (int)(0);
  }
  return;
}


// Reference entry 105a00b0; body size 16 bytes.
#line 1 "ENTRY_105a00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a00b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) == (int *)0x0) {
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
    piVar1[1] = (int)(0);
    piVar1[2] = (int)(0);
  }
  return;
}


// Reference entry 105a07e0; body size 31 bytes.
#line 1 "ENTRY_105a07e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a07e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_1059e8c0(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105a0810; body size 31 bytes.
#line 1 "ENTRY_105a0810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a0810(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_1059ea10(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105a0dd0; body size 31 bytes.
#line 1 "ENTRY_105a0dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a0dd0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 105a0e20; body size 30 bytes.
#line 1 "ENTRY_105a0e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a0e20(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_105a1f40(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 105a0e50; body size 30 bytes.
#line 1 "ENTRY_105a0e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a0e50(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_105a1fb0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 105a0e80; body size 129 bytes.
#line 1 "ENTRY_105a0e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a0e80(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x10000000) {
    param_2 = (uint)(param_2 * 0x10);
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


// Reference entry 105a0f30; body size 131 bytes.
#line 1 "ENTRY_105a0f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a0f30(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0xaaaaaab) {
    param_2 = (uint)(param_2 * 0x18);
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


// Reference entry 105a0fe0; body size 49 bytes.
#line 1 "ENTRY_105a0fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105a0fe0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 105a1020; body size 49 bytes.
#line 1 "ENTRY_105a1020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105a1020(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 105a1060; body size 49 bytes.
#line 1 "ENTRY_105a1060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105a1060(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 4);
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0xfffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 105a10a0; body size 63 bytes.
#line 1 "ENTRY_105a10a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105a10a0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x18);
  if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
    return (uint)(0xaaaaaaa);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 105a11d0; body size 14 bytes.
#line 1 "ENTRY_105a11d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a11d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5555555) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a11f0; body size 252 bytes.
#line 1 "ENTRY_105a11f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a11f0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0xfffffff < param_2) {
                    
    thunk_FUN_105a1f20();
  }
  uVar2 = (uint)(*param_1);
  uVar3 = (uint)((int)(param_1[2] - uVar2) >> 4);
  if (0xfffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = (uint)(0xfffffff);
  }
  else {
    uVar5 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar5 < param_2) {
      uVar5 = (uint)(param_2);
    }
  }
  if (uVar2 != 0) {
    uVar3 = (uint)(uVar3 * 0x10);
    uVar4 = (uint)(uVar2);
    if (0xfff < uVar3) {
      uVar4 = (uint)(*(uint *)(uVar2 - 4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uVar2 - uVar4) - 4) goto LAB_105a12ad;
    }
    thunk_FUN_1148a50e(uVar4,uVar3);
    *param_1 = (uint)(0);
    param_1[1] = (uint)(0);
    param_1[2] = (uint)(0);
  }
  if (uVar5 < 0x10000000) {
    uVar5 = (uint)(uVar5 * 0x10);
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        *param_1 = (uint)(0);
        param_1[1] = (uint)(0);
        param_1[2] = (uint)(0);
        return;
      }
      pvVar1 = (void *)(operator_new(uVar5));
      *param_1 = (uint)((uint)pvVar1);
      param_1[1] = (uint)((uint)pvVar1);
      param_1[2] = (uint)((uint)((int)pvVar1 + uVar5));
      return;
    }
    if (uVar5 < uVar5 + 0x23) {
      pvVar1 = (void *)(operator_new(uVar5 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void**)(uVar2 - 4) = (void *)(pvVar1);
        *param_1 = (uint)(uVar2);
        param_1[1] = (uint)(uVar2);
        param_1[2] = (uint)(uVar2 + uVar5);
        return;
      }
LAB_105a12ad:
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 105a14d0; body size 21 bytes.
#line 1 "ENTRY_105a14d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a14d0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1059e8c0(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 105a14f0; body size 21 bytes.
#line 1 "ENTRY_105a14f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a14f0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1059ea10(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 105a1de0; body size 38 bytes.
#line 1 "ENTRY_105a1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_105a1de0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 105a1e10; body size 38 bytes.
#line 1 "ENTRY_105a1e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_105a1e10(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 105a1e40; body size 27 bytes.
#line 1 "ENTRY_105a1e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1e40(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 105a1e70; body size 27 bytes.
#line 1 "ENTRY_105a1e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1e70(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 105a1ea0; body size 27 bytes.
#line 1 "ENTRY_105a1ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1ea0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 105a1ed0; body size 27 bytes.
#line 1 "ENTRY_105a1ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1ed0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 105a2020; body size 90 bytes.
#line 1 "ENTRY_105a2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105a2020(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5555556) {
    param_1 = (uint)(param_1 * 0x30);
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


// Reference entry 105a20a0; body size 87 bytes.
#line 1 "ENTRY_105a20a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105a20a0(uint param_1)

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


// Reference entry 105a21f0; body size 57 bytes.
#line 1 "ENTRY_105a21f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a21f0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105a2240; body size 61 bytes.
#line 1 "ENTRY_105a2240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a2240(int param_1,int param_2)

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


// Reference entry 105a2290; body size 61 bytes.
#line 1 "ENTRY_105a2290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a2290(int param_1,int param_2)

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


// Reference entry 105a22e0; body size 60 bytes.
#line 1 "ENTRY_105a22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a22e0(int param_1,int param_2)

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


// Reference entry 105a2330; body size 57 bytes.
#line 1 "ENTRY_105a2330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a2330(int param_1,int param_2)

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


// Reference entry 105a2a50; body size 26 bytes.
#line 1 "ENTRY_105a2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a2a50(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 8))();
  thunk_FUN_105ad910();
  piVar1 = (int *)((int *)thunk_FUN_106dc530());
                    
                    
  (**(code **)(*piVar1 + 4))();
  return;
}


// Reference entry 105a3300; body size 36 bytes.
#line 1 "ENTRY_105a3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a3300(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1059ee10(puVar1,param_2);
  return;
}


// Reference entry 105a3330; body size 36 bytes.
#line 1 "ENTRY_105a3330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a3330(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1059ef60(puVar1,param_2);
  return;
}


// Reference entry 105a4540; body size 25 bytes.
#line 1 "ENTRY_105a4540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4540(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105a4560; body size 25 bytes.
#line 1 "ENTRY_105a4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4560(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105a4580; body size 25 bytes.
#line 1 "ENTRY_105a4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4580(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105a45a0; body size 25 bytes.
#line 1 "ENTRY_105a45a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a45a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105a49f0; body size 113 bytes.
#line 1 "ENTRY_105a49f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a49f0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_105a4bf0(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
  *(undefined4*)(*param_1 + 4) = (undefined4)(uVar7);
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) != '\0') {
    *piVar2 = (int)((int)piVar2);
    *(int*)(*param_1 + 8) = (int)(*param_1);
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
  *(int*)(*param_1 + 8) = (int)(iVar4);
  return;
}


// Reference entry 105a4f30; body size 118 bytes.
#line 1 "ENTRY_105a4f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105a4f30(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)((undefined4 *)*param_1);
  puVar1 = (undefined4 *)((undefined4 *)puVar4[1]);
  puVar5 = (undefined4 *)(puVar4);
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar1);
    do {
      if ((uint)puVar2[4] < *param_3) {
        puVar3 = (undefined4 *)((undefined4 *)puVar2[2]);
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_3 < (uint)puVar2[4])) {
          puVar4 = (undefined4 *)(puVar2);
        }
        puVar3 = (undefined4 *)((undefined4 *)*puVar2);
        puVar5 = (undefined4 *)(puVar2);
      }
      puVar2 = (undefined4 *)(puVar3);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)((undefined4 *)*puVar4);
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_3 < (uint)puVar1[4]) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar1);
        puVar4 = (undefined4 *)(puVar1);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar1[2]);
      }
      puVar1 = (undefined4 *)(puVar2);
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_2 = (int)((int)puVar5);
  param_2[1] = (int)((int)puVar4);
  return;
}


// Reference entry 105a5a60; body size 31 bytes.
#line 1 "ENTRY_105a5a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105a5a60(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 105a5a90; body size 31 bytes.
#line 1 "ENTRY_105a5a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105a5a90(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 105a5ac0; body size 37 bytes.
#line 1 "ENTRY_105a5ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5ac0(int param_1,SCStr *param_2)

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


// Reference entry 105a5af0; body size 37 bytes.
#line 1 "ENTRY_105a5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5af0(int param_1,SCStr *param_2)

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


// Reference entry 105a6570; body size 37 bytes.
#line 1 "ENTRY_105a6570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a6570(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  ((SCStr *)(param_2))->op_ctor(param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4*)(param_2 + 8) = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4*)(param_2 + 0xc) = (undefined4)(uVar1);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(uVar3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x20));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x24));
  *(undefined4*)(param_2 + 0x18) = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(uVar1);
  *(undefined4*)(param_2 + 0x20) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x24) = (undefined4)(uVar3);
  return;
}


// Reference entry 105a6840; body size 86 bytes.
#line 1 "ENTRY_105a6840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105a6840(int *param_1,int *param_2)

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


// Reference entry 105a6c50; body size 27 bytes.
#line 1 "ENTRY_105a6c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a6c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6f00; body size 51 bytes.
#line 1 "ENTRY_105a6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a6f00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 105a6f40; body size 51 bytes.
#line 1 "ENTRY_105a6f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a6f40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x38));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 105a72e0; body size 52 bytes.
#line 1 "ENTRY_105a72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a72e0(undefined4 *param_1)

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


// Reference entry 105a7330; body size 52 bytes.
#line 1 "ENTRY_105a7330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7330(undefined4 *param_1)

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


// Reference entry 105a7420; body size 52 bytes.
#line 1 "ENTRY_105a7420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7420(undefined4 *param_1)

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


// Reference entry 105a7590; body size 52 bytes.
#line 1 "ENTRY_105a7590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7590(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7670; body size 43 bytes.
#line 1 "ENTRY_105a7670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_105a7670(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  ((SCStr *)(param_1))->op_ctor(param_2);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(uVar3);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x20));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x24));
  *(undefined4*)(param_1 + 0x18) = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar3);
  return (SCStr *)(param_1);
}


// Reference entry 105a76d0; body size 31 bytes.
#line 1 "ENTRY_105a76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_105a76d0(SCStr *param_2,SCStr param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  param_1[4] = (SCStr)(param_3);
  return (SCStr *)(param_1);
}


// Reference entry 105a77c0; body size 61 bytes.
#line 1 "ENTRY_105a77c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a77c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(1);
  thunk_FUN_10deea50(param_2);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7810; body size 64 bytes.
#line 1 "ENTRY_105a7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a7810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(2);
  param_1[2] = (undefined4)(param_2);
  thunk_FUN_10deeb70();
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7860; body size 64 bytes.
#line 1 "ENTRY_105a7860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a7860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(param_2);
  thunk_FUN_10deeb70();
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a78b0; body size 46 bytes.
#line 1 "ENTRY_105a78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a78b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  param_1[2] = (undefined4)(param_2[2]);
  return (undefined4 *)(param_1);
}


// Reference entry 105a78f0; body size 54 bytes.
#line 1 "ENTRY_105a78f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a78f0(int *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7c10; body size 32 bytes.
#line 1 "ENTRY_105a7c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105a7c10(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  thunk_FUN_103d6a60(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a8980; body size 58 bytes.
#line 1 "ENTRY_105a8980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105a8980(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_105a5110(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    thunk_FUN_105a4960(param_2,param_2);
  }
  return (int *)(param_1);
}


// Reference entry 105a89d0; body size 58 bytes.
#line 1 "ENTRY_105a89d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105a89d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_105a5110(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    thunk_FUN_105a4960(param_2,param_2);
  }
  return (int *)(param_1);
}


// Reference entry 105a8a20; body size 132 bytes.
#line 1 "ENTRY_105a8a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_105a8a20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    if (iVar1 != 0) {
      uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff0);
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
      param_1[1] = (int)(0);
      param_1[2] = (int)(0);
    }
    *param_1 = (int)(*param_2);
    param_1[1] = (int)(param_2[1]);
    param_1[2] = (int)(param_2[2]);
    *param_2 = (int)(0);
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 105a8b20; body size 41 bytes.
#line 1 "ENTRY_105a8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_105a8b20(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  if ((SCStr *)((param_2)) != (SCStr *)(param_1)) {
    ((SCStr *)(param_1))->int_release();
    *(undefined4*)param_1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(param_1))->int_addref();
  }
  param_1[4] = (SCStr)(param_2[4]);
  return (SCStr *)(param_1);
}


// Reference entry 105a8f10; body size 12 bytes.
#line 1 "ENTRY_105a8f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a8f10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 105a9d10; body size 31 bytes.
#line 1 "ENTRY_105a9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9d10(undefined4 *param_1)

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


// Reference entry 105a9d40; body size 31 bytes.
#line 1 "ENTRY_105a9d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9d40(undefined4 *param_1)

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


// Reference entry 105a9d70; body size 31 bytes.
#line 1 "ENTRY_105a9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9d70(undefined4 *param_1)

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


// Reference entry 105a9da0; body size 31 bytes.
#line 1 "ENTRY_105a9da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9da0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 105a9e50; body size 14 bytes.
#line 1 "ENTRY_105a9e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9e50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a9e70; body size 14 bytes.
#line 1 "ENTRY_105a9e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9e70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a9e90; body size 14 bytes.
#line 1 "ENTRY_105a9e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9e90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a9eb0; body size 14 bytes.
#line 1 "ENTRY_105a9eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9eb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x4924924) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105ab5d0; body size 30 bytes.
#line 1 "ENTRY_105ab5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105ab5d0(int param_1)

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


// Reference entry 105ab600; body size 30 bytes.
#line 1 "ENTRY_105ab600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105ab600(int param_1)

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


// Reference entry 105ab630; body size 30 bytes.
#line 1 "ENTRY_105ab630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105ab630(int param_1)

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


// Reference entry 105ab660; body size 30 bytes.
#line 1 "ENTRY_105ab660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105ab660(int param_1)

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


// Reference entry 105ac080; body size 90 bytes.
#line 1 "ENTRY_105ac080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105ac080(uint param_1)

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


// Reference entry 105ac100; body size 87 bytes.
#line 1 "ENTRY_105ac100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105ac100(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 105ac170; body size 97 bytes.
#line 1 "ENTRY_105ac170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105ac170(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x4924925) {
    param_1 = (uint)(param_1 * 0x38);
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


// Reference entry 105ac1f0; body size 97 bytes.
#line 1 "ENTRY_105ac1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105ac1f0(uint param_1)

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


// Reference entry 105aceb0; body size 57 bytes.
#line 1 "ENTRY_105aceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105aceb0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105acf00; body size 54 bytes.
#line 1 "ENTRY_105acf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105acf00(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105acf50; body size 63 bytes.
#line 1 "ENTRY_105acf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105acf50(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x38);
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


// Reference entry 105acfa0; body size 63 bytes.
#line 1 "ENTRY_105acfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105acfa0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105acff0; body size 60 bytes.
#line 1 "ENTRY_105acff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105acff0(int param_1,int param_2)

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


// Reference entry 105ad040; body size 57 bytes.
#line 1 "ENTRY_105ad040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ad040(int param_1,int param_2)

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


// Reference entry 105ad090; body size 66 bytes.
#line 1 "ENTRY_105ad090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ad090(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x38);
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


// Reference entry 105ad0f0; body size 66 bytes.
#line 1 "ENTRY_105ad0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ad0f0(int param_1,int param_2)

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


// Reference entry 105af670; body size 8 bytes.
#line 1 "ENTRY_105af670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_105af670(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_c [8];
  int iStack_4;
  
  uVar1 = (uint)(param_2);
  if (param_2 == 0) {
    return (bool)(false);
  }
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x14));
  thunk_FUN_1059b760(auStack_c,&param_2);
  if (((*(char *)(iStack_4 + 0xd) == '\0') && (*(uint *)(iStack_4 + 0x10) <= (uint)(uVar1))) &&
     ((int)(iStack_4) != *(int *)(param_1 + 0xc))) {
    bVar3 = (bool)(*(int *)(*(int *)(iStack_4 + 0x14) + 8) != 0);
  }
  else {
    bVar3 = (bool)(false);
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x14);
  }
  return (bool)(bVar3);
}


// Reference entry 105b0580; body size 106 bytes.
#line 1 "ENTRY_105b0580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b0580(int *param_2)
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


// Reference entry 105b07b0; body size 106 bytes.
#line 1 "ENTRY_105b07b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b07b0(int *param_2)
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


// Reference entry 105b0a50; body size 38 bytes.
#line 1 "ENTRY_105b0a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b0a50(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 105b0b90; body size 40 bytes.
#line 1 "ENTRY_105b0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b0b90(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 105b0ef0; body size 122 bytes.
#line 1 "ENTRY_105b0ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b0ef0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2[9] != 0) {
    puVar2 = (undefined4 *)(operator_new(0x30));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    puVar2[0xb] = (undefined4)(0);
    piVar1 = (int *)((int *)param_2[9]);
    if ((int *)(piVar1) != (int *)0x0) {
      if ((int *)(piVar1) == (int *)(param_2)) {
        uVar3 = (undefined4)((**(code **)(*piVar1 + 4))(puVar2 + 2));
        puVar2[0xb] = (undefined4)(uVar3);
        piVar1 = (int *)((int *)param_2[9]);
        if ((int *)(piVar1) != (int *)0x0) {
          (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
          param_2[9] = (int)(0);
          *(undefined4**)(param_1 + 0x24) = (undefined4 *)(puVar2);
          return;
        }
      }
      else {
        puVar2[0xb] = (undefined4)(piVar1);
        param_2[9] = (int)(0);
      }
    }
    *(undefined4**)(param_1 + 0x24) = (undefined4 *)(puVar2);
  }
  return;
}


// Reference entry 105b1100; body size 38 bytes.
#line 1 "ENTRY_105b1100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b1100(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 105b1240; body size 40 bytes.
#line 1 "ENTRY_105b1240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b1240(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 105b1580; body size 27 bytes.
#line 1 "ENTRY_105b1580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b1580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 105b17e0; body size 42 bytes.
#line 1 "ENTRY_105b17e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b17e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 105b1ef0; body size 34 bytes.
#line 1 "ENTRY_105b1ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b1ef0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 105b25b0; body size 29 bytes.
#line 1 "ENTRY_105b25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b25b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105b25e0; body size 29 bytes.
#line 1 "ENTRY_105b25e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b25e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105b2e20; body size 26 bytes.
#line 1 "ENTRY_105b2e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b2e20(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 105b2e40; body size 26 bytes.
#line 1 "ENTRY_105b2e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b2e40(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
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


// Reference entry 105b33f0; body size 32 bytes.
#line 1 "ENTRY_105b33f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_105b33f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)(0x0)) {
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
  
  if (*(int **)(param_1 + 0x60) != (int *)(0x0)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x60) + 0x1c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105b3dc0; body size 24 bytes.
#line 1 "ENTRY_105b3dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b3dc0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x68) != (int *)(0x0)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x68) + 0x1c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105b6350; body size 25 bytes.
#line 1 "ENTRY_105b6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6350(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x34));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105b6370; body size 25 bytes.
#line 1 "ENTRY_105b6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6370(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105b6530; body size 34 bytes.
#line 1 "ENTRY_105b6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b6530(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 4) {
    (**(code **)*param_1)(0);
  }
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
    return (int)(param_1 * 0x34);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
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
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105b7110; body size 92 bytes.
#line 1 "ENTRY_105b7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_105b7110(int *param_1,int *param_2,int *param_3)

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
  *(undefined4*)(param_3 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_3 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_3 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(uVar3);
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x20) = (undefined4)(uVar1);
  return;
}


// Reference entry 105b7690; body size 9 bytes.
#line 1 "ENTRY_105b7690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b7690(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  thunk_FUN_105bb550();
  uVar1 = (uint)(param_2[5]);
  if (0xf < uVar1) {
    iVar2 = (int)(*param_2);
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
  param_2[4] = (int)(0);
  param_2[5] = (int)(0xf);
  *(undefined1*)param_2 = (undefined1)((int *)(0));
  return;
}


// Reference entry 105b7f60; body size 28 bytes.
#line 1 "ENTRY_105b7f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b7f60(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105b7f90; body size 54 bytes.
#line 1 "ENTRY_105b7f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b7f90(undefined4 *param_1)

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


// Reference entry 105b84c0; body size 39 bytes.
#line 1 "ENTRY_105b84c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_105b84c0(undefined4 param_2,undefined4 param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  thunk_FUN_1012d130(param_2,param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 105b84f0; body size 76 bytes.
#line 1 "ENTRY_105b84f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b84f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x34));
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


// Reference entry 105b8550; body size 52 bytes.
#line 1 "ENTRY_105b8550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b8550(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x34));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105b85a0; body size 52 bytes.
#line 1 "ENTRY_105b85a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b85a0(undefined4 *param_1)

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
  *(undefined4*)(param_2 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(uVar3);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(uVar2);
  return (int)(param_1);
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
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 105b9160; body size 82 bytes.
#line 1 "ENTRY_105b9160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b9160(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11261e50();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[10] = (undefined4)(param_2);
  param_1[0xb] = (undefined4)(param_3);
  param_1[0xc] = (undefined4)(param_4);
  param_1[0xd] = (undefined4)(param_5);
  return (undefined4 *)(param_1);
}


// Reference entry 105b91d0; body size 35 bytes.
#line 1 "ENTRY_105b91d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b91d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAssetSet);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105b9200; body size 76 bytes.
#line 1 "ENTRY_105b9200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b9200(int param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(param_2,-(uint)(param_2 != 0) & param_2 + 4U,param_3,param_4,10000,0,0);
  *(undefined1*)(param_1 + 0x1124) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFileTransferDownloadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SCFileTransferDownloadOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105b9260; body size 70 bytes.
#line 1 "ENTRY_105b9260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_105b9260(int param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(-(uint)(param_2 != 0) & param_2 + 0x620cU,param_2,param_3,param_4,10000,0,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSetupFileUploadHelper_SCFileTransferUploadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SCSetupFileUploadHelper_SCFileTransferUploadOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105b9960; body size 21 bytes.
#line 1 "ENTRY_105b9960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105b9960(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105b9980; body size 11 bytes.
#line 1 "ENTRY_105b9980"

/* WARNING: Removing unreachable block_105b9980 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b9980(undefined4 *param_1)

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


// Reference entry 105b99a0; body size 77 bytes.
#line 1 "ENTRY_105b99a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b99a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  puVar1 = (undefined4 *)((undefined4 *)param_1[3]);
  puVar2 = (undefined4 *)((undefined4 *)param_1[2]);
  if ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)*puVar2)(0);
      puVar2 = (undefined4 *)(puVar2 + 4);
    } while ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1));
    puVar2 = (undefined4 *)((undefined4 *)param_1[2]);
  }
  param_1[3] = (undefined4)(puVar2);
  thunk_FUN_105b9e80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105ba420; body size 18 bytes.
#line 1 "ENTRY_105ba420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ba420(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFileDownload);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpFileDownload);


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


// Reference entry 105bac90; body size 31 bytes.
#line 1 "ENTRY_105bac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105bac90(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x34));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
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
    return (uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 105bad80; body size 49 bytes.
#line 1 "ENTRY_105bad80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_105bad80(uint param_2)
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

